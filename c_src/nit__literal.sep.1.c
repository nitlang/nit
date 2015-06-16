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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
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
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__literal__LiteralVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:LiteralVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:LiteralVisitor>*/
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
fatal_exit(1);
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
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__literal__ANode__accept_literal]))(var_n, self); /* accept_literal on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: LiteralVisitor) */
void nit__literal___nit__literal__LiteralVisitor___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit__literal___nit__literal__LiteralVisitor___standard__kernel__Object__init]))(self); /* init on <self:LiteralVisitor>*/
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
val* var3 /* : nullable String */;
val* var5 /* : nullable String */;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AExpr(AStringFormExpr)> */
var5 = self->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <self:AExpr(AStringFormExpr)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 65);
fatal_exit(1);
}
var = var3;
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
val* var22 /* : TId */;
val* var24 /* : TId */;
val* var25 /* : String */;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:AExpr(ACallExpr)> */
var9 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AExpr(ACallExpr)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
/* <var7:AExpr> isa AImplicitSelfExpr */
cltype11 = type_nit__AImplicitSelfExpr.color;
idtype12 = type_nit__AImplicitSelfExpr.id;
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
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:AExpr(ACallExpr)> */
var16 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:AExpr(ACallExpr)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2295);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var14) on <var14:AExprs> */
var19 = var14->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var14:AExprs> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var17);
}
var21 = !var20;
if (var21){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:AExpr(ACallExpr)> */
var24 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:AExpr(ACallExpr)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2292);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nit__lexer_work___Token___text(var22);
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#Text#remove_underscores for (self: Text): Text */
val* nit__literal___standard__Text___remove_underscores(val* self) {
val* var /* : Text */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var3 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Char] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void(*)(val* self))(var1->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
RET_LABEL2:(void)0;
}
}
var_b = var1;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_standard__string__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Char]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_i = var8;
{
{ /* Inline kernel#Char#== (var_i,'_') on <var_i:Char> */
var11 = var_i == '_';
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
goto BREAK_label;
} else {
}
{
standard___standard__FlatBuffer___Buffer__add(var_b, var_i); /* Direct call string#FlatBuffer#add on <var_b:FlatBuffer>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label12;
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Char]>*/
}
var = var_b;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2512);
fatal_exit(1);
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
var6 = (val*)(var4<<2|1);
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
val* var4 /* : Text */;
val* var5 /* : Text */;
val* var_s /* var s: Text */;
short int var6 /* : Bool */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : Location */;
val* var12 /* : Location */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : Message */;
long var17 /* : Int */;
val* var19 /* : nullable Int */;
var_v = p0;
{
{ /* Inline parser_nodes#AHexIntExpr#n_hex_number (self) on <self:AHexIntExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AHexIntExpr___n_hex_number].val; /* _n_hex_number on <self:AHexIntExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2520);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
{
var4 = standard___standard__Text___substring_from(var3, 2l);
}
{
var5 = nit__literal___standard__Text___remove_underscores(var4);
}
var_s = var5;
{
var6 = standard___standard__Text___is_empty(var_s);
}
if (var6){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var9 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AHexIntExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AHexIntExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "Error: invalid hexadecimal literal";
var15 = standard___standard__NativeString___to_s_with_length(var14, 34l);
var13 = var15;
varonce = var13;
}
{
var16 = nit___nit__ToolContext___error(var7, var10, var13);
}
goto RET_LABEL;
} else {
}
{
var17 = standard___standard__Text___to_hex(var_s);
}
{
{ /* Inline literal#AIntExpr#value= (self,var17) on <self:AHexIntExpr> */
var19 = (val*)(var17<<2|1);
self->attrs[COLOR_nit__literal__AIntExpr___value].val = var19; /* _value on <self:AHexIntExpr> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method literal#ABinIntExpr#accept_literal for (self: ABinIntExpr, LiteralVisitor) */
void nit__literal___ABinIntExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TBinNumber */;
val* var2 /* : TBinNumber */;
val* var3 /* : String */;
val* var4 /* : Text */;
val* var5 /* : Text */;
val* var_s /* var s: Text */;
short int var6 /* : Bool */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : Location */;
val* var12 /* : Location */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : Message */;
long var17 /* : Int */;
val* var19 /* : nullable Int */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinIntExpr#n_bin_number (self) on <self:ABinIntExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABinIntExpr___n_bin_number].val; /* _n_bin_number on <self:ABinIntExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2528);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
{
var4 = standard___standard__Text___substring_from(var3, 2l);
}
{
var5 = nit__literal___standard__Text___remove_underscores(var4);
}
var_s = var5;
{
var6 = standard___standard__Text___is_empty(var_s);
}
if (var6){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var9 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ABinIntExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ABinIntExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "Error: invalid binary literal";
var15 = standard___standard__NativeString___to_s_with_length(var14, 29l);
var13 = var15;
varonce = var13;
}
{
var16 = nit___nit__ToolContext___error(var7, var10, var13);
}
goto RET_LABEL;
} else {
}
{
var17 = standard___standard__Text___to_bin(var_s);
}
{
{ /* Inline literal#AIntExpr#value= (self,var17) on <self:ABinIntExpr> */
var19 = (val*)(var17<<2|1);
self->attrs[COLOR_nit__literal__AIntExpr___value].val = var19; /* _value on <self:ABinIntExpr> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AOctIntExpr#accept_literal for (self: AOctIntExpr, LiteralVisitor) */
void nit__literal___AOctIntExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TOctNumber */;
val* var2 /* : TOctNumber */;
val* var3 /* : String */;
val* var4 /* : Text */;
val* var5 /* : Text */;
val* var_s /* var s: Text */;
short int var6 /* : Bool */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : Location */;
val* var12 /* : Location */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
val* var16 /* : Message */;
long var17 /* : Int */;
val* var19 /* : nullable Int */;
var_v = p0;
{
{ /* Inline parser_nodes#AOctIntExpr#n_oct_number (self) on <self:AOctIntExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AOctIntExpr___n_oct_number].val; /* _n_oct_number on <self:AOctIntExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_number");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2536);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
{
var4 = standard___standard__Text___substring_from(var3, 2l);
}
{
var5 = nit__literal___standard__Text___remove_underscores(var4);
}
var_s = var5;
{
var6 = standard___standard__Text___is_empty(var_s);
}
if (var6){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var9 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AOctIntExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AOctIntExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "Error: invalid octal literal";
var15 = standard___standard__NativeString___to_s_with_length(var14, 28l);
var13 = var15;
varonce = var13;
}
{
var16 = nit___nit__ToolContext___error(var7, var10, var13);
}
goto RET_LABEL;
} else {
}
{
var17 = standard___standard__Text___to_oct(var_s);
}
{
{ /* Inline literal#AIntExpr#value= (self,var17) on <self:AOctIntExpr> */
var19 = (val*)(var17<<2|1);
self->attrs[COLOR_nit__literal__AIntExpr___value].val = var19; /* _value on <self:AOctIntExpr> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AByteExpr#value for (self: AByteExpr): nullable Byte */
val* nit__literal___AByteExpr___value(val* self) {
val* var /* : nullable Byte */;
val* var1 /* : nullable Byte */;
var1 = self->attrs[COLOR_nit__literal__AByteExpr___value].val; /* _value on <self:AByteExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AByteExpr#value= for (self: AByteExpr, nullable Byte) */
void nit__literal___AByteExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nit__literal__AByteExpr___value].val = p0; /* _value on <self:AByteExpr> */
RET_LABEL:;
}
/* method literal#ADecByteExpr#accept_literal for (self: ADecByteExpr, LiteralVisitor) */
void nit__literal___ADecByteExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TBytenum */;
val* var2 /* : TBytenum */;
val* var3 /* : String */;
val* var_t /* var t: String */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Text */;
long var10 /* : Int */;
unsigned char var11 /* : Byte */;
unsigned char var13 /* : Byte */;
val* var15 /* : nullable Byte */;
var_v = p0;
{
{ /* Inline parser_nodes#ADecByteExpr#n_bytenum (self) on <self:ADecByteExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADecByteExpr___n_bytenum].val; /* _n_bytenum on <self:ADecByteExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2549);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_t = var3;
{
var4 = ((long(*)(val* self))(var_t->class->vft[COLOR_standard__string__Text__length]))(var_t); /* length on <var_t:String>*/
}
{
{ /* Inline kernel#Int#- (var4,2l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var7 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var8 = var4 - 2l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self, long p0, long p1))(var_t->class->vft[COLOR_standard__string__Text__substring]))(var_t, 0l, var5); /* substring on <var_t:String>*/
}
{
var10 = standard___standard__Text___to_i(var9);
}
{
{ /* Inline kernel#Int#to_b (var10) on <var10:Int> */
var13 = (unsigned char)var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline literal#AByteExpr#value= (self,var11) on <self:ADecByteExpr> */
var15 = BOX_standard__Byte(var11); /* autobox from Byte to nullable Byte */
self->attrs[COLOR_nit__literal__AByteExpr___value].val = var15; /* _value on <self:ADecByteExpr> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AHexByteExpr#accept_literal for (self: AHexByteExpr, LiteralVisitor) */
void nit__literal___AHexByteExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : THexBytenum */;
val* var2 /* : THexBytenum */;
val* var3 /* : String */;
val* var_t /* var t: String */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Text */;
val* var10 /* : Text */;
val* var_s /* var s: Text */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : Location */;
val* var17 /* : Location */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : Message */;
long var22 /* : Int */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
val* var27 /* : nullable Byte */;
var_v = p0;
{
{ /* Inline parser_nodes#AHexByteExpr#n_hex_bytenum (self) on <self:AHexByteExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AHexByteExpr___n_hex_bytenum].val; /* _n_hex_bytenum on <self:AHexByteExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_hex_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2557);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_t = var3;
{
var4 = ((long(*)(val* self))(var_t->class->vft[COLOR_standard__string__Text__length]))(var_t); /* length on <var_t:String>*/
}
{
{ /* Inline kernel#Int#- (var4,4l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var8 = var4 - 4l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self, long p0, long p1))(var_t->class->vft[COLOR_standard__string__Text__substring]))(var_t, 2l, var5); /* substring on <var_t:String>*/
}
{
var10 = nit__literal___standard__Text___remove_underscores(var9);
}
var_s = var10;
{
var11 = standard___standard__Text___is_empty(var_s);
}
if (var11){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var14 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AHexByteExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AHexByteExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "Error: invalid hexadecimal literal";
var20 = standard___standard__NativeString___to_s_with_length(var19, 34l);
var18 = var20;
varonce = var18;
}
{
var21 = nit___nit__ToolContext___error(var12, var15, var18);
}
goto RET_LABEL;
} else {
}
{
var22 = standard___standard__Text___to_hex(var_s);
}
{
{ /* Inline kernel#Int#to_b (var22) on <var22:Int> */
var25 = (unsigned char)var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline literal#AByteExpr#value= (self,var23) on <self:AHexByteExpr> */
var27 = BOX_standard__Byte(var23); /* autobox from Byte to nullable Byte */
self->attrs[COLOR_nit__literal__AByteExpr___value].val = var27; /* _value on <self:AHexByteExpr> */
RET_LABEL26:(void)0;
}
}
RET_LABEL:;
}
/* method literal#ABinByteExpr#accept_literal for (self: ABinByteExpr, LiteralVisitor) */
void nit__literal___ABinByteExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TBinBytenum */;
val* var2 /* : TBinBytenum */;
val* var3 /* : String */;
val* var_t /* var t: String */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Text */;
val* var10 /* : Text */;
val* var_s /* var s: Text */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : Location */;
val* var17 /* : Location */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : Message */;
long var22 /* : Int */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
val* var27 /* : nullable Byte */;
var_v = p0;
{
{ /* Inline parser_nodes#ABinByteExpr#n_bin_bytenum (self) on <self:ABinByteExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABinByteExpr___n_bin_bytenum].val; /* _n_bin_bytenum on <self:ABinByteExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_bin_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2565);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_t = var3;
{
var4 = ((long(*)(val* self))(var_t->class->vft[COLOR_standard__string__Text__length]))(var_t); /* length on <var_t:String>*/
}
{
{ /* Inline kernel#Int#- (var4,4l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var8 = var4 - 4l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self, long p0, long p1))(var_t->class->vft[COLOR_standard__string__Text__substring]))(var_t, 2l, var5); /* substring on <var_t:String>*/
}
{
var10 = nit__literal___standard__Text___remove_underscores(var9);
}
var_s = var10;
{
var11 = standard___standard__Text___is_empty(var_s);
}
if (var11){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var14 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ABinByteExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ABinByteExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "Error: invalid binary literal";
var20 = standard___standard__NativeString___to_s_with_length(var19, 29l);
var18 = var20;
varonce = var18;
}
{
var21 = nit___nit__ToolContext___error(var12, var15, var18);
}
goto RET_LABEL;
} else {
}
{
var22 = standard___standard__Text___to_bin(var_s);
}
{
{ /* Inline kernel#Int#to_b (var22) on <var22:Int> */
var25 = (unsigned char)var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline literal#AByteExpr#value= (self,var23) on <self:ABinByteExpr> */
var27 = BOX_standard__Byte(var23); /* autobox from Byte to nullable Byte */
self->attrs[COLOR_nit__literal__AByteExpr___value].val = var27; /* _value on <self:ABinByteExpr> */
RET_LABEL26:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AOctByteExpr#accept_literal for (self: AOctByteExpr, LiteralVisitor) */
void nit__literal___AOctByteExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TOctBytenum */;
val* var2 /* : TOctBytenum */;
val* var3 /* : String */;
val* var_t /* var t: String */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Text */;
val* var10 /* : Text */;
val* var_s /* var s: Text */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : Location */;
val* var17 /* : Location */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : Message */;
long var22 /* : Int */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
val* var27 /* : nullable Byte */;
var_v = p0;
{
{ /* Inline parser_nodes#AOctByteExpr#n_oct_bytenum (self) on <self:AOctByteExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AOctByteExpr___n_oct_bytenum].val; /* _n_oct_bytenum on <self:AOctByteExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_oct_bytenum");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2573);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_t = var3;
{
var4 = ((long(*)(val* self))(var_t->class->vft[COLOR_standard__string__Text__length]))(var_t); /* length on <var_t:String>*/
}
{
{ /* Inline kernel#Int#- (var4,4l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var8 = var4 - 4l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self, long p0, long p1))(var_t->class->vft[COLOR_standard__string__Text__substring]))(var_t, 2l, var5); /* substring on <var_t:String>*/
}
{
var10 = nit__literal___standard__Text___remove_underscores(var9);
}
var_s = var10;
{
var11 = standard___standard__Text___is_empty(var_s);
}
if (var11){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var14 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AOctByteExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AOctByteExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "Error: invalid octal literal";
var20 = standard___standard__NativeString___to_s_with_length(var19, 28l);
var18 = var20;
varonce = var18;
}
{
var21 = nit___nit__ToolContext___error(var12, var15, var18);
}
goto RET_LABEL;
} else {
}
{
var22 = standard___standard__Text___to_oct(var_s);
}
{
{ /* Inline kernel#Int#to_b (var22) on <var22:Int> */
var25 = (unsigned char)var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline literal#AByteExpr#value= (self,var23) on <self:AOctByteExpr> */
var27 = BOX_standard__Byte(var23); /* autobox from Byte to nullable Byte */
self->attrs[COLOR_nit__literal__AByteExpr___value].val = var27; /* _value on <self:AOctByteExpr> */
RET_LABEL26:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2581);
fatal_exit(1);
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
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
val* var24 /* : Message */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : nullable Object */;
var_v = p0;
{
{ /* Inline parser_nodes#ACharExpr#n_char (self) on <self:ACharExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2589);
fatal_exit(1);
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
var5 = ((long(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt); /* length on <var_txt:String>*/
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
var12 = var_v->attrs[COLOR_nit__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__literal, 46);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nit___nit__ANode___hot_location(self);
}
if (unlikely(varonce==NULL)) {
var14 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Syntax Error: invalid character literal `";
var18 = standard___standard__NativeString___to_s_with_length(var17, 41l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`.";
var22 = standard___standard__NativeString___to_s_with_length(var21, 2l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var14)->values[1]=var_txt;
{
var23 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
var24 = nit___nit__ToolContext___error(var10, var13, var23);
}
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var26 = ((val*(*)(val* self, long p0))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var25, 1l); /* [] on <var25:SequenceRead[Char]>*/
}
{
{ /* Inline literal#ACharExpr#value= (self,var26) on <self:ACharExpr> */
self->attrs[COLOR_nit__literal__ACharExpr___value].val = var26; /* _value on <self:ACharExpr> */
RET_LABEL27:(void)0;
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
var2 = self->attrs[COLOR_nit__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2597);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_txt = var3;
var_behead = 1l;
var_betail = 1l;
{
var5 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var6 = ((val*(*)(val* self, long p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var5, 0l); /* [] on <var5:SequenceRead[Char]>*/
}
{
var7 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var7, 1l); /* [] on <var7:SequenceRead[Char]>*/
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
var12 = ((long(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#>= (var12,6l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <6l:Int> isa OTHER */
/* <6l:Int> isa OTHER */
var15 = 1; /* easy <6l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
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
var18 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var19 = ((val*(*)(val* self, long p0))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var18, 0l); /* [] on <var18:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var19,'\"') on <var19:nullable Object(Char)> */
var23 = (uint32_t)((long)(var19)>>2);
var22 = (var19 != NULL) && (var23 == '\"');
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_24 = var20;
if (var20){
{
var25 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var26 = ((val*(*)(val* self, long p0))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var25, 3l); /* [] on <var25:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var26,'\n') on <var26:nullable Object(Char)> */
var30 = (uint32_t)((long)(var26)>>2);
var29 = (var26 != NULL) && (var30 == '\n');
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
var31 = ((long(*)(val* self))(var_txt->class->vft[COLOR_standard__string__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#- (var31,var_behead) on <var31:Int> */
/* Covariant cast for argument 0 (i) <var_behead:Int> isa OTHER */
/* <var_behead:Int> isa OTHER */
var34 = 1; /* easy <var_behead:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
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
var_class_name44 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var45 = var32 - var_betail;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var46 = ((val*(*)(val* self, long p0, long p1))(var_txt->class->vft[COLOR_standard__string__Text__substring]))(var_txt, var_behead, var39); /* substring on <var_txt:String>*/
}
{
var47 = standard___standard__Text___unescape_nit(var46);
}
{
{ /* Inline literal#AStringFormExpr#value= (self,var47) on <self:AStringFormExpr> */
self->attrs[COLOR_nit__literal__AStringFormExpr___value].val = var47; /* _value on <self:AStringFormExpr> */
RET_LABEL48:(void)0;
}
}
RET_LABEL:;
}
