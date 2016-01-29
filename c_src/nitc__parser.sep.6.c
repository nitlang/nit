#include "nitc__parser.sep.0.h"
/* method parser#ReduceAction359#action for (self: ReduceAction359, Parser) */
void nitc__parser___nitc__parser__ReduceAction359___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var14 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var15 /* : AListExprs */;
val* var_pexprsnode7 /* var pexprsnode7: nullable AListExprs */;
val* var16 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9653);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype8 = type_nullable__nitc__AType.color;
idtype9 = type_nullable__nitc__AType.id;
if(var_ptypenode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9655);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist6;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
if(var_tidnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9657);
fatal_exit(1);
}
var13 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var13, ((val*)NULL), var_tidnode6); /* Direct call parser_prod#AQid#init_aqid on <var13:AQid>*/
}
var_pqidnode4 = var13;
var14 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode8 = var14;
var15 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var15, var_listnode8); /* Direct call parser_prod#AListExprs#init_alistexprs on <var15:AListExprs>*/
}
var_pexprsnode7 = var15;
var16 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var16, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode7); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var16:ANewExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction359> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction360#action for (self: ReduceAction360, Parser) */
void nitc__parser___nitc__parser__ReduceAction360___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AQualified */;
val* var_pqualifiednode5 /* var pqualifiednode5: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9690);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable__nitc__AType.color;
idtype11 = type_nullable__nitc__AType.id;
if(var_ptypenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9692);
fatal_exit(1);
}
var12 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode6 = var12;
var_tclassidnode7 = var_nodearraylist6;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype14 = type_nullable__nitc__TClassid.color;
idtype15 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9695);
fatal_exit(1);
}
var16 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var16, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var16:AQualified>*/
}
var_pqualifiednode5 = var16;
var_tidnode8 = var_nodearraylist7;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype18 = type_nullable__nitc__TId.color;
idtype19 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9701);
fatal_exit(1);
}
var20 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var20, var_pqualifiednode5, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var20:AQid>*/
}
var_pqidnode4 = var20;
var_pexprsnode9 = var_nodearraylist8;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype22 = type_nullable__nitc__AExprs.color;
idtype23 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9707);
fatal_exit(1);
}
var24 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var24, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode9); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var24:ANewExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction360> */
{
var26 = nitc___nitc__Parser___go_to(var_p, var25);
}
{
nitc___nitc__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction361#action for (self: ReduceAction361, Parser) */
void nitc__parser___nitc__parser__ReduceAction361___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AQualified */;
val* var_pqualifiednode5 /* var pqualifiednode5: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var20 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var21 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var22 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9731);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype9 = type_nullable__nitc__AType.color;
idtype10 = type_nullable__nitc__AType.id;
if(var_ptypenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9733);
fatal_exit(1);
}
var11 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode6 = var11;
var_tclassidnode7 = var_nodearraylist6;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype13 = type_nullable__nitc__TClassid.color;
idtype14 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9736);
fatal_exit(1);
}
var15 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var15, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var15:AQualified>*/
}
var_pqualifiednode5 = var15;
var_tidnode8 = var_nodearraylist7;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype17 = type_nullable__nitc__TId.color;
idtype18 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9742);
fatal_exit(1);
}
var19 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var19, var_pqualifiednode5, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var19:AQid>*/
}
var_pqidnode4 = var19;
var20 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var20); /* Direct call array#Array#init on <var20:Array[Object]>*/
}
var_listnode10 = var20;
var21 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var21, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var21:AListExprs>*/
}
var_pexprsnode9 = var21;
var22 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var22, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode9); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var22:ANewExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction361> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction362#action for (self: ReduceAction362, Parser) */
void nitc__parser___nitc__parser__ReduceAction362___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_tclassidnode8 /* var tclassidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AQualified */;
val* var_pqualifiednode5 /* var pqualifiednode5: nullable AQualified */;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var_pexprsnode10 /* var pexprsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var30 /* : Int */;
long var31 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9776);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype11 = type_nullable__nitc__AType.color;
idtype12 = type_nullable__nitc__AType.id;
if(var_ptypenode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9778);
fatal_exit(1);
}
var13 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode7 = var13;
var_listnode6 = var_nodearraylist6;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype15 = type_core__Array__core__Object.color;
idtype16 = type_core__Array__core__Object.id;
if(var_listnode6 == NULL) {
var14 = 0;
} else {
if(cltype15 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9781);
fatal_exit(1);
}
{
var17 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode6);
}
var_listnode7 = var17;
var_tclassidnode8 = var_nodearraylist7;
/* <var_tclassidnode8:nullable Object> isa nullable TClassid */
cltype19 = type_nullable__nitc__TClassid.color;
idtype20 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tclassidnode8&3)?type_info[((long)var_tclassidnode8&3)]:var_tclassidnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tclassidnode8&3)?type_info[((long)var_tclassidnode8&3)]:var_tclassidnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9784);
fatal_exit(1);
}
var21 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var21, var_listnode7, var_tclassidnode8); /* Direct call parser_prod#AQualified#init_aqualified on <var21:AQualified>*/
}
var_pqualifiednode5 = var21;
var_tidnode9 = var_nodearraylist8;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype23 = type_nullable__nitc__TId.color;
idtype24 = type_nullable__nitc__TId.id;
if(var_tidnode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9790);
fatal_exit(1);
}
var25 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var25, var_pqualifiednode5, var_tidnode9); /* Direct call parser_prod#AQid#init_aqid on <var25:AQid>*/
}
var_pqidnode4 = var25;
var_pexprsnode10 = var_nodearraylist9;
/* <var_pexprsnode10:nullable Object> isa nullable AExprs */
cltype27 = type_nullable__nitc__AExprs.color;
idtype28 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pexprsnode10&3)?type_info[((long)var_pexprsnode10&3)]:var_pexprsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pexprsnode10&3)?type_info[((long)var_pexprsnode10&3)]:var_pexprsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9796);
fatal_exit(1);
}
var29 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var29, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode10); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var29:ANewExpr>*/
}
var_pexprnode1 = var29;
var_node_list = var_pexprnode1;
var30 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction362> */
{
var31 = nitc___nitc__Parser___go_to(var_p, var30);
}
{
nitc___nitc__Parser___push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: ReduceAction363, Parser) */
void nitc__parser___nitc__parser__ReduceAction363___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_tclassidnode8 /* var tclassidnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AQualified */;
val* var_pqualifiednode5 /* var pqualifiednode5: nullable AQualified */;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var25 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var26 /* : AListExprs */;
val* var_pexprsnode10 /* var pexprsnode10: nullable AListExprs */;
val* var27 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var28 /* : Int */;
long var29 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9821);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable__nitc__AType.color;
idtype11 = type_nullable__nitc__AType.id;
if(var_ptypenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9823);
fatal_exit(1);
}
var12 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode7 = var12;
var_listnode6 = var_nodearraylist6;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_core__Array__core__Object.color;
idtype15 = type_core__Array__core__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9826);
fatal_exit(1);
}
{
var16 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode6);
}
var_listnode7 = var16;
var_tclassidnode8 = var_nodearraylist7;
/* <var_tclassidnode8:nullable Object> isa nullable TClassid */
cltype18 = type_nullable__nitc__TClassid.color;
idtype19 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tclassidnode8&3)?type_info[((long)var_tclassidnode8&3)]:var_tclassidnode8->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tclassidnode8&3)?type_info[((long)var_tclassidnode8&3)]:var_tclassidnode8->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9829);
fatal_exit(1);
}
var20 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var20, var_listnode7, var_tclassidnode8); /* Direct call parser_prod#AQualified#init_aqualified on <var20:AQualified>*/
}
var_pqualifiednode5 = var20;
var_tidnode9 = var_nodearraylist8;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype22 = type_nullable__nitc__TId.color;
idtype23 = type_nullable__nitc__TId.id;
if(var_tidnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9835);
fatal_exit(1);
}
var24 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var24, var_pqualifiednode5, var_tidnode9); /* Direct call parser_prod#AQid#init_aqid on <var24:AQid>*/
}
var_pqidnode4 = var24;
var25 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var25); /* Direct call array#Array#init on <var25:Array[Object]>*/
}
var_listnode11 = var25;
var26 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var26, var_listnode11); /* Direct call parser_prod#AListExprs#init_alistexprs on <var26:AListExprs>*/
}
var_pexprsnode10 = var26;
var27 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var27, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode10); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var27:ANewExpr>*/
}
var_pexprnode1 = var27;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction363> */
{
var29 = nitc___nitc__Parser___go_to(var_p, var28);
}
{
nitc___nitc__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction364#action for (self: ReduceAction364, Parser) */
void nitc__parser___nitc__parser__ReduceAction364___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : AQualified */;
val* var_pqualifiednode5 /* var pqualifiednode5: nullable AQualified */;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var_pexprsnode10 /* var pexprsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var26 /* : Int */;
long var27 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9868);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable__nitc__AType.color;
idtype11 = type_nullable__nitc__AType.id;
if(var_ptypenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9870);
fatal_exit(1);
}
var12 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode7 = var12;
var_listnode6 = var_nodearraylist6;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_core__Array__core__Object.color;
idtype15 = type_core__Array__core__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9873);
fatal_exit(1);
}
{
var16 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode6);
}
var_listnode7 = var16;
var17 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var17, var_listnode7, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var17:AQualified>*/
}
var_pqualifiednode5 = var17;
var_tidnode9 = var_nodearraylist7;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype19 = type_nullable__nitc__TId.color;
idtype20 = type_nullable__nitc__TId.id;
if(var_tidnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9880);
fatal_exit(1);
}
var21 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var21, var_pqualifiednode5, var_tidnode9); /* Direct call parser_prod#AQid#init_aqid on <var21:AQid>*/
}
var_pqidnode4 = var21;
var_pexprsnode10 = var_nodearraylist8;
/* <var_pexprsnode10:nullable Object> isa nullable AExprs */
cltype23 = type_nullable__nitc__AExprs.color;
idtype24 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pexprsnode10&3)?type_info[((long)var_pexprsnode10&3)]:var_pexprsnode10->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pexprsnode10&3)?type_info[((long)var_pexprsnode10&3)]:var_pexprsnode10->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9886);
fatal_exit(1);
}
var25 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var25, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode10); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var25:ANewExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction364> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: ReduceAction365, Parser) */
void nitc__parser___nitc__parser__ReduceAction365___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : AQualified */;
val* var_pqualifiednode5 /* var pqualifiednode5: nullable AQualified */;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var21 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var22 /* : AListExprs */;
val* var_pexprsnode10 /* var pexprsnode10: nullable AListExprs */;
val* var23 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9910);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype9 = type_nullable__nitc__AType.color;
idtype10 = type_nullable__nitc__AType.id;
if(var_ptypenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9912);
fatal_exit(1);
}
var11 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode7 = var11;
var_listnode6 = var_nodearraylist6;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype13 = type_core__Array__core__Object.color;
idtype14 = type_core__Array__core__Object.id;
if(var_listnode6 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode6&3)?type_info[((long)var_listnode6&3)]:var_listnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9915);
fatal_exit(1);
}
{
var15 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode6);
}
var_listnode7 = var15;
var16 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var16, var_listnode7, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var16:AQualified>*/
}
var_pqualifiednode5 = var16;
var_tidnode9 = var_nodearraylist7;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype18 = type_nullable__nitc__TId.color;
idtype19 = type_nullable__nitc__TId.id;
if(var_tidnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tidnode9&3)?type_info[((long)var_tidnode9&3)]:var_tidnode9->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9922);
fatal_exit(1);
}
var20 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var20, var_pqualifiednode5, var_tidnode9); /* Direct call parser_prod#AQid#init_aqid on <var20:AQid>*/
}
var_pqidnode4 = var20;
var21 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var21); /* Direct call array#Array#init on <var21:Array[Object]>*/
}
var_listnode11 = var21;
var22 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var22, var_listnode11); /* Direct call parser_prod#AListExprs#init_alistexprs on <var22:AListExprs>*/
}
var_pexprsnode10 = var22;
var23 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var23, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode10); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var23:ANewExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction365> */
{
var25 = nitc___nitc__Parser___go_to(var_p, var24);
}
{
nitc___nitc__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction366#action for (self: ReduceAction366, Parser) */
void nitc__parser___nitc__parser__ReduceAction366___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAsCastExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsCastExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9957);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype12 = type_nullable__nitc__TKwas.color;
idtype13 = type_nullable__nitc__TKwas.id;
if(var_tkwasnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9959);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype15 = type_nullable__nitc__TOpar.color;
idtype16 = type_nullable__nitc__TOpar.id;
if(var_toparnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9961);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist8;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype18 = type_nullable__nitc__AType.color;
idtype19 = type_nullable__nitc__AType.id;
if(var_ptypenode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9963);
fatal_exit(1);
}
var_tcparnode6 = var_nodearraylist10;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype21 = type_nullable__nitc__TCpar.color;
idtype22 = type_nullable__nitc__TCpar.id;
if(var_tcparnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tcparnode6&3)?type_info[((long)var_tcparnode6&3)]:var_tcparnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tcparnode6&3)?type_info[((long)var_tcparnode6&3)]:var_tcparnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9965);
fatal_exit(1);
}
var23 = NEW_nitc__AAsCastExpr(&type_nitc__AAsCastExpr);
{
nitc__parser_prod___AAsCastExpr___init_aascastexpr(var23, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_ptypenode5, var_tcparnode6); /* Direct call parser_prod#AAsCastExpr#init_aascastexpr on <var23:AAsCastExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction366> */
{
var25 = nitc___nitc__Parser___go_to(var_p, var24);
}
{
nitc___nitc__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction367#action for (self: ReduceAction367, Parser) */
void nitc__parser___nitc__parser__ReduceAction367___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tkwnotnode5 /* var tkwnotnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tkwnullnode6 /* var tkwnullnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tcparnode7 /* var tcparnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AAsNotnullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsNotnullExpr */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist12 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var11;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9995);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype14 = type_nullable__nitc__TKwas.color;
idtype15 = type_nullable__nitc__TKwas.id;
if(var_tkwasnode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9997);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype17 = type_nullable__nitc__TOpar.color;
idtype18 = type_nullable__nitc__TOpar.id;
if(var_toparnode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9999);
fatal_exit(1);
}
var_tkwnotnode5 = var_nodearraylist8;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype20 = type_nullable__nitc__TKwnot.color;
idtype21 = type_nullable__nitc__TKwnot.id;
if(var_tkwnotnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10001);
fatal_exit(1);
}
var_tkwnullnode6 = var_nodearraylist10;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype23 = type_nullable__nitc__TKwnull.color;
idtype24 = type_nullable__nitc__TKwnull.id;
if(var_tkwnullnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10003);
fatal_exit(1);
}
var_tcparnode7 = var_nodearraylist12;
/* <var_tcparnode7:nullable Object> isa nullable TCpar */
cltype26 = type_nullable__nitc__TCpar.color;
idtype27 = type_nullable__nitc__TCpar.id;
if(var_tcparnode7 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tcparnode7&3)?type_info[((long)var_tcparnode7&3)]:var_tcparnode7->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tcparnode7&3)?type_info[((long)var_tcparnode7&3)]:var_tcparnode7->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10005);
fatal_exit(1);
}
var28 = NEW_nitc__AAsNotnullExpr(&type_nitc__AAsNotnullExpr);
{
nitc__parser_prod___AAsNotnullExpr___init_aasnotnullexpr(var28, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_tkwnotnode5, var_tkwnullnode6, var_tcparnode7); /* Direct call parser_prod#AAsNotnullExpr#init_aasnotnullexpr on <var28:AAsNotnullExpr>*/
}
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction367> */
{
var30 = nitc___nitc__Parser___go_to(var_p, var29);
}
{
nitc___nitc__Parser___push(var_p, var30, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: ReduceAction368, Parser) */
void nitc__parser___nitc__parser__ReduceAction368___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwnotnode5 /* var tkwnotnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnullnode6 /* var tkwnullnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAsNotnullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsNotnullExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10032);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype10 = type_nullable__nitc__TKwas.color;
idtype11 = type_nullable__nitc__TKwas.id;
if(var_tkwasnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10034);
fatal_exit(1);
}
var_tkwnotnode5 = var_nodearraylist6;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype13 = type_nullable__nitc__TKwnot.color;
idtype14 = type_nullable__nitc__TKwnot.id;
if(var_tkwnotnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwnotnode5&3)?type_info[((long)var_tkwnotnode5&3)]:var_tkwnotnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10036);
fatal_exit(1);
}
var_tkwnullnode6 = var_nodearraylist8;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype16 = type_nullable__nitc__TKwnull.color;
idtype17 = type_nullable__nitc__TKwnull.id;
if(var_tkwnullnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnullnode6&3)?type_info[((long)var_tkwnullnode6&3)]:var_tkwnullnode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10038);
fatal_exit(1);
}
var18 = NEW_nitc__AAsNotnullExpr(&type_nitc__AAsNotnullExpr);
{
nitc__parser_prod___AAsNotnullExpr___init_aasnotnullexpr(var18, var_pexprnode2, var_tkwasnode3, ((val*)NULL), var_tkwnotnode5, var_tkwnullnode6, ((val*)NULL)); /* Direct call parser_prod#AAsNotnullExpr#init_aasnotnullexpr on <var18:AAsNotnullExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction368> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: ReduceAction370, Parser) */
void nitc__parser___nitc__parser__ReduceAction370___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tdotdotdotnode3 /* var tdotdotdotnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AVarargExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVarargExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10059);
fatal_exit(1);
}
var_tdotdotdotnode3 = var_nodearraylist2;
/* <var_tdotdotdotnode3:nullable Object> isa nullable TDotdotdot */
cltype4 = type_nullable__nitc__TDotdotdot.color;
idtype5 = type_nullable__nitc__TDotdotdot.id;
if(var_tdotdotdotnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tdotdotdotnode3&3)?type_info[((long)var_tdotdotdotnode3&3)]:var_tdotdotdotnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tdotdotdotnode3&3)?type_info[((long)var_tdotdotdotnode3&3)]:var_tdotdotdotnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10061);
fatal_exit(1);
}
var6 = NEW_nitc__AVarargExpr(&type_nitc__AVarargExpr);
{
nitc__parser_prod___AVarargExpr___init_avarargexpr(var6, var_pexprnode2, var_tdotdotdotnode3); /* Direct call parser_prod#AVarargExpr#init_avarargexpr on <var6:AVarargExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction370> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction371#action for (self: ReduceAction371, Parser) */
void nitc__parser___nitc__parser__ReduceAction371___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode3 /* var tassignnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ANamedargExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANamedargExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10079);
fatal_exit(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype5 = type_nullable__nitc__TAssign.color;
idtype6 = type_nullable__nitc__TAssign.id;
if(var_tassignnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10081);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nitc__AExpr.color;
idtype9 = type_nullable__nitc__AExpr.id;
if(var_pexprnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10083);
fatal_exit(1);
}
var10 = NEW_nitc__ANamedargExpr(&type_nitc__ANamedargExpr);
{
nitc__parser_prod___ANamedargExpr___init_anamedargexpr(var10, var_tidnode2, var_tassignnode3, var_pexprnode4); /* Direct call parser_prod#ANamedargExpr#init_anamedargexpr on <var10:ANamedargExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction371> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction372#action for (self: ReduceAction372, Parser) */
void nitc__parser___nitc__parser__ReduceAction372___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwselfnode2 /* var tkwselfnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ASelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASelfExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwselfnode2 = var_nodearraylist1;
/* <var_tkwselfnode2:nullable Object> isa nullable TKwself */
cltype = type_nullable__nitc__TKwself.color;
idtype = type_nullable__nitc__TKwself.id;
if(var_tkwselfnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwselfnode2&3)?type_info[((long)var_tkwselfnode2&3)]:var_tkwselfnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwselfnode2&3)?type_info[((long)var_tkwselfnode2&3)]:var_tkwselfnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10101);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10103);
fatal_exit(1);
}
var6 = NEW_nitc__ASelfExpr(&type_nitc__ASelfExpr);
{
nitc__parser_prod___ASelfExpr___init_aselfexpr(var6, var_tkwselfnode2, var_pannotationsnode3); /* Direct call parser_prod#ASelfExpr#init_aselfexpr on <var6:ASelfExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction372> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction373#action for (self: ReduceAction373, Parser) */
void nitc__parser___nitc__parser__ReduceAction373___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwtruenode2 /* var tkwtruenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ATrueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ATrueExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwtruenode2 = var_nodearraylist1;
/* <var_tkwtruenode2:nullable Object> isa nullable TKwtrue */
cltype = type_nullable__nitc__TKwtrue.color;
idtype = type_nullable__nitc__TKwtrue.id;
if(var_tkwtruenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwtruenode2&3)?type_info[((long)var_tkwtruenode2&3)]:var_tkwtruenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwtruenode2&3)?type_info[((long)var_tkwtruenode2&3)]:var_tkwtruenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10120);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10122);
fatal_exit(1);
}
var6 = NEW_nitc__ATrueExpr(&type_nitc__ATrueExpr);
{
nitc__parser_prod___ATrueExpr___init_atrueexpr(var6, var_tkwtruenode2, var_pannotationsnode3); /* Direct call parser_prod#ATrueExpr#init_atrueexpr on <var6:ATrueExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction373> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction374#action for (self: ReduceAction374, Parser) */
void nitc__parser___nitc__parser__ReduceAction374___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwfalsenode2 /* var tkwfalsenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AFalseExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFalseExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwfalsenode2 = var_nodearraylist1;
/* <var_tkwfalsenode2:nullable Object> isa nullable TKwfalse */
cltype = type_nullable__nitc__TKwfalse.color;
idtype = type_nullable__nitc__TKwfalse.id;
if(var_tkwfalsenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwfalsenode2&3)?type_info[((long)var_tkwfalsenode2&3)]:var_tkwfalsenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwfalsenode2&3)?type_info[((long)var_tkwfalsenode2&3)]:var_tkwfalsenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10139);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10141);
fatal_exit(1);
}
var6 = NEW_nitc__AFalseExpr(&type_nitc__AFalseExpr);
{
nitc__parser_prod___AFalseExpr___init_afalseexpr(var6, var_tkwfalsenode2, var_pannotationsnode3); /* Direct call parser_prod#AFalseExpr#init_afalseexpr on <var6:AFalseExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction374> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction375#action for (self: ReduceAction375, Parser) */
void nitc__parser___nitc__parser__ReduceAction375___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnullnode2 /* var tkwnullnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ANullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANullExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwnullnode2 = var_nodearraylist1;
/* <var_tkwnullnode2:nullable Object> isa nullable TKwnull */
cltype = type_nullable__nitc__TKwnull.color;
idtype = type_nullable__nitc__TKwnull.id;
if(var_tkwnullnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwnullnode2&3)?type_info[((long)var_tkwnullnode2&3)]:var_tkwnullnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwnullnode2&3)?type_info[((long)var_tkwnullnode2&3)]:var_tkwnullnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10158);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10160);
fatal_exit(1);
}
var6 = NEW_nitc__ANullExpr(&type_nitc__ANullExpr);
{
nitc__parser_prod___ANullExpr___init_anullexpr(var6, var_tkwnullnode2, var_pannotationsnode3); /* Direct call parser_prod#ANullExpr#init_anullexpr on <var6:ANullExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction375> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: ReduceAction376, Parser) */
void nitc__parser___nitc__parser__ReduceAction376___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tintegernode2 /* var tintegernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AIntegerExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIntegerExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tintegernode2 = var_nodearraylist1;
/* <var_tintegernode2:nullable Object> isa nullable TInteger */
cltype = type_nullable__nitc__TInteger.color;
idtype = type_nullable__nitc__TInteger.id;
if(var_tintegernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tintegernode2&3)?type_info[((long)var_tintegernode2&3)]:var_tintegernode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tintegernode2&3)?type_info[((long)var_tintegernode2&3)]:var_tintegernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10177);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10179);
fatal_exit(1);
}
var6 = NEW_nitc__AIntegerExpr(&type_nitc__AIntegerExpr);
{
nitc__parser_prod___AIntegerExpr___init_aintegerexpr(var6, var_tintegernode2, var_pannotationsnode3); /* Direct call parser_prod#AIntegerExpr#init_aintegerexpr on <var6:AIntegerExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction376> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: ReduceAction377, Parser) */
void nitc__parser___nitc__parser__ReduceAction377___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tfloatnode2 /* var tfloatnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AFloatExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFloatExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tfloatnode2 = var_nodearraylist1;
/* <var_tfloatnode2:nullable Object> isa nullable TFloat */
cltype = type_nullable__nitc__TFloat.color;
idtype = type_nullable__nitc__TFloat.id;
if(var_tfloatnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tfloatnode2&3)?type_info[((long)var_tfloatnode2&3)]:var_tfloatnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tfloatnode2&3)?type_info[((long)var_tfloatnode2&3)]:var_tfloatnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10196);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10198);
fatal_exit(1);
}
var6 = NEW_nitc__AFloatExpr(&type_nitc__AFloatExpr);
{
nitc__parser_prod___AFloatExpr___init_afloatexpr(var6, var_tfloatnode2, var_pannotationsnode3); /* Direct call parser_prod#AFloatExpr#init_afloatexpr on <var6:AFloatExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction377> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction378#action for (self: ReduceAction378, Parser) */
void nitc__parser___nitc__parser__ReduceAction378___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcharnode2 /* var tcharnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ACharExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACharExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tcharnode2 = var_nodearraylist1;
/* <var_tcharnode2:nullable Object> isa nullable TChar */
cltype = type_nullable__nitc__TChar.color;
idtype = type_nullable__nitc__TChar.id;
if(var_tcharnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tcharnode2&3)?type_info[((long)var_tcharnode2&3)]:var_tcharnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tcharnode2&3)?type_info[((long)var_tcharnode2&3)]:var_tcharnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10215);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10217);
fatal_exit(1);
}
var6 = NEW_nitc__ACharExpr(&type_nitc__ACharExpr);
{
nitc__parser_prod___ACharExpr___init_acharexpr(var6, var_tcharnode2, var_pannotationsnode3); /* Direct call parser_prod#ACharExpr#init_acharexpr on <var6:ACharExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction378> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: ReduceAction379, Parser) */
void nitc__parser___nitc__parser__ReduceAction379___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode2 /* var tstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStringExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tstringnode2 = var_nodearraylist1;
/* <var_tstringnode2:nullable Object> isa nullable TString */
cltype = type_nullable__nitc__TString.color;
idtype = type_nullable__nitc__TString.id;
if(var_tstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tstringnode2&3)?type_info[((long)var_tstringnode2&3)]:var_tstringnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tstringnode2&3)?type_info[((long)var_tstringnode2&3)]:var_tstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10234);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode3&3)?type_info[((long)var_pannotationsnode3&3)]:var_pannotationsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10236);
fatal_exit(1);
}
var6 = NEW_nitc__AStringExpr(&type_nitc__AStringExpr);
{
nitc__parser_prod___AStringExpr___init_astringexpr(var6, var_tstringnode2, var_pannotationsnode3); /* Direct call parser_prod#AStringExpr#init_astringexpr on <var6:AStringExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction379> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: ReduceAction382, Parser) */
void nitc__parser___nitc__parser__ReduceAction382___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tdotdotnode4 /* var tdotdotnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tcbranode6 /* var tcbranode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : ACrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACrangeExpr */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nitc__TObra.color;
idtype = type_nullable__nitc__TObra.id;
if(var_tobranode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10261);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nitc__AExpr.color;
idtype13 = type_nullable__nitc__AExpr.id;
if(var_pexprnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10263);
fatal_exit(1);
}
var_tdotdotnode4 = var_nodearraylist5;
/* <var_tdotdotnode4:nullable Object> isa nullable TDotdot */
cltype15 = type_nullable__nitc__TDotdot.color;
idtype16 = type_nullable__nitc__TDotdot.id;
if(var_tdotdotnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tdotdotnode4&3)?type_info[((long)var_tdotdotnode4&3)]:var_tdotdotnode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tdotdotnode4&3)?type_info[((long)var_tdotdotnode4&3)]:var_tdotdotnode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10265);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nitc__AExpr.color;
idtype19 = type_nullable__nitc__AExpr.id;
if(var_pexprnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10267);
fatal_exit(1);
}
var_tcbranode6 = var_nodearraylist9;
/* <var_tcbranode6:nullable Object> isa nullable TCbra */
cltype21 = type_nullable__nitc__TCbra.color;
idtype22 = type_nullable__nitc__TCbra.id;
if(var_tcbranode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tcbranode6&3)?type_info[((long)var_tcbranode6&3)]:var_tcbranode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tcbranode6&3)?type_info[((long)var_tcbranode6&3)]:var_tcbranode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10269);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist10;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nitc__AAnnotations.color;
idtype25 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10271);
fatal_exit(1);
}
var26 = NEW_nitc__ACrangeExpr(&type_nitc__ACrangeExpr);
{
nitc__parser_prod___ACrangeExpr___init_acrangeexpr(var26, var_tobranode2, var_pexprnode3, var_tdotdotnode4, var_pexprnode5, var_tcbranode6, var_pannotationsnode7); /* Direct call parser_prod#ACrangeExpr#init_acrangeexpr on <var26:ACrangeExpr>*/
}
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var27 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction382> */
{
var28 = nitc___nitc__Parser___go_to(var_p, var27);
}
{
nitc___nitc__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: ReduceAction383, Parser) */
void nitc__parser___nitc__parser__ReduceAction383___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tdotdotnode4 /* var tdotdotnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tobranode6 /* var tobranode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AOrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrangeExpr */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nitc__TObra.color;
idtype = type_nullable__nitc__TObra.id;
if(var_tobranode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10300);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nitc__AExpr.color;
idtype13 = type_nullable__nitc__AExpr.id;
if(var_pexprnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10302);
fatal_exit(1);
}
var_tdotdotnode4 = var_nodearraylist5;
/* <var_tdotdotnode4:nullable Object> isa nullable TDotdot */
cltype15 = type_nullable__nitc__TDotdot.color;
idtype16 = type_nullable__nitc__TDotdot.id;
if(var_tdotdotnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tdotdotnode4&3)?type_info[((long)var_tdotdotnode4&3)]:var_tdotdotnode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tdotdotnode4&3)?type_info[((long)var_tdotdotnode4&3)]:var_tdotdotnode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10304);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nitc__AExpr.color;
idtype19 = type_nullable__nitc__AExpr.id;
if(var_pexprnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10306);
fatal_exit(1);
}
var_tobranode6 = var_nodearraylist9;
/* <var_tobranode6:nullable Object> isa nullable TObra */
cltype21 = type_nullable__nitc__TObra.color;
idtype22 = type_nullable__nitc__TObra.id;
if(var_tobranode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tobranode6&3)?type_info[((long)var_tobranode6&3)]:var_tobranode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tobranode6&3)?type_info[((long)var_tobranode6&3)]:var_tobranode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10308);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist10;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nitc__AAnnotations.color;
idtype25 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10310);
fatal_exit(1);
}
var26 = NEW_nitc__AOrangeExpr(&type_nitc__AOrangeExpr);
{
nitc__parser_prod___AOrangeExpr___init_aorangeexpr(var26, var_tobranode2, var_pexprnode3, var_tdotdotnode4, var_pexprnode5, var_tobranode6, var_pannotationsnode7); /* Direct call parser_prod#AOrangeExpr#init_aorangeexpr on <var26:AOrangeExpr>*/
}
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var27 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction383> */
{
var28 = nitc___nitc__Parser___go_to(var_p, var27);
}
{
nitc___nitc__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction384#action for (self: ReduceAction384, Parser) */
void nitc__parser___nitc__parser__ReduceAction384___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tcbranode6 /* var tcbranode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AArrayExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AArrayExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode4 = var6;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nitc__TObra.color;
idtype = type_nullable__nitc__TObra.id;
if(var_tobranode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10336);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_core__Array__core__Object.color;
idtype10 = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10338);
fatal_exit(1);
}
{
var11 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_ptypenode5 = var_nodearraylist4;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype13 = type_nullable__nitc__AType.color;
idtype14 = type_nullable__nitc__AType.id;
if(var_ptypenode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10341);
fatal_exit(1);
}
var_tcbranode6 = var_nodearraylist5;
/* <var_tcbranode6:nullable Object> isa nullable TCbra */
cltype16 = type_nullable__nitc__TCbra.color;
idtype17 = type_nullable__nitc__TCbra.id;
if(var_tcbranode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tcbranode6&3)?type_info[((long)var_tcbranode6&3)]:var_tcbranode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tcbranode6&3)?type_info[((long)var_tcbranode6&3)]:var_tcbranode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10343);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist6;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable__nitc__AAnnotations.color;
idtype20 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10345);
fatal_exit(1);
}
var21 = NEW_nitc__AArrayExpr(&type_nitc__AArrayExpr);
{
nitc__parser_prod___AArrayExpr___init_aarrayexpr(var21, var_tobranode2, var_listnode4, var_ptypenode5, var_tcbranode6, var_pannotationsnode7); /* Direct call parser_prod#AArrayExpr#init_aarrayexpr on <var21:AArrayExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction384> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction385#action for (self: ReduceAction385, Parser) */
void nitc__parser___nitc__parser__ReduceAction385___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AParExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AParExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
if(var_toparnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10369);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nitc__AExpr.color;
idtype9 = type_nullable__nitc__AExpr.id;
if(var_pexprnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10371);
fatal_exit(1);
}
var_tcparnode4 = var_nodearraylist5;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype11 = type_nullable__nitc__TCpar.color;
idtype12 = type_nullable__nitc__TCpar.id;
if(var_tcparnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10373);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist6;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype14 = type_nullable__nitc__AAnnotations.color;
idtype15 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10375);
fatal_exit(1);
}
var16 = NEW_nitc__AParExpr(&type_nitc__AParExpr);
{
nitc__parser_prod___AParExpr___init_aparexpr(var16, var_toparnode2, var_pexprnode3, var_tcparnode4, var_pannotationsnode5); /* Direct call parser_prod#AParExpr#init_aparexpr on <var16:AParExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction385> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction387#action for (self: ReduceAction387, Parser) */
void nitc__parser___nitc__parser__ReduceAction387___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : Array[Object] */;
val* var13 /* : AManyExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AManyExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10395);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype5 = type_core__Array__core__Object.color;
idtype6 = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var4 = 0;
} else {
if(cltype5 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10397);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var12 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var13 = NEW_nitc__AManyExpr(&type_nitc__AManyExpr);
{
nitc__parser_prod___AManyExpr___init_amanyexpr(var13, var_listnode4); /* Direct call parser_prod#AManyExpr#init_amanyexpr on <var13:AManyExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction387> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: ReduceAction388, Parser) */
void nitc__parser___nitc__parser__ReduceAction388___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction388> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction389#action for (self: ReduceAction389, Parser) */
void nitc__parser___nitc__parser__ReduceAction389___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pexprnode1 = var_nodearraylist1;
if (var_pexprnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction389> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction390#action for (self: ReduceAction390, Parser) */
void nitc__parser___nitc__parser__ReduceAction390___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10447);
fatal_exit(1);
}
if (var_pexprnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction390> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction392#action for (self: ReduceAction392, Parser) */
void nitc__parser___nitc__parser__ReduceAction392___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction392> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction394#action for (self: ReduceAction394, Parser) */
void nitc__parser___nitc__parser__ReduceAction394___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
if(var_tkwifnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10481);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
if(var_pexprnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10483);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype12 = type_nullable__nitc__TKwthen.color;
idtype13 = type_nullable__nitc__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10485);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nitc__AExpr.color;
idtype16 = type_nullable__nitc__AExpr.id;
if(var_pexprnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10487);
fatal_exit(1);
}
var17 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var17, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var17:AIfExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction394> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction395#action for (self: ReduceAction395, Parser) */
void nitc__parser___nitc__parser__ReduceAction395___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10510);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable__nitc__AExpr.color;
idtype7 = type_nullable__nitc__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10512);
fatal_exit(1);
}
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode2);
}
var_listnode4 = var8;
if (var_pexprnode3 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode3,((val*)NULL)) on <var_pexprnode3:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_pexprnode3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexprnode3, var_other); /* == on <var_pexprnode3:nullable AExpr(AExpr)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode3); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype15 = type_nullable__nitc__AAnnotations.color;
idtype16 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10518);
fatal_exit(1);
}
var17 = NEW_nitc__ASuperstringExpr(&type_nitc__ASuperstringExpr);
{
nitc__parser_prod___ASuperstringExpr___init_asuperstringexpr(var17, var_listnode4, var_pannotationsnode5); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var17:ASuperstringExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction395> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction396#action for (self: ReduceAction396, Parser) */
void nitc__parser___nitc__parser__ReduceAction396___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10538);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10540);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nitc__AExpr.color;
idtype11 = type_nullable__nitc__AExpr.id;
if(var_pexprnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10542);
fatal_exit(1);
}
{
var12 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode2);
}
var_listnode5 = var12;
{
var13 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode3);
}
var_listnode5 = var13;
if (var_pexprnode4 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode4,((val*)NULL)) on <var_pexprnode4:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_pexprnode4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexprnode4, var_other); /* == on <var_pexprnode4:nullable AExpr(AExpr)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode5, var_pexprnode4); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
var_pannotationsnode6 = var_nodearraylist4;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable__nitc__AAnnotations.color;
idtype21 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pannotationsnode6&3)?type_info[((long)var_pannotationsnode6&3)]:var_pannotationsnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10549);
fatal_exit(1);
}
var22 = NEW_nitc__ASuperstringExpr(&type_nitc__ASuperstringExpr);
{
nitc__parser_prod___ASuperstringExpr___init_asuperstringexpr(var22, var_listnode5, var_pannotationsnode6); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var22:ASuperstringExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction396> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction397#action for (self: ReduceAction397, Parser) */
void nitc__parser___nitc__parser__ReduceAction397___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var_pexprnode1 = var_nodearraylist1;
var_pexprnode2 = var_nodearraylist3;
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode2&3)?class_info[((long)var_pexprnode2&3)]:var_pexprnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object>*/
var7 = var8;
}
if (var7){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction397> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction398#action for (self: ReduceAction398, Parser) */
void nitc__parser___nitc__parser__ReduceAction398___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pexprnode1 = var_nodearraylist1;
if (var_pexprnode1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var3 = var4;
}
if (var3){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction398> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction399#action for (self: ReduceAction399, Parser) */
void nitc__parser___nitc__parser__ReduceAction399___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstartstringnode2 /* var tstartstringnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStartStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStartStringExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstartstringnode2 = var_nodearraylist1;
/* <var_tstartstringnode2:nullable Object> isa nullable TStartString */
cltype = type_nullable__nitc__TStartString.color;
idtype = type_nullable__nitc__TStartString.id;
if(var_tstartstringnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstartstringnode2&3)?type_info[((long)var_tstartstringnode2&3)]:var_tstartstringnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstartstringnode2&3)?type_info[((long)var_tstartstringnode2&3)]:var_tstartstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10603);
fatal_exit(1);
}
var2 = NEW_nitc__AStartStringExpr(&type_nitc__AStartStringExpr);
{
nitc__parser_prod___AStartStringExpr___init_astartstringexpr(var2, var_tstartstringnode2); /* Direct call parser_prod#AStartStringExpr#init_astartstringexpr on <var2:AStartStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction399> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction402#action for (self: ReduceAction402, Parser) */
void nitc__parser___nitc__parser__ReduceAction402___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tmidstringnode2 /* var tmidstringnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AMidStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMidStringExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tmidstringnode2 = var_nodearraylist1;
/* <var_tmidstringnode2:nullable Object> isa nullable TMidString */
cltype = type_nullable__nitc__TMidString.color;
idtype = type_nullable__nitc__TMidString.id;
if(var_tmidstringnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tmidstringnode2&3)?type_info[((long)var_tmidstringnode2&3)]:var_tmidstringnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tmidstringnode2&3)?type_info[((long)var_tmidstringnode2&3)]:var_tmidstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10618);
fatal_exit(1);
}
var2 = NEW_nitc__AMidStringExpr(&type_nitc__AMidStringExpr);
{
nitc__parser_prod___AMidStringExpr___init_amidstringexpr(var2, var_tmidstringnode2); /* Direct call parser_prod#AMidStringExpr#init_amidstringexpr on <var2:AMidStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction402> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction403#action for (self: ReduceAction403, Parser) */
void nitc__parser___nitc__parser__ReduceAction403___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tendstringnode2 /* var tendstringnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AEndStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEndStringExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tendstringnode2 = var_nodearraylist1;
/* <var_tendstringnode2:nullable Object> isa nullable TEndString */
cltype = type_nullable__nitc__TEndString.color;
idtype = type_nullable__nitc__TEndString.id;
if(var_tendstringnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tendstringnode2&3)?type_info[((long)var_tendstringnode2&3)]:var_tendstringnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tendstringnode2&3)?type_info[((long)var_tendstringnode2&3)]:var_tendstringnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10633);
fatal_exit(1);
}
var2 = NEW_nitc__AEndStringExpr(&type_nitc__AEndStringExpr);
{
nitc__parser_prod___AEndStringExpr___init_aendstringexpr(var2, var_tendstringnode2); /* Direct call parser_prod#AEndStringExpr#init_aendstringexpr on <var2:AEndStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction403> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction404#action for (self: ReduceAction404, Parser) */
void nitc__parser___nitc__parser__ReduceAction404___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tatnode3 /* var tatnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode5 /* var pannotationnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode6 = var2;
var_tatnode3 = var_nodearraylist1;
/* <var_tatnode3:nullable Object> isa nullable TAt */
cltype = type_nullable__nitc__TAt.color;
idtype = type_nullable__nitc__TAt.id;
if(var_tatnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tatnode3&3)?type_info[((long)var_tatnode3&3)]:var_tatnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tatnode3&3)?type_info[((long)var_tatnode3&3)]:var_tatnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10650);
fatal_exit(1);
}
var_pannotationnode5 = var_nodearraylist2;
/* <var_pannotationnode5:nullable Object> isa nullable AAnnotation */
cltype5 = type_nullable__nitc__AAnnotation.color;
idtype6 = type_nullable__nitc__AAnnotation.id;
if(var_pannotationnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pannotationnode5&3)?type_info[((long)var_pannotationnode5&3)]:var_pannotationnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pannotationnode5&3)?type_info[((long)var_pannotationnode5&3)]:var_pannotationnode5->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10652);
fatal_exit(1);
}
if (var_pannotationnode5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pannotationnode5,((val*)NULL)) on <var_pannotationnode5:nullable Object(nullable AAnnotation)> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_pannotationnode5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pannotationnode5, var_other); /* == on <var_pannotationnode5:nullable AAnnotation(AAnnotation)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode6, var_pannotationnode5); /* Direct call array#Array#add on <var_listnode6:Array[Object]>*/
}
} else {
}
var12 = NEW_nitc__AAnnotations(&type_nitc__AAnnotations);
{
nitc__parser_prod___AAnnotations___init_aannotations(var12, ((val*)NULL), var_tatnode3, ((val*)NULL), var_listnode6, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotations#init_aannotations on <var12:AAnnotations>*/
}
var_pannotationsnode1 = var12;
var_node_list = var_pannotationsnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction404> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction405#action for (self: ReduceAction405, Parser) */
void nitc__parser___nitc__parser__ReduceAction405___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tatnode3 /* var tatnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_tcparnode7 /* var tcparnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_tatnode3 = var_nodearraylist1;
/* <var_tatnode3:nullable Object> isa nullable TAt */
cltype = type_nullable__nitc__TAt.color;
idtype = type_nullable__nitc__TAt.id;
if(var_tatnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tatnode3&3)?type_info[((long)var_tatnode3&3)]:var_tatnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tatnode3&3)?type_info[((long)var_tatnode3&3)]:var_tatnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10681);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist2;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype9 = type_nullable__nitc__TOpar.color;
idtype10 = type_nullable__nitc__TOpar.id;
if(var_toparnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_toparnode4&3)?type_info[((long)var_toparnode4&3)]:var_toparnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10683);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype12 = type_core__Array__core__Object.color;
idtype13 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var11 = 0;
} else {
if(cltype12 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10685);
fatal_exit(1);
}
{
var14 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var14;
var_tcparnode7 = var_nodearraylist6;
/* <var_tcparnode7:nullable Object> isa nullable TCpar */
cltype16 = type_nullable__nitc__TCpar.color;
idtype17 = type_nullable__nitc__TCpar.id;
if(var_tcparnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tcparnode7&3)?type_info[((long)var_tcparnode7&3)]:var_tcparnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tcparnode7&3)?type_info[((long)var_tcparnode7&3)]:var_tcparnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10688);
fatal_exit(1);
}
var18 = NEW_nitc__AAnnotations(&type_nitc__AAnnotations);
{
nitc__parser_prod___AAnnotations___init_aannotations(var18, ((val*)NULL), var_tatnode3, var_toparnode4, var_listnode6, var_tcparnode7, ((val*)NULL)); /* Direct call parser_prod#AAnnotations#init_aannotations on <var18:AAnnotations>*/
}
var_pannotationsnode1 = var18;
var_node_list = var_pannotationsnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction405> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction406#action for (self: ReduceAction406, Parser) */
void nitc__parser___nitc__parser__ReduceAction406___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pannotationsnode1 = var_nodearraylist1;
var_node_list = var_pannotationsnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction406> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction408#action for (self: ReduceAction408, Parser) */
void nitc__parser___nitc__parser__ReduceAction408___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nitc__TKwredef.color;
idtype = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10723);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype7 = type_nullable__nitc__AVisibility.color;
idtype8 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10725);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nitc__AAtid.color;
idtype11 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10727);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist4;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable__nitc__AAnnotations.color;
idtype14 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10729);
fatal_exit(1);
}
var15 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var15, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var15:AAnnotation>*/
}
var_pannotationnode1 = var15;
var_node_list = var_pannotationnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction408> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction409#action for (self: ReduceAction409, Parser) */
void nitc__parser___nitc__parser__ReduceAction409___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var9 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nitc__TKwredef.color;
idtype = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10760);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nitc__AVisibility.color;
idtype13 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10762);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nitc__AAtid.color;
idtype16 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10764);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist4;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype18 = type_nullable__nitc__TOpar.color;
idtype19 = type_nullable__nitc__TOpar.id;
if(var_toparnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10766);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype21 = type_core__Array__core__Object.color;
idtype22 = type_core__Array__core__Object.id;
if(var_listnode7 == NULL) {
var20 = 0;
} else {
if(cltype21 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10768);
fatal_exit(1);
}
{
var23 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var23;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype25 = type_nullable__nitc__TCpar.color;
idtype26 = type_nullable__nitc__TCpar.id;
if(var_tcparnode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10771);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable__nitc__AAnnotations.color;
idtype29 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10773);
fatal_exit(1);
}
var30 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var30, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var30:AAnnotation>*/
}
var_pannotationnode1 = var30;
var_node_list = var_pannotationnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction409> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction410#action for (self: ReduceAction410, Parser) */
void nitc__parser___nitc__parser__ReduceAction410___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pannotationnode1 = var_nodearraylist1;
if (var_pannotationnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode1&3)?class_info[((long)var_pannotationnode1&3)]:var_pannotationnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pannotationnode1, ((val*)NULL)); /* != on <var_pannotationnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction410> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction411#action for (self: ReduceAction411, Parser) */
void nitc__parser___nitc__parser__ReduceAction411___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_pannotationnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10813);
fatal_exit(1);
}
if (var_pannotationnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode1&3)?class_info[((long)var_pannotationnode1&3)]:var_pannotationnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pannotationnode1, ((val*)NULL)); /* != on <var_pannotationnode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction411> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction414#action for (self: ReduceAction414, Parser) */
void nitc__parser___nitc__parser__ReduceAction414___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode8 = var4;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nitc__TKwredef.color;
idtype = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10833);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype7 = type_nullable__nitc__AVisibility.color;
idtype8 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10835);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nitc__AAtid.color;
idtype11 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10837);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist4;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nitc__AExpr.color;
idtype14 = type_nullable__nitc__AExpr.id;
if(var_pexprnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10839);
fatal_exit(1);
}
if (var_pexprnode7 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode7,((val*)NULL)) on <var_pexprnode7:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_pexprnode7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexprnode7, var_other); /* == on <var_pexprnode7:nullable AExpr(AExpr)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode8, var_pexprnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var20 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var20, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var20:AAnnotation>*/
}
var_pannotationnode1 = var20;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction414> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction416#action for (self: ReduceAction416, Parser) */
void nitc__parser___nitc__parser__ReduceAction416___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pannotationnode1 = var_nodearraylist3;
var_node_list = var_pannotationnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction416> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction417#action for (self: ReduceAction417, Parser) */
void nitc__parser___nitc__parser__ReduceAction417___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10882);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype8 = type_nullable__nitc__TKwredef.color;
idtype9 = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10884);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable__nitc__AVisibility.color;
idtype12 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10886);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype14 = type_nullable__nitc__AAtid.color;
idtype15 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10888);
fatal_exit(1);
}
var16 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var16, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var16:AAnnotation>*/
}
var_pannotationnode1 = var16;
var_node_list = var_pannotationnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction417> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction418#action for (self: ReduceAction418, Parser) */
void nitc__parser___nitc__parser__ReduceAction418___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode7 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10916);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nitc__TKwredef.color;
idtype10 = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10918);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nitc__AVisibility.color;
idtype13 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10920);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nitc__AAtid.color;
idtype16 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10922);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist5;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype18 = type_nullable__nitc__AAnnotations.color;
idtype19 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10924);
fatal_exit(1);
}
var20 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var20, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var20:AAnnotation>*/
}
var_pannotationnode1 = var20;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction418> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction419#action for (self: ReduceAction419, Parser) */
void nitc__parser___nitc__parser__ReduceAction419___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var9 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10955);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nitc__TKwredef.color;
idtype13 = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10957);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nitc__AVisibility.color;
idtype16 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10959);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype18 = type_nullable__nitc__AAtid.color;
idtype19 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10961);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype21 = type_nullable__nitc__TOpar.color;
idtype22 = type_nullable__nitc__TOpar.id;
if(var_toparnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10963);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype24 = type_core__Array__core__Object.color;
idtype25 = type_core__Array__core__Object.id;
if(var_listnode7 == NULL) {
var23 = 0;
} else {
if(cltype24 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10965);
fatal_exit(1);
}
{
var26 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var26;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype28 = type_nullable__nitc__TCpar.color;
idtype29 = type_nullable__nitc__TCpar.id;
if(var_tcparnode9 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 10968);
fatal_exit(1);
}
var30 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var30:AAnnotation>*/
}
var_pannotationnode1 = var30;
var_node_list = var_pannotationnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction419> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction420#action for (self: ReduceAction420, Parser) */
void nitc__parser___nitc__parser__ReduceAction420___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var10 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var10 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode8 = var10;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11000);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nitc__TKwredef.color;
idtype14 = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11002);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nitc__AVisibility.color;
idtype17 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11004);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype19 = type_nullable__nitc__AAtid.color;
idtype20 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11006);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype22 = type_nullable__nitc__TOpar.color;
idtype23 = type_nullable__nitc__TOpar.id;
if(var_toparnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11008);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_core__Array__core__Object.color;
idtype26 = type_core__Array__core__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11010);
fatal_exit(1);
}
{
var27 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var27;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype29 = type_nullable__nitc__TCpar.color;
idtype30 = type_nullable__nitc__TCpar.id;
if(var_tcparnode9 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11013);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype32 = type_nullable__nitc__AAnnotations.color;
idtype33 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11015);
fatal_exit(1);
}
var34 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var34:AAnnotation>*/
}
var_pannotationnode1 = var34;
var_node_list = var_pannotationnode1;
var35 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction420> */
{
var36 = nitc___nitc__Parser___go_to(var_p, var35);
}
{
nitc___nitc__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction421#action for (self: ReduceAction421, Parser) */
void nitc__parser___nitc__parser__ReduceAction421___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11043);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nitc__TKwredef.color;
idtype10 = type_nullable__nitc__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11045);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nitc__AVisibility.color;
idtype13 = type_nullable__nitc__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11047);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nitc__AAtid.color;
idtype16 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11049);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_core__Array__core__Object.color;
idtype19 = type_core__Array__core__Object.id;
if(var_listnode7 == NULL) {
var17 = 0;
} else {
if(cltype18 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11051);
fatal_exit(1);
}
{
var20 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var20;
var21 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var21:AAnnotation>*/
}
var_pannotationnode1 = var21;
var_node_list = var_pannotationnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction421> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction422#action for (self: ReduceAction422, Parser) */
void nitc__parser___nitc__parser__ReduceAction422___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode7 = var2;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11076);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype5 = type_nullable__nitc__AAtid.color;
idtype6 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11078);
fatal_exit(1);
}
var7 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var7, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var7:AAnnotPropdef>*/
}
var_ppropdefnode1 = var7;
var_node_list = var_ppropdefnode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction422> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction423#action for (self: ReduceAction423, Parser) */
void nitc__parser___nitc__parser__ReduceAction423___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode7 = var3;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11103);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype6 = type_nullable__nitc__AAtid.color;
idtype7 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11105);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist3;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nitc__AAnnotations.color;
idtype10 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pannotationsnode9&3)?type_info[((long)var_pannotationsnode9&3)]:var_pannotationsnode9->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11107);
fatal_exit(1);
}
var11 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var11, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var11:AAnnotPropdef>*/
}
var_ppropdefnode1 = var11;
var_node_list = var_ppropdefnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction423> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction424#action for (self: ReduceAction424, Parser) */
void nitc__parser___nitc__parser__ReduceAction424___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11135);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype9 = type_nullable__nitc__AAtid.color;
idtype10 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11137);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype12 = type_nullable__nitc__TOpar.color;
idtype13 = type_nullable__nitc__TOpar.id;
if(var_toparnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11139);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_core__Array__core__Object.color;
idtype16 = type_core__Array__core__Object.id;
if(var_listnode7 == NULL) {
var14 = 0;
} else {
if(cltype15 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11141);
fatal_exit(1);
}
{
var17 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var17;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype19 = type_nullable__nitc__TCpar.color;
idtype20 = type_nullable__nitc__TCpar.id;
if(var_tcparnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11144);
fatal_exit(1);
}
var21 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var21, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var21:AAnnotPropdef>*/
}
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction424> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction425#action for (self: ReduceAction425, Parser) */
void nitc__parser___nitc__parser__ReduceAction425___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode8 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11173);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nitc__AAtid.color;
idtype11 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11175);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype13 = type_nullable__nitc__TOpar.color;
idtype14 = type_nullable__nitc__TOpar.id;
if(var_toparnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_toparnode6&3)?type_info[((long)var_toparnode6&3)]:var_toparnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11177);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype16 = type_core__Array__core__Object.color;
idtype17 = type_core__Array__core__Object.id;
if(var_listnode7 == NULL) {
var15 = 0;
} else {
if(cltype16 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11179);
fatal_exit(1);
}
{
var18 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var18;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype20 = type_nullable__nitc__TCpar.color;
idtype21 = type_nullable__nitc__TCpar.id;
if(var_tcparnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11182);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nitc__AAnnotations.color;
idtype24 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11184);
fatal_exit(1);
}
var25 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var25, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var25:AAnnotPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction425> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction426#action for (self: ReduceAction426, Parser) */
void nitc__parser___nitc__parser__ReduceAction426___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : AAnnotPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAnnotPropdef */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode8 = var3;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
if(var_pdocnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11209);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype6 = type_nullable__nitc__AAtid.color;
idtype7 = type_nullable__nitc__AAtid.id;
if(var_patidnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_patidnode5&3)?type_info[((long)var_patidnode5&3)]:var_patidnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11211);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype9 = type_core__Array__core__Object.color;
idtype10 = type_core__Array__core__Object.id;
if(var_listnode7 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode7&3)?type_info[((long)var_listnode7&3)]:var_listnode7->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11213);
fatal_exit(1);
}
{
var11 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var11;
var12 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var12, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var12:AAnnotPropdef>*/
}
var_ppropdefnode1 = var12;
var_node_list = var_ppropdefnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction426> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction430#action for (self: ReduceAction430, Parser) */
void nitc__parser___nitc__parser__ReduceAction430___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ATypeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ATypeExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
if(var_ptypenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11236);
fatal_exit(1);
}
var2 = NEW_nitc__ATypeExpr(&type_nitc__ATypeExpr);
{
nitc__parser_prod___ATypeExpr___init_atypeexpr(var2, var_ptypenode2); /* Direct call parser_prod#ATypeExpr#init_atypeexpr on <var2:ATypeExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction430> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction433#action for (self: ReduceAction433, Parser) */
void nitc__parser___nitc__parser__ReduceAction433___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pmethidnode3 /* var pmethidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AMethidExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMethidExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11254);
fatal_exit(1);
}
var_pmethidnode3 = var_nodearraylist4;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype6 = type_nullable__nitc__AMethid.color;
idtype7 = type_nullable__nitc__AMethid.id;
if(var_pmethidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11256);
fatal_exit(1);
}
var8 = NEW_nitc__AMethidExpr(&type_nitc__AMethidExpr);
{
nitc__parser_prod___AMethidExpr___init_amethidexpr(var8, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod#AMethidExpr#init_amethidexpr on <var8:AMethidExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction433> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction434#action for (self: ReduceAction434, Parser) */
void nitc__parser___nitc__parser__ReduceAction434___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_pmethidnode3 /* var pmethidnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMethidExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMethidExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var1); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/
}
var_pexprnode2 = var1;
var_pmethidnode3 = var_nodearraylist1;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype = type_nullable__nitc__AMethid.color;
idtype = type_nullable__nitc__AMethid.id;
if(var_pmethidnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pmethidnode3&3)?type_info[((long)var_pmethidnode3&3)]:var_pmethidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11273);
fatal_exit(1);
}
var3 = NEW_nitc__AMethidExpr(&type_nitc__AMethidExpr);
{
nitc__parser_prod___AMethidExpr___init_amethidexpr(var3, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod#AMethidExpr#init_amethidexpr on <var3:AMethidExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction434> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction435#action for (self: ReduceAction435, Parser) */
void nitc__parser___nitc__parser__ReduceAction435___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode2 /* var pannotationsnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AAtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAtExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pannotationsnode2 = var_nodearraylist1;
/* <var_pannotationsnode2:nullable Object> isa nullable AAnnotations */
cltype = type_nullable__nitc__AAnnotations.color;
idtype = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_pannotationsnode2&3)?type_info[((long)var_pannotationsnode2&3)]:var_pannotationsnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_pannotationsnode2&3)?type_info[((long)var_pannotationsnode2&3)]:var_pannotationsnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11289);
fatal_exit(1);
}
var2 = NEW_nitc__AAtExpr(&type_nitc__AAtExpr);
{
nitc__parser_prod___AAtExpr___init_aatexpr(var2, var_pannotationsnode2); /* Direct call parser_prod#AAtExpr#init_aatexpr on <var2:AAtExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction435> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction436#action for (self: ReduceAction436, Parser) */
void nitc__parser___nitc__parser__ReduceAction436___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AIdAtid */;
val* var_patidnode1 /* var patidnode1: nullable AIdAtid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11304);
fatal_exit(1);
}
var2 = NEW_nitc__AIdAtid(&type_nitc__AIdAtid);
{
nitc__parser_prod___AIdAtid___init_aidatid(var2, var_tidnode2); /* Direct call parser_prod#AIdAtid#init_aidatid on <var2:AIdAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction436> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction437#action for (self: ReduceAction437, Parser) */
void nitc__parser___nitc__parser__ReduceAction437___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwexternnode2 /* var tkwexternnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AKwexternAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwexternAtid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nitc__TKwextern.color;
idtype = type_nullable__nitc__TKwextern.id;
if(var_tkwexternnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwexternnode2&3)?type_info[((long)var_tkwexternnode2&3)]:var_tkwexternnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11319);
fatal_exit(1);
}
var2 = NEW_nitc__AKwexternAtid(&type_nitc__AKwexternAtid);
{
nitc__parser_prod___AKwexternAtid___init_akwexternatid(var2, var_tkwexternnode2); /* Direct call parser_prod#AKwexternAtid#init_akwexternatid on <var2:AKwexternAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction437> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction438#action for (self: ReduceAction438, Parser) */
void nitc__parser___nitc__parser__ReduceAction438___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabstractnode2 /* var tkwabstractnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AKwabstractAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwabstractAtid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nitc__TKwabstract.color;
idtype = type_nullable__nitc__TKwabstract.id;
if(var_tkwabstractnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwabstractnode2&3)?type_info[((long)var_tkwabstractnode2&3)]:var_tkwabstractnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11334);
fatal_exit(1);
}
var2 = NEW_nitc__AKwabstractAtid(&type_nitc__AKwabstractAtid);
{
nitc__parser_prod___AKwabstractAtid___init_akwabstractatid(var2, var_tkwabstractnode2); /* Direct call parser_prod#AKwabstractAtid#init_akwabstractatid on <var2:AKwabstractAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction438> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction439#action for (self: ReduceAction439, Parser) */
void nitc__parser___nitc__parser__ReduceAction439___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
if(var_toparnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11353);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11355);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype11 = type_nullable__nitc__TCpar.color;
idtype12 = type_nullable__nitc__TCpar.id;
if(var_tcparnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11358);
fatal_exit(1);
}
var13 = NEW_nitc__AParExprs(&type_nitc__AParExprs);
{
nitc__parser_prod___AParExprs___init_aparexprs(var13, var_toparnode2, var_listnode4, var_tcparnode5); /* Direct call parser_prod#AParExprs#init_aparexprs on <var13:AParExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction439> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction440#action for (self: ReduceAction440, Parser) */
void nitc__parser___nitc__parser__ReduceAction440___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
if(var_toparnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11378);
fatal_exit(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype6 = type_nullable__nitc__TCpar.color;
idtype7 = type_nullable__nitc__TCpar.id;
if(var_tcparnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tcparnode4&3)?type_info[((long)var_tcparnode4&3)]:var_tcparnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11380);
fatal_exit(1);
}
var8 = NEW_nitc__AParExprs(&type_nitc__AParExprs);
{
nitc__parser_prod___AParExprs___init_aparexprs(var8, var_toparnode2, var_listnode3, var_tcparnode4); /* Direct call parser_prod#AParExprs#init_aparexprs on <var8:AParExprs>*/
}
var_pexprsnode1 = var8;
var_node_list = var_pexprsnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction440> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction442#action for (self: ReduceAction442, Parser) */
void nitc__parser___nitc__parser__ReduceAction442___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11398);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var8 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var8, var_listnode3); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode1 = var8;
var_node_list = var_pexprsnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction442> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction444#action for (self: ReduceAction444, Parser) */
void nitc__parser___nitc__parser__ReduceAction444___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var1 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Object]>*/
}
var_listnode2 = var;
var1 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var1, var_listnode2); /* Direct call parser_prod#AListExprs#init_alistexprs on <var1:AListExprs>*/
}
var_pexprsnode1 = var1;
var_node_list = var_pexprsnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction444> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction445#action for (self: ReduceAction445, Parser) */
void nitc__parser___nitc__parser__ReduceAction445___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ABraExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable ABraExprs */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nitc__TObra.color;
idtype = type_nullable__nitc__TObra.id;
if(var_tobranode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11433);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11435);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tcbranode5 = var_nodearraylist4;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype11 = type_nullable__nitc__TCbra.color;
idtype12 = type_nullable__nitc__TCbra.id;
if(var_tcbranode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tcbranode5&3)?type_info[((long)var_tcbranode5&3)]:var_tcbranode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tcbranode5&3)?type_info[((long)var_tcbranode5&3)]:var_tcbranode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11438);
fatal_exit(1);
}
var13 = NEW_nitc__ABraExprs(&type_nitc__ABraExprs);
{
nitc__parser_prod___ABraExprs___init_abraexprs(var13, var_tobranode2, var_listnode4, var_tcbranode5); /* Direct call parser_prod#ABraExprs#init_abraexprs on <var13:ABraExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction445> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction447#action for (self: ReduceAction447, Parser) */
void nitc__parser___nitc__parser__ReduceAction447___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist3;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11459);
fatal_exit(1);
}
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction447> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction448#action for (self: ReduceAction448, Parser) */
void nitc__parser___nitc__parser__ReduceAction448___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction448> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction449#action for (self: ReduceAction449, Parser) */
void nitc__parser___nitc__parser__ReduceAction449___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode2 = var5;
var_listnode1 = var_nodearraylist3;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11494);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var7;
var_node_list = var_listnode2;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction449> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction450#action for (self: ReduceAction450, Parser) */
void nitc__parser___nitc__parser__ReduceAction450___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11508);
fatal_exit(1);
}
{
var3 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var3;
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction450> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction451#action for (self: ReduceAction451, Parser) */
void nitc__parser___nitc__parser__ReduceAction451___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tidnode1 = var_nodearraylist1;
if (var_tidnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tidnode1&3)?class_info[((long)var_tidnode1&3)]:var_tidnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tidnode1, ((val*)NULL)); /* != on <var_tidnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_tidnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction451> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction452#action for (self: ReduceAction452, Parser) */
void nitc__parser___nitc__parser__ReduceAction452___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var6 /* : Array[Object] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11540);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist4;
{
var6 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var6;
if (var_tidnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var7 = var8;
}
if (var7){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction452> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction453#action for (self: ReduceAction453, Parser) */
void nitc__parser___nitc__parser__ReduceAction453___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_tidnode4 = var_nodearraylist1;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode4 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11558);
fatal_exit(1);
}
var3 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var3, ((val*)NULL), var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var3:AModuleName>*/
}
var_pmodulenamenode1 = var3;
var_node_list = var_pmodulenamenode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction453> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction454#action for (self: ReduceAction454, Parser) */
void nitc__parser___nitc__parser__ReduceAction454___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11577);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var4;
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype6 = type_nullable__nitc__TId.color;
idtype7 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11580);
fatal_exit(1);
}
var8 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var8, ((val*)NULL), var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction454> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction455#action for (self: ReduceAction455, Parser) */
void nitc__parser___nitc__parser__ReduceAction455___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nitc__TQuad.color;
idtype = type_nullable__nitc__TQuad.id;
if(var_tquadnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11600);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype6 = type_nullable__nitc__TId.color;
idtype7 = type_nullable__nitc__TId.id;
if(var_tidnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11602);
fatal_exit(1);
}
var8 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var8, var_tquadnode2, var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction455> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction456#action for (self: ReduceAction456, Parser) */
void nitc__parser___nitc__parser__ReduceAction456___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nitc__TQuad.color;
idtype = type_nullable__nitc__TQuad.id;
if(var_tquadnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tquadnode2&3)?type_info[((long)var_tquadnode2&3)]:var_tquadnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11623);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11625);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11628);
fatal_exit(1);
}
var13 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var13, var_tquadnode2, var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var13:AModuleName>*/
}
var_pmodulenamenode1 = var13;
var_node_list = var_pmodulenamenode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction456> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction457#action for (self: ReduceAction457, Parser) */
void nitc__parser___nitc__parser__ReduceAction457___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11646);
fatal_exit(1);
}
var3 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var3, var_listnode2, var_tclassidnode3); /* Direct call parser_prod#AQualified#init_aqualified on <var3:AQualified>*/
}
var_pqualifiednode1 = var3;
var_node_list = var_pqualifiednode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction457> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction458#action for (self: ReduceAction458, Parser) */
void nitc__parser___nitc__parser__ReduceAction458___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var_tclassidnode4 /* var tclassidnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11664);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var_tclassidnode4 = var_nodearraylist2;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nitc__TClassid.color;
idtype7 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11667);
fatal_exit(1);
}
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode3, var_tclassidnode4); /* Direct call parser_prod#AQualified#init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode1 = var8;
var_node_list = var_pqualifiednode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction458> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction459#action for (self: ReduceAction459, Parser) */
void nitc__parser___nitc__parser__ReduceAction459___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var4 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11684);
fatal_exit(1);
}
{
var3 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var3;
var4 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var4, var_listnode3, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode1 = var4;
var_node_list = var_pqualifiednode1;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction459> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction461#action for (self: ReduceAction461, Parser) */
void nitc__parser___nitc__parser__ReduceAction461___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode3 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11701);
fatal_exit(1);
}
var2 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var2, ((val*)NULL), var_tclassidnode3); /* Direct call parser_prod#AQclassid#init_aqclassid on <var2:AQclassid>*/
}
var_pqclassidnode1 = var2;
var_node_list = var_pqclassidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction461> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction462#action for (self: ReduceAction462, Parser) */
void nitc__parser___nitc__parser__ReduceAction462___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tclassidnode4 /* var tclassidnode4: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tclassidnode5 /* var tclassidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_tclassidnode4 = var_nodearraylist1;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode4 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11719);
fatal_exit(1);
}
var4 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var4, var_listnode3, var_tclassidnode4); /* Direct call parser_prod#AQualified#init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode2 = var4;
var_tclassidnode5 = var_nodearraylist2;
/* <var_tclassidnode5:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nitc__TClassid.color;
idtype7 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11725);
fatal_exit(1);
}
var8 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var8, var_pqualifiednode2, var_tclassidnode5); /* Direct call parser_prod#AQclassid#init_aqclassid on <var8:AQclassid>*/
}
var_pqclassidnode1 = var8;
var_node_list = var_pqclassidnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction462> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction463#action for (self: ReduceAction463, Parser) */
void nitc__parser___nitc__parser__ReduceAction463___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var_tclassidnode5 /* var tclassidnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11744);
fatal_exit(1);
}
{
var5 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var5;
var_tclassidnode5 = var_nodearraylist2;
/* <var_tclassidnode5:nullable Object> isa nullable TClassid */
cltype7 = type_nullable__nitc__TClassid.color;
idtype8 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode5 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11747);
fatal_exit(1);
}
var9 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var9, var_listnode4, var_tclassidnode5); /* Direct call parser_prod#AQualified#init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode2 = var9;
var_tclassidnode6 = var_nodearraylist3;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype11 = type_nullable__nitc__TClassid.color;
idtype12 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11753);
fatal_exit(1);
}
var13 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var13, var_pqualifiednode2, var_tclassidnode6); /* Direct call parser_prod#AQclassid#init_aqclassid on <var13:AQclassid>*/
}
var_pqclassidnode1 = var13;
var_node_list = var_pqclassidnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction463> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction464#action for (self: ReduceAction464, Parser) */
void nitc__parser___nitc__parser__ReduceAction464___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var5 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11771);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var4;
var5 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var5, var_listnode4, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var5:AQualified>*/
}
var_pqualifiednode2 = var5;
var_tclassidnode6 = var_nodearraylist2;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype7 = type_nullable__nitc__TClassid.color;
idtype8 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11778);
fatal_exit(1);
}
var9 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var9, var_pqualifiednode2, var_tclassidnode6); /* Direct call parser_prod#AQclassid#init_aqclassid on <var9:AQclassid>*/
}
var_pqclassidnode1 = var9;
var_node_list = var_pqclassidnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction464> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction465#action for (self: ReduceAction465, Parser) */
void nitc__parser___nitc__parser__ReduceAction465___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pmethidnode1 = var_nodearraylist1;
var_node_list = var_pmethidnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction465> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction466#action for (self: ReduceAction466, Parser) */
void nitc__parser___nitc__parser__ReduceAction466___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pmethidnode1 = var_nodearraylist2;
var_node_list = var_pmethidnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction466> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction467#action for (self: ReduceAction467, Parser) */
void nitc__parser___nitc__parser__ReduceAction467___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pmethidnode1 = var_nodearraylist3;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction467> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction469#action for (self: ReduceAction469, Parser) */
void nitc__parser___nitc__parser__ReduceAction469___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction469> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction470#action for (self: ReduceAction470, Parser) */
void nitc__parser___nitc__parser__ReduceAction470___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction470> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction472#action for (self: ReduceAction472, Parser) */
void nitc__parser___nitc__parser__ReduceAction472___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwendnode1 /* var tkwendnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwendnode1 = var_nodearraylist1;
var_node_list = var_tkwendnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction472> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction473#action for (self: ReduceAction473, Parser) */
void nitc__parser___nitc__parser__ReduceAction473___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction473> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
