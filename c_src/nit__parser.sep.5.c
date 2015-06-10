#include "nit__parser.sep.0.h"
/* method parser#ReduceAction273#action for (self: ReduceAction273, Parser) */
void nit__parser___nit__parser__ReduceAction273___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwwithnode2 /* var tkwwithnode2: nullable Object */;
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
val* var20 /* : AWithExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AWithExpr */;
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
var_tkwwithnode2 = var_nodearraylist1;
/* <var_tkwwithnode2:nullable Object> isa nullable TKwwith */
cltype = type_nullable__nit__TKwwith.color;
idtype = type_nullable__nit__TKwwith.id;
if(var_tkwwithnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwwithnode2&3)?type_info[((long)var_tkwwithnode2&3)]:var_tkwwithnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwwithnode2&3)?type_info[((long)var_tkwwithnode2&3)]:var_tkwwithnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7434);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7436);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7438);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7440);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7442);
fatal_exit(1);
}
var20 = NEW_nit__AWithExpr(&type_nit__AWithExpr);
{
nit__parser_prod___AWithExpr___init_awithexpr(var20, var_tkwwithnode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, var_plabelnode6); /* Direct call parser_prod#AWithExpr#init_awithexpr on <var20:AWithExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction273> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction274#action for (self: ReduceAction274, Parser) */
void nit__parser___nit__parser__ReduceAction274___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwwithnode2 /* var tkwwithnode2: nullable Object */;
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
val* var16 /* : AWithExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AWithExpr */;
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
var_tkwwithnode2 = var_nodearraylist1;
/* <var_tkwwithnode2:nullable Object> isa nullable TKwwith */
cltype = type_nullable__nit__TKwwith.color;
idtype = type_nullable__nit__TKwwith.id;
if(var_tkwwithnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwwithnode2&3)?type_info[((long)var_tkwwithnode2&3)]:var_tkwwithnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwwithnode2&3)?type_info[((long)var_tkwwithnode2&3)]:var_tkwwithnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7466);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7468);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7470);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7472);
fatal_exit(1);
}
var16 = NEW_nit__AWithExpr(&type_nit__AWithExpr);
{
nit__parser_prod___AWithExpr___init_awithexpr(var16, var_tkwwithnode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, ((val*)NULL)); /* Direct call parser_prod#AWithExpr#init_awithexpr on <var16:AWithExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction274> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction275#action for (self: ReduceAction275, Parser) */
void nit__parser___nit__parser__ReduceAction275___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
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
val* var15 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7495);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist2;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype7 = type_nullable__nit__AType.color;
idtype8 = type_nullable__nit__AType.id;
if(var_ptypenode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_ptypenode4&3)?type_info[((long)var_ptypenode4&3)]:var_ptypenode4->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7497);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7499);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7501);
fatal_exit(1);
}
var15 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
nit__parser_prod___AVardeclExpr___init_avardeclexpr(var15, ((val*)NULL), var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, ((val*)NULL)); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var15:AVardeclExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction275> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction276#action for (self: ReduceAction276, Parser) */
void nit__parser___nit__parser__ReduceAction276___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
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
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
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
var_tidnode3 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7526);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7528);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7530);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7532);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist2;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype17 = type_nullable__nit__AAnnotations.color;
idtype18 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7534);
fatal_exit(1);
}
var19 = NEW_nit__AVardeclExpr(&type_nit__AVardeclExpr);
{
nit__parser_prod___AVardeclExpr___init_avardeclexpr(var19, ((val*)NULL), var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var19:AVardeclExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction276> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction278#action for (self: ReduceAction278, Parser) */
void nit__parser___nit__parser__ReduceAction278___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tkwelsenode5 /* var tkwelsenode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AAssertExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
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
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nit__TKwassert.color;
idtype = type_nullable__nit__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7557);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist2;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype6 = type_nullable__nit__AExpr.color;
idtype7 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7559);
fatal_exit(1);
}
var_tkwelsenode5 = var_nodearraylist3;
/* <var_tkwelsenode5:nullable Object> isa nullable TKwelse */
cltype9 = type_nullable__nit__TKwelse.color;
idtype10 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwelsenode5&3)?type_info[((long)var_tkwelsenode5&3)]:var_tkwelsenode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwelsenode5&3)?type_info[((long)var_tkwelsenode5&3)]:var_tkwelsenode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7561);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7563);
fatal_exit(1);
}
var14 = NEW_nit__AAssertExpr(&type_nit__AAssertExpr);
{
nit__parser_prod___AAssertExpr___init_aassertexpr(var14, var_tkwassertnode2, ((val*)NULL), var_pexprnode4, var_tkwelsenode5, var_pexprnode6); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var14:AAssertExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction278> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction279#action for (self: ReduceAction279, Parser) */
void nit__parser___nit__parser__ReduceAction279___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwelsenode5 /* var tkwelsenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAssertExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nit__TKwassert.color;
idtype = type_nullable__nit__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7586);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7588);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7590);
fatal_exit(1);
}
var_tkwelsenode5 = var_nodearraylist4;
/* <var_tkwelsenode5:nullable Object> isa nullable TKwelse */
cltype13 = type_nullable__nit__TKwelse.color;
idtype14 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwelsenode5&3)?type_info[((long)var_tkwelsenode5&3)]:var_tkwelsenode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwelsenode5&3)?type_info[((long)var_tkwelsenode5&3)]:var_tkwelsenode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7592);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nit__AExpr.color;
idtype17 = type_nullable__nit__AExpr.id;
if(var_pexprnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprnode6&3)?type_info[((long)var_pexprnode6&3)]:var_pexprnode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7594);
fatal_exit(1);
}
var18 = NEW_nit__AAssertExpr(&type_nit__AAssertExpr);
{
nit__parser_prod___AAssertExpr___init_aassertexpr(var18, var_tkwassertnode2, var_tidnode3, var_pexprnode4, var_tkwelsenode5, var_pexprnode6); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var18:AAssertExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction279> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction280#action for (self: ReduceAction280, Parser) */
void nit__parser___nit__parser__ReduceAction280___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AAssertExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
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
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nit__TKwassert.color;
idtype = type_nullable__nit__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7614);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist2;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nit__AExpr.color;
idtype5 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7616);
fatal_exit(1);
}
var6 = NEW_nit__AAssertExpr(&type_nit__AAssertExpr);
{
nit__parser_prod___AAssertExpr___init_aassertexpr(var6, var_tkwassertnode2, ((val*)NULL), var_pexprnode4, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var6:AAssertExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction280> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction281#action for (self: ReduceAction281, Parser) */
void nit__parser___nit__parser__ReduceAction281___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AAssertExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
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
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nit__TKwassert.color;
idtype = type_nullable__nit__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwassertnode2&3)?type_info[((long)var_tkwassertnode2&3)]:var_tkwassertnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7637);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7639);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7641);
fatal_exit(1);
}
var10 = NEW_nit__AAssertExpr(&type_nit__AAssertExpr);
{
nit__parser_prod___AAssertExpr___init_aassertexpr(var10, var_tkwassertnode2, var_tidnode3, var_pexprnode4, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var10:AAssertExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction281> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction282#action for (self: ReduceAction282, Parser) */
void nit__parser___nit__parser__ReduceAction282___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
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
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction282> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction284#action for (self: ReduceAction284, Parser) */
void nit__parser___nit__parser__ReduceAction284___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwelsenode6 /* var tkwelsenode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AIfexprExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfexprExpr */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nit__TKwif.color;
idtype = type_nullable__nit__TKwif.id;
if(var_tkwifnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwifnode2&3)?type_info[((long)var_tkwifnode2&3)]:var_tkwifnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7682);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode3&3)?type_info[((long)var_pexprnode3&3)]:var_pexprnode3->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7684);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype16 = type_nullable__nit__TKwthen.color;
idtype17 = type_nullable__nit__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwthennode4&3)?type_info[((long)var_tkwthennode4&3)]:var_tkwthennode4->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7686);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nit__AExpr.color;
idtype20 = type_nullable__nit__AExpr.id;
if(var_pexprnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7688);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist9;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype22 = type_nullable__nit__TKwelse.color;
idtype23 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tkwelsenode6&3)?type_info[((long)var_tkwelsenode6&3)]:var_tkwelsenode6->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7690);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist11;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nit__AExpr.color;
idtype26 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode7&3)?type_info[((long)var_pexprnode7&3)]:var_pexprnode7->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7692);
fatal_exit(1);
}
var27 = NEW_nit__AIfexprExpr(&type_nit__AIfexprExpr);
{
nit__parser_prod___AIfexprExpr___init_aifexprexpr(var27, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfexprExpr#init_aifexprexpr on <var27:AIfexprExpr>*/
}
var_pexprnode1 = var27;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction284> */
{
var29 = nit___nit__Parser___go_to(var_p, var28);
}
{
nit___nit__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction286#action for (self: ReduceAction286, Parser) */
void nit__parser___nit__parser__ReduceAction286___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwornode3 /* var tkwornode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AOrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7715);
fatal_exit(1);
}
var_tkwornode3 = var_nodearraylist2;
/* <var_tkwornode3:nullable Object> isa nullable TKwor */
cltype6 = type_nullable__nit__TKwor.color;
idtype7 = type_nullable__nit__TKwor.id;
if(var_tkwornode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tkwornode3&3)?type_info[((long)var_tkwornode3&3)]:var_tkwornode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwornode3&3)?type_info[((long)var_tkwornode3&3)]:var_tkwornode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7717);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7719);
fatal_exit(1);
}
var11 = NEW_nit__AOrExpr(&type_nit__AOrExpr);
{
nit__parser_prod___AOrExpr___init_aorexpr(var11, var_pexprnode2, var_tkwornode3, var_pexprnode4); /* Direct call parser_prod#AOrExpr#init_aorexpr on <var11:AOrExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction286> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction287#action for (self: ReduceAction287, Parser) */
void nit__parser___nit__parser__ReduceAction287___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwandnode3 /* var tkwandnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AAndExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAndExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7739);
fatal_exit(1);
}
var_tkwandnode3 = var_nodearraylist2;
/* <var_tkwandnode3:nullable Object> isa nullable TKwand */
cltype6 = type_nullable__nit__TKwand.color;
idtype7 = type_nullable__nit__TKwand.id;
if(var_tkwandnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tkwandnode3&3)?type_info[((long)var_tkwandnode3&3)]:var_tkwandnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwandnode3&3)?type_info[((long)var_tkwandnode3&3)]:var_tkwandnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7741);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7743);
fatal_exit(1);
}
var11 = NEW_nit__AAndExpr(&type_nit__AAndExpr);
{
nit__parser_prod___AAndExpr___init_aandexpr(var11, var_pexprnode2, var_tkwandnode3, var_pexprnode4); /* Direct call parser_prod#AAndExpr#init_aandexpr on <var11:AAndExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction287> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction288#action for (self: ReduceAction288, Parser) */
void nit__parser___nit__parser__ReduceAction288___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwornode3 /* var tkwornode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tkwelsenode4 /* var tkwelsenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AOrElseExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrElseExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7764);
fatal_exit(1);
}
var_tkwornode3 = var_nodearraylist2;
/* <var_tkwornode3:nullable Object> isa nullable TKwor */
cltype7 = type_nullable__nit__TKwor.color;
idtype8 = type_nullable__nit__TKwor.id;
if(var_tkwornode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tkwornode3&3)?type_info[((long)var_tkwornode3&3)]:var_tkwornode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwornode3&3)?type_info[((long)var_tkwornode3&3)]:var_tkwornode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7766);
fatal_exit(1);
}
var_tkwelsenode4 = var_nodearraylist3;
/* <var_tkwelsenode4:nullable Object> isa nullable TKwelse */
cltype10 = type_nullable__nit__TKwelse.color;
idtype11 = type_nullable__nit__TKwelse.id;
if(var_tkwelsenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwelsenode4&3)?type_info[((long)var_tkwelsenode4&3)]:var_tkwelsenode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwelsenode4&3)?type_info[((long)var_tkwelsenode4&3)]:var_tkwelsenode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7768);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist5;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
if(var_pexprnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pexprnode5&3)?type_info[((long)var_pexprnode5&3)]:var_pexprnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7770);
fatal_exit(1);
}
var15 = NEW_nit__AOrElseExpr(&type_nit__AOrElseExpr);
{
nit__parser_prod___AOrElseExpr___init_aorelseexpr(var15, var_pexprnode2, var_tkwornode3, var_tkwelsenode4, var_pexprnode5); /* Direct call parser_prod#AOrElseExpr#init_aorelseexpr on <var15:AOrElseExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction288> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction289#action for (self: ReduceAction289, Parser) */
void nit__parser___nit__parser__ReduceAction289___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwimpliesnode3 /* var tkwimpliesnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AImpliesExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImpliesExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7791);
fatal_exit(1);
}
var_tkwimpliesnode3 = var_nodearraylist2;
/* <var_tkwimpliesnode3:nullable Object> isa nullable TKwimplies */
cltype6 = type_nullable__nit__TKwimplies.color;
idtype7 = type_nullable__nit__TKwimplies.id;
if(var_tkwimpliesnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tkwimpliesnode3&3)?type_info[((long)var_tkwimpliesnode3&3)]:var_tkwimpliesnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwimpliesnode3&3)?type_info[((long)var_tkwimpliesnode3&3)]:var_tkwimpliesnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7793);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7795);
fatal_exit(1);
}
var11 = NEW_nit__AImpliesExpr(&type_nit__AImpliesExpr);
{
nit__parser_prod___AImpliesExpr___init_aimpliesexpr(var11, var_pexprnode2, var_tkwimpliesnode3, var_pexprnode4); /* Direct call parser_prod#AImpliesExpr#init_aimpliesexpr on <var11:AImpliesExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction289> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction291#action for (self: ReduceAction291, Parser) */
void nit__parser___nit__parser__ReduceAction291___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnotnode2 /* var tkwnotnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ANotExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANotExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
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
var_tkwnotnode2 = var_nodearraylist1;
/* <var_tkwnotnode2:nullable Object> isa nullable TKwnot */
cltype = type_nullable__nit__TKwnot.color;
idtype = type_nullable__nit__TKwnot.id;
if(var_tkwnotnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwnotnode2&3)?type_info[((long)var_tkwnotnode2&3)]:var_tkwnotnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwnotnode2&3)?type_info[((long)var_tkwnotnode2&3)]:var_tkwnotnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7814);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7816);
fatal_exit(1);
}
var7 = NEW_nit__ANotExpr(&type_nit__ANotExpr);
{
nit__parser_prod___ANotExpr___init_anotexpr(var7, var_tkwnotnode2, var_pexprnode3); /* Direct call parser_prod#ANotExpr#init_anotexpr on <var7:ANotExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction291> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction293#action for (self: ReduceAction293, Parser) */
void nit__parser___nit__parser__ReduceAction293___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_teqnode3 /* var teqnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AEqExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEqExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7835);
fatal_exit(1);
}
var_teqnode3 = var_nodearraylist2;
/* <var_teqnode3:nullable Object> isa nullable TEq */
cltype6 = type_nullable__nit__TEq.color;
idtype7 = type_nullable__nit__TEq.id;
if(var_teqnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_teqnode3&3)?type_info[((long)var_teqnode3&3)]:var_teqnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_teqnode3&3)?type_info[((long)var_teqnode3&3)]:var_teqnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7837);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7839);
fatal_exit(1);
}
var11 = NEW_nit__AEqExpr(&type_nit__AEqExpr);
{
nit__parser_prod___AEqExpr___init_aeqexpr(var11, var_pexprnode2, var_teqnode3, var_pexprnode4); /* Direct call parser_prod#AEqExpr#init_aeqexpr on <var11:AEqExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction293> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction294#action for (self: ReduceAction294, Parser) */
void nit__parser___nit__parser__ReduceAction294___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tnenode3 /* var tnenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ANeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANeExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7859);
fatal_exit(1);
}
var_tnenode3 = var_nodearraylist2;
/* <var_tnenode3:nullable Object> isa nullable TNe */
cltype6 = type_nullable__nit__TNe.color;
idtype7 = type_nullable__nit__TNe.id;
if(var_tnenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tnenode3&3)?type_info[((long)var_tnenode3&3)]:var_tnenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tnenode3&3)?type_info[((long)var_tnenode3&3)]:var_tnenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7861);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7863);
fatal_exit(1);
}
var11 = NEW_nit__ANeExpr(&type_nit__ANeExpr);
{
nit__parser_prod___ANeExpr___init_aneexpr(var11, var_pexprnode2, var_tnenode3, var_pexprnode4); /* Direct call parser_prod#ANeExpr#init_aneexpr on <var11:ANeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction294> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction295#action for (self: ReduceAction295, Parser) */
void nit__parser___nit__parser__ReduceAction295___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tltnode3 /* var tltnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ALtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALtExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7883);
fatal_exit(1);
}
var_tltnode3 = var_nodearraylist2;
/* <var_tltnode3:nullable Object> isa nullable TLt */
cltype6 = type_nullable__nit__TLt.color;
idtype7 = type_nullable__nit__TLt.id;
if(var_tltnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tltnode3&3)?type_info[((long)var_tltnode3&3)]:var_tltnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tltnode3&3)?type_info[((long)var_tltnode3&3)]:var_tltnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7885);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7887);
fatal_exit(1);
}
var11 = NEW_nit__ALtExpr(&type_nit__ALtExpr);
{
nit__parser_prod___ALtExpr___init_altexpr(var11, var_pexprnode2, var_tltnode3, var_pexprnode4); /* Direct call parser_prod#ALtExpr#init_altexpr on <var11:ALtExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction295> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction296#action for (self: ReduceAction296, Parser) */
void nit__parser___nit__parser__ReduceAction296___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tlenode3 /* var tlenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ALeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALeExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7907);
fatal_exit(1);
}
var_tlenode3 = var_nodearraylist2;
/* <var_tlenode3:nullable Object> isa nullable TLe */
cltype6 = type_nullable__nit__TLe.color;
idtype7 = type_nullable__nit__TLe.id;
if(var_tlenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tlenode3&3)?type_info[((long)var_tlenode3&3)]:var_tlenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tlenode3&3)?type_info[((long)var_tlenode3&3)]:var_tlenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7909);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7911);
fatal_exit(1);
}
var11 = NEW_nit__ALeExpr(&type_nit__ALeExpr);
{
nit__parser_prod___ALeExpr___init_aleexpr(var11, var_pexprnode2, var_tlenode3, var_pexprnode4); /* Direct call parser_prod#ALeExpr#init_aleexpr on <var11:ALeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction296> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction297#action for (self: ReduceAction297, Parser) */
void nit__parser___nit__parser__ReduceAction297___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tgtnode3 /* var tgtnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AGtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGtExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7931);
fatal_exit(1);
}
var_tgtnode3 = var_nodearraylist2;
/* <var_tgtnode3:nullable Object> isa nullable TGt */
cltype6 = type_nullable__nit__TGt.color;
idtype7 = type_nullable__nit__TGt.id;
if(var_tgtnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tgtnode3&3)?type_info[((long)var_tgtnode3&3)]:var_tgtnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tgtnode3&3)?type_info[((long)var_tgtnode3&3)]:var_tgtnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7933);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7935);
fatal_exit(1);
}
var11 = NEW_nit__AGtExpr(&type_nit__AGtExpr);
{
nit__parser_prod___AGtExpr___init_agtexpr(var11, var_pexprnode2, var_tgtnode3, var_pexprnode4); /* Direct call parser_prod#AGtExpr#init_agtexpr on <var11:AGtExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction297> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction298#action for (self: ReduceAction298, Parser) */
void nit__parser___nit__parser__ReduceAction298___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tgenode3 /* var tgenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AGeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGeExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7955);
fatal_exit(1);
}
var_tgenode3 = var_nodearraylist2;
/* <var_tgenode3:nullable Object> isa nullable TGe */
cltype6 = type_nullable__nit__TGe.color;
idtype7 = type_nullable__nit__TGe.id;
if(var_tgenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tgenode3&3)?type_info[((long)var_tgenode3&3)]:var_tgenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tgenode3&3)?type_info[((long)var_tgenode3&3)]:var_tgenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7957);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7959);
fatal_exit(1);
}
var11 = NEW_nit__AGeExpr(&type_nit__AGeExpr);
{
nit__parser_prod___AGeExpr___init_ageexpr(var11, var_pexprnode2, var_tgenode3, var_pexprnode4); /* Direct call parser_prod#AGeExpr#init_ageexpr on <var11:AGeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction298> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction299#action for (self: ReduceAction299, Parser) */
void nit__parser___nit__parser__ReduceAction299___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tstarshipnode3 /* var tstarshipnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AStarshipExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarshipExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7979);
fatal_exit(1);
}
var_tstarshipnode3 = var_nodearraylist2;
/* <var_tstarshipnode3:nullable Object> isa nullable TStarship */
cltype6 = type_nullable__nit__TStarship.color;
idtype7 = type_nullable__nit__TStarship.id;
if(var_tstarshipnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tstarshipnode3&3)?type_info[((long)var_tstarshipnode3&3)]:var_tstarshipnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tstarshipnode3&3)?type_info[((long)var_tstarshipnode3&3)]:var_tstarshipnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7981);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 7983);
fatal_exit(1);
}
var11 = NEW_nit__AStarshipExpr(&type_nit__AStarshipExpr);
{
nit__parser_prod___AStarshipExpr___init_astarshipexpr(var11, var_pexprnode2, var_tstarshipnode3, var_pexprnode4); /* Direct call parser_prod#AStarshipExpr#init_astarshipexpr on <var11:AStarshipExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction299> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction300#action for (self: ReduceAction300, Parser) */
void nit__parser___nit__parser__ReduceAction300___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwisanode3 /* var tkwisanode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AIsaExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIsaExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8003);
fatal_exit(1);
}
var_tkwisanode3 = var_nodearraylist2;
/* <var_tkwisanode3:nullable Object> isa nullable TKwisa */
cltype6 = type_nullable__nit__TKwisa.color;
idtype7 = type_nullable__nit__TKwisa.id;
if(var_tkwisanode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tkwisanode3&3)?type_info[((long)var_tkwisanode3&3)]:var_tkwisanode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwisanode3&3)?type_info[((long)var_tkwisanode3&3)]:var_tkwisanode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8005);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8007);
fatal_exit(1);
}
var11 = NEW_nit__AIsaExpr(&type_nit__AIsaExpr);
{
nit__parser_prod___AIsaExpr___init_aisaexpr(var11, var_pexprnode2, var_tkwisanode3, var_ptypenode4); /* Direct call parser_prod#AIsaExpr#init_aisaexpr on <var11:AIsaExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction300> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction302#action for (self: ReduceAction302, Parser) */
void nit__parser___nit__parser__ReduceAction302___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tpipenode3 /* var tpipenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : APipeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APipeExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8027);
fatal_exit(1);
}
var_tpipenode3 = var_nodearraylist2;
/* <var_tpipenode3:nullable Object> isa nullable TPipe */
cltype6 = type_nullable__nit__TPipe.color;
idtype7 = type_nullable__nit__TPipe.id;
if(var_tpipenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tpipenode3&3)?type_info[((long)var_tpipenode3&3)]:var_tpipenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tpipenode3&3)?type_info[((long)var_tpipenode3&3)]:var_tpipenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8029);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8031);
fatal_exit(1);
}
var11 = NEW_nit__APipeExpr(&type_nit__APipeExpr);
{
nit__parser_prod___APipeExpr___init_apipeexpr(var11, var_pexprnode2, var_tpipenode3, var_pexprnode4); /* Direct call parser_prod#APipeExpr#init_apipeexpr on <var11:APipeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction302> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction304#action for (self: ReduceAction304, Parser) */
void nit__parser___nit__parser__ReduceAction304___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tcaretnode3 /* var tcaretnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ACaretExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACaretExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8051);
fatal_exit(1);
}
var_tcaretnode3 = var_nodearraylist2;
/* <var_tcaretnode3:nullable Object> isa nullable TCaret */
cltype6 = type_nullable__nit__TCaret.color;
idtype7 = type_nullable__nit__TCaret.id;
if(var_tcaretnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tcaretnode3&3)?type_info[((long)var_tcaretnode3&3)]:var_tcaretnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tcaretnode3&3)?type_info[((long)var_tcaretnode3&3)]:var_tcaretnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8053);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8055);
fatal_exit(1);
}
var11 = NEW_nit__ACaretExpr(&type_nit__ACaretExpr);
{
nit__parser_prod___ACaretExpr___init_acaretexpr(var11, var_pexprnode2, var_tcaretnode3, var_pexprnode4); /* Direct call parser_prod#ACaretExpr#init_acaretexpr on <var11:ACaretExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction304> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction306#action for (self: ReduceAction306, Parser) */
void nit__parser___nit__parser__ReduceAction306___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tampnode3 /* var tampnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AAmpExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAmpExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8075);
fatal_exit(1);
}
var_tampnode3 = var_nodearraylist2;
/* <var_tampnode3:nullable Object> isa nullable TAmp */
cltype6 = type_nullable__nit__TAmp.color;
idtype7 = type_nullable__nit__TAmp.id;
if(var_tampnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tampnode3&3)?type_info[((long)var_tampnode3&3)]:var_tampnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tampnode3&3)?type_info[((long)var_tampnode3&3)]:var_tampnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8077);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8079);
fatal_exit(1);
}
var11 = NEW_nit__AAmpExpr(&type_nit__AAmpExpr);
{
nit__parser_prod___AAmpExpr___init_aampexpr(var11, var_pexprnode2, var_tampnode3, var_pexprnode4); /* Direct call parser_prod#AAmpExpr#init_aampexpr on <var11:AAmpExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction306> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction308#action for (self: ReduceAction308, Parser) */
void nit__parser___nit__parser__ReduceAction308___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tllnode3 /* var tllnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ALlExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALlExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8099);
fatal_exit(1);
}
var_tllnode3 = var_nodearraylist2;
/* <var_tllnode3:nullable Object> isa nullable TLl */
cltype6 = type_nullable__nit__TLl.color;
idtype7 = type_nullable__nit__TLl.id;
if(var_tllnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tllnode3&3)?type_info[((long)var_tllnode3&3)]:var_tllnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tllnode3&3)?type_info[((long)var_tllnode3&3)]:var_tllnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8101);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8103);
fatal_exit(1);
}
var11 = NEW_nit__ALlExpr(&type_nit__ALlExpr);
{
nit__parser_prod___ALlExpr___init_allexpr(var11, var_pexprnode2, var_tllnode3, var_pexprnode4); /* Direct call parser_prod#ALlExpr#init_allexpr on <var11:ALlExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction308> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction309#action for (self: ReduceAction309, Parser) */
void nit__parser___nit__parser__ReduceAction309___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tggnode3 /* var tggnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AGgExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGgExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8123);
fatal_exit(1);
}
var_tggnode3 = var_nodearraylist2;
/* <var_tggnode3:nullable Object> isa nullable TGg */
cltype6 = type_nullable__nit__TGg.color;
idtype7 = type_nullable__nit__TGg.id;
if(var_tggnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tggnode3&3)?type_info[((long)var_tggnode3&3)]:var_tggnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tggnode3&3)?type_info[((long)var_tggnode3&3)]:var_tggnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8125);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8127);
fatal_exit(1);
}
var11 = NEW_nit__AGgExpr(&type_nit__AGgExpr);
{
nit__parser_prod___AGgExpr___init_aggexpr(var11, var_pexprnode2, var_tggnode3, var_pexprnode4); /* Direct call parser_prod#AGgExpr#init_aggexpr on <var11:AGgExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction309> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction311#action for (self: ReduceAction311, Parser) */
void nit__parser___nit__parser__ReduceAction311___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tplusnode3 /* var tplusnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : APlusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APlusExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8147);
fatal_exit(1);
}
var_tplusnode3 = var_nodearraylist2;
/* <var_tplusnode3:nullable Object> isa nullable TPlus */
cltype6 = type_nullable__nit__TPlus.color;
idtype7 = type_nullable__nit__TPlus.id;
if(var_tplusnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tplusnode3&3)?type_info[((long)var_tplusnode3&3)]:var_tplusnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tplusnode3&3)?type_info[((long)var_tplusnode3&3)]:var_tplusnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8149);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8151);
fatal_exit(1);
}
var11 = NEW_nit__APlusExpr(&type_nit__APlusExpr);
{
nit__parser_prod___APlusExpr___init_aplusexpr(var11, var_pexprnode2, var_tplusnode3, var_pexprnode4); /* Direct call parser_prod#APlusExpr#init_aplusexpr on <var11:APlusExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction311> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction312#action for (self: ReduceAction312, Parser) */
void nit__parser___nit__parser__ReduceAction312___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tminusnode3 /* var tminusnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AMinusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMinusExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8171);
fatal_exit(1);
}
var_tminusnode3 = var_nodearraylist2;
/* <var_tminusnode3:nullable Object> isa nullable TMinus */
cltype6 = type_nullable__nit__TMinus.color;
idtype7 = type_nullable__nit__TMinus.id;
if(var_tminusnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tminusnode3&3)?type_info[((long)var_tminusnode3&3)]:var_tminusnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tminusnode3&3)?type_info[((long)var_tminusnode3&3)]:var_tminusnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8173);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8175);
fatal_exit(1);
}
var11 = NEW_nit__AMinusExpr(&type_nit__AMinusExpr);
{
nit__parser_prod___AMinusExpr___init_aminusexpr(var11, var_pexprnode2, var_tminusnode3, var_pexprnode4); /* Direct call parser_prod#AMinusExpr#init_aminusexpr on <var11:AMinusExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction312> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction314#action for (self: ReduceAction314, Parser) */
void nit__parser___nit__parser__ReduceAction314___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tstarnode3 /* var tstarnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AStarExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8195);
fatal_exit(1);
}
var_tstarnode3 = var_nodearraylist2;
/* <var_tstarnode3:nullable Object> isa nullable TStar */
cltype6 = type_nullable__nit__TStar.color;
idtype7 = type_nullable__nit__TStar.id;
if(var_tstarnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tstarnode3&3)?type_info[((long)var_tstarnode3&3)]:var_tstarnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tstarnode3&3)?type_info[((long)var_tstarnode3&3)]:var_tstarnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8197);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8199);
fatal_exit(1);
}
var11 = NEW_nit__AStarExpr(&type_nit__AStarExpr);
{
nit__parser_prod___AStarExpr___init_astarexpr(var11, var_pexprnode2, var_tstarnode3, var_pexprnode4); /* Direct call parser_prod#AStarExpr#init_astarexpr on <var11:AStarExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction314> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction315#action for (self: ReduceAction315, Parser) */
void nit__parser___nit__parser__ReduceAction315___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tslashnode3 /* var tslashnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ASlashExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASlashExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8219);
fatal_exit(1);
}
var_tslashnode3 = var_nodearraylist2;
/* <var_tslashnode3:nullable Object> isa nullable TSlash */
cltype6 = type_nullable__nit__TSlash.color;
idtype7 = type_nullable__nit__TSlash.id;
if(var_tslashnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tslashnode3&3)?type_info[((long)var_tslashnode3&3)]:var_tslashnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tslashnode3&3)?type_info[((long)var_tslashnode3&3)]:var_tslashnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8221);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8223);
fatal_exit(1);
}
var11 = NEW_nit__ASlashExpr(&type_nit__ASlashExpr);
{
nit__parser_prod___ASlashExpr___init_aslashexpr(var11, var_pexprnode2, var_tslashnode3, var_pexprnode4); /* Direct call parser_prod#ASlashExpr#init_aslashexpr on <var11:ASlashExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction315> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction316#action for (self: ReduceAction316, Parser) */
void nit__parser___nit__parser__ReduceAction316___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tpercentnode3 /* var tpercentnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : APercentExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APercentExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8243);
fatal_exit(1);
}
var_tpercentnode3 = var_nodearraylist2;
/* <var_tpercentnode3:nullable Object> isa nullable TPercent */
cltype6 = type_nullable__nit__TPercent.color;
idtype7 = type_nullable__nit__TPercent.id;
if(var_tpercentnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tpercentnode3&3)?type_info[((long)var_tpercentnode3&3)]:var_tpercentnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tpercentnode3&3)?type_info[((long)var_tpercentnode3&3)]:var_tpercentnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8245);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8247);
fatal_exit(1);
}
var11 = NEW_nit__APercentExpr(&type_nit__APercentExpr);
{
nit__parser_prod___APercentExpr___init_apercentexpr(var11, var_pexprnode2, var_tpercentnode3, var_pexprnode4); /* Direct call parser_prod#APercentExpr#init_apercentexpr on <var11:APercentExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction316> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction318#action for (self: ReduceAction318, Parser) */
void nit__parser___nit__parser__ReduceAction318___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tstarstarnode3 /* var tstarstarnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AStarstarExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarstarExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8267);
fatal_exit(1);
}
var_tstarstarnode3 = var_nodearraylist2;
/* <var_tstarstarnode3:nullable Object> isa nullable TStarstar */
cltype6 = type_nullable__nit__TStarstar.color;
idtype7 = type_nullable__nit__TStarstar.id;
if(var_tstarstarnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tstarstarnode3&3)?type_info[((long)var_tstarstarnode3&3)]:var_tstarstarnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tstarstarnode3&3)?type_info[((long)var_tstarstarnode3&3)]:var_tstarstarnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8269);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprnode4&3)?type_info[((long)var_pexprnode4&3)]:var_pexprnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8271);
fatal_exit(1);
}
var11 = NEW_nit__AStarstarExpr(&type_nit__AStarstarExpr);
{
nit__parser_prod___AStarstarExpr___init_astarstarexpr(var11, var_pexprnode2, var_tstarstarnode3, var_pexprnode4); /* Direct call parser_prod#AStarstarExpr#init_astarstarexpr on <var11:AStarstarExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction318> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction320#action for (self: ReduceAction320, Parser) */
void nit__parser___nit__parser__ReduceAction320___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AUminusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUminusExpr */;
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
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable__nit__TMinus.color;
idtype = type_nullable__nit__TMinus.id;
if(var_tminusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8289);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8291);
fatal_exit(1);
}
var6 = NEW_nit__AUminusExpr(&type_nit__AUminusExpr);
{
nit__parser_prod___AUminusExpr___init_auminusexpr(var6, var_tminusnode2, var_pexprnode3); /* Direct call parser_prod#AUminusExpr#init_auminusexpr on <var6:AUminusExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction320> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction321#action for (self: ReduceAction321, Parser) */
void nit__parser___nit__parser__ReduceAction321___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tplusnode2 /* var tplusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AUplusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUplusExpr */;
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
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable__nit__TPlus.color;
idtype = type_nullable__nit__TPlus.id;
if(var_tplusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8308);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8310);
fatal_exit(1);
}
var6 = NEW_nit__AUplusExpr(&type_nit__AUplusExpr);
{
nit__parser_prod___AUplusExpr___init_auplusexpr(var6, var_tplusnode2, var_pexprnode3); /* Direct call parser_prod#AUplusExpr#init_auplusexpr on <var6:AUplusExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction321> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction322#action for (self: ReduceAction322, Parser) */
void nit__parser___nit__parser__ReduceAction322___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ttildenode2 /* var ttildenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AUtildeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUtildeExpr */;
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
var_ttildenode2 = var_nodearraylist1;
/* <var_ttildenode2:nullable Object> isa nullable TTilde */
cltype = type_nullable__nit__TTilde.color;
idtype = type_nullable__nit__TTilde.id;
if(var_ttildenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8327);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8329);
fatal_exit(1);
}
var6 = NEW_nit__AUtildeExpr(&type_nit__AUtildeExpr);
{
nit__parser_prod___AUtildeExpr___init_autildeexpr(var6, var_ttildenode2, var_pexprnode3); /* Direct call parser_prod#AUtildeExpr#init_autildeexpr on <var6:AUtildeExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction322> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction323#action for (self: ReduceAction323, Parser) */
void nit__parser___nit__parser__ReduceAction323___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwoncenode2 /* var tkwoncenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AOnceExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOnceExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
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
var_tkwoncenode2 = var_nodearraylist1;
/* <var_tkwoncenode2:nullable Object> isa nullable TKwonce */
cltype = type_nullable__nit__TKwonce.color;
idtype = type_nullable__nit__TKwonce.id;
if(var_tkwoncenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwoncenode2&3)?type_info[((long)var_tkwoncenode2&3)]:var_tkwoncenode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwoncenode2&3)?type_info[((long)var_tkwoncenode2&3)]:var_tkwoncenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8347);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8349);
fatal_exit(1);
}
var7 = NEW_nit__AOnceExpr(&type_nit__AOnceExpr);
{
nit__parser_prod___AOnceExpr___init_aonceexpr(var7, var_tkwoncenode2, var_pexprnode3); /* Direct call parser_prod#AOnceExpr#init_aonceexpr on <var7:AOnceExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction323> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction325#action for (self: ReduceAction325, Parser) */
void nit__parser___nit__parser__ReduceAction325___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8368);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable__nit__AType.color;
idtype7 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8370);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist4;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nit__AExprs.color;
idtype10 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8372);
fatal_exit(1);
}
var11 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var11, var_tkwnewnode2, var_ptypenode3, ((val*)NULL), var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var11:ANewExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction325> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction326#action for (self: ReduceAction326, Parser) */
void nit__parser___nit__parser__ReduceAction326___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var9 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwnewnode2&3)?type_info[((long)var_tkwnewnode2&3)]:var_tkwnewnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8392);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nit__AType.color;
idtype6 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8394);
fatal_exit(1);
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var8 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var8, var_listnode6); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode5 = var8;
var9 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var9, var_tkwnewnode2, var_ptypenode3, ((val*)NULL), var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var9:ANewExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction326> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction327#action for (self: ReduceAction327, Parser) */
void nit__parser___nit__parser__ReduceAction327___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nit__TKwisset.color;
idtype = type_nullable__nit__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8421);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8423);
fatal_exit(1);
}
var_tattridnode4 = var_nodearraylist6;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype11 = type_nullable__nit__TAttrid.color;
idtype12 = type_nullable__nit__TAttrid.id;
if(var_tattridnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8425);
fatal_exit(1);
}
var13 = NEW_nit__AIssetAttrExpr(&type_nit__AIssetAttrExpr);
{
nit__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var13, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var13:AIssetAttrExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction327> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction328#action for (self: ReduceAction328, Parser) */
void nit__parser___nit__parser__ReduceAction328___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode3 /* var pexprnode3: nullable AImplicitSelfExpr */;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nit__TKwisset.color;
idtype = type_nullable__nit__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8444);
fatal_exit(1);
}
var4 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode3 = var4;
var_tattridnode4 = var_nodearraylist3;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype6 = type_nullable__nit__TAttrid.color;
idtype7 = type_nullable__nit__TAttrid.id;
if(var_tattridnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8447);
fatal_exit(1);
}
var8 = NEW_nit__AIssetAttrExpr(&type_nit__AIssetAttrExpr);
{
nit__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var8, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var8:AIssetAttrExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction328> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction330#action for (self: ReduceAction330, Parser) */
void nit__parser___nit__parser__ReduceAction330___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8468);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype7 = type_nullable__nit__TAttrid.color;
idtype8 = type_nullable__nit__TAttrid.id;
if(var_tattridnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8470);
fatal_exit(1);
}
var9 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
nit__parser_prod___AAttrExpr___init_aattrexpr(var9, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var9:AAttrExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction330> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction331#action for (self: ReduceAction331, Parser) */
void nit__parser___nit__parser__ReduceAction331___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable__nit__TAttrid.color;
idtype = type_nullable__nit__TAttrid.id;
if(var_tattridnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8488);
fatal_exit(1);
}
var4 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
nit__parser_prod___AAttrExpr___init_aattrexpr(var4, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var4:AAttrExpr>*/
}
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction331> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction333#action for (self: ReduceAction333, Parser) */
void nit__parser___nit__parser__ReduceAction333___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var9 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var10 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8507);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8509);
fatal_exit(1);
}
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var9 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var9, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var9:AListExprs>*/
}
var_pexprsnode4 = var9;
var10 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var10, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var10:ACallExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction333> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction335#action for (self: ReduceAction335, Parser) */
void nit__parser___nit__parser__ReduceAction335___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var10 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8534);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8536);
fatal_exit(1);
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode5 = var9;
var10 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var10, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var10:AListExprs>*/
}
var_pexprsnode4 = var10;
var11 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction335> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction337#action for (self: ReduceAction337, Parser) */
void nit__parser___nit__parser__ReduceAction337___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var12 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8562);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8564);
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
var12 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var12, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var12:ACallExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction337> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction341#action for (self: ReduceAction341, Parser) */
void nit__parser___nit__parser__ReduceAction341___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var5 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var1); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/
}
var_pexprnode2 = var1;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8586);
fatal_exit(1);
}
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var4, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var4:AListExprs>*/
}
var_pexprsnode4 = var4;
var5 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var5, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var5:ACallExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction341> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction343#action for (self: ReduceAction343, Parser) */
void nit__parser___nit__parser__ReduceAction343___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var6 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var2); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var_tidnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8609);
fatal_exit(1);
}
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var5, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var5:AListExprs>*/
}
var_pexprsnode4 = var5;
var6 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var6, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var6:ACallExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction343> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction345#action for (self: ReduceAction345, Parser) */
void nit__parser___nit__parser__ReduceAction345___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var7 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
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
var_tidnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8633);
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
var7 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var7, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var7:ACallExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction345> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction349#action for (self: ReduceAction349, Parser) */
void nit__parser___nit__parser__ReduceAction349___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tkwsupernode3 /* var tkwsupernode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var8 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
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
var_pqualifiednode2 = var_nodearraylist1;
/* <var_pqualifiednode2:nullable Object> isa nullable AQualified */
cltype = type_nullable__nit__AQualified.color;
idtype = type_nullable__nit__AQualified.id;
if(var_pqualifiednode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pqualifiednode2&3)?type_info[((long)var_pqualifiednode2&3)]:var_pqualifiednode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8655);
fatal_exit(1);
}
var_tkwsupernode3 = var_nodearraylist2;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype4 = type_nullable__nit__TKwsuper.color;
idtype5 = type_nullable__nit__TKwsuper.id;
if(var_tkwsupernode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwsupernode3&3)?type_info[((long)var_tkwsupernode3&3)]:var_tkwsupernode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8657);
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
var8 = NEW_nit__ASuperExpr(&type_nit__ASuperExpr);
{
nit__parser_prod___ASuperExpr___init_asuperexpr(var8, var_pqualifiednode2, var_tkwsupernode3, var_pexprsnode4); /* Direct call parser_prod#ASuperExpr#init_asuperexpr on <var8:ASuperExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction349> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction351#action for (self: ReduceAction351, Parser) */
void nit__parser___nit__parser__ReduceAction351___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var9 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var10 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8681);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype6 = type_nullable__nit__TKwinit.color;
idtype7 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8683);
fatal_exit(1);
}
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var9 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var9, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var9:AListExprs>*/
}
var_pexprsnode4 = var9;
var10 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction351> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction353#action for (self: ReduceAction353, Parser) */
void nit__parser___nit__parser__ReduceAction353___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var5 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var1); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/
}
var_pexprnode2 = var1;
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nit__TKwinit.color;
idtype = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8705);
fatal_exit(1);
}
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var4, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var4:AListExprs>*/
}
var_pexprsnode4 = var4;
var5 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var5, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var5:AInitExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction353> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction354#action for (self: ReduceAction354, Parser) */
void nit__parser___nit__parser__ReduceAction354___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABraExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8727);
fatal_exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype4 = type_nullable__nit__AExprs.color;
idtype5 = type_nullable__nit__AExprs.id;
if(var_pexprsnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pexprsnode3&3)?type_info[((long)var_pexprsnode3&3)]:var_pexprsnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8729);
fatal_exit(1);
}
var6 = NEW_nit__ABraExpr(&type_nit__ABraExpr);
{
nit__parser_prod___ABraExpr___init_abraexpr(var6, var_pexprnode2, var_pexprsnode3); /* Direct call parser_prod#ABraExpr#init_abraexpr on <var6:ABraExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction354> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction355#action for (self: ReduceAction355, Parser) */
void nit__parser___nit__parser__ReduceAction355___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8751);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype9 = type_nullable__nit__AType.color;
idtype10 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8753);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist6;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype12 = type_nullable__nit__TId.color;
idtype13 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8755);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist7;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype15 = type_nullable__nit__AExprs.color;
idtype16 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8757);
fatal_exit(1);
}
var17 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var17, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var17:ANewExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction355> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction356#action for (self: ReduceAction356, Parser) */
void nit__parser___nit__parser__ReduceAction356___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var15 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8780);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype8 = type_nullable__nit__AType.color;
idtype9 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8782);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist6;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype11 = type_nullable__nit__TId.color;
idtype12 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8784);
fatal_exit(1);
}
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode6 = var13;
var14 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var14, var_listnode6); /* Direct call parser_prod#AListExprs#init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode5 = var14;
var15 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var15, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var15:ANewExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction356> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction357#action for (self: ReduceAction357, Parser) */
void nit__parser___nit__parser__ReduceAction357___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8813);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable__nit__AType.color;
idtype11 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8815);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist7;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype13 = type_nullable__nit__TId.color;
idtype14 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8817);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist8;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype16 = type_nullable__nit__AExprs.color;
idtype17 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8819);
fatal_exit(1);
}
var18 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var18, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var18:ANewExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction357> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction358#action for (self: ReduceAction358, Parser) */
void nit__parser___nit__parser__ReduceAction358___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var15 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var16 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8843);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype9 = type_nullable__nit__AType.color;
idtype10 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8845);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist7;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype12 = type_nullable__nit__TId.color;
idtype13 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8847);
fatal_exit(1);
}
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode6 = var14;
var15 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var15, var_listnode6); /* Direct call parser_prod#AListExprs#init_alistexprs on <var15:AListExprs>*/
}
var_pexprsnode5 = var15;
var16 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var16, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var16:ANewExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction358> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction359#action for (self: ReduceAction359, Parser) */
void nit__parser___nit__parser__ReduceAction359___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8877);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype11 = type_nullable__nit__AType.color;
idtype12 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8879);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist8;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype14 = type_nullable__nit__TId.color;
idtype15 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8881);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist9;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype17 = type_nullable__nit__AExprs.color;
idtype18 = type_nullable__nit__AExprs.id;
if(var_pexprsnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_pexprsnode5&3)?type_info[((long)var_pexprsnode5&3)]:var_pexprsnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8883);
fatal_exit(1);
}
var19 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var19, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var19:ANewExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction359> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction360#action for (self: ReduceAction360, Parser) */
void nit__parser___nit__parser__ReduceAction360___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var16 /* : AListExprs */;
val* var_pexprsnode5 /* var pexprsnode5: nullable AListExprs */;
val* var17 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nit__TKwnew.color;
idtype = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8908);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable__nit__AType.color;
idtype11 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8910);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist8;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype13 = type_nullable__nit__TId.color;
idtype14 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tidnode4&3)?type_info[((long)var_tidnode4&3)]:var_tidnode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8912);
fatal_exit(1);
}
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode6 = var15;
var16 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var16, var_listnode6); /* Direct call parser_prod#AListExprs#init_alistexprs on <var16:AListExprs>*/
}
var_pexprsnode5 = var16;
var17 = NEW_nit__ANewExpr(&type_nit__ANewExpr);
{
nit__parser_prod___ANewExpr___init_anewexpr(var17, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var17:ANewExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction360> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: ReduceAction363, Parser) */
void nit__parser___nit__parser__ReduceAction363___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8943);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype12 = type_nullable__nit__TKwas.color;
idtype13 = type_nullable__nit__TKwas.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8945);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype15 = type_nullable__nit__TOpar.color;
idtype16 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8947);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist8;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype18 = type_nullable__nit__AType.color;
idtype19 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8949);
fatal_exit(1);
}
var_tcparnode6 = var_nodearraylist10;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype21 = type_nullable__nit__TCpar.color;
idtype22 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8951);
fatal_exit(1);
}
var23 = NEW_nit__AAsCastExpr(&type_nit__AAsCastExpr);
{
nit__parser_prod___AAsCastExpr___init_aascastexpr(var23, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_ptypenode5, var_tcparnode6); /* Direct call parser_prod#AAsCastExpr#init_aascastexpr on <var23:AAsCastExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction363> */
{
var25 = nit___nit__Parser___go_to(var_p, var24);
}
{
nit___nit__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction364#action for (self: ReduceAction364, Parser) */
void nit__parser___nit__parser__ReduceAction364___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var11;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8981);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype14 = type_nullable__nit__TKwas.color;
idtype15 = type_nullable__nit__TKwas.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8983);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype17 = type_nullable__nit__TOpar.color;
idtype18 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8985);
fatal_exit(1);
}
var_tkwnotnode5 = var_nodearraylist8;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype20 = type_nullable__nit__TKwnot.color;
idtype21 = type_nullable__nit__TKwnot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8987);
fatal_exit(1);
}
var_tkwnullnode6 = var_nodearraylist10;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype23 = type_nullable__nit__TKwnull.color;
idtype24 = type_nullable__nit__TKwnull.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8989);
fatal_exit(1);
}
var_tcparnode7 = var_nodearraylist12;
/* <var_tcparnode7:nullable Object> isa nullable TCpar */
cltype26 = type_nullable__nit__TCpar.color;
idtype27 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 8991);
fatal_exit(1);
}
var28 = NEW_nit__AAsNotnullExpr(&type_nit__AAsNotnullExpr);
{
nit__parser_prod___AAsNotnullExpr___init_aasnotnullexpr(var28, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_tkwnotnode5, var_tkwnullnode6, var_tcparnode7); /* Direct call parser_prod#AAsNotnullExpr#init_aasnotnullexpr on <var28:AAsNotnullExpr>*/
}
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction364> */
{
var30 = nit___nit__Parser___go_to(var_p, var29);
}
{
nit___nit__Parser___push(var_p, var30, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: ReduceAction365, Parser) */
void nit__parser___nit__parser__ReduceAction365___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9018);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype10 = type_nullable__nit__TKwas.color;
idtype11 = type_nullable__nit__TKwas.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9020);
fatal_exit(1);
}
var_tkwnotnode5 = var_nodearraylist6;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype13 = type_nullable__nit__TKwnot.color;
idtype14 = type_nullable__nit__TKwnot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9022);
fatal_exit(1);
}
var_tkwnullnode6 = var_nodearraylist8;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype16 = type_nullable__nit__TKwnull.color;
idtype17 = type_nullable__nit__TKwnull.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9024);
fatal_exit(1);
}
var18 = NEW_nit__AAsNotnullExpr(&type_nit__AAsNotnullExpr);
{
nit__parser_prod___AAsNotnullExpr___init_aasnotnullexpr(var18, var_pexprnode2, var_tkwasnode3, ((val*)NULL), var_tkwnotnode5, var_tkwnullnode6, ((val*)NULL)); /* Direct call parser_prod#AAsNotnullExpr#init_aasnotnullexpr on <var18:AAsNotnullExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction365> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction367#action for (self: ReduceAction367, Parser) */
void nit__parser___nit__parser__ReduceAction367___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9045);
fatal_exit(1);
}
var_tdotdotdotnode3 = var_nodearraylist2;
/* <var_tdotdotdotnode3:nullable Object> isa nullable TDotdotdot */
cltype4 = type_nullable__nit__TDotdotdot.color;
idtype5 = type_nullable__nit__TDotdotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9047);
fatal_exit(1);
}
var6 = NEW_nit__AVarargExpr(&type_nit__AVarargExpr);
{
nit__parser_prod___AVarargExpr___init_avarargexpr(var6, var_pexprnode2, var_tdotdotdotnode3); /* Direct call parser_prod#AVarargExpr#init_avarargexpr on <var6:AVarargExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction367> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: ReduceAction368, Parser) */
void nit__parser___nit__parser__ReduceAction368___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9065);
fatal_exit(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype5 = type_nullable__nit__TAssign.color;
idtype6 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9067);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype8 = type_nullable__nit__AExpr.color;
idtype9 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9069);
fatal_exit(1);
}
var10 = NEW_nit__ANamedargExpr(&type_nit__ANamedargExpr);
{
nit__parser_prod___ANamedargExpr___init_anamedargexpr(var10, var_tidnode2, var_tassignnode3, var_pexprnode4); /* Direct call parser_prod#ANamedargExpr#init_anamedargexpr on <var10:ANamedargExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction368> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction369#action for (self: ReduceAction369, Parser) */
void nit__parser___nit__parser__ReduceAction369___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwselfnode2 = var_nodearraylist1;
/* <var_tkwselfnode2:nullable Object> isa nullable TKwself */
cltype = type_nullable__nit__TKwself.color;
idtype = type_nullable__nit__TKwself.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9087);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9089);
fatal_exit(1);
}
var6 = NEW_nit__ASelfExpr(&type_nit__ASelfExpr);
{
nit__parser_prod___ASelfExpr___init_aselfexpr(var6, var_tkwselfnode2, var_pannotationsnode3); /* Direct call parser_prod#ASelfExpr#init_aselfexpr on <var6:ASelfExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction369> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: ReduceAction370, Parser) */
void nit__parser___nit__parser__ReduceAction370___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwtruenode2 = var_nodearraylist1;
/* <var_tkwtruenode2:nullable Object> isa nullable TKwtrue */
cltype = type_nullable__nit__TKwtrue.color;
idtype = type_nullable__nit__TKwtrue.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9106);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9108);
fatal_exit(1);
}
var6 = NEW_nit__ATrueExpr(&type_nit__ATrueExpr);
{
nit__parser_prod___ATrueExpr___init_atrueexpr(var6, var_tkwtruenode2, var_pannotationsnode3); /* Direct call parser_prod#ATrueExpr#init_atrueexpr on <var6:ATrueExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction370> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction371#action for (self: ReduceAction371, Parser) */
void nit__parser___nit__parser__ReduceAction371___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwfalsenode2 = var_nodearraylist1;
/* <var_tkwfalsenode2:nullable Object> isa nullable TKwfalse */
cltype = type_nullable__nit__TKwfalse.color;
idtype = type_nullable__nit__TKwfalse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9125);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9127);
fatal_exit(1);
}
var6 = NEW_nit__AFalseExpr(&type_nit__AFalseExpr);
{
nit__parser_prod___AFalseExpr___init_afalseexpr(var6, var_tkwfalsenode2, var_pannotationsnode3); /* Direct call parser_prod#AFalseExpr#init_afalseexpr on <var6:AFalseExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction371> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction372#action for (self: ReduceAction372, Parser) */
void nit__parser___nit__parser__ReduceAction372___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwnullnode2 = var_nodearraylist1;
/* <var_tkwnullnode2:nullable Object> isa nullable TKwnull */
cltype = type_nullable__nit__TKwnull.color;
idtype = type_nullable__nit__TKwnull.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9144);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9146);
fatal_exit(1);
}
var6 = NEW_nit__ANullExpr(&type_nit__ANullExpr);
{
nit__parser_prod___ANullExpr___init_anullexpr(var6, var_tkwnullnode2, var_pannotationsnode3); /* Direct call parser_prod#ANullExpr#init_anullexpr on <var6:ANullExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction372> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction373#action for (self: ReduceAction373, Parser) */
void nit__parser___nit__parser__ReduceAction373___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnumbernode2 /* var tnumbernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ADecIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADecIntExpr */;
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
var_tnumbernode2 = var_nodearraylist1;
/* <var_tnumbernode2:nullable Object> isa nullable TNumber */
cltype = type_nullable__nit__TNumber.color;
idtype = type_nullable__nit__TNumber.id;
if(var_tnumbernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tnumbernode2&3)?type_info[((long)var_tnumbernode2&3)]:var_tnumbernode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tnumbernode2&3)?type_info[((long)var_tnumbernode2&3)]:var_tnumbernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9163);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9165);
fatal_exit(1);
}
var6 = NEW_nit__ADecIntExpr(&type_nit__ADecIntExpr);
{
nit__parser_prod___ADecIntExpr___init_adecintexpr(var6, var_tnumbernode2, var_pannotationsnode3); /* Direct call parser_prod#ADecIntExpr#init_adecintexpr on <var6:ADecIntExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction373> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction374#action for (self: ReduceAction374, Parser) */
void nit__parser___nit__parser__ReduceAction374___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_thexnumbernode2 /* var thexnumbernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AHexIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AHexIntExpr */;
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
var_thexnumbernode2 = var_nodearraylist1;
/* <var_thexnumbernode2:nullable Object> isa nullable THexNumber */
cltype = type_nullable__nit__THexNumber.color;
idtype = type_nullable__nit__THexNumber.id;
if(var_thexnumbernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_thexnumbernode2&3)?type_info[((long)var_thexnumbernode2&3)]:var_thexnumbernode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_thexnumbernode2&3)?type_info[((long)var_thexnumbernode2&3)]:var_thexnumbernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9182);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9184);
fatal_exit(1);
}
var6 = NEW_nit__AHexIntExpr(&type_nit__AHexIntExpr);
{
nit__parser_prod___AHexIntExpr___init_ahexintexpr(var6, var_thexnumbernode2, var_pannotationsnode3); /* Direct call parser_prod#AHexIntExpr#init_ahexintexpr on <var6:AHexIntExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction374> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction375#action for (self: ReduceAction375, Parser) */
void nit__parser___nit__parser__ReduceAction375___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tbinnumbernode2 /* var tbinnumbernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABinIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABinIntExpr */;
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
var_tbinnumbernode2 = var_nodearraylist1;
/* <var_tbinnumbernode2:nullable Object> isa nullable TBinNumber */
cltype = type_nullable__nit__TBinNumber.color;
idtype = type_nullable__nit__TBinNumber.id;
if(var_tbinnumbernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tbinnumbernode2&3)?type_info[((long)var_tbinnumbernode2&3)]:var_tbinnumbernode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tbinnumbernode2&3)?type_info[((long)var_tbinnumbernode2&3)]:var_tbinnumbernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9201);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9203);
fatal_exit(1);
}
var6 = NEW_nit__ABinIntExpr(&type_nit__ABinIntExpr);
{
nit__parser_prod___ABinIntExpr___init_abinintexpr(var6, var_tbinnumbernode2, var_pannotationsnode3); /* Direct call parser_prod#ABinIntExpr#init_abinintexpr on <var6:ABinIntExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction375> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: ReduceAction376, Parser) */
void nit__parser___nit__parser__ReduceAction376___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_toctnumbernode2 /* var toctnumbernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AOctIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOctIntExpr */;
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
var_toctnumbernode2 = var_nodearraylist1;
/* <var_toctnumbernode2:nullable Object> isa nullable TOctNumber */
cltype = type_nullable__nit__TOctNumber.color;
idtype = type_nullable__nit__TOctNumber.id;
if(var_toctnumbernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_toctnumbernode2&3)?type_info[((long)var_toctnumbernode2&3)]:var_toctnumbernode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_toctnumbernode2&3)?type_info[((long)var_toctnumbernode2&3)]:var_toctnumbernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9220);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9222);
fatal_exit(1);
}
var6 = NEW_nit__AOctIntExpr(&type_nit__AOctIntExpr);
{
nit__parser_prod___AOctIntExpr___init_aoctintexpr(var6, var_toctnumbernode2, var_pannotationsnode3); /* Direct call parser_prod#AOctIntExpr#init_aoctintexpr on <var6:AOctIntExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction376> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: ReduceAction377, Parser) */
void nit__parser___nit__parser__ReduceAction377___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tbytenumnode2 /* var tbytenumnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ADecByteExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADecByteExpr */;
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
var_tbytenumnode2 = var_nodearraylist1;
/* <var_tbytenumnode2:nullable Object> isa nullable TBytenum */
cltype = type_nullable__nit__TBytenum.color;
idtype = type_nullable__nit__TBytenum.id;
if(var_tbytenumnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tbytenumnode2&3)?type_info[((long)var_tbytenumnode2&3)]:var_tbytenumnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tbytenumnode2&3)?type_info[((long)var_tbytenumnode2&3)]:var_tbytenumnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9239);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9241);
fatal_exit(1);
}
var6 = NEW_nit__ADecByteExpr(&type_nit__ADecByteExpr);
{
nit__parser_prod___ADecByteExpr___init_adecbyteexpr(var6, var_tbytenumnode2, var_pannotationsnode3); /* Direct call parser_prod#ADecByteExpr#init_adecbyteexpr on <var6:ADecByteExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction377> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction378#action for (self: ReduceAction378, Parser) */
void nit__parser___nit__parser__ReduceAction378___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_thexbytenumnode2 /* var thexbytenumnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AHexByteExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AHexByteExpr */;
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
var_thexbytenumnode2 = var_nodearraylist1;
/* <var_thexbytenumnode2:nullable Object> isa nullable THexBytenum */
cltype = type_nullable__nit__THexBytenum.color;
idtype = type_nullable__nit__THexBytenum.id;
if(var_thexbytenumnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_thexbytenumnode2&3)?type_info[((long)var_thexbytenumnode2&3)]:var_thexbytenumnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_thexbytenumnode2&3)?type_info[((long)var_thexbytenumnode2&3)]:var_thexbytenumnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9258);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9260);
fatal_exit(1);
}
var6 = NEW_nit__AHexByteExpr(&type_nit__AHexByteExpr);
{
nit__parser_prod___AHexByteExpr___init_ahexbyteexpr(var6, var_thexbytenumnode2, var_pannotationsnode3); /* Direct call parser_prod#AHexByteExpr#init_ahexbyteexpr on <var6:AHexByteExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction378> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: ReduceAction379, Parser) */
void nit__parser___nit__parser__ReduceAction379___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tbinbytenumnode2 /* var tbinbytenumnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABinByteExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABinByteExpr */;
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
var_tbinbytenumnode2 = var_nodearraylist1;
/* <var_tbinbytenumnode2:nullable Object> isa nullable TBinBytenum */
cltype = type_nullable__nit__TBinBytenum.color;
idtype = type_nullable__nit__TBinBytenum.id;
if(var_tbinbytenumnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tbinbytenumnode2&3)?type_info[((long)var_tbinbytenumnode2&3)]:var_tbinbytenumnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tbinbytenumnode2&3)?type_info[((long)var_tbinbytenumnode2&3)]:var_tbinbytenumnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9277);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9279);
fatal_exit(1);
}
var6 = NEW_nit__ABinByteExpr(&type_nit__ABinByteExpr);
{
nit__parser_prod___ABinByteExpr___init_abinbyteexpr(var6, var_tbinbytenumnode2, var_pannotationsnode3); /* Direct call parser_prod#ABinByteExpr#init_abinbyteexpr on <var6:ABinByteExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction379> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction380#action for (self: ReduceAction380, Parser) */
void nit__parser___nit__parser__ReduceAction380___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_toctbytenumnode2 /* var toctbytenumnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AOctByteExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOctByteExpr */;
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
var_toctbytenumnode2 = var_nodearraylist1;
/* <var_toctbytenumnode2:nullable Object> isa nullable TOctBytenum */
cltype = type_nullable__nit__TOctBytenum.color;
idtype = type_nullable__nit__TOctBytenum.id;
if(var_toctbytenumnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_toctbytenumnode2&3)?type_info[((long)var_toctbytenumnode2&3)]:var_toctbytenumnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_toctbytenumnode2&3)?type_info[((long)var_toctbytenumnode2&3)]:var_toctbytenumnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9296);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9298);
fatal_exit(1);
}
var6 = NEW_nit__AOctByteExpr(&type_nit__AOctByteExpr);
{
nit__parser_prod___AOctByteExpr___init_aoctbyteexpr(var6, var_toctbytenumnode2, var_pannotationsnode3); /* Direct call parser_prod#AOctByteExpr#init_aoctbyteexpr on <var6:AOctByteExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction380> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction381#action for (self: ReduceAction381, Parser) */
void nit__parser___nit__parser__ReduceAction381___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tfloatnode2 = var_nodearraylist1;
/* <var_tfloatnode2:nullable Object> isa nullable TFloat */
cltype = type_nullable__nit__TFloat.color;
idtype = type_nullable__nit__TFloat.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9315);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9317);
fatal_exit(1);
}
var6 = NEW_nit__AFloatExpr(&type_nit__AFloatExpr);
{
nit__parser_prod___AFloatExpr___init_afloatexpr(var6, var_tfloatnode2, var_pannotationsnode3); /* Direct call parser_prod#AFloatExpr#init_afloatexpr on <var6:AFloatExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction381> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: ReduceAction382, Parser) */
void nit__parser___nit__parser__ReduceAction382___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tcharnode2 = var_nodearraylist1;
/* <var_tcharnode2:nullable Object> isa nullable TChar */
cltype = type_nullable__nit__TChar.color;
idtype = type_nullable__nit__TChar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9334);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9336);
fatal_exit(1);
}
var6 = NEW_nit__ACharExpr(&type_nit__ACharExpr);
{
nit__parser_prod___ACharExpr___init_acharexpr(var6, var_tcharnode2, var_pannotationsnode3); /* Direct call parser_prod#ACharExpr#init_acharexpr on <var6:ACharExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction382> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: ReduceAction383, Parser) */
void nit__parser___nit__parser__ReduceAction383___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tstringnode2 = var_nodearraylist1;
/* <var_tstringnode2:nullable Object> isa nullable TString */
cltype = type_nullable__nit__TString.color;
idtype = type_nullable__nit__TString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9353);
fatal_exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9355);
fatal_exit(1);
}
var6 = NEW_nit__AStringExpr(&type_nit__AStringExpr);
{
nit__parser_prod___AStringExpr___init_astringexpr(var6, var_tstringnode2, var_pannotationsnode3); /* Direct call parser_prod#AStringExpr#init_astringexpr on <var6:AStringExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction383> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction386#action for (self: ReduceAction386, Parser) */
void nit__parser___nit__parser__ReduceAction386___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9380);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9382);
fatal_exit(1);
}
var_tdotdotnode4 = var_nodearraylist5;
/* <var_tdotdotnode4:nullable Object> isa nullable TDotdot */
cltype15 = type_nullable__nit__TDotdot.color;
idtype16 = type_nullable__nit__TDotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9384);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9386);
fatal_exit(1);
}
var_tcbranode6 = var_nodearraylist9;
/* <var_tcbranode6:nullable Object> isa nullable TCbra */
cltype21 = type_nullable__nit__TCbra.color;
idtype22 = type_nullable__nit__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9388);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist10;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9390);
fatal_exit(1);
}
var26 = NEW_nit__ACrangeExpr(&type_nit__ACrangeExpr);
{
nit__parser_prod___ACrangeExpr___init_acrangeexpr(var26, var_tobranode2, var_pexprnode3, var_tdotdotnode4, var_pexprnode5, var_tcbranode6, var_pannotationsnode7); /* Direct call parser_prod#ACrangeExpr#init_acrangeexpr on <var26:ACrangeExpr>*/
}
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction386> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction387#action for (self: ReduceAction387, Parser) */
void nit__parser___nit__parser__ReduceAction387___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9419);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nit__AExpr.color;
idtype13 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9421);
fatal_exit(1);
}
var_tdotdotnode4 = var_nodearraylist5;
/* <var_tdotdotnode4:nullable Object> isa nullable TDotdot */
cltype15 = type_nullable__nit__TDotdot.color;
idtype16 = type_nullable__nit__TDotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9423);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nit__AExpr.color;
idtype19 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9425);
fatal_exit(1);
}
var_tobranode6 = var_nodearraylist9;
/* <var_tobranode6:nullable Object> isa nullable TObra */
cltype21 = type_nullable__nit__TObra.color;
idtype22 = type_nullable__nit__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9427);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist10;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9429);
fatal_exit(1);
}
var26 = NEW_nit__AOrangeExpr(&type_nit__AOrangeExpr);
{
nit__parser_prod___AOrangeExpr___init_aorangeexpr(var26, var_tobranode2, var_pexprnode3, var_tdotdotnode4, var_pexprnode5, var_tobranode6, var_pannotationsnode7); /* Direct call parser_prod#AOrangeExpr#init_aorangeexpr on <var26:AOrangeExpr>*/
}
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction387> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: ReduceAction388, Parser) */
void nit__parser___nit__parser__ReduceAction388___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode4 = var6;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9455);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9457);
fatal_exit(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_ptypenode5 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9460);
fatal_exit(1);
}
var_tcbranode6 = var_nodearraylist5;
/* <var_tcbranode6:nullable Object> isa nullable TCbra */
cltype16 = type_nullable__nit__TCbra.color;
idtype17 = type_nullable__nit__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9462);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist6;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable__nit__AAnnotations.color;
idtype20 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9464);
fatal_exit(1);
}
var21 = NEW_nit__AArrayExpr(&type_nit__AArrayExpr);
{
nit__parser_prod___AArrayExpr___init_aarrayexpr(var21, var_tobranode2, var_listnode4, var_ptypenode5, var_tcbranode6, var_pannotationsnode7); /* Direct call parser_prod#AArrayExpr#init_aarrayexpr on <var21:AArrayExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction388> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction389#action for (self: ReduceAction389, Parser) */
void nit__parser___nit__parser__ReduceAction389___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9488);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9490);
fatal_exit(1);
}
var_tcparnode4 = var_nodearraylist5;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype11 = type_nullable__nit__TCpar.color;
idtype12 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9492);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist6;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype14 = type_nullable__nit__AAnnotations.color;
idtype15 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9494);
fatal_exit(1);
}
var16 = NEW_nit__AParExpr(&type_nit__AParExpr);
{
nit__parser_prod___AParExpr___init_aparexpr(var16, var_toparnode2, var_pexprnode3, var_tcparnode4, var_pannotationsnode5); /* Direct call parser_prod#AParExpr#init_aparexpr on <var16:AParExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction389> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction391#action for (self: ReduceAction391, Parser) */
void nit__parser___nit__parser__ReduceAction391___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode4 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9514);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype5 = type_standard__Array__standard__Object.color;
idtype6 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9516);
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
var10 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var13 = NEW_nit__AManyExpr(&type_nit__AManyExpr);
{
nit__parser_prod___AManyExpr___init_amanyexpr(var13, var_listnode4); /* Direct call parser_prod#AManyExpr#init_amanyexpr on <var13:AManyExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction391> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction392#action for (self: ReduceAction392, Parser) */
void nit__parser___nit__parser__ReduceAction392___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction392> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction393#action for (self: ReduceAction393, Parser) */
void nit__parser___nit__parser__ReduceAction393___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pexprnode1 = var_nodearraylist1;
if (var_pexprnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction393> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction394#action for (self: ReduceAction394, Parser) */
void nit__parser___nit__parser__ReduceAction394___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9566);
fatal_exit(1);
}
if (var_pexprnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction394> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
