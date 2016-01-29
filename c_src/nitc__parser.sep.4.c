#include "nitc__parser.sep.0.h"
/* method parser#ReduceAction185#action for (self: ReduceAction185, Parser) */
void nitc__parser___nitc__parser__ReduceAction185___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5357);
fatal_exit(1);
}
var8 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode6 = var8;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_core__Array__core__Object.color;
idtype11 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5360);
fatal_exit(1);
}
{
var12 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var12;
var_tclassidnode7 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5363);
fatal_exit(1);
}
var16 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var16, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var16:AQualified>*/
}
var_pqualifiednode4 = var16;
var_tidnode8 = var_nodearraylist6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5369);
fatal_exit(1);
}
var20 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var20, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var20:AQid>*/
}
var_pqidnode3 = var20;
var_pexprsnode9 = var_nodearraylist7;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5375);
fatal_exit(1);
}
var24 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var24, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var24:ACallExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction185> */
{
var26 = nitc___nitc__Parser___go_to(var_p, var25);
}
{
nitc___nitc__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction186#action for (self: ReduceAction186, Parser) */
void nitc__parser___nitc__parser__ReduceAction186___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5397);
fatal_exit(1);
}
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype9 = type_core__Array__core__Object.color;
idtype10 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5400);
fatal_exit(1);
}
{
var11 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var11;
var12 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var12, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var12:AQualified>*/
}
var_pqualifiednode4 = var12;
var_tidnode8 = var_nodearraylist5;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype14 = type_nullable__nitc__TId.color;
idtype15 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5407);
fatal_exit(1);
}
var16 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var16, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var16:AQid>*/
}
var_pqidnode3 = var16;
var_pexprsnode9 = var_nodearraylist6;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype18 = type_nullable__nitc__AExprs.color;
idtype19 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5413);
fatal_exit(1);
}
var20 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var20, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var20:ACallExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction186> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction187#action for (self: ReduceAction187, Parser) */
void nitc__parser___nitc__parser__ReduceAction187___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var2 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var2); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tidnode5 = var_nodearraylist1;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5432);
fatal_exit(1);
}
var4 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var4, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var4:AQid>*/
}
var_pqidnode3 = var4;
var_pexprsnode6 = var_nodearraylist2;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nitc__AExprs.color;
idtype7 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode6 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5438);
fatal_exit(1);
}
var8 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var8, var_pexprnode2, var_pqidnode3, var_pexprsnode6); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var8:ACallExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction187> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction188#action for (self: ReduceAction188, Parser) */
void nitc__parser___nitc__parser__ReduceAction188___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode8 /* var pexprsnode8: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var3 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var_tclassidnode6 = var_nodearraylist1;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5459);
fatal_exit(1);
}
var6 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var6, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var6:AQualified>*/
}
var_pqualifiednode4 = var6;
var_tidnode7 = var_nodearraylist2;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype8 = type_nullable__nitc__TId.color;
idtype9 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5465);
fatal_exit(1);
}
var10 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var10, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var10:AQid>*/
}
var_pqidnode3 = var10;
var_pexprsnode8 = var_nodearraylist3;
/* <var_pexprsnode8:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nitc__AExprs.color;
idtype13 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode8 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5471);
fatal_exit(1);
}
var14 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var14, var_pexprnode2, var_pqidnode3, var_pexprsnode8); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var14:ACallExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction188> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction189#action for (self: ReduceAction189, Parser) */
void nitc__parser___nitc__parser__ReduceAction189___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5493);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var7;
var_tclassidnode7 = var_nodearraylist2;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype9 = type_nullable__nitc__TClassid.color;
idtype10 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5496);
fatal_exit(1);
}
var11 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var11, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var11:AQualified>*/
}
var_pqualifiednode4 = var11;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype13 = type_nullable__nitc__TId.color;
idtype14 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5502);
fatal_exit(1);
}
var15 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var15, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var15:AQid>*/
}
var_pqidnode3 = var15;
var_pexprsnode9 = var_nodearraylist4;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype17 = type_nullable__nitc__AExprs.color;
idtype18 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5508);
fatal_exit(1);
}
var19 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var19, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var19:ACallExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction189> */
{
var21 = nitc___nitc__Parser___go_to(var_p, var20);
}
{
nitc___nitc__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction190#action for (self: ReduceAction190, Parser) */
void nitc__parser___nitc__parser__ReduceAction190___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var7 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var3 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var5 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5529);
fatal_exit(1);
}
{
var6 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var6;
var7 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var7, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var7:AQualified>*/
}
var_pqualifiednode4 = var7;
var_tidnode8 = var_nodearraylist2;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype9 = type_nullable__nitc__TId.color;
idtype10 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5536);
fatal_exit(1);
}
var11 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var11, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var11:AQid>*/
}
var_pqidnode3 = var11;
var_pexprsnode9 = var_nodearraylist3;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype13 = type_nullable__nitc__AExprs.color;
idtype14 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5542);
fatal_exit(1);
}
var15 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var15, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var15:ACallExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction190> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction191#action for (self: ReduceAction191, Parser) */
void nitc__parser___nitc__parser__ReduceAction191___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwsupernode3 /* var tkwsupernode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
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
var_pqualifiednode2 = var_nodearraylist1;
/* <var_pqualifiednode2:nullable Object> isa nullable AQualified */
cltype = type_nullable__nitc__AQualified.color;
idtype = type_nullable__nitc__AQualified.id;
if(var_pqualifiednode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5561);
fatal_exit(1);
}
var_tkwsupernode3 = var_nodearraylist2;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype5 = type_nullable__nitc__TKwsuper.color;
idtype6 = type_nullable__nitc__TKwsuper.id;
if(var_tkwsupernode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5563);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nitc__AExprs.color;
idtype9 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5565);
fatal_exit(1);
}
var10 = NEW_nitc__ASuperExpr(&type_nitc__ASuperExpr);
{
nitc__parser_prod___ASuperExpr___init_asuperexpr(var10, var_pqualifiednode2, var_tkwsupernode3, var_pexprsnode4); /* Direct call parser_prod#ASuperExpr#init_asuperexpr on <var10:ASuperExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction191> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction192#action for (self: ReduceAction192, Parser) */
void nitc__parser___nitc__parser__ReduceAction192___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5586);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype7 = type_nullable__nitc__TKwinit.color;
idtype8 = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5588);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable__nitc__AExprs.color;
idtype11 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5590);
fatal_exit(1);
}
var12 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var12, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var12:AInitExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction192> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction193#action for (self: ReduceAction193, Parser) */
void nitc__parser___nitc__parser__ReduceAction193___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var2 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var2); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nitc__TKwinit.color;
idtype = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5609);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype5 = type_nullable__nitc__AExprs.color;
idtype6 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5611);
fatal_exit(1);
}
var7 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var7, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var7:AInitExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction193> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction194#action for (self: ReduceAction194, Parser) */
void nitc__parser___nitc__parser__ReduceAction194___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5633);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist5;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype8 = type_nullable__nitc__TKwinit.color;
idtype9 = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5635);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable__nitc__AExprs.color;
idtype12 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5637);
fatal_exit(1);
}
var13 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var13, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var13:AInitExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction194> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction195#action for (self: ReduceAction195, Parser) */
void nitc__parser___nitc__parser__ReduceAction195___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5660);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist6;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype9 = type_nullable__nitc__TKwinit.color;
idtype10 = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5662);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nitc__AExprs.color;
idtype13 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5664);
fatal_exit(1);
}
var14 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var14, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var14:AInitExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction195> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction197#action for (self: ReduceAction197, Parser) */
void nitc__parser___nitc__parser__ReduceAction197___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var3 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nitc__TKwinit.color;
idtype = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5684);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nitc__AExprs.color;
idtype7 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5686);
fatal_exit(1);
}
var8 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var8:AInitExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction197> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction198#action for (self: ReduceAction198, Parser) */
void nitc__parser___nitc__parser__ReduceAction198___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tkwinitnode3 = var_nodearraylist3;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nitc__TKwinit.color;
idtype = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5707);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable__nitc__AExprs.color;
idtype8 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5709);
fatal_exit(1);
}
var9 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var9, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var9:AInitExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction198> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction200#action for (self: ReduceAction200, Parser) */
void nitc__parser___nitc__parser__ReduceAction200___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwdebugnode2 /* var tkwdebugnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tkwtypenode3 /* var tkwtypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ADebugTypeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADebugTypeExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_tkwdebugnode2 = var_nodearraylist1;
/* <var_tkwdebugnode2:nullable Object> isa nullable TKwdebug */
cltype = type_nullable__nitc__TKwdebug.color;
idtype = type_nullable__nitc__TKwdebug.id;
if(var_tkwdebugnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwdebugnode2&3)?type_info[((long)var_tkwdebugnode2&3)]:var_tkwdebugnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwdebugnode2&3)?type_info[((long)var_tkwdebugnode2&3)]:var_tkwdebugnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5730);
fatal_exit(1);
}
var_tkwtypenode3 = var_nodearraylist2;
/* <var_tkwtypenode3:nullable Object> isa nullable TKwtype */
cltype7 = type_nullable__nitc__TKwtype.color;
idtype8 = type_nullable__nitc__TKwtype.id;
if(var_tkwtypenode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tkwtypenode3&3)?type_info[((long)var_tkwtypenode3&3)]:var_tkwtypenode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwtypenode3&3)?type_info[((long)var_tkwtypenode3&3)]:var_tkwtypenode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5732);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5734);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5736);
fatal_exit(1);
}
var15 = NEW_nitc__ADebugTypeExpr(&type_nitc__ADebugTypeExpr);
{
nitc__parser_prod___ADebugTypeExpr___init_adebugtypeexpr(var15, var_tkwdebugnode2, var_tkwtypenode3, var_pexprnode4, var_ptypenode5); /* Direct call parser_prod#ADebugTypeExpr#init_adebugtypeexpr on <var15:ADebugTypeExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction200> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction201#action for (self: ReduceAction201, Parser) */
void nitc__parser___nitc__parser__ReduceAction201___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwlabelnode2 /* var tkwlabelnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALabel */;
val* var_plabelnode1 /* var plabelnode1: nullable ALabel */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable__nitc__TKwlabel.color;
idtype = type_nullable__nitc__TKwlabel.id;
if(var_tkwlabelnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5754);
fatal_exit(1);
}
var2 = NEW_nitc__ALabel(&type_nitc__ALabel);
{
nitc__parser_prod___ALabel___init_alabel(var2, var_tkwlabelnode2, ((val*)NULL)); /* Direct call parser_prod#ALabel#init_alabel on <var2:ALabel>*/
}
var_plabelnode1 = var2;
var_node_list = var_plabelnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction201> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction202#action for (self: ReduceAction202, Parser) */
void nitc__parser___nitc__parser__ReduceAction202___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwlabelnode2 /* var tkwlabelnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ALabel */;
val* var_plabelnode1 /* var plabelnode1: nullable ALabel */;
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
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable__nitc__TKwlabel.color;
idtype = type_nullable__nitc__TKwlabel.id;
if(var_tkwlabelnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwlabelnode2&3)?type_info[((long)var_tkwlabelnode2&3)]:var_tkwlabelnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5771);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype4 = type_nullable__nitc__TId.color;
idtype5 = type_nullable__nitc__TId.id;
if(var_tidnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5773);
fatal_exit(1);
}
var6 = NEW_nitc__ALabel(&type_nitc__ALabel);
{
nitc__parser_prod___ALabel___init_alabel(var6, var_tkwlabelnode2, var_tidnode3); /* Direct call parser_prod#ALabel#init_alabel on <var6:ALabel>*/
}
var_plabelnode1 = var6;
var_node_list = var_plabelnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction202> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction203#action for (self: ReduceAction203, Parser) */
void nitc__parser___nitc__parser__ReduceAction203___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nitc__TKwvar.color;
idtype = type_nullable__nitc__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5791);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable__nitc__TId.color;
idtype6 = type_nullable__nitc__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5793);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype8 = type_nullable__nitc__AType.color;
idtype9 = type_nullable__nitc__AType.id;
if(var_ptypenode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5795);
fatal_exit(1);
}
var10 = NEW_nitc__AVardeclExpr(&type_nitc__AVardeclExpr);
{
nitc__parser_prod___AVardeclExpr___init_avardeclexpr(var10, var_tkwvarnode2, var_tidnode3, var_ptypenode4, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var10:AVardeclExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction203> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction204#action for (self: ReduceAction204, Parser) */
void nitc__parser___nitc__parser__ReduceAction204___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nitc__TKwvar.color;
idtype = type_nullable__nitc__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5818);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype6 = type_nullable__nitc__TId.color;
idtype7 = type_nullable__nitc__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5820);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype9 = type_nullable__nitc__AType.color;
idtype10 = type_nullable__nitc__AType.id;
if(var_ptypenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5822);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype12 = type_nullable__nitc__AAnnotations.color;
idtype13 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5824);
fatal_exit(1);
}
var14 = NEW_nitc__AVardeclExpr(&type_nitc__AVardeclExpr);
{
nitc__parser_prod___AVardeclExpr___init_avardeclexpr(var14, var_tkwvarnode2, var_tidnode3, var_ptypenode4, ((val*)NULL), ((val*)NULL), var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var14:AVardeclExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction204> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction205#action for (self: ReduceAction205, Parser) */
void nitc__parser___nitc__parser__ReduceAction205___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nitc__TKwvar.color;
idtype = type_nullable__nitc__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5849);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable__nitc__TId.color;
idtype9 = type_nullable__nitc__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5851);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype11 = type_nullable__nitc__AType.color;
idtype12 = type_nullable__nitc__AType.id;
if(var_ptypenode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5853);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype14 = type_nullable__nitc__TAssign.color;
idtype15 = type_nullable__nitc__TAssign.id;
if(var_tassignnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5855);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nitc__AExpr.color;
idtype18 = type_nullable__nitc__AExpr.id;
if(var_pexprnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5857);
fatal_exit(1);
}
var19 = NEW_nitc__AVardeclExpr(&type_nitc__AVardeclExpr);
{
nitc__parser_prod___AVardeclExpr___init_avardeclexpr(var19, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, ((val*)NULL)); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var19:AVardeclExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction205> */
{
var21 = nitc___nitc__Parser___go_to(var_p, var20);
}
{
nitc___nitc__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction206#action for (self: ReduceAction206, Parser) */
void nitc__parser___nitc__parser__ReduceAction206___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nitc__TKwvar.color;
idtype = type_nullable__nitc__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwvarnode2&3)?type_info[((long)var_tkwvarnode2&3)]:var_tkwvarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5883);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nitc__TId.color;
idtype10 = type_nullable__nitc__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5885);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype12 = type_nullable__nitc__AType.color;
idtype13 = type_nullable__nitc__AType.id;
if(var_ptypenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5887);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype15 = type_nullable__nitc__TAssign.color;
idtype16 = type_nullable__nitc__TAssign.id;
if(var_tassignnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5889);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nitc__AExpr.color;
idtype19 = type_nullable__nitc__AExpr.id;
if(var_pexprnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5891);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable__nitc__AAnnotations.color;
idtype22 = type_nullable__nitc__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5893);
fatal_exit(1);
}
var23 = NEW_nitc__AVardeclExpr(&type_nitc__AVardeclExpr);
{
nitc__parser_prod___AVardeclExpr___init_avardeclexpr(var23, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var23:AVardeclExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction206> */
{
var25 = nitc___nitc__Parser___go_to(var_p, var24);
}
{
nitc___nitc__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction207#action for (self: ReduceAction207, Parser) */
void nitc__parser___nitc__parser__ReduceAction207___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5919);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nitc__TAttrid.color;
idtype10 = type_nullable__nitc__TAttrid.id;
if(var_tattridnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5921);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist6;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype12 = type_nullable__nitc__TAssign.color;
idtype13 = type_nullable__nitc__TAssign.id;
if(var_tassignnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5923);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5925);
fatal_exit(1);
}
var17 = NEW_nitc__AAttrAssignExpr(&type_nitc__AAttrAssignExpr);
{
nitc__parser_prod___AAttrAssignExpr___init_aattrassignexpr(var17, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#AAttrAssignExpr#init_aattrassignexpr on <var17:AAttrAssignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction207> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction208#action for (self: ReduceAction208, Parser) */
void nitc__parser___nitc__parser__ReduceAction208___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable__nitc__TAttrid.color;
idtype = type_nullable__nitc__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5947);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype7 = type_nullable__nitc__TAssign.color;
idtype8 = type_nullable__nitc__TAssign.id;
if(var_tassignnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5949);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nitc__AExpr.color;
idtype11 = type_nullable__nitc__AExpr.id;
if(var_pexprnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5951);
fatal_exit(1);
}
var12 = NEW_nitc__AAttrAssignExpr(&type_nitc__AAttrAssignExpr);
{
nitc__parser_prod___AAttrAssignExpr___init_aattrassignexpr(var12, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#AAttrAssignExpr#init_aattrassignexpr on <var12:AAttrAssignExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction208> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction209#action for (self: ReduceAction209, Parser) */
void nitc__parser___nitc__parser__ReduceAction209___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tassignnode7 /* var tassignnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5975);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype9 = type_nullable__nitc__TId.color;
idtype10 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5977);
fatal_exit(1);
}
var11 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var11, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var11:AQid>*/
}
var_pqidnode3 = var11;
var_pexprsnode6 = var_nodearraylist5;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype13 = type_nullable__nitc__AExprs.color;
idtype14 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5983);
fatal_exit(1);
}
var_tassignnode7 = var_nodearraylist6;
/* <var_tassignnode7:nullable Object> isa nullable TAssign */
cltype16 = type_nullable__nitc__TAssign.color;
idtype17 = type_nullable__nitc__TAssign.id;
if(var_tassignnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tassignnode7&3)?type_info[((long)var_tassignnode7&3)]:var_tassignnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tassignnode7&3)?type_info[((long)var_tassignnode7&3)]:var_tassignnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5985);
fatal_exit(1);
}
var_pexprnode8 = var_nodearraylist7;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nitc__AExpr.color;
idtype20 = type_nullable__nitc__AExpr.id;
if(var_pexprnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5987);
fatal_exit(1);
}
var21 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var21, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_tassignnode7, var_pexprnode8); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var21:ACallAssignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction209> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction210#action for (self: ReduceAction210, Parser) */
void nitc__parser___nitc__parser__ReduceAction210___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var_tassignnode8 /* var tassignnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6011);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype8 = type_nullable__nitc__TId.color;
idtype9 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6013);
fatal_exit(1);
}
var10 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var10, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var10:AQid>*/
}
var_pqidnode3 = var10;
var11 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode7 = var11;
var12 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var12, var_listnode7); /* Direct call parser_prod#AListExprs#init_alistexprs on <var12:AListExprs>*/
}
var_pexprsnode6 = var12;
var_tassignnode8 = var_nodearraylist5;
/* <var_tassignnode8:nullable Object> isa nullable TAssign */
cltype14 = type_nullable__nitc__TAssign.color;
idtype15 = type_nullable__nitc__TAssign.id;
if(var_tassignnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tassignnode8&3)?type_info[((long)var_tassignnode8&3)]:var_tassignnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tassignnode8&3)?type_info[((long)var_tassignnode8&3)]:var_tassignnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6023);
fatal_exit(1);
}
var_pexprnode9 = var_nodearraylist6;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nitc__AExpr.color;
idtype18 = type_nullable__nitc__AExpr.id;
if(var_pexprnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6025);
fatal_exit(1);
}
var19 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var19, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_tassignnode8, var_pexprnode9); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var19:ACallAssignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction210> */
{
var21 = nitc___nitc__Parser___go_to(var_p, var20);
}
{
nitc___nitc__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction211#action for (self: ReduceAction211, Parser) */
void nitc__parser___nitc__parser__ReduceAction211___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode8 /* var pexprsnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tassignnode9 /* var tassignnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6051);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode5 = var9;
var_tclassidnode6 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6054);
fatal_exit(1);
}
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode7 = var_nodearraylist5;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6060);
fatal_exit(1);
}
var17 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var17, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var17:AQid>*/
}
var_pqidnode3 = var17;
var_pexprsnode8 = var_nodearraylist6;
/* <var_pexprsnode8:nullable Object> isa nullable AExprs */
cltype19 = type_nullable__nitc__AExprs.color;
idtype20 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6066);
fatal_exit(1);
}
var_tassignnode9 = var_nodearraylist7;
/* <var_tassignnode9:nullable Object> isa nullable TAssign */
cltype22 = type_nullable__nitc__TAssign.color;
idtype23 = type_nullable__nitc__TAssign.id;
if(var_tassignnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tassignnode9&3)?type_info[((long)var_tassignnode9&3)]:var_tassignnode9->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tassignnode9&3)?type_info[((long)var_tassignnode9&3)]:var_tassignnode9->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6068);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nitc__AExpr.color;
idtype26 = type_nullable__nitc__AExpr.id;
if(var_pexprnode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6070);
fatal_exit(1);
}
var27 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var27, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_tassignnode9, var_pexprnode10); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var27:ACallAssignExpr>*/
}
var_pexprnode1 = var27;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction211> */
{
var29 = nitc___nitc__Parser___go_to(var_p, var28);
}
{
nitc___nitc__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction212#action for (self: ReduceAction212, Parser) */
void nitc__parser___nitc__parser__ReduceAction212___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var17 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var18 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
val* var_tassignnode10 /* var tassignnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6095);
fatal_exit(1);
}
var8 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var_tclassidnode6 = var_nodearraylist4;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype10 = type_nullable__nitc__TClassid.color;
idtype11 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6098);
fatal_exit(1);
}
var12 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var12, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var12:AQualified>*/
}
var_pqualifiednode4 = var12;
var_tidnode7 = var_nodearraylist5;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype14 = type_nullable__nitc__TId.color;
idtype15 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6104);
fatal_exit(1);
}
var16 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var16, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var16:AQid>*/
}
var_pqidnode3 = var16;
var17 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var17); /* Direct call array#Array#init on <var17:Array[Object]>*/
}
var_listnode9 = var17;
var18 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var18, var_listnode9); /* Direct call parser_prod#AListExprs#init_alistexprs on <var18:AListExprs>*/
}
var_pexprsnode8 = var18;
var_tassignnode10 = var_nodearraylist6;
/* <var_tassignnode10:nullable Object> isa nullable TAssign */
cltype20 = type_nullable__nitc__TAssign.color;
idtype21 = type_nullable__nitc__TAssign.id;
if(var_tassignnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6114);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist7;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nitc__AExpr.color;
idtype24 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6116);
fatal_exit(1);
}
var25 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var25, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_tassignnode10, var_pexprnode11); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var25:ACallAssignExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction212> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction213#action for (self: ReduceAction213, Parser) */
void nitc__parser___nitc__parser__ReduceAction213___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tassignnode10 /* var tassignnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var33 /* : Int */;
long var34 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6143);
fatal_exit(1);
}
var10 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode6 = var10;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6146);
fatal_exit(1);
}
{
var14 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var14;
var_tclassidnode7 = var_nodearraylist5;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype16 = type_nullable__nitc__TClassid.color;
idtype17 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6149);
fatal_exit(1);
}
var18 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var18, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var18:AQualified>*/
}
var_pqualifiednode4 = var18;
var_tidnode8 = var_nodearraylist6;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype20 = type_nullable__nitc__TId.color;
idtype21 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6155);
fatal_exit(1);
}
var22 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var22, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var22:AQid>*/
}
var_pqidnode3 = var22;
var_pexprsnode9 = var_nodearraylist7;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype24 = type_nullable__nitc__AExprs.color;
idtype25 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6161);
fatal_exit(1);
}
var_tassignnode10 = var_nodearraylist8;
/* <var_tassignnode10:nullable Object> isa nullable TAssign */
cltype27 = type_nullable__nitc__TAssign.color;
idtype28 = type_nullable__nitc__TAssign.id;
if(var_tassignnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6163);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist9;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nitc__AExpr.color;
idtype31 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6165);
fatal_exit(1);
}
var32 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var32, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode10, var_pexprnode11); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var32:ACallAssignExpr>*/
}
var_pexprnode1 = var32;
var_node_list = var_pexprnode1;
var33 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction213> */
{
var34 = nitc___nitc__Parser___go_to(var_p, var33);
}
{
nitc___nitc__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction214#action for (self: ReduceAction214, Parser) */
void nitc__parser___nitc__parser__ReduceAction214___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var9 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var22 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var23 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_tassignnode11 /* var tassignnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var31 /* : Int */;
long var32 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6191);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode6 = var9;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_core__Array__core__Object.color;
idtype12 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6194);
fatal_exit(1);
}
{
var13 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var13;
var_tclassidnode7 = var_nodearraylist5;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype15 = type_nullable__nitc__TClassid.color;
idtype16 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6197);
fatal_exit(1);
}
var17 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var17, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var17:AQualified>*/
}
var_pqualifiednode4 = var17;
var_tidnode8 = var_nodearraylist6;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype19 = type_nullable__nitc__TId.color;
idtype20 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6203);
fatal_exit(1);
}
var21 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var21, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var21:AQid>*/
}
var_pqidnode3 = var21;
var22 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var22); /* Direct call array#Array#init on <var22:Array[Object]>*/
}
var_listnode10 = var22;
var23 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var23, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var23:AListExprs>*/
}
var_pexprsnode9 = var23;
var_tassignnode11 = var_nodearraylist7;
/* <var_tassignnode11:nullable Object> isa nullable TAssign */
cltype25 = type_nullable__nitc__TAssign.color;
idtype26 = type_nullable__nitc__TAssign.id;
if(var_tassignnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6213);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype28 = type_nullable__nitc__AExpr.color;
idtype29 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6215);
fatal_exit(1);
}
var30 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var30, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode11, var_pexprnode12); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var30:ACallAssignExpr>*/
}
var_pexprnode1 = var30;
var_node_list = var_pexprnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction214> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction215#action for (self: ReduceAction215, Parser) */
void nitc__parser___nitc__parser__ReduceAction215___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var9 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tassignnode10 /* var tassignnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var29 /* : Int */;
long var30 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6241);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode6 = var9;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_core__Array__core__Object.color;
idtype12 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6244);
fatal_exit(1);
}
{
var13 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var13;
var14 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var14, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var14:AQualified>*/
}
var_pqualifiednode4 = var14;
var_tidnode8 = var_nodearraylist5;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype16 = type_nullable__nitc__TId.color;
idtype17 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6251);
fatal_exit(1);
}
var18 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var18, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var18:AQid>*/
}
var_pqidnode3 = var18;
var_pexprsnode9 = var_nodearraylist6;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype20 = type_nullable__nitc__AExprs.color;
idtype21 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6257);
fatal_exit(1);
}
var_tassignnode10 = var_nodearraylist7;
/* <var_tassignnode10:nullable Object> isa nullable TAssign */
cltype23 = type_nullable__nitc__TAssign.color;
idtype24 = type_nullable__nitc__TAssign.id;
if(var_tassignnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6259);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist8;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nitc__AExpr.color;
idtype27 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6261);
fatal_exit(1);
}
var28 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var28, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode10, var_pexprnode11); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var28:ACallAssignExpr>*/
}
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction215> */
{
var30 = nitc___nitc__Parser___go_to(var_p, var29);
}
{
nitc___nitc__Parser___push(var_p, var30, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction216#action for (self: ReduceAction216, Parser) */
void nitc__parser___nitc__parser__ReduceAction216___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var18 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var19 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_tassignnode11 /* var tassignnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6286);
fatal_exit(1);
}
var8 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode6 = var8;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_core__Array__core__Object.color;
idtype11 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6289);
fatal_exit(1);
}
{
var12 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var12;
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode8 = var_nodearraylist5;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6296);
fatal_exit(1);
}
var17 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var17, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var17:AQid>*/
}
var_pqidnode3 = var17;
var18 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var18); /* Direct call array#Array#init on <var18:Array[Object]>*/
}
var_listnode10 = var18;
var19 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var19, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var19:AListExprs>*/
}
var_pexprsnode9 = var19;
var_tassignnode11 = var_nodearraylist6;
/* <var_tassignnode11:nullable Object> isa nullable TAssign */
cltype21 = type_nullable__nitc__TAssign.color;
idtype22 = type_nullable__nitc__TAssign.id;
if(var_tassignnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6306);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist7;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype24 = type_nullable__nitc__AExpr.color;
idtype25 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6308);
fatal_exit(1);
}
var26 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var26, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode11, var_pexprnode12); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var26:ACallAssignExpr>*/
}
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var27 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction216> */
{
var28 = nitc___nitc__Parser___go_to(var_p, var27);
}
{
nitc___nitc__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction217#action for (self: ReduceAction217, Parser) */
void nitc__parser___nitc__parser__ReduceAction217___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tassignnode7 /* var tassignnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode5 = var_nodearraylist1;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6331);
fatal_exit(1);
}
var6 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var6, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var6:AQid>*/
}
var_pqidnode3 = var6;
var_pexprsnode6 = var_nodearraylist2;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nitc__AExprs.color;
idtype9 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6337);
fatal_exit(1);
}
var_tassignnode7 = var_nodearraylist3;
/* <var_tassignnode7:nullable Object> isa nullable TAssign */
cltype11 = type_nullable__nitc__TAssign.color;
idtype12 = type_nullable__nitc__TAssign.id;
if(var_tassignnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tassignnode7&3)?type_info[((long)var_tassignnode7&3)]:var_tassignnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tassignnode7&3)?type_info[((long)var_tassignnode7&3)]:var_tassignnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6339);
fatal_exit(1);
}
var_pexprnode8 = var_nodearraylist4;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nitc__AExpr.color;
idtype15 = type_nullable__nitc__AExpr.id;
if(var_pexprnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6341);
fatal_exit(1);
}
var16 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var16, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_tassignnode7, var_pexprnode8); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var16:ACallAssignExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction217> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction218#action for (self: ReduceAction218, Parser) */
void nitc__parser___nitc__parser__ReduceAction218___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var_tassignnode8 /* var tassignnode8: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var3 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tidnode5 = var_nodearraylist1;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6363);
fatal_exit(1);
}
var5 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var5, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var5:AQid>*/
}
var_pqidnode3 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode7 = var6;
var7 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var7, var_listnode7); /* Direct call parser_prod#AListExprs#init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode6 = var7;
var_tassignnode8 = var_nodearraylist2;
/* <var_tassignnode8:nullable Object> isa nullable TAssign */
cltype9 = type_nullable__nitc__TAssign.color;
idtype10 = type_nullable__nitc__TAssign.id;
if(var_tassignnode8 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tassignnode8&3)?type_info[((long)var_tassignnode8&3)]:var_tassignnode8->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tassignnode8&3)?type_info[((long)var_tassignnode8&3)]:var_tassignnode8->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6373);
fatal_exit(1);
}
var_pexprnode9 = var_nodearraylist3;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nitc__AExpr.color;
idtype13 = type_nullable__nitc__AExpr.id;
if(var_pexprnode9 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6375);
fatal_exit(1);
}
var14 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var14, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_tassignnode8, var_pexprnode9); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var14:ACallAssignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction218> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction219#action for (self: ReduceAction219, Parser) */
void nitc__parser___nitc__parser__ReduceAction219___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode8 /* var pexprsnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tassignnode9 /* var tassignnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var5 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var_tclassidnode6 = var_nodearraylist1;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6400);
fatal_exit(1);
}
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode4 = var8;
var_tidnode7 = var_nodearraylist2;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype10 = type_nullable__nitc__TId.color;
idtype11 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6406);
fatal_exit(1);
}
var12 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var12, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var12:AQid>*/
}
var_pqidnode3 = var12;
var_pexprsnode8 = var_nodearraylist3;
/* <var_pexprsnode8:nullable Object> isa nullable AExprs */
cltype14 = type_nullable__nitc__AExprs.color;
idtype15 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6412);
fatal_exit(1);
}
var_tassignnode9 = var_nodearraylist4;
/* <var_tassignnode9:nullable Object> isa nullable TAssign */
cltype17 = type_nullable__nitc__TAssign.color;
idtype18 = type_nullable__nitc__TAssign.id;
if(var_tassignnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tassignnode9&3)?type_info[((long)var_tassignnode9&3)]:var_tassignnode9->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tassignnode9&3)?type_info[((long)var_tassignnode9&3)]:var_tassignnode9->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6414);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist5;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype20 = type_nullable__nitc__AExpr.color;
idtype21 = type_nullable__nitc__AExpr.id;
if(var_pexprnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6416);
fatal_exit(1);
}
var22 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var22, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_tassignnode9, var_pexprnode10); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var22:ACallAssignExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction219> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction220#action for (self: ReduceAction220, Parser) */
void nitc__parser___nitc__parser__ReduceAction220___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var12 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var13 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
val* var_tassignnode10 /* var tassignnode10: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var_tclassidnode6 = var_nodearraylist1;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6440);
fatal_exit(1);
}
var7 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var7, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var7:AQualified>*/
}
var_pqualifiednode4 = var7;
var_tidnode7 = var_nodearraylist2;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype9 = type_nullable__nitc__TId.color;
idtype10 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6446);
fatal_exit(1);
}
var11 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var11, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var11:AQid>*/
}
var_pqidnode3 = var11;
var12 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode9 = var12;
var13 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var13, var_listnode9); /* Direct call parser_prod#AListExprs#init_alistexprs on <var13:AListExprs>*/
}
var_pexprsnode8 = var13;
var_tassignnode10 = var_nodearraylist3;
/* <var_tassignnode10:nullable Object> isa nullable TAssign */
cltype15 = type_nullable__nitc__TAssign.color;
idtype16 = type_nullable__nitc__TAssign.id;
if(var_tassignnode10 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6456);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist4;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nitc__AExpr.color;
idtype19 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6458);
fatal_exit(1);
}
var20 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var20, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_tassignnode10, var_pexprnode11); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var20:ACallAssignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction220> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction221#action for (self: ReduceAction221, Parser) */
void nitc__parser___nitc__parser__ReduceAction221___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tassignnode10 /* var tassignnode10: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var6 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var6); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/
}
var_pexprnode2 = var6;
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6484);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var_tclassidnode7 = var_nodearraylist2;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype11 = type_nullable__nitc__TClassid.color;
idtype12 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6487);
fatal_exit(1);
}
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6493);
fatal_exit(1);
}
var17 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var17, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var17:AQid>*/
}
var_pqidnode3 = var17;
var_pexprsnode9 = var_nodearraylist4;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype19 = type_nullable__nitc__AExprs.color;
idtype20 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6499);
fatal_exit(1);
}
var_tassignnode10 = var_nodearraylist5;
/* <var_tassignnode10:nullable Object> isa nullable TAssign */
cltype22 = type_nullable__nitc__TAssign.color;
idtype23 = type_nullable__nitc__TAssign.id;
if(var_tassignnode10 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6501);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist6;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nitc__AExpr.color;
idtype26 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6503);
fatal_exit(1);
}
var27 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var27, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode10, var_pexprnode11); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var27:ACallAssignExpr>*/
}
var_pexprnode1 = var27;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction221> */
{
var29 = nitc___nitc__Parser___go_to(var_p, var28);
}
{
nitc___nitc__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction222#action for (self: ReduceAction222, Parser) */
void nitc__parser___nitc__parser__ReduceAction222___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var17 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var18 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_tassignnode11 /* var tassignnode11: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var5 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6528);
fatal_exit(1);
}
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var8;
var_tclassidnode7 = var_nodearraylist2;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype10 = type_nullable__nitc__TClassid.color;
idtype11 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6531);
fatal_exit(1);
}
var12 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var12, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var12:AQualified>*/
}
var_pqualifiednode4 = var12;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype14 = type_nullable__nitc__TId.color;
idtype15 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6537);
fatal_exit(1);
}
var16 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var16, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var16:AQid>*/
}
var_pqidnode3 = var16;
var17 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var17); /* Direct call array#Array#init on <var17:Array[Object]>*/
}
var_listnode10 = var17;
var18 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var18, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var18:AListExprs>*/
}
var_pexprsnode9 = var18;
var_tassignnode11 = var_nodearraylist4;
/* <var_tassignnode11:nullable Object> isa nullable TAssign */
cltype20 = type_nullable__nitc__TAssign.color;
idtype21 = type_nullable__nitc__TAssign.id;
if(var_tassignnode11 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6547);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist5;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nitc__AExpr.color;
idtype24 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6549);
fatal_exit(1);
}
var25 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var25, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode11, var_pexprnode12); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var25:ACallAssignExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction222> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction223#action for (self: ReduceAction223, Parser) */
void nitc__parser___nitc__parser__ReduceAction223___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var9 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tassignnode10 /* var tassignnode10: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6574);
fatal_exit(1);
}
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var8;
var9 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var9, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode4 = var9;
var_tidnode8 = var_nodearraylist2;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6581);
fatal_exit(1);
}
var13 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var13, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var13:AQid>*/
}
var_pqidnode3 = var13;
var_pexprsnode9 = var_nodearraylist3;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype15 = type_nullable__nitc__AExprs.color;
idtype16 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6587);
fatal_exit(1);
}
var_tassignnode10 = var_nodearraylist4;
/* <var_tassignnode10:nullable Object> isa nullable TAssign */
cltype18 = type_nullable__nitc__TAssign.color;
idtype19 = type_nullable__nitc__TAssign.id;
if(var_tassignnode10 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tassignnode10&3)?type_info[((long)var_tassignnode10&3)]:var_tassignnode10->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6589);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist5;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype21 = type_nullable__nitc__AExpr.color;
idtype22 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6591);
fatal_exit(1);
}
var23 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var23, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode10, var_pexprnode11); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var23:ACallAssignExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction223> */
{
var25 = nitc___nitc__Parser___go_to(var_p, var24);
}
{
nitc___nitc__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction224#action for (self: ReduceAction224, Parser) */
void nitc__parser___nitc__parser__ReduceAction224___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var8 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var13 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_tassignnode11 /* var tassignnode11: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6615);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var7;
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode4 = var8;
var_tidnode8 = var_nodearraylist2;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype10 = type_nullable__nitc__TId.color;
idtype11 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6622);
fatal_exit(1);
}
var12 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var12, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var12:AQid>*/
}
var_pqidnode3 = var12;
var13 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode10 = var13;
var14 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var14, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode9 = var14;
var_tassignnode11 = var_nodearraylist3;
/* <var_tassignnode11:nullable Object> isa nullable TAssign */
cltype16 = type_nullable__nitc__TAssign.color;
idtype17 = type_nullable__nitc__TAssign.id;
if(var_tassignnode11 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tassignnode11&3)?type_info[((long)var_tassignnode11&3)]:var_tassignnode11->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6632);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist4;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nitc__AExpr.color;
idtype20 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6634);
fatal_exit(1);
}
var21 = NEW_nitc__ACallAssignExpr(&type_nitc__ACallAssignExpr);
{
nitc__parser_prod___ACallAssignExpr___init_acallassignexpr(var21, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_tassignnode11, var_pexprnode12); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var21:ACallAssignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction224> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction225#action for (self: ReduceAction225, Parser) */
void nitc__parser___nitc__parser__ReduceAction225___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ABraAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraAssignExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6656);
fatal_exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nitc__AExprs.color;
idtype7 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6658);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype9 = type_nullable__nitc__TAssign.color;
idtype10 = type_nullable__nitc__TAssign.id;
if(var_tassignnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6660);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nitc__AExpr.color;
idtype13 = type_nullable__nitc__AExpr.id;
if(var_pexprnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6662);
fatal_exit(1);
}
var14 = NEW_nitc__ABraAssignExpr(&type_nitc__ABraAssignExpr);
{
nitc__parser_prod___ABraAssignExpr___init_abraassignexpr(var14, var_pexprnode2, var_pexprsnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#ABraAssignExpr#init_abraassignexpr on <var14:ABraAssignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction225> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction226#action for (self: ReduceAction226, Parser) */
void nitc__parser___nitc__parser__ReduceAction226___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6686);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nitc__TAttrid.color;
idtype10 = type_nullable__nitc__TAttrid.id;
if(var_tattridnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6688);
fatal_exit(1);
}
var_passignopnode4 = var_nodearraylist6;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype12 = type_nullable__nitc__AAssignOp.color;
idtype13 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_passignopnode4&3)?type_info[((long)var_passignopnode4&3)]:var_passignopnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_passignopnode4&3)?type_info[((long)var_passignopnode4&3)]:var_passignopnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6690);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6692);
fatal_exit(1);
}
var17 = NEW_nitc__AAttrReassignExpr(&type_nitc__AAttrReassignExpr);
{
nitc__parser_prod___AAttrReassignExpr___init_aattrreassignexpr(var17, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#AAttrReassignExpr#init_aattrreassignexpr on <var17:AAttrReassignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction226> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction227#action for (self: ReduceAction227, Parser) */
void nitc__parser___nitc__parser__ReduceAction227___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable__nitc__TAttrid.color;
idtype = type_nullable__nitc__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6714);
fatal_exit(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype7 = type_nullable__nitc__AAssignOp.color;
idtype8 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_passignopnode4&3)?type_info[((long)var_passignopnode4&3)]:var_passignopnode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_passignopnode4&3)?type_info[((long)var_passignopnode4&3)]:var_passignopnode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6716);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nitc__AExpr.color;
idtype11 = type_nullable__nitc__AExpr.id;
if(var_pexprnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6718);
fatal_exit(1);
}
var12 = NEW_nitc__AAttrReassignExpr(&type_nitc__AAttrReassignExpr);
{
nitc__parser_prod___AAttrReassignExpr___init_aattrreassignexpr(var12, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#AAttrReassignExpr#init_aattrreassignexpr on <var12:AAttrReassignExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction227> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction228#action for (self: ReduceAction228, Parser) */
void nitc__parser___nitc__parser__ReduceAction228___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_passignopnode7 /* var passignopnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6742);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype9 = type_nullable__nitc__TId.color;
idtype10 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6744);
fatal_exit(1);
}
var11 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var11, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var11:AQid>*/
}
var_pqidnode3 = var11;
var_pexprsnode6 = var_nodearraylist5;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype13 = type_nullable__nitc__AExprs.color;
idtype14 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6750);
fatal_exit(1);
}
var_passignopnode7 = var_nodearraylist6;
/* <var_passignopnode7:nullable Object> isa nullable AAssignOp */
cltype16 = type_nullable__nitc__AAssignOp.color;
idtype17 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_passignopnode7&3)?type_info[((long)var_passignopnode7&3)]:var_passignopnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_passignopnode7&3)?type_info[((long)var_passignopnode7&3)]:var_passignopnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6752);
fatal_exit(1);
}
var_pexprnode8 = var_nodearraylist7;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nitc__AExpr.color;
idtype20 = type_nullable__nitc__AExpr.id;
if(var_pexprnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6754);
fatal_exit(1);
}
var21 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var21, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_passignopnode7, var_pexprnode8); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var21:ACallReassignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction228> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction229#action for (self: ReduceAction229, Parser) */
void nitc__parser___nitc__parser__ReduceAction229___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var_passignopnode8 /* var passignopnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6778);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype8 = type_nullable__nitc__TId.color;
idtype9 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6780);
fatal_exit(1);
}
var10 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var10, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var10:AQid>*/
}
var_pqidnode3 = var10;
var11 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode7 = var11;
var12 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var12, var_listnode7); /* Direct call parser_prod#AListExprs#init_alistexprs on <var12:AListExprs>*/
}
var_pexprsnode6 = var12;
var_passignopnode8 = var_nodearraylist5;
/* <var_passignopnode8:nullable Object> isa nullable AAssignOp */
cltype14 = type_nullable__nitc__AAssignOp.color;
idtype15 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_passignopnode8&3)?type_info[((long)var_passignopnode8&3)]:var_passignopnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_passignopnode8&3)?type_info[((long)var_passignopnode8&3)]:var_passignopnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6790);
fatal_exit(1);
}
var_pexprnode9 = var_nodearraylist6;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nitc__AExpr.color;
idtype18 = type_nullable__nitc__AExpr.id;
if(var_pexprnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6792);
fatal_exit(1);
}
var19 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var19, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_passignopnode8, var_pexprnode9); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var19:ACallReassignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction229> */
{
var21 = nitc___nitc__Parser___go_to(var_p, var20);
}
{
nitc___nitc__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction230#action for (self: ReduceAction230, Parser) */
void nitc__parser___nitc__parser__ReduceAction230___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode8 /* var pexprsnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_passignopnode9 /* var passignopnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6818);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode5 = var9;
var_tclassidnode6 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6821);
fatal_exit(1);
}
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode7 = var_nodearraylist5;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6827);
fatal_exit(1);
}
var17 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var17, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var17:AQid>*/
}
var_pqidnode3 = var17;
var_pexprsnode8 = var_nodearraylist6;
/* <var_pexprsnode8:nullable Object> isa nullable AExprs */
cltype19 = type_nullable__nitc__AExprs.color;
idtype20 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6833);
fatal_exit(1);
}
var_passignopnode9 = var_nodearraylist7;
/* <var_passignopnode9:nullable Object> isa nullable AAssignOp */
cltype22 = type_nullable__nitc__AAssignOp.color;
idtype23 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_passignopnode9&3)?type_info[((long)var_passignopnode9&3)]:var_passignopnode9->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_passignopnode9&3)?type_info[((long)var_passignopnode9&3)]:var_passignopnode9->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6835);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nitc__AExpr.color;
idtype26 = type_nullable__nitc__AExpr.id;
if(var_pexprnode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6837);
fatal_exit(1);
}
var27 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var27, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_passignopnode9, var_pexprnode10); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var27:ACallReassignExpr>*/
}
var_pexprnode1 = var27;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction230> */
{
var29 = nitc___nitc__Parser___go_to(var_p, var28);
}
{
nitc___nitc__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction231#action for (self: ReduceAction231, Parser) */
void nitc__parser___nitc__parser__ReduceAction231___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var17 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var18 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
val* var_passignopnode10 /* var passignopnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6862);
fatal_exit(1);
}
var8 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var_tclassidnode6 = var_nodearraylist4;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype10 = type_nullable__nitc__TClassid.color;
idtype11 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6865);
fatal_exit(1);
}
var12 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var12, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var12:AQualified>*/
}
var_pqualifiednode4 = var12;
var_tidnode7 = var_nodearraylist5;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype14 = type_nullable__nitc__TId.color;
idtype15 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6871);
fatal_exit(1);
}
var16 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var16, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var16:AQid>*/
}
var_pqidnode3 = var16;
var17 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var17); /* Direct call array#Array#init on <var17:Array[Object]>*/
}
var_listnode9 = var17;
var18 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var18, var_listnode9); /* Direct call parser_prod#AListExprs#init_alistexprs on <var18:AListExprs>*/
}
var_pexprsnode8 = var18;
var_passignopnode10 = var_nodearraylist6;
/* <var_passignopnode10:nullable Object> isa nullable AAssignOp */
cltype20 = type_nullable__nitc__AAssignOp.color;
idtype21 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6881);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist7;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nitc__AExpr.color;
idtype24 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6883);
fatal_exit(1);
}
var25 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var25, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_passignopnode10, var_pexprnode11); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var25:ACallReassignExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction231> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction232#action for (self: ReduceAction232, Parser) */
void nitc__parser___nitc__parser__ReduceAction232___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_passignopnode10 /* var passignopnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var33 /* : Int */;
long var34 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6910);
fatal_exit(1);
}
var10 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode6 = var10;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6913);
fatal_exit(1);
}
{
var14 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var14;
var_tclassidnode7 = var_nodearraylist5;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype16 = type_nullable__nitc__TClassid.color;
idtype17 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6916);
fatal_exit(1);
}
var18 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var18, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var18:AQualified>*/
}
var_pqualifiednode4 = var18;
var_tidnode8 = var_nodearraylist6;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype20 = type_nullable__nitc__TId.color;
idtype21 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6922);
fatal_exit(1);
}
var22 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var22, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var22:AQid>*/
}
var_pqidnode3 = var22;
var_pexprsnode9 = var_nodearraylist7;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype24 = type_nullable__nitc__AExprs.color;
idtype25 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6928);
fatal_exit(1);
}
var_passignopnode10 = var_nodearraylist8;
/* <var_passignopnode10:nullable Object> isa nullable AAssignOp */
cltype27 = type_nullable__nitc__AAssignOp.color;
idtype28 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6930);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist9;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nitc__AExpr.color;
idtype31 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6932);
fatal_exit(1);
}
var32 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var32, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode10, var_pexprnode11); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var32:ACallReassignExpr>*/
}
var_pexprnode1 = var32;
var_node_list = var_pexprnode1;
var33 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction232> */
{
var34 = nitc___nitc__Parser___go_to(var_p, var33);
}
{
nitc___nitc__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction233#action for (self: ReduceAction233, Parser) */
void nitc__parser___nitc__parser__ReduceAction233___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var9 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var22 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var23 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_passignopnode11 /* var passignopnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var31 /* : Int */;
long var32 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6958);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode6 = var9;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_core__Array__core__Object.color;
idtype12 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6961);
fatal_exit(1);
}
{
var13 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var13;
var_tclassidnode7 = var_nodearraylist5;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype15 = type_nullable__nitc__TClassid.color;
idtype16 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6964);
fatal_exit(1);
}
var17 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var17, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var17:AQualified>*/
}
var_pqualifiednode4 = var17;
var_tidnode8 = var_nodearraylist6;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype19 = type_nullable__nitc__TId.color;
idtype20 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6970);
fatal_exit(1);
}
var21 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var21, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var21:AQid>*/
}
var_pqidnode3 = var21;
var22 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var22); /* Direct call array#Array#init on <var22:Array[Object]>*/
}
var_listnode10 = var22;
var23 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var23, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var23:AListExprs>*/
}
var_pexprsnode9 = var23;
var_passignopnode11 = var_nodearraylist7;
/* <var_passignopnode11:nullable Object> isa nullable AAssignOp */
cltype25 = type_nullable__nitc__AAssignOp.color;
idtype26 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6980);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype28 = type_nullable__nitc__AExpr.color;
idtype29 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 6982);
fatal_exit(1);
}
var30 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var30, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode11, var_pexprnode12); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var30:ACallReassignExpr>*/
}
var_pexprnode1 = var30;
var_node_list = var_pexprnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction233> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction234#action for (self: ReduceAction234, Parser) */
void nitc__parser___nitc__parser__ReduceAction234___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var9 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_passignopnode10 /* var passignopnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var29 /* : Int */;
long var30 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7008);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode6 = var9;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_core__Array__core__Object.color;
idtype12 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7011);
fatal_exit(1);
}
{
var13 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var13;
var14 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var14, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var14:AQualified>*/
}
var_pqualifiednode4 = var14;
var_tidnode8 = var_nodearraylist5;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype16 = type_nullable__nitc__TId.color;
idtype17 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7018);
fatal_exit(1);
}
var18 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var18, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var18:AQid>*/
}
var_pqidnode3 = var18;
var_pexprsnode9 = var_nodearraylist6;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype20 = type_nullable__nitc__AExprs.color;
idtype21 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7024);
fatal_exit(1);
}
var_passignopnode10 = var_nodearraylist7;
/* <var_passignopnode10:nullable Object> isa nullable AAssignOp */
cltype23 = type_nullable__nitc__AAssignOp.color;
idtype24 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7026);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist8;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nitc__AExpr.color;
idtype27 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7028);
fatal_exit(1);
}
var28 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var28, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode10, var_pexprnode11); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var28:ACallReassignExpr>*/
}
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction234> */
{
var30 = nitc___nitc__Parser___go_to(var_p, var29);
}
{
nitc___nitc__Parser___push(var_p, var30, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction235#action for (self: ReduceAction235, Parser) */
void nitc__parser___nitc__parser__ReduceAction235___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var18 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var19 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_passignopnode11 /* var passignopnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprnode2&3)?type_info[((long)var_pexprnode2&3)]:var_pexprnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7053);
fatal_exit(1);
}
var8 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode6 = var8;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_core__Array__core__Object.color;
idtype11 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7056);
fatal_exit(1);
}
{
var12 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var12;
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode8 = var_nodearraylist5;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7063);
fatal_exit(1);
}
var17 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var17, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var17:AQid>*/
}
var_pqidnode3 = var17;
var18 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var18); /* Direct call array#Array#init on <var18:Array[Object]>*/
}
var_listnode10 = var18;
var19 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var19, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var19:AListExprs>*/
}
var_pexprsnode9 = var19;
var_passignopnode11 = var_nodearraylist6;
/* <var_passignopnode11:nullable Object> isa nullable AAssignOp */
cltype21 = type_nullable__nitc__AAssignOp.color;
idtype22 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7073);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist7;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype24 = type_nullable__nitc__AExpr.color;
idtype25 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7075);
fatal_exit(1);
}
var26 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var26, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode11, var_pexprnode12); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var26:ACallReassignExpr>*/
}
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var27 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction235> */
{
var28 = nitc___nitc__Parser___go_to(var_p, var27);
}
{
nitc___nitc__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction236#action for (self: ReduceAction236, Parser) */
void nitc__parser___nitc__parser__ReduceAction236___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_passignopnode7 /* var passignopnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode5 = var_nodearraylist1;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7098);
fatal_exit(1);
}
var6 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var6, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var6:AQid>*/
}
var_pqidnode3 = var6;
var_pexprsnode6 = var_nodearraylist2;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nitc__AExprs.color;
idtype9 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7104);
fatal_exit(1);
}
var_passignopnode7 = var_nodearraylist3;
/* <var_passignopnode7:nullable Object> isa nullable AAssignOp */
cltype11 = type_nullable__nitc__AAssignOp.color;
idtype12 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_passignopnode7&3)?type_info[((long)var_passignopnode7&3)]:var_passignopnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_passignopnode7&3)?type_info[((long)var_passignopnode7&3)]:var_passignopnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7106);
fatal_exit(1);
}
var_pexprnode8 = var_nodearraylist4;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nitc__AExpr.color;
idtype15 = type_nullable__nitc__AExpr.id;
if(var_pexprnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7108);
fatal_exit(1);
}
var16 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var16, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_passignopnode7, var_pexprnode8); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var16:ACallReassignExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction236> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction237#action for (self: ReduceAction237, Parser) */
void nitc__parser___nitc__parser__ReduceAction237___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var_passignopnode8 /* var passignopnode8: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var3 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tidnode5 = var_nodearraylist1;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7130);
fatal_exit(1);
}
var5 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var5, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var5:AQid>*/
}
var_pqidnode3 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode7 = var6;
var7 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var7, var_listnode7); /* Direct call parser_prod#AListExprs#init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode6 = var7;
var_passignopnode8 = var_nodearraylist2;
/* <var_passignopnode8:nullable Object> isa nullable AAssignOp */
cltype9 = type_nullable__nitc__AAssignOp.color;
idtype10 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode8 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_passignopnode8&3)?type_info[((long)var_passignopnode8&3)]:var_passignopnode8->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_passignopnode8&3)?type_info[((long)var_passignopnode8&3)]:var_passignopnode8->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7140);
fatal_exit(1);
}
var_pexprnode9 = var_nodearraylist3;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nitc__AExpr.color;
idtype13 = type_nullable__nitc__AExpr.id;
if(var_pexprnode9 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode9&3)?type_info[((long)var_pexprnode9&3)]:var_pexprnode9->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7142);
fatal_exit(1);
}
var14 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var14, var_pexprnode2, var_pqidnode3, var_pexprsnode6, var_passignopnode8, var_pexprnode9); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var14:ACallReassignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction237> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction238#action for (self: ReduceAction238, Parser) */
void nitc__parser___nitc__parser__ReduceAction238___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode8 /* var pexprsnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_passignopnode9 /* var passignopnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var5 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var_tclassidnode6 = var_nodearraylist1;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7167);
fatal_exit(1);
}
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode4 = var8;
var_tidnode7 = var_nodearraylist2;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype10 = type_nullable__nitc__TId.color;
idtype11 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7173);
fatal_exit(1);
}
var12 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var12, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var12:AQid>*/
}
var_pqidnode3 = var12;
var_pexprsnode8 = var_nodearraylist3;
/* <var_pexprsnode8:nullable Object> isa nullable AExprs */
cltype14 = type_nullable__nitc__AExprs.color;
idtype15 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7179);
fatal_exit(1);
}
var_passignopnode9 = var_nodearraylist4;
/* <var_passignopnode9:nullable Object> isa nullable AAssignOp */
cltype17 = type_nullable__nitc__AAssignOp.color;
idtype18 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_passignopnode9&3)?type_info[((long)var_passignopnode9&3)]:var_passignopnode9->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_passignopnode9&3)?type_info[((long)var_passignopnode9&3)]:var_passignopnode9->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7181);
fatal_exit(1);
}
var_pexprnode10 = var_nodearraylist5;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype20 = type_nullable__nitc__AExpr.color;
idtype21 = type_nullable__nitc__AExpr.id;
if(var_pexprnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprnode10&3)?type_info[((long)var_pexprnode10&3)]:var_pexprnode10->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7183);
fatal_exit(1);
}
var22 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var22, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_passignopnode9, var_pexprnode10); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var22:ACallReassignExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction238> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction239#action for (self: ReduceAction239, Parser) */
void nitc__parser___nitc__parser__ReduceAction239___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var12 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var13 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
val* var_passignopnode10 /* var passignopnode10: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var_tclassidnode6 = var_nodearraylist1;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7207);
fatal_exit(1);
}
var7 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var7, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var7:AQualified>*/
}
var_pqualifiednode4 = var7;
var_tidnode7 = var_nodearraylist2;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype9 = type_nullable__nitc__TId.color;
idtype10 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7213);
fatal_exit(1);
}
var11 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var11, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var11:AQid>*/
}
var_pqidnode3 = var11;
var12 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode9 = var12;
var13 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var13, var_listnode9); /* Direct call parser_prod#AListExprs#init_alistexprs on <var13:AListExprs>*/
}
var_pexprsnode8 = var13;
var_passignopnode10 = var_nodearraylist3;
/* <var_passignopnode10:nullable Object> isa nullable AAssignOp */
cltype15 = type_nullable__nitc__AAssignOp.color;
idtype16 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode10 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7223);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist4;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nitc__AExpr.color;
idtype19 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7225);
fatal_exit(1);
}
var20 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var20, var_pexprnode2, var_pqidnode3, var_pexprsnode8, var_passignopnode10, var_pexprnode11); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var20:ACallReassignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction239> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction240#action for (self: ReduceAction240, Parser) */
void nitc__parser___nitc__parser__ReduceAction240___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_passignopnode10 /* var passignopnode10: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var6 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var6); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/
}
var_pexprnode2 = var6;
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7251);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var_tclassidnode7 = var_nodearraylist2;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype11 = type_nullable__nitc__TClassid.color;
idtype12 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7254);
fatal_exit(1);
}
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7260);
fatal_exit(1);
}
var17 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var17, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var17:AQid>*/
}
var_pqidnode3 = var17;
var_pexprsnode9 = var_nodearraylist4;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype19 = type_nullable__nitc__AExprs.color;
idtype20 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7266);
fatal_exit(1);
}
var_passignopnode10 = var_nodearraylist5;
/* <var_passignopnode10:nullable Object> isa nullable AAssignOp */
cltype22 = type_nullable__nitc__AAssignOp.color;
idtype23 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode10 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7268);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist6;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nitc__AExpr.color;
idtype26 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7270);
fatal_exit(1);
}
var27 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var27, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode10, var_pexprnode11); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var27:ACallReassignExpr>*/
}
var_pexprnode1 = var27;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction240> */
{
var29 = nitc___nitc__Parser___go_to(var_p, var28);
}
{
nitc___nitc__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction241#action for (self: ReduceAction241, Parser) */
void nitc__parser___nitc__parser__ReduceAction241___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var17 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var18 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_passignopnode11 /* var passignopnode11: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var5 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7295);
fatal_exit(1);
}
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var8;
var_tclassidnode7 = var_nodearraylist2;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype10 = type_nullable__nitc__TClassid.color;
idtype11 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7298);
fatal_exit(1);
}
var12 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var12, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var12:AQualified>*/
}
var_pqualifiednode4 = var12;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype14 = type_nullable__nitc__TId.color;
idtype15 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7304);
fatal_exit(1);
}
var16 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var16, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var16:AQid>*/
}
var_pqidnode3 = var16;
var17 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var17); /* Direct call array#Array#init on <var17:Array[Object]>*/
}
var_listnode10 = var17;
var18 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var18, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var18:AListExprs>*/
}
var_pexprsnode9 = var18;
var_passignopnode11 = var_nodearraylist4;
/* <var_passignopnode11:nullable Object> isa nullable AAssignOp */
cltype20 = type_nullable__nitc__AAssignOp.color;
idtype21 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode11 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7314);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist5;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nitc__AExpr.color;
idtype24 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7316);
fatal_exit(1);
}
var25 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var25, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode11, var_pexprnode12); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var25:ACallReassignExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction241> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction242#action for (self: ReduceAction242, Parser) */
void nitc__parser___nitc__parser__ReduceAction242___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var9 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_passignopnode10 /* var passignopnode10: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexprnode11 /* var pexprnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7341);
fatal_exit(1);
}
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var8;
var9 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var9, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode4 = var9;
var_tidnode8 = var_nodearraylist2;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7348);
fatal_exit(1);
}
var13 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var13, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var13:AQid>*/
}
var_pqidnode3 = var13;
var_pexprsnode9 = var_nodearraylist3;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype15 = type_nullable__nitc__AExprs.color;
idtype16 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7354);
fatal_exit(1);
}
var_passignopnode10 = var_nodearraylist4;
/* <var_passignopnode10:nullable Object> isa nullable AAssignOp */
cltype18 = type_nullable__nitc__AAssignOp.color;
idtype19 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode10 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_passignopnode10&3)?type_info[((long)var_passignopnode10&3)]:var_passignopnode10->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7356);
fatal_exit(1);
}
var_pexprnode11 = var_nodearraylist5;
/* <var_pexprnode11:nullable Object> isa nullable AExpr */
cltype21 = type_nullable__nitc__AExpr.color;
idtype22 = type_nullable__nitc__AExpr.id;
if(var_pexprnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pexprnode11&3)?type_info[((long)var_pexprnode11&3)]:var_pexprnode11->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7358);
fatal_exit(1);
}
var23 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var23, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode10, var_pexprnode11); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var23:ACallReassignExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction242> */
{
var25 = nitc___nitc__Parser___go_to(var_p, var24);
}
{
nitc___nitc__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction243#action for (self: ReduceAction243, Parser) */
void nitc__parser___nitc__parser__ReduceAction243___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var8 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var13 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var_passignopnode11 /* var passignopnode11: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7382);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var7;
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode4 = var8;
var_tidnode8 = var_nodearraylist2;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype10 = type_nullable__nitc__TId.color;
idtype11 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7389);
fatal_exit(1);
}
var12 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var12, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var12:AQid>*/
}
var_pqidnode3 = var12;
var13 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode10 = var13;
var14 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var14, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode9 = var14;
var_passignopnode11 = var_nodearraylist3;
/* <var_passignopnode11:nullable Object> isa nullable AAssignOp */
cltype16 = type_nullable__nitc__AAssignOp.color;
idtype17 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode11 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_passignopnode11&3)?type_info[((long)var_passignopnode11&3)]:var_passignopnode11->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7399);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist4;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nitc__AExpr.color;
idtype20 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7401);
fatal_exit(1);
}
var21 = NEW_nitc__ACallReassignExpr(&type_nitc__ACallReassignExpr);
{
nitc__parser_prod___ACallReassignExpr___init_acallreassignexpr(var21, var_pexprnode2, var_pqidnode3, var_pexprsnode9, var_passignopnode11, var_pexprnode12); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var21:ACallReassignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction243> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction244#action for (self: ReduceAction244, Parser) */
void nitc__parser___nitc__parser__ReduceAction244___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ABraReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraReassignExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7423);
fatal_exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nitc__AExprs.color;
idtype7 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7425);
fatal_exit(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype9 = type_nullable__nitc__AAssignOp.color;
idtype10 = type_nullable__nitc__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_passignopnode4&3)?type_info[((long)var_passignopnode4&3)]:var_passignopnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_passignopnode4&3)?type_info[((long)var_passignopnode4&3)]:var_passignopnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7427);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nitc__AExpr.color;
idtype13 = type_nullable__nitc__AExpr.id;
if(var_pexprnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7429);
fatal_exit(1);
}
var14 = NEW_nitc__ABraReassignExpr(&type_nitc__ABraReassignExpr);
{
nitc__parser_prod___ABraReassignExpr___init_abrareassignexpr(var14, var_pexprnode2, var_pexprsnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#ABraReassignExpr#init_abrareassignexpr on <var14:ABraReassignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction244> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction245#action for (self: ReduceAction245, Parser) */
void nitc__parser___nitc__parser__ReduceAction245___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpluseqnode2 /* var tpluseqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APlusAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable APlusAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpluseqnode2 = var_nodearraylist1;
/* <var_tpluseqnode2:nullable Object> isa nullable TPluseq */
cltype = type_nullable__nitc__TPluseq.color;
idtype = type_nullable__nitc__TPluseq.id;
if(var_tpluseqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tpluseqnode2&3)?type_info[((long)var_tpluseqnode2&3)]:var_tpluseqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tpluseqnode2&3)?type_info[((long)var_tpluseqnode2&3)]:var_tpluseqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7447);
fatal_exit(1);
}
var2 = NEW_nitc__APlusAssignOp(&type_nitc__APlusAssignOp);
{
nitc__parser_prod___APlusAssignOp___init_aplusassignop(var2, var_tpluseqnode2); /* Direct call parser_prod#APlusAssignOp#init_aplusassignop on <var2:APlusAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction245> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction246#action for (self: ReduceAction246, Parser) */
void nitc__parser___nitc__parser__ReduceAction246___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminuseqnode2 /* var tminuseqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AMinusAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable AMinusAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tminuseqnode2 = var_nodearraylist1;
/* <var_tminuseqnode2:nullable Object> isa nullable TMinuseq */
cltype = type_nullable__nitc__TMinuseq.color;
idtype = type_nullable__nitc__TMinuseq.id;
if(var_tminuseqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tminuseqnode2&3)?type_info[((long)var_tminuseqnode2&3)]:var_tminuseqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tminuseqnode2&3)?type_info[((long)var_tminuseqnode2&3)]:var_tminuseqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7462);
fatal_exit(1);
}
var2 = NEW_nitc__AMinusAssignOp(&type_nitc__AMinusAssignOp);
{
nitc__parser_prod___AMinusAssignOp___init_aminusassignop(var2, var_tminuseqnode2); /* Direct call parser_prod#AMinusAssignOp#init_aminusassignop on <var2:AMinusAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction246> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
