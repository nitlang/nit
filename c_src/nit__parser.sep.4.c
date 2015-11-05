#include "nit__parser.sep.0.h"
/* method parser#ReduceAction185#action for (self: ReduceAction185, Parser) */
void nit__parser___nit__parser__ReduceAction185___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5367);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5369);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nit__AExprs.color;
idtype13 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5371);
fatal_exit(1);
}
var14 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var14:ACallExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction185> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction187#action for (self: ReduceAction187, Parser) */
void nit__parser___nit__parser__ReduceAction187___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var2); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5390);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype5 = type_nullable__nit__AExprs.color;
idtype6 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5392);
fatal_exit(1);
}
var7 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var7, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var7:ACallExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction187> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction188#action for (self: ReduceAction188, Parser) */
void nit__parser___nit__parser__ReduceAction188___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5412);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nit__AExprs.color;
idtype7 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5414);
fatal_exit(1);
}
var8 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var8, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var8:ACallExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction188> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction189#action for (self: ReduceAction189, Parser) */
void nit__parser___nit__parser__ReduceAction189___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5435);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable__nit__AExprs.color;
idtype8 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5437);
fatal_exit(1);
}
var9 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction189> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction191#action for (self: ReduceAction191, Parser) */
void nit__parser___nit__parser__ReduceAction191___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pqualifiednode2 = var_nodearraylist1;
/* <var_pqualifiednode2:nullable Object> isa nullable AQualified */
cltype = type_nullable__nit__AQualified.color;
idtype = type_nullable__nit__AQualified.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5456);
fatal_exit(1);
}
var_tkwsupernode3 = var_nodearraylist2;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype5 = type_nullable__nit__TKwsuper.color;
idtype6 = type_nullable__nit__TKwsuper.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5458);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nit__AExprs.color;
idtype9 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5460);
fatal_exit(1);
}
var10 = NEW_nit__ASuperExpr(&type_nit__ASuperExpr);
{
nit__parser_prod___ASuperExpr___init_asuperexpr(var10, var_pqualifiednode2, var_tkwsupernode3, var_pexprsnode4); /* Direct call parser_prod#ASuperExpr#init_asuperexpr on <var10:ASuperExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction191> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction192#action for (self: ReduceAction192, Parser) */
void nit__parser___nit__parser__ReduceAction192___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5481);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype7 = type_nullable__nit__TKwinit.color;
idtype8 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5483);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable__nit__AExprs.color;
idtype11 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5485);
fatal_exit(1);
}
var12 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var12, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var12:AInitExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction192> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction193#action for (self: ReduceAction193, Parser) */
void nit__parser___nit__parser__ReduceAction193___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var2); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5504);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype5 = type_nullable__nit__AExprs.color;
idtype6 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5506);
fatal_exit(1);
}
var7 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var7, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var7:AInitExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction193> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction194#action for (self: ReduceAction194, Parser) */
void nit__parser___nit__parser__ReduceAction194___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5528);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist5;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype8 = type_nullable__nit__TKwinit.color;
idtype9 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5530);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable__nit__AExprs.color;
idtype12 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5532);
fatal_exit(1);
}
var13 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var13, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var13:AInitExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction194> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction195#action for (self: ReduceAction195, Parser) */
void nit__parser___nit__parser__ReduceAction195___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5555);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist6;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype9 = type_nullable__nit__TKwinit.color;
idtype10 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5557);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nit__AExprs.color;
idtype13 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5559);
fatal_exit(1);
}
var14 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var14, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var14:AInitExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction195> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction197#action for (self: ReduceAction197, Parser) */
void nit__parser___nit__parser__ReduceAction197___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5579);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nit__AExprs.color;
idtype7 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5581);
fatal_exit(1);
}
var8 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var8:AInitExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction197> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction198#action for (self: ReduceAction198, Parser) */
void nit__parser___nit__parser__ReduceAction198___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tkwinitnode3 = var_nodearraylist3;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5602);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable__nit__AExprs.color;
idtype8 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5604);
fatal_exit(1);
}
var9 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var9, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var9:AInitExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction198> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction200#action for (self: ReduceAction200, Parser) */
void nit__parser___nit__parser__ReduceAction200___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var_tkwdebugnode2 = var_nodearraylist1;
/* <var_tkwdebugnode2:nullable Object> isa nullable TKwdebug */
cltype = type_nullable__nit__TKwdebug.color;
idtype = type_nullable__nit__TKwdebug.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5625);
fatal_exit(1);
}
var_tkwtypenode3 = var_nodearraylist2;
/* <var_tkwtypenode3:nullable Object> isa nullable TKwtype */
cltype7 = type_nullable__nit__TKwtype.color;
idtype8 = type_nullable__nit__TKwtype.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5627);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist5;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5629);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist3;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype13 = type_nullable__nit__AType.color;
idtype14 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5631);
fatal_exit(1);
}
var15 = NEW_nit__ADebugTypeExpr(&type_nit__ADebugTypeExpr);
{
nit__parser_prod___ADebugTypeExpr___init_adebugtypeexpr(var15, var_tkwdebugnode2, var_tkwtypenode3, var_pexprnode4, var_ptypenode5); /* Direct call parser_prod#ADebugTypeExpr#init_adebugtypeexpr on <var15:ADebugTypeExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction200> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction201#action for (self: ReduceAction201, Parser) */
void nit__parser___nit__parser__ReduceAction201___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable__nit__TKwlabel.color;
idtype = type_nullable__nit__TKwlabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5649);
fatal_exit(1);
}
var2 = NEW_nit__ALabel(&type_nit__ALabel);
{
nit__parser_prod___ALabel___init_alabel(var2, var_tkwlabelnode2, ((val*)NULL)); /* Direct call parser_prod#ALabel#init_alabel on <var2:ALabel>*/
}
var_plabelnode1 = var2;
var_node_list = var_plabelnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction201> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction202#action for (self: ReduceAction202, Parser) */
void nit__parser___nit__parser__ReduceAction202___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable__nit__TKwlabel.color;
idtype = type_nullable__nit__TKwlabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5666);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype4 = type_nullable__nit__TId.color;
idtype5 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5668);
fatal_exit(1);
}
var6 = NEW_nit__ALabel(&type_nit__ALabel);
{
nit__parser_prod___ALabel___init_alabel(var6, var_tkwlabelnode2, var_tidnode3); /* Direct call parser_prod#ALabel#init_alabel on <var6:ALabel>*/
}
var_plabelnode1 = var6;
var_node_list = var_plabelnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction202> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction203#action for (self: ReduceAction203, Parser) */
void nit__parser___nit__parser__ReduceAction203___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5686);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable__nit__TId.color;
idtype6 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5688);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype8 = type_nullable__nit__AType.color;
idtype9 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5690);
fatal_exit(1);
}
var10 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
nit__parser_prod___AVardeclExpr___init_avardeclexpr(var10, var_tkwvarnode2, var_tidnode3, var_ptypenode4, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var10:AVardeclExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction203> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction204#action for (self: ReduceAction204, Parser) */
void nit__parser___nit__parser__ReduceAction204___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5713);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5715);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype9 = type_nullable__nit__AType.color;
idtype10 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5717);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype12 = type_nullable__nit__AAnnotations.color;
idtype13 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5719);
fatal_exit(1);
}
var14 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
nit__parser_prod___AVardeclExpr___init_avardeclexpr(var14, var_tkwvarnode2, var_tidnode3, var_ptypenode4, ((val*)NULL), ((val*)NULL), var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var14:AVardeclExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction204> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction205#action for (self: ReduceAction205, Parser) */
void nit__parser___nit__parser__ReduceAction205___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5744);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable__nit__TId.color;
idtype9 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5746);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype11 = type_nullable__nit__AType.color;
idtype12 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5748);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype14 = type_nullable__nit__TAssign.color;
idtype15 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5750);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nit__AExpr.color;
idtype18 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5752);
fatal_exit(1);
}
var19 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
nit__parser_prod___AVardeclExpr___init_avardeclexpr(var19, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, ((val*)NULL)); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var19:AVardeclExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction205> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction206#action for (self: ReduceAction206, Parser) */
void nit__parser___nit__parser__ReduceAction206___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable__nit__TKwvar.color;
idtype = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5778);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5780);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype12 = type_nullable__nit__AType.color;
idtype13 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5782);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype15 = type_nullable__nit__TAssign.color;
idtype16 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5784);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5786);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable__nit__AAnnotations.color;
idtype22 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5788);
fatal_exit(1);
}
var23 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
nit__parser_prod___AVardeclExpr___init_avardeclexpr(var23, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var23:AVardeclExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction206> */
{
var25 = nit___nit__Parser___go_to(var_p, var24);
}
{
nit___nit__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction207#action for (self: ReduceAction207, Parser) */
void nit__parser___nit__parser__ReduceAction207___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5814);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nit__TAttrid.color;
idtype10 = type_nullable__nit__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5816);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist6;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype12 = type_nullable__nit__TAssign.color;
idtype13 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5818);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5820);
fatal_exit(1);
}
var17 = NEW_nit__AAttrAssignExpr(&type_nit__AAttrAssignExpr);
{
nit__parser_prod___AAttrAssignExpr___init_aattrassignexpr(var17, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#AAttrAssignExpr#init_aattrassignexpr on <var17:AAttrAssignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction207> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction208#action for (self: ReduceAction208, Parser) */
void nit__parser___nit__parser__ReduceAction208___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable__nit__TAttrid.color;
idtype = type_nullable__nit__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5842);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype7 = type_nullable__nit__TAssign.color;
idtype8 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5844);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5846);
fatal_exit(1);
}
var12 = NEW_nit__AAttrAssignExpr(&type_nit__AAttrAssignExpr);
{
nit__parser_prod___AAttrAssignExpr___init_aattrassignexpr(var12, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#AAttrAssignExpr#init_aattrassignexpr on <var12:AAttrAssignExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction208> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction209#action for (self: ReduceAction209, Parser) */
void nit__parser___nit__parser__ReduceAction209___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
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
val* var20 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5870);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5872);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nit__AExprs.color;
idtype13 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5874);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist6;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype15 = type_nullable__nit__TAssign.color;
idtype16 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5876);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5878);
fatal_exit(1);
}
var20 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var20, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var20:ACallAssignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction209> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction210#action for (self: ReduceAction210, Parser) */
void nit__parser___nit__parser__ReduceAction210___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var11 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5902);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable__nit__TId.color;
idtype9 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5904);
fatal_exit(1);
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode5 = var10;
var11 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var11, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var11:AListExprs>*/
}
var_pexprsnode4 = var11;
var_tassignnode6 = var_nodearraylist5;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype13 = type_nullable__nit__TAssign.color;
idtype14 = type_nullable__nit__TAssign.id;
if(var_tassignnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5910);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist6;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nit__AExpr.color;
idtype17 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5912);
fatal_exit(1);
}
var18 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var18, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var18:ACallAssignExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction210> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction211#action for (self: ReduceAction211, Parser) */
void nit__parser___nit__parser__ReduceAction211___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5938);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable__nit__TId.color;
idtype11 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5940);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable__nit__AExprs.color;
idtype14 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5942);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist7;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype16 = type_nullable__nit__TAssign.color;
idtype17 = type_nullable__nit__TAssign.id;
if(var_tassignnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5944);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist8;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nit__AExpr.color;
idtype20 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5946);
fatal_exit(1);
}
var21 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var21:ACallAssignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction211> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction212#action for (self: ReduceAction212, Parser) */
void nit__parser___nit__parser__ReduceAction212___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var12 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5971);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5973);
fatal_exit(1);
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode5 = var11;
var12 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var12, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var12:AListExprs>*/
}
var_pexprsnode4 = var12;
var_tassignnode6 = var_nodearraylist6;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype14 = type_nullable__nit__TAssign.color;
idtype15 = type_nullable__nit__TAssign.id;
if(var_tassignnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5979);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nit__AExpr.color;
idtype18 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5981);
fatal_exit(1);
}
var19 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var19, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var19:ACallAssignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction212> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction213#action for (self: ReduceAction213, Parser) */
void nit__parser___nit__parser__ReduceAction213___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6008);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable__nit__TId.color;
idtype12 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6010);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable__nit__AExprs.color;
idtype15 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6012);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist8;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype17 = type_nullable__nit__TAssign.color;
idtype18 = type_nullable__nit__TAssign.id;
if(var_tassignnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6014);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist9;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable__nit__AExpr.color;
idtype21 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6016);
fatal_exit(1);
}
var22 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var22, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var22:ACallAssignExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction213> */
{
var24 = nit___nit__Parser___go_to(var_p, var23);
}
{
nit___nit__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction214#action for (self: ReduceAction214, Parser) */
void nit__parser___nit__parser__ReduceAction214___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var13 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6042);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable__nit__TId.color;
idtype11 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6044);
fatal_exit(1);
}
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode5 = var12;
var13 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var13, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var13:AListExprs>*/
}
var_pexprsnode4 = var13;
var_tassignnode6 = var_nodearraylist7;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype15 = type_nullable__nit__TAssign.color;
idtype16 = type_nullable__nit__TAssign.id;
if(var_tassignnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6050);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6052);
fatal_exit(1);
}
var20 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var20, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var20:ACallAssignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction214> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction217#action for (self: ReduceAction217, Parser) */
void nit__parser___nit__parser__ReduceAction217___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6075);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable__nit__AExprs.color;
idtype8 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6077);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist3;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype10 = type_nullable__nit__TAssign.color;
idtype11 = type_nullable__nit__TAssign.id;
if(var_tassignnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6079);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6081);
fatal_exit(1);
}
var15 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var15:ACallAssignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction217> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction218#action for (self: ReduceAction218, Parser) */
void nit__parser___nit__parser__ReduceAction218___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6103);
fatal_exit(1);
}
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var6, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var6:AListExprs>*/
}
var_pexprsnode4 = var6;
var_tassignnode6 = var_nodearraylist2;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype8 = type_nullable__nit__TAssign.color;
idtype9 = type_nullable__nit__TAssign.id;
if(var_tassignnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6109);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist3;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype11 = type_nullable__nit__AExpr.color;
idtype12 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6111);
fatal_exit(1);
}
var13 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var13, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var13:ACallAssignExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction218> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction219#action for (self: ReduceAction219, Parser) */
void nit__parser___nit__parser__ReduceAction219___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6135);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nit__AExprs.color;
idtype9 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6137);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype11 = type_nullable__nit__TAssign.color;
idtype12 = type_nullable__nit__TAssign.id;
if(var_tassignnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6139);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nit__AExpr.color;
idtype15 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6141);
fatal_exit(1);
}
var16 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var16:ACallAssignExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction219> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction220#action for (self: ReduceAction220, Parser) */
void nit__parser___nit__parser__ReduceAction220___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6164);
fatal_exit(1);
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var7, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode4 = var7;
var_tassignnode6 = var_nodearraylist3;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype9 = type_nullable__nit__TAssign.color;
idtype10 = type_nullable__nit__TAssign.id;
if(var_tassignnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6170);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist4;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6172);
fatal_exit(1);
}
var14 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var14:ACallAssignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction220> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction221#action for (self: ReduceAction221, Parser) */
void nit__parser___nit__parser__ReduceAction221___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var6); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/
}
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6197);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nit__AExprs.color;
idtype10 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6199);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype12 = type_nullable__nit__TAssign.color;
idtype13 = type_nullable__nit__TAssign.id;
if(var_tassignnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tassignnode5&3)?type_info[((long)var_tassignnode5&3)]:var_tassignnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6201);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6203);
fatal_exit(1);
}
var17 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var17:ACallAssignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction221> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction222#action for (self: ReduceAction222, Parser) */
void nit__parser___nit__parser__ReduceAction222___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6227);
fatal_exit(1);
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode5 = var7;
var8 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var8, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode4 = var8;
var_tassignnode6 = var_nodearraylist4;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype10 = type_nullable__nit__TAssign.color;
idtype11 = type_nullable__nit__TAssign.id;
if(var_tassignnode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tassignnode6&3)?type_info[((long)var_tassignnode6&3)]:var_tassignnode6->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6233);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist5;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6235);
fatal_exit(1);
}
var15 = NEW_nit__ACallAssignExpr(&type_nit__ACallAssignExpr);
{
nit__parser_prod___ACallAssignExpr___init_acallassignexpr(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var15:ACallAssignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction222> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction225#action for (self: ReduceAction225, Parser) */
void nit__parser___nit__parser__ReduceAction225___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6257);
fatal_exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nit__AExprs.color;
idtype7 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6259);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype9 = type_nullable__nit__TAssign.color;
idtype10 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6261);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6263);
fatal_exit(1);
}
var14 = NEW_nit__ABraAssignExpr(&type_nit__ABraAssignExpr);
{
nit__parser_prod___ABraAssignExpr___init_abraassignexpr(var14, var_pexprnode2, var_pexprsnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#ABraAssignExpr#init_abraassignexpr on <var14:ABraAssignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction225> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction226#action for (self: ReduceAction226, Parser) */
void nit__parser___nit__parser__ReduceAction226___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6287);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nit__TAttrid.color;
idtype10 = type_nullable__nit__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6289);
fatal_exit(1);
}
var_passignopnode4 = var_nodearraylist6;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype12 = type_nullable__nit__AAssignOp.color;
idtype13 = type_nullable__nit__AAssignOp.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6291);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6293);
fatal_exit(1);
}
var17 = NEW_nit__AAttrReassignExpr(&type_nit__AAttrReassignExpr);
{
nit__parser_prod___AAttrReassignExpr___init_aattrreassignexpr(var17, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#AAttrReassignExpr#init_aattrreassignexpr on <var17:AAttrReassignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction226> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction227#action for (self: ReduceAction227, Parser) */
void nit__parser___nit__parser__ReduceAction227___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable__nit__TAttrid.color;
idtype = type_nullable__nit__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6315);
fatal_exit(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype7 = type_nullable__nit__AAssignOp.color;
idtype8 = type_nullable__nit__AAssignOp.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6317);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6319);
fatal_exit(1);
}
var12 = NEW_nit__AAttrReassignExpr(&type_nit__AAttrReassignExpr);
{
nit__parser_prod___AAttrReassignExpr___init_aattrreassignexpr(var12, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#AAttrReassignExpr#init_aattrreassignexpr on <var12:AAttrReassignExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction227> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction228#action for (self: ReduceAction228, Parser) */
void nit__parser___nit__parser__ReduceAction228___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6343);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6345);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable__nit__AExprs.color;
idtype13 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6347);
fatal_exit(1);
}
var_passignopnode5 = var_nodearraylist6;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype15 = type_nullable__nit__AAssignOp.color;
idtype16 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6349);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6351);
fatal_exit(1);
}
var20 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var20, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var20:ACallReassignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction228> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction229#action for (self: ReduceAction229, Parser) */
void nit__parser___nit__parser__ReduceAction229___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var11 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6375);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable__nit__TId.color;
idtype9 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6377);
fatal_exit(1);
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode5 = var10;
var11 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var11, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var11:AListExprs>*/
}
var_pexprsnode4 = var11;
var_passignopnode6 = var_nodearraylist5;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype13 = type_nullable__nit__AAssignOp.color;
idtype14 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6383);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist6;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nit__AExpr.color;
idtype17 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6385);
fatal_exit(1);
}
var18 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var18, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var18:ACallReassignExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction229> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction230#action for (self: ReduceAction230, Parser) */
void nit__parser___nit__parser__ReduceAction230___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6411);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable__nit__TId.color;
idtype11 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6413);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable__nit__AExprs.color;
idtype14 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6415);
fatal_exit(1);
}
var_passignopnode5 = var_nodearraylist7;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype16 = type_nullable__nit__AAssignOp.color;
idtype17 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6417);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist8;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nit__AExpr.color;
idtype20 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6419);
fatal_exit(1);
}
var21 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var21:ACallReassignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction230> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction231#action for (self: ReduceAction231, Parser) */
void nit__parser___nit__parser__ReduceAction231___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var12 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6444);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable__nit__TId.color;
idtype10 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6446);
fatal_exit(1);
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode5 = var11;
var12 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var12, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var12:AListExprs>*/
}
var_pexprsnode4 = var12;
var_passignopnode6 = var_nodearraylist6;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype14 = type_nullable__nit__AAssignOp.color;
idtype15 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6452);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nit__AExpr.color;
idtype18 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6454);
fatal_exit(1);
}
var19 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var19, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var19:ACallReassignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction231> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction232#action for (self: ReduceAction232, Parser) */
void nit__parser___nit__parser__ReduceAction232___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6481);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable__nit__TId.color;
idtype12 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6483);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable__nit__AExprs.color;
idtype15 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6485);
fatal_exit(1);
}
var_passignopnode5 = var_nodearraylist8;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype17 = type_nullable__nit__AAssignOp.color;
idtype18 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6487);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist9;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable__nit__AExpr.color;
idtype21 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6489);
fatal_exit(1);
}
var22 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var22, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var22:ACallReassignExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction232> */
{
var24 = nit___nit__Parser___go_to(var_p, var23);
}
{
nit___nit__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction233#action for (self: ReduceAction233, Parser) */
void nit__parser___nit__parser__ReduceAction233___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var13 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6515);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable__nit__TId.color;
idtype11 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6517);
fatal_exit(1);
}
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode5 = var12;
var13 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var13, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var13:AListExprs>*/
}
var_pexprsnode4 = var13;
var_passignopnode6 = var_nodearraylist7;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype15 = type_nullable__nit__AAssignOp.color;
idtype16 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6523);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6525);
fatal_exit(1);
}
var20 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var20, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var20:ACallReassignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction233> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction236#action for (self: ReduceAction236, Parser) */
void nit__parser___nit__parser__ReduceAction236___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6548);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable__nit__AExprs.color;
idtype8 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6550);
fatal_exit(1);
}
var_passignopnode5 = var_nodearraylist3;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype10 = type_nullable__nit__AAssignOp.color;
idtype11 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6552);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6554);
fatal_exit(1);
}
var15 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var15:ACallReassignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction236> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction237#action for (self: ReduceAction237, Parser) */
void nit__parser___nit__parser__ReduceAction237___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var3); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/
}
var_pexprnode2 = var3;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6576);
fatal_exit(1);
}
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var6, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var6:AListExprs>*/
}
var_pexprsnode4 = var6;
var_passignopnode6 = var_nodearraylist2;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype8 = type_nullable__nit__AAssignOp.color;
idtype9 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6582);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist3;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype11 = type_nullable__nit__AExpr.color;
idtype12 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6584);
fatal_exit(1);
}
var13 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var13, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var13:ACallReassignExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction237> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction238#action for (self: ReduceAction238, Parser) */
void nit__parser___nit__parser__ReduceAction238___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6608);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nit__AExprs.color;
idtype9 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6610);
fatal_exit(1);
}
var_passignopnode5 = var_nodearraylist4;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype11 = type_nullable__nit__AAssignOp.color;
idtype12 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6612);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nit__AExpr.color;
idtype15 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6614);
fatal_exit(1);
}
var16 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var16:ACallReassignExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction238> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction239#action for (self: ReduceAction239, Parser) */
void nit__parser___nit__parser__ReduceAction239___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6637);
fatal_exit(1);
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var7, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode4 = var7;
var_passignopnode6 = var_nodearraylist3;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype9 = type_nullable__nit__AAssignOp.color;
idtype10 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6643);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist4;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6645);
fatal_exit(1);
}
var14 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var14:ACallReassignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction239> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction240#action for (self: ReduceAction240, Parser) */
void nit__parser___nit__parser__ReduceAction240___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var6); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/
}
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6670);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nit__AExprs.color;
idtype10 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6672);
fatal_exit(1);
}
var_passignopnode5 = var_nodearraylist5;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype12 = type_nullable__nit__AAssignOp.color;
idtype13 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_passignopnode5&3)?type_info[((long)var_passignopnode5&3)]:var_passignopnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6674);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6676);
fatal_exit(1);
}
var17 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var17:ACallReassignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction240> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction241#action for (self: ReduceAction241, Parser) */
void nit__parser___nit__parser__ReduceAction241___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var5); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6700);
fatal_exit(1);
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode5 = var7;
var8 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var8, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode4 = var8;
var_passignopnode6 = var_nodearraylist4;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype10 = type_nullable__nit__AAssignOp.color;
idtype11 = type_nullable__nit__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_passignopnode6&3)?type_info[((long)var_passignopnode6&3)]:var_passignopnode6->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6706);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist5;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6708);
fatal_exit(1);
}
var15 = NEW_nit__ACallReassignExpr(&type_nit__ACallReassignExpr);
{
nit__parser_prod___ACallReassignExpr___init_acallreassignexpr(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var15:ACallReassignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction241> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction244#action for (self: ReduceAction244, Parser) */
void nit__parser___nit__parser__ReduceAction244___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var3;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6730);
fatal_exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype6 = type_nullable__nit__AExprs.color;
idtype7 = type_nullable__nit__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6732);
fatal_exit(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype9 = type_nullable__nit__AAssignOp.color;
idtype10 = type_nullable__nit__AAssignOp.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6734);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6736);
fatal_exit(1);
}
var14 = NEW_nit__ABraReassignExpr(&type_nit__ABraReassignExpr);
{
nit__parser_prod___ABraReassignExpr___init_abrareassignexpr(var14, var_pexprnode2, var_pexprsnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#ABraReassignExpr#init_abrareassignexpr on <var14:ABraReassignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction244> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction245#action for (self: ReduceAction245, Parser) */
void nit__parser___nit__parser__ReduceAction245___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpluseqnode2 = var_nodearraylist1;
/* <var_tpluseqnode2:nullable Object> isa nullable TPluseq */
cltype = type_nullable__nit__TPluseq.color;
idtype = type_nullable__nit__TPluseq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6754);
fatal_exit(1);
}
var2 = NEW_nit__APlusAssignOp(&type_nit__APlusAssignOp);
{
nit__parser_prod___APlusAssignOp___init_aplusassignop(var2, var_tpluseqnode2); /* Direct call parser_prod#APlusAssignOp#init_aplusassignop on <var2:APlusAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction245> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction246#action for (self: ReduceAction246, Parser) */
void nit__parser___nit__parser__ReduceAction246___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tminuseqnode2 = var_nodearraylist1;
/* <var_tminuseqnode2:nullable Object> isa nullable TMinuseq */
cltype = type_nullable__nit__TMinuseq.color;
idtype = type_nullable__nit__TMinuseq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6769);
fatal_exit(1);
}
var2 = NEW_nit__AMinusAssignOp(&type_nit__AMinusAssignOp);
{
nit__parser_prod___AMinusAssignOp___init_aminusassignop(var2, var_tminuseqnode2); /* Direct call parser_prod#AMinusAssignOp#init_aminusassignop on <var2:AMinusAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction246> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction247#action for (self: ReduceAction247, Parser) */
void nit__parser___nit__parser__ReduceAction247___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstareqnode2 /* var tstareqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable AStarAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstareqnode2 = var_nodearraylist1;
/* <var_tstareqnode2:nullable Object> isa nullable TStareq */
cltype = type_nullable__nit__TStareq.color;
idtype = type_nullable__nit__TStareq.id;
if(var_tstareqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstareqnode2&3)?type_info[((long)var_tstareqnode2&3)]:var_tstareqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstareqnode2&3)?type_info[((long)var_tstareqnode2&3)]:var_tstareqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6784);
fatal_exit(1);
}
var2 = NEW_nit__AStarAssignOp(&type_nit__AStarAssignOp);
{
nit__parser_prod___AStarAssignOp___init_astarassignop(var2, var_tstareqnode2); /* Direct call parser_prod#AStarAssignOp#init_astarassignop on <var2:AStarAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction247> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction248#action for (self: ReduceAction248, Parser) */
void nit__parser___nit__parser__ReduceAction248___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tslasheqnode2 /* var tslasheqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ASlashAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable ASlashAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tslasheqnode2 = var_nodearraylist1;
/* <var_tslasheqnode2:nullable Object> isa nullable TSlasheq */
cltype = type_nullable__nit__TSlasheq.color;
idtype = type_nullable__nit__TSlasheq.id;
if(var_tslasheqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tslasheqnode2&3)?type_info[((long)var_tslasheqnode2&3)]:var_tslasheqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tslasheqnode2&3)?type_info[((long)var_tslasheqnode2&3)]:var_tslasheqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6799);
fatal_exit(1);
}
var2 = NEW_nit__ASlashAssignOp(&type_nit__ASlashAssignOp);
{
nit__parser_prod___ASlashAssignOp___init_aslashassignop(var2, var_tslasheqnode2); /* Direct call parser_prod#ASlashAssignOp#init_aslashassignop on <var2:ASlashAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction248> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction249#action for (self: ReduceAction249, Parser) */
void nit__parser___nit__parser__ReduceAction249___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpercenteqnode2 /* var tpercenteqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APercentAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable APercentAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpercenteqnode2 = var_nodearraylist1;
/* <var_tpercenteqnode2:nullable Object> isa nullable TPercenteq */
cltype = type_nullable__nit__TPercenteq.color;
idtype = type_nullable__nit__TPercenteq.id;
if(var_tpercenteqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tpercenteqnode2&3)?type_info[((long)var_tpercenteqnode2&3)]:var_tpercenteqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tpercenteqnode2&3)?type_info[((long)var_tpercenteqnode2&3)]:var_tpercenteqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6814);
fatal_exit(1);
}
var2 = NEW_nit__APercentAssignOp(&type_nit__APercentAssignOp);
{
nit__parser_prod___APercentAssignOp___init_apercentassignop(var2, var_tpercenteqnode2); /* Direct call parser_prod#APercentAssignOp#init_apercentassignop on <var2:APercentAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction249> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction250#action for (self: ReduceAction250, Parser) */
void nit__parser___nit__parser__ReduceAction250___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarstareqnode2 /* var tstarstareqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarstarAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable AStarstarAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarstareqnode2 = var_nodearraylist1;
/* <var_tstarstareqnode2:nullable Object> isa nullable TStarstareq */
cltype = type_nullable__nit__TStarstareq.color;
idtype = type_nullable__nit__TStarstareq.id;
if(var_tstarstareqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstarstareqnode2&3)?type_info[((long)var_tstarstareqnode2&3)]:var_tstarstareqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstarstareqnode2&3)?type_info[((long)var_tstarstareqnode2&3)]:var_tstarstareqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6829);
fatal_exit(1);
}
var2 = NEW_nit__AStarstarAssignOp(&type_nit__AStarstarAssignOp);
{
nit__parser_prod___AStarstarAssignOp___init_astarstarassignop(var2, var_tstarstareqnode2); /* Direct call parser_prod#AStarstarAssignOp#init_astarstarassignop on <var2:AStarstarAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction250> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction251#action for (self: ReduceAction251, Parser) */
void nit__parser___nit__parser__ReduceAction251___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpipeeqnode2 /* var tpipeeqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APipeAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable APipeAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpipeeqnode2 = var_nodearraylist1;
/* <var_tpipeeqnode2:nullable Object> isa nullable TPipeeq */
cltype = type_nullable__nit__TPipeeq.color;
idtype = type_nullable__nit__TPipeeq.id;
if(var_tpipeeqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tpipeeqnode2&3)?type_info[((long)var_tpipeeqnode2&3)]:var_tpipeeqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tpipeeqnode2&3)?type_info[((long)var_tpipeeqnode2&3)]:var_tpipeeqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6844);
fatal_exit(1);
}
var2 = NEW_nit__APipeAssignOp(&type_nit__APipeAssignOp);
{
nit__parser_prod___APipeAssignOp___init_apipeassignop(var2, var_tpipeeqnode2); /* Direct call parser_prod#APipeAssignOp#init_apipeassignop on <var2:APipeAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction251> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction252#action for (self: ReduceAction252, Parser) */
void nit__parser___nit__parser__ReduceAction252___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcareteqnode2 /* var tcareteqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ACaretAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable ACaretAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tcareteqnode2 = var_nodearraylist1;
/* <var_tcareteqnode2:nullable Object> isa nullable TCareteq */
cltype = type_nullable__nit__TCareteq.color;
idtype = type_nullable__nit__TCareteq.id;
if(var_tcareteqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tcareteqnode2&3)?type_info[((long)var_tcareteqnode2&3)]:var_tcareteqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tcareteqnode2&3)?type_info[((long)var_tcareteqnode2&3)]:var_tcareteqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6859);
fatal_exit(1);
}
var2 = NEW_nit__ACaretAssignOp(&type_nit__ACaretAssignOp);
{
nit__parser_prod___ACaretAssignOp___init_acaretassignop(var2, var_tcareteqnode2); /* Direct call parser_prod#ACaretAssignOp#init_acaretassignop on <var2:ACaretAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction252> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction253#action for (self: ReduceAction253, Parser) */
void nit__parser___nit__parser__ReduceAction253___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tampeqnode2 /* var tampeqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AAmpAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable AAmpAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tampeqnode2 = var_nodearraylist1;
/* <var_tampeqnode2:nullable Object> isa nullable TAmpeq */
cltype = type_nullable__nit__TAmpeq.color;
idtype = type_nullable__nit__TAmpeq.id;
if(var_tampeqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tampeqnode2&3)?type_info[((long)var_tampeqnode2&3)]:var_tampeqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tampeqnode2&3)?type_info[((long)var_tampeqnode2&3)]:var_tampeqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6874);
fatal_exit(1);
}
var2 = NEW_nit__AAmpAssignOp(&type_nit__AAmpAssignOp);
{
nit__parser_prod___AAmpAssignOp___init_aampassignop(var2, var_tampeqnode2); /* Direct call parser_prod#AAmpAssignOp#init_aampassignop on <var2:AAmpAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction253> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction254#action for (self: ReduceAction254, Parser) */
void nit__parser___nit__parser__ReduceAction254___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tlleqnode2 /* var tlleqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALlAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable ALlAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tlleqnode2 = var_nodearraylist1;
/* <var_tlleqnode2:nullable Object> isa nullable TLleq */
cltype = type_nullable__nit__TLleq.color;
idtype = type_nullable__nit__TLleq.id;
if(var_tlleqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tlleqnode2&3)?type_info[((long)var_tlleqnode2&3)]:var_tlleqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tlleqnode2&3)?type_info[((long)var_tlleqnode2&3)]:var_tlleqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6889);
fatal_exit(1);
}
var2 = NEW_nit__ALlAssignOp(&type_nit__ALlAssignOp);
{
nit__parser_prod___ALlAssignOp___init_allassignop(var2, var_tlleqnode2); /* Direct call parser_prod#ALlAssignOp#init_allassignop on <var2:ALlAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction254> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction255#action for (self: ReduceAction255, Parser) */
void nit__parser___nit__parser__ReduceAction255___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tggeqnode2 /* var tggeqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AGgAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable AGgAssignOp */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tggeqnode2 = var_nodearraylist1;
/* <var_tggeqnode2:nullable Object> isa nullable TGgeq */
cltype = type_nullable__nit__TGgeq.color;
idtype = type_nullable__nit__TGgeq.id;
if(var_tggeqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tggeqnode2&3)?type_info[((long)var_tggeqnode2&3)]:var_tggeqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tggeqnode2&3)?type_info[((long)var_tggeqnode2&3)]:var_tggeqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6904);
fatal_exit(1);
}
var2 = NEW_nit__AGgAssignOp(&type_nit__AGgAssignOp);
{
nit__parser_prod___AGgAssignOp___init_aggassignop(var2, var_tggeqnode2); /* Direct call parser_prod#AGgAssignOp#init_aggassignop on <var2:AGgAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction255> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction256#action for (self: ReduceAction256, Parser) */
void nit__parser___nit__parser__ReduceAction256___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwdonode2 /* var tkwdonode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_plabelnode4 /* var plabelnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ADoExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADoExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwdonode2 = var_nodearraylist1;
/* <var_tkwdonode2:nullable Object> isa nullable TKwdo */
cltype = type_nullable__nit__TKwdo.color;
idtype = type_nullable__nit__TKwdo.id;
if(var_tkwdonode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwdonode2&3)?type_info[((long)var_tkwdonode2&3)]:var_tkwdonode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwdonode2&3)?type_info[((long)var_tkwdonode2&3)]:var_tkwdonode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6921);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable__nit__AExpr.color;
idtype6 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6923);
fatal_exit(1);
}
var_plabelnode4 = var_nodearraylist3;
/* <var_plabelnode4:nullable Object> isa nullable ALabel */
cltype8 = type_nullable__nit__ALabel.color;
idtype9 = type_nullable__nit__ALabel.id;
if(var_plabelnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_plabelnode4&3)?type_info[((long)var_plabelnode4&3)]:var_plabelnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_plabelnode4&3)?type_info[((long)var_plabelnode4&3)]:var_plabelnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6925);
fatal_exit(1);
}
var10 = NEW_nit__ADoExpr(&type_nit__ADoExpr);
{
nit__parser_prod___ADoExpr___init_adoexpr(var10, var_tkwdonode2, var_pexprnode3, var_plabelnode4); /* Direct call parser_prod#ADoExpr#init_adoexpr on <var10:ADoExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction256> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction257#action for (self: ReduceAction257, Parser) */
void nit__parser___nit__parser__ReduceAction257___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwdonode2 /* var tkwdonode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ADoExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADoExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwdonode2 = var_nodearraylist1;
/* <var_tkwdonode2:nullable Object> isa nullable TKwdo */
cltype = type_nullable__nit__TKwdo.color;
idtype = type_nullable__nit__TKwdo.id;
if(var_tkwdonode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwdonode2&3)?type_info[((long)var_tkwdonode2&3)]:var_tkwdonode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwdonode2&3)?type_info[((long)var_tkwdonode2&3)]:var_tkwdonode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6943);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nit__AExpr.color;
idtype5 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6945);
fatal_exit(1);
}
var6 = NEW_nit__ADoExpr(&type_nit__ADoExpr);
{
nit__parser_prod___ADoExpr___init_adoexpr(var6, var_tkwdonode2, var_pexprnode3, ((val*)NULL)); /* Direct call parser_prod#ADoExpr#init_adoexpr on <var6:ADoExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction257> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction258#action for (self: ReduceAction258, Parser) */
void nit__parser___nit__parser__ReduceAction258___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwelsenode6 /* var tkwelsenode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6969);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6971);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype13 = type_nullable__nit__TKwthen.color;
idtype14 = type_nullable__nit__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6973);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nit__AExpr.color;
idtype17 = type_nullable__nit__AExpr.id;
if(var_pexprnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6975);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist7;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype19 = type_nullable__nit__TKwelse.color;
idtype20 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6977);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype22 = type_nullable__nit__AExpr.color;
idtype23 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 6979);
fatal_exit(1);
}
var24 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var24, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var24:AIfExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction258> */
{
var26 = nit___nit__Parser___go_to(var_p, var25);
}
{
nit___nit__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction259#action for (self: ReduceAction259, Parser) */
void nit__parser___nit__parser__ReduceAction259___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7004);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7006);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype11 = type_nullable__nit__TKwthen.color;
idtype12 = type_nullable__nit__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7008);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nit__AExpr.color;
idtype15 = type_nullable__nit__AExpr.id;
if(var_pexprnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7010);
fatal_exit(1);
}
var16 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var16, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var16:AIfExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction259> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction260#action for (self: ReduceAction260, Parser) */
void nit__parser___nit__parser__ReduceAction260___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tkwelsenode6 /* var tkwelsenode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var26 /* : Int */;
long var27 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7038);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype11 = type_nullable__nit__AExpr.color;
idtype12 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7040);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype14 = type_nullable__nit__TKwthen.color;
idtype15 = type_nullable__nit__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7042);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nit__AExpr.color;
idtype18 = type_nullable__nit__AExpr.id;
if(var_pexprnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7044);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist8;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype20 = type_nullable__nit__TKwelse.color;
idtype21 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7046);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist9;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nit__AExpr.color;
idtype24 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7048);
fatal_exit(1);
}
var25 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var25, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var25:AIfExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction260> */
{
var27 = nit___nit__Parser___go_to(var_p, var26);
}
{
nit___nit__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction261#action for (self: ReduceAction261, Parser) */
void nit__parser___nit__parser__ReduceAction261___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwelsenode6 /* var tkwelsenode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7074);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7076);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype12 = type_nullable__nit__TKwthen.color;
idtype13 = type_nullable__nit__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7078);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist6;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype15 = type_nullable__nit__TKwelse.color;
idtype16 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7080);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7082);
fatal_exit(1);
}
var20 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var20, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var20:AIfExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction261> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction262#action for (self: ReduceAction262, Parser) */
void nit__parser___nit__parser__ReduceAction262___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwelsenode6 /* var tkwelsenode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7109);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7111);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype13 = type_nullable__nit__TKwthen.color;
idtype14 = type_nullable__nit__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7113);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist7;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype16 = type_nullable__nit__TKwelse.color;
idtype17 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7115);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nit__AExpr.color;
idtype20 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7117);
fatal_exit(1);
}
var21 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var21, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var21:AIfExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction262> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction263#action for (self: ReduceAction263, Parser) */
void nit__parser___nit__parser__ReduceAction263___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7144);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7146);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype13 = type_nullable__nit__TKwthen.color;
idtype14 = type_nullable__nit__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7148);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nit__AExpr.color;
idtype17 = type_nullable__nit__AExpr.id;
if(var_pexprnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7150);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nit__AExpr.color;
idtype20 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7152);
fatal_exit(1);
}
var21 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var21, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, ((val*)NULL), var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var21:AIfExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction263> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction264#action for (self: ReduceAction264, Parser) */
void nit__parser___nit__parser__ReduceAction264___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7177);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7179);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype11 = type_nullable__nit__TKwthen.color;
idtype12 = type_nullable__nit__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7181);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist6;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nit__AExpr.color;
idtype15 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7183);
fatal_exit(1);
}
var16 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var16, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), ((val*)NULL), var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var16:AIfExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction264> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction265#action for (self: ReduceAction265, Parser) */
void nit__parser___nit__parser__ReduceAction265___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7209);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7211);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype12 = type_nullable__nit__TKwthen.color;
idtype13 = type_nullable__nit__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7213);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7215);
fatal_exit(1);
}
var17 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var17, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), ((val*)NULL), var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var17:AIfExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction265> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction267#action for (self: ReduceAction267, Parser) */
void nit__parser___nit__parser__ReduceAction267___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwloopnode2 /* var tkwloopnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_plabelnode4 /* var plabelnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ALoopExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALoopExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwloopnode2 = var_nodearraylist1;
/* <var_tkwloopnode2:nullable Object> isa nullable TKwloop */
cltype = type_nullable__nit__TKwloop.color;
idtype = type_nullable__nit__TKwloop.id;
if(var_tkwloopnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwloopnode2&3)?type_info[((long)var_tkwloopnode2&3)]:var_tkwloopnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwloopnode2&3)?type_info[((long)var_tkwloopnode2&3)]:var_tkwloopnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7237);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable__nit__AExpr.color;
idtype6 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7239);
fatal_exit(1);
}
var_plabelnode4 = var_nodearraylist3;
/* <var_plabelnode4:nullable Object> isa nullable ALabel */
cltype8 = type_nullable__nit__ALabel.color;
idtype9 = type_nullable__nit__ALabel.id;
if(var_plabelnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_plabelnode4&3)?type_info[((long)var_plabelnode4&3)]:var_plabelnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_plabelnode4&3)?type_info[((long)var_plabelnode4&3)]:var_plabelnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7241);
fatal_exit(1);
}
var10 = NEW_nit__ALoopExpr(&type_nit__ALoopExpr);
{
nit__parser_prod___ALoopExpr___init_aloopexpr(var10, var_tkwloopnode2, var_pexprnode3, var_plabelnode4); /* Direct call parser_prod#ALoopExpr#init_aloopexpr on <var10:ALoopExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction267> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction268#action for (self: ReduceAction268, Parser) */
void nit__parser___nit__parser__ReduceAction268___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwloopnode2 /* var tkwloopnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ALoopExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALoopExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwloopnode2 = var_nodearraylist1;
/* <var_tkwloopnode2:nullable Object> isa nullable TKwloop */
cltype = type_nullable__nit__TKwloop.color;
idtype = type_nullable__nit__TKwloop.id;
if(var_tkwloopnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwloopnode2&3)?type_info[((long)var_tkwloopnode2&3)]:var_tkwloopnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwloopnode2&3)?type_info[((long)var_tkwloopnode2&3)]:var_tkwloopnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7259);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nit__AExpr.color;
idtype5 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7261);
fatal_exit(1);
}
var6 = NEW_nit__ALoopExpr(&type_nit__ALoopExpr);
{
nit__parser_prod___ALoopExpr___init_aloopexpr(var6, var_tkwloopnode2, var_pexprnode3, ((val*)NULL)); /* Direct call parser_prod#ALoopExpr#init_aloopexpr on <var6:ALoopExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction268> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction269#action for (self: ReduceAction269, Parser) */
void nit__parser___nit__parser__ReduceAction269___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwwhilenode2 /* var tkwwhilenode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwdonode4 /* var tkwdonode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_plabelnode6 /* var plabelnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AWhileExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AWhileExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_tkwwhilenode2 = var_nodearraylist1;
/* <var_tkwwhilenode2:nullable Object> isa nullable TKwwhile */
cltype = type_nullable__nit__TKwwhile.color;
idtype = type_nullable__nit__TKwwhile.id;
if(var_tkwwhilenode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwwhilenode2&3)?type_info[((long)var_tkwwhilenode2&3)]:var_tkwwhilenode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwwhilenode2&3)?type_info[((long)var_tkwwhilenode2&3)]:var_tkwwhilenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7284);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7286);
fatal_exit(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype12 = type_nullable__nit__TKwdo.color;
idtype13 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwdonode4&3)?type_info[((long)var_tkwdonode4&3)]:var_tkwdonode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwdonode4&3)?type_info[((long)var_tkwdonode4&3)]:var_tkwdonode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7288);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nit__AExpr.color;
idtype16 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7290);
fatal_exit(1);
}
var_plabelnode6 = var_nodearraylist7;
/* <var_plabelnode6:nullable Object> isa nullable ALabel */
cltype18 = type_nullable__nit__ALabel.color;
idtype19 = type_nullable__nit__ALabel.id;
if(var_plabelnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_plabelnode6&3)?type_info[((long)var_plabelnode6&3)]:var_plabelnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_plabelnode6&3)?type_info[((long)var_plabelnode6&3)]:var_plabelnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7292);
fatal_exit(1);
}
var20 = NEW_nit__AWhileExpr(&type_nit__AWhileExpr);
{
nit__parser_prod___AWhileExpr___init_awhileexpr(var20, var_tkwwhilenode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, var_plabelnode6); /* Direct call parser_prod#AWhileExpr#init_awhileexpr on <var20:AWhileExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction269> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction270#action for (self: ReduceAction270, Parser) */
void nit__parser___nit__parser__ReduceAction270___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwwhilenode2 /* var tkwwhilenode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwdonode4 /* var tkwdonode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AWhileExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AWhileExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var_tkwwhilenode2 = var_nodearraylist1;
/* <var_tkwwhilenode2:nullable Object> isa nullable TKwwhile */
cltype = type_nullable__nit__TKwwhile.color;
idtype = type_nullable__nit__TKwwhile.id;
if(var_tkwwhilenode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwwhilenode2&3)?type_info[((long)var_tkwwhilenode2&3)]:var_tkwwhilenode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwwhilenode2&3)?type_info[((long)var_tkwwhilenode2&3)]:var_tkwwhilenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7316);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7318);
fatal_exit(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype11 = type_nullable__nit__TKwdo.color;
idtype12 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwdonode4&3)?type_info[((long)var_tkwdonode4&3)]:var_tkwdonode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwdonode4&3)?type_info[((long)var_tkwdonode4&3)]:var_tkwdonode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7320);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nit__AExpr.color;
idtype15 = type_nullable__nit__AExpr.id;
if(var_pexprnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7322);
fatal_exit(1);
}
var16 = NEW_nit__AWhileExpr(&type_nit__AWhileExpr);
{
nit__parser_prod___AWhileExpr___init_awhileexpr(var16, var_tkwwhilenode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, ((val*)NULL)); /* Direct call parser_prod#AWhileExpr#init_awhileexpr on <var16:AWhileExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction270> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction271#action for (self: ReduceAction271, Parser) */
void nit__parser___nit__parser__ReduceAction271___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_tkwinnode5 /* var tkwinnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tkwdonode7 /* var tkwdonode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_plabelnode9 /* var plabelnode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AForExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var10;
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode4 = var11;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable__nit__TKwfor.color;
idtype = type_nullable__nit__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var12 = 1;
} else {
if(cltype >= (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7352);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var13 = 0;
} else {
if(cltype14 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7354);
fatal_exit(1);
}
{
var16 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var16;
var_tkwinnode5 = var_nodearraylist5;
/* <var_tkwinnode5:nullable Object> isa nullable TKwin */
cltype18 = type_nullable__nit__TKwin.color;
idtype19 = type_nullable__nit__TKwin.id;
if(var_tkwinnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwinnode5&3)?type_info[((long)var_tkwinnode5&3)]:var_tkwinnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwinnode5&3)?type_info[((long)var_tkwinnode5&3)]:var_tkwinnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7357);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype21 = type_nullable__nit__AExpr.color;
idtype22 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7359);
fatal_exit(1);
}
var_tkwdonode7 = var_nodearraylist9;
/* <var_tkwdonode7:nullable Object> isa nullable TKwdo */
cltype24 = type_nullable__nit__TKwdo.color;
idtype25 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_tkwdonode7&3)?type_info[((long)var_tkwdonode7&3)]:var_tkwdonode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_tkwdonode7&3)?type_info[((long)var_tkwdonode7&3)]:var_tkwdonode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7361);
fatal_exit(1);
}
var_pexprnode8 = var_nodearraylist10;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
if(var_pexprnode8 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7363);
fatal_exit(1);
}
var_plabelnode9 = var_nodearraylist11;
/* <var_plabelnode9:nullable Object> isa nullable ALabel */
cltype30 = type_nullable__nit__ALabel.color;
idtype31 = type_nullable__nit__ALabel.id;
if(var_plabelnode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_plabelnode9&3)?type_info[((long)var_plabelnode9&3)]:var_plabelnode9->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_plabelnode9&3)?type_info[((long)var_plabelnode9&3)]:var_plabelnode9->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7365);
fatal_exit(1);
}
var32 = NEW_nit__AForExpr(&type_nit__AForExpr);
{
nit__parser_prod___AForExpr___init_aforexpr(var32, var_tkwfornode2, var_listnode4, var_tkwinnode5, var_pexprnode6, var_tkwdonode7, var_pexprnode8, var_plabelnode9); /* Direct call parser_prod#AForExpr#init_aforexpr on <var32:AForExpr>*/
}
var_pexprnode1 = var32;
var_node_list = var_pexprnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction271> */
{
var34 = nit___nit__Parser___go_to(var_p, var33);
}
{
nit___nit__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction272#action for (self: ReduceAction272, Parser) */
void nit__parser___nit__parser__ReduceAction272___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_tkwinnode5 /* var tkwinnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tkwdonode7 /* var tkwdonode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AForExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode4 = var10;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable__nit__TKwfor.color;
idtype = type_nullable__nit__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var11 = 1;
} else {
if(cltype >= (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7396);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7398);
fatal_exit(1);
}
{
var15 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var15;
var_tkwinnode5 = var_nodearraylist5;
/* <var_tkwinnode5:nullable Object> isa nullable TKwin */
cltype17 = type_nullable__nit__TKwin.color;
idtype18 = type_nullable__nit__TKwin.id;
if(var_tkwinnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwinnode5&3)?type_info[((long)var_tkwinnode5&3)]:var_tkwinnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwinnode5&3)?type_info[((long)var_tkwinnode5&3)]:var_tkwinnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7401);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable__nit__AExpr.color;
idtype21 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7403);
fatal_exit(1);
}
var_tkwdonode7 = var_nodearraylist9;
/* <var_tkwdonode7:nullable Object> isa nullable TKwdo */
cltype23 = type_nullable__nit__TKwdo.color;
idtype24 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_tkwdonode7&3)?type_info[((long)var_tkwdonode7&3)]:var_tkwdonode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_tkwdonode7&3)?type_info[((long)var_tkwdonode7&3)]:var_tkwdonode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7405);
fatal_exit(1);
}
var_pexprnode8 = var_nodearraylist10;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
if(var_pexprnode8 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pexprnode8&3)?type_info[((long)var_pexprnode8&3)]:var_pexprnode8->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7407);
fatal_exit(1);
}
var28 = NEW_nit__AForExpr(&type_nit__AForExpr);
{
nit__parser_prod___AForExpr___init_aforexpr(var28, var_tkwfornode2, var_listnode4, var_tkwinnode5, var_pexprnode6, var_tkwdonode7, var_pexprnode8, ((val*)NULL)); /* Direct call parser_prod#AForExpr#init_aforexpr on <var28:AForExpr>*/
}
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction272> */
{
var30 = nit___nit__Parser___go_to(var_p, var29);
}
{
nit___nit__Parser___push(var_p, var30, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
