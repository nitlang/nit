#include "nitc__parser.sep.0.h"
/* method parser#ReduceAction247#action for (self: ReduceAction247, Parser) */
void nitc__parser___nitc__parser__ReduceAction247___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstareqnode2 = var_nodearraylist1;
/* <var_tstareqnode2:nullable Object> isa nullable TStareq */
cltype = type_nullable__nitc__TStareq.color;
idtype = type_nullable__nitc__TStareq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7477);
fatal_exit(1);
}
var2 = NEW_nitc__AStarAssignOp(&type_nitc__AStarAssignOp);
{
nitc__parser_prod___AStarAssignOp___init_astarassignop(var2, var_tstareqnode2); /* Direct call parser_prod#AStarAssignOp#init_astarassignop on <var2:AStarAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction247> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction248#action for (self: ReduceAction248, Parser) */
void nitc__parser___nitc__parser__ReduceAction248___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tslasheqnode2 = var_nodearraylist1;
/* <var_tslasheqnode2:nullable Object> isa nullable TSlasheq */
cltype = type_nullable__nitc__TSlasheq.color;
idtype = type_nullable__nitc__TSlasheq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7492);
fatal_exit(1);
}
var2 = NEW_nitc__ASlashAssignOp(&type_nitc__ASlashAssignOp);
{
nitc__parser_prod___ASlashAssignOp___init_aslashassignop(var2, var_tslasheqnode2); /* Direct call parser_prod#ASlashAssignOp#init_aslashassignop on <var2:ASlashAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction248> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction249#action for (self: ReduceAction249, Parser) */
void nitc__parser___nitc__parser__ReduceAction249___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpercenteqnode2 = var_nodearraylist1;
/* <var_tpercenteqnode2:nullable Object> isa nullable TPercenteq */
cltype = type_nullable__nitc__TPercenteq.color;
idtype = type_nullable__nitc__TPercenteq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7507);
fatal_exit(1);
}
var2 = NEW_nitc__APercentAssignOp(&type_nitc__APercentAssignOp);
{
nitc__parser_prod___APercentAssignOp___init_apercentassignop(var2, var_tpercenteqnode2); /* Direct call parser_prod#APercentAssignOp#init_apercentassignop on <var2:APercentAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction249> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction250#action for (self: ReduceAction250, Parser) */
void nitc__parser___nitc__parser__ReduceAction250___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarstareqnode2 = var_nodearraylist1;
/* <var_tstarstareqnode2:nullable Object> isa nullable TStarstareq */
cltype = type_nullable__nitc__TStarstareq.color;
idtype = type_nullable__nitc__TStarstareq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7522);
fatal_exit(1);
}
var2 = NEW_nitc__AStarstarAssignOp(&type_nitc__AStarstarAssignOp);
{
nitc__parser_prod___AStarstarAssignOp___init_astarstarassignop(var2, var_tstarstareqnode2); /* Direct call parser_prod#AStarstarAssignOp#init_astarstarassignop on <var2:AStarstarAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction250> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction251#action for (self: ReduceAction251, Parser) */
void nitc__parser___nitc__parser__ReduceAction251___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpipeeqnode2 = var_nodearraylist1;
/* <var_tpipeeqnode2:nullable Object> isa nullable TPipeeq */
cltype = type_nullable__nitc__TPipeeq.color;
idtype = type_nullable__nitc__TPipeeq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7537);
fatal_exit(1);
}
var2 = NEW_nitc__APipeAssignOp(&type_nitc__APipeAssignOp);
{
nitc__parser_prod___APipeAssignOp___init_apipeassignop(var2, var_tpipeeqnode2); /* Direct call parser_prod#APipeAssignOp#init_apipeassignop on <var2:APipeAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction251> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction252#action for (self: ReduceAction252, Parser) */
void nitc__parser___nitc__parser__ReduceAction252___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tcareteqnode2 = var_nodearraylist1;
/* <var_tcareteqnode2:nullable Object> isa nullable TCareteq */
cltype = type_nullable__nitc__TCareteq.color;
idtype = type_nullable__nitc__TCareteq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7552);
fatal_exit(1);
}
var2 = NEW_nitc__ACaretAssignOp(&type_nitc__ACaretAssignOp);
{
nitc__parser_prod___ACaretAssignOp___init_acaretassignop(var2, var_tcareteqnode2); /* Direct call parser_prod#ACaretAssignOp#init_acaretassignop on <var2:ACaretAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction252> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction253#action for (self: ReduceAction253, Parser) */
void nitc__parser___nitc__parser__ReduceAction253___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tampeqnode2 = var_nodearraylist1;
/* <var_tampeqnode2:nullable Object> isa nullable TAmpeq */
cltype = type_nullable__nitc__TAmpeq.color;
idtype = type_nullable__nitc__TAmpeq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7567);
fatal_exit(1);
}
var2 = NEW_nitc__AAmpAssignOp(&type_nitc__AAmpAssignOp);
{
nitc__parser_prod___AAmpAssignOp___init_aampassignop(var2, var_tampeqnode2); /* Direct call parser_prod#AAmpAssignOp#init_aampassignop on <var2:AAmpAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction253> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction254#action for (self: ReduceAction254, Parser) */
void nitc__parser___nitc__parser__ReduceAction254___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tlleqnode2 = var_nodearraylist1;
/* <var_tlleqnode2:nullable Object> isa nullable TLleq */
cltype = type_nullable__nitc__TLleq.color;
idtype = type_nullable__nitc__TLleq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7582);
fatal_exit(1);
}
var2 = NEW_nitc__ALlAssignOp(&type_nitc__ALlAssignOp);
{
nitc__parser_prod___ALlAssignOp___init_allassignop(var2, var_tlleqnode2); /* Direct call parser_prod#ALlAssignOp#init_allassignop on <var2:ALlAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction254> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction255#action for (self: ReduceAction255, Parser) */
void nitc__parser___nitc__parser__ReduceAction255___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tggeqnode2 = var_nodearraylist1;
/* <var_tggeqnode2:nullable Object> isa nullable TGgeq */
cltype = type_nullable__nitc__TGgeq.color;
idtype = type_nullable__nitc__TGgeq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7597);
fatal_exit(1);
}
var2 = NEW_nitc__AGgAssignOp(&type_nitc__AGgAssignOp);
{
nitc__parser_prod___AGgAssignOp___init_aggassignop(var2, var_tggeqnode2); /* Direct call parser_prod#AGgAssignOp#init_aggassignop on <var2:AGgAssignOp>*/
}
var_passignopnode1 = var2;
var_node_list = var_passignopnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction255> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction256#action for (self: ReduceAction256, Parser) */
void nitc__parser___nitc__parser__ReduceAction256___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwdonode2 = var_nodearraylist1;
/* <var_tkwdonode2:nullable Object> isa nullable TKwdo */
cltype = type_nullable__nitc__TKwdo.color;
idtype = type_nullable__nitc__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7614);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable__nitc__AExpr.color;
idtype6 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7616);
fatal_exit(1);
}
var_plabelnode4 = var_nodearraylist3;
/* <var_plabelnode4:nullable Object> isa nullable ALabel */
cltype8 = type_nullable__nitc__ALabel.color;
idtype9 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7618);
fatal_exit(1);
}
var10 = NEW_nitc__ADoExpr(&type_nitc__ADoExpr);
{
nitc__parser_prod___ADoExpr___init_adoexpr(var10, var_tkwdonode2, var_pexprnode3, var_plabelnode4); /* Direct call parser_prod#ADoExpr#init_adoexpr on <var10:ADoExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction256> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction257#action for (self: ReduceAction257, Parser) */
void nitc__parser___nitc__parser__ReduceAction257___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwdonode2 = var_nodearraylist1;
/* <var_tkwdonode2:nullable Object> isa nullable TKwdo */
cltype = type_nullable__nitc__TKwdo.color;
idtype = type_nullable__nitc__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7636);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nitc__AExpr.color;
idtype5 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7638);
fatal_exit(1);
}
var6 = NEW_nitc__ADoExpr(&type_nitc__ADoExpr);
{
nitc__parser_prod___ADoExpr___init_adoexpr(var6, var_tkwdonode2, var_pexprnode3, ((val*)NULL)); /* Direct call parser_prod#ADoExpr#init_adoexpr on <var6:ADoExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction257> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction258#action for (self: ReduceAction258, Parser) */
void nitc__parser___nitc__parser__ReduceAction258___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7662);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nitc__AExpr.color;
idtype11 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7664);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype13 = type_nullable__nitc__TKwthen.color;
idtype14 = type_nullable__nitc__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7666);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nitc__AExpr.color;
idtype17 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7668);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist7;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype19 = type_nullable__nitc__TKwelse.color;
idtype20 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7670);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype22 = type_nullable__nitc__AExpr.color;
idtype23 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7672);
fatal_exit(1);
}
var24 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var24, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var24:AIfExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction258> */
{
var26 = nitc___nitc__Parser___go_to(var_p, var25);
}
{
nitc___nitc__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction259#action for (self: ReduceAction259, Parser) */
void nitc__parser___nitc__parser__ReduceAction259___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7697);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7699);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype11 = type_nullable__nitc__TKwthen.color;
idtype12 = type_nullable__nitc__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7701);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nitc__AExpr.color;
idtype15 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7703);
fatal_exit(1);
}
var16 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var16, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var16:AIfExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction259> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction260#action for (self: ReduceAction260, Parser) */
void nitc__parser___nitc__parser__ReduceAction260___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7731);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype11 = type_nullable__nitc__AExpr.color;
idtype12 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7733);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype14 = type_nullable__nitc__TKwthen.color;
idtype15 = type_nullable__nitc__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7735);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype17 = type_nullable__nitc__AExpr.color;
idtype18 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7737);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist8;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype20 = type_nullable__nitc__TKwelse.color;
idtype21 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7739);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist9;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nitc__AExpr.color;
idtype24 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7741);
fatal_exit(1);
}
var25 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var25, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var25:AIfExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction260> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction261#action for (self: ReduceAction261, Parser) */
void nitc__parser___nitc__parser__ReduceAction261___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7767);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7769);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7771);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist6;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype15 = type_nullable__nitc__TKwelse.color;
idtype16 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7773);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype18 = type_nullable__nitc__AExpr.color;
idtype19 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7775);
fatal_exit(1);
}
var20 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var20, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var20:AIfExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction261> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction262#action for (self: ReduceAction262, Parser) */
void nitc__parser___nitc__parser__ReduceAction262___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7802);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nitc__AExpr.color;
idtype11 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7804);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype13 = type_nullable__nitc__TKwthen.color;
idtype14 = type_nullable__nitc__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7806);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist7;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype16 = type_nullable__nitc__TKwelse.color;
idtype17 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7808);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nitc__AExpr.color;
idtype20 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7810);
fatal_exit(1);
}
var21 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var21, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var21:AIfExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction262> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction263#action for (self: ReduceAction263, Parser) */
void nitc__parser___nitc__parser__ReduceAction263___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7837);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nitc__AExpr.color;
idtype11 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7839);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype13 = type_nullable__nitc__TKwthen.color;
idtype14 = type_nullable__nitc__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7841);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nitc__AExpr.color;
idtype17 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7843);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nitc__AExpr.color;
idtype20 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7845);
fatal_exit(1);
}
var21 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var21, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, ((val*)NULL), var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var21:AIfExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction263> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction264#action for (self: ReduceAction264, Parser) */
void nitc__parser___nitc__parser__ReduceAction264___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7870);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7872);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype11 = type_nullable__nitc__TKwthen.color;
idtype12 = type_nullable__nitc__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7874);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist6;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nitc__AExpr.color;
idtype15 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7876);
fatal_exit(1);
}
var16 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var16, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), ((val*)NULL), var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var16:AIfExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction264> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction265#action for (self: ReduceAction265, Parser) */
void nitc__parser___nitc__parser__ReduceAction265___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7902);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7904);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7906);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype15 = type_nullable__nitc__AExpr.color;
idtype16 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7908);
fatal_exit(1);
}
var17 = NEW_nitc__AIfExpr(&type_nitc__AIfExpr);
{
nitc__parser_prod___AIfExpr___init_aifexpr(var17, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, ((val*)NULL), ((val*)NULL), var_pexprnode7); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var17:AIfExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction265> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction267#action for (self: ReduceAction267, Parser) */
void nitc__parser___nitc__parser__ReduceAction267___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwloopnode2 = var_nodearraylist1;
/* <var_tkwloopnode2:nullable Object> isa nullable TKwloop */
cltype = type_nullable__nitc__TKwloop.color;
idtype = type_nullable__nitc__TKwloop.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7930);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable__nitc__AExpr.color;
idtype6 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7932);
fatal_exit(1);
}
var_plabelnode4 = var_nodearraylist3;
/* <var_plabelnode4:nullable Object> isa nullable ALabel */
cltype8 = type_nullable__nitc__ALabel.color;
idtype9 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7934);
fatal_exit(1);
}
var10 = NEW_nitc__ALoopExpr(&type_nitc__ALoopExpr);
{
nitc__parser_prod___ALoopExpr___init_aloopexpr(var10, var_tkwloopnode2, var_pexprnode3, var_plabelnode4); /* Direct call parser_prod#ALoopExpr#init_aloopexpr on <var10:ALoopExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction267> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction268#action for (self: ReduceAction268, Parser) */
void nitc__parser___nitc__parser__ReduceAction268___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwloopnode2 = var_nodearraylist1;
/* <var_tkwloopnode2:nullable Object> isa nullable TKwloop */
cltype = type_nullable__nitc__TKwloop.color;
idtype = type_nullable__nitc__TKwloop.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7952);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nitc__AExpr.color;
idtype5 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7954);
fatal_exit(1);
}
var6 = NEW_nitc__ALoopExpr(&type_nitc__ALoopExpr);
{
nitc__parser_prod___ALoopExpr___init_aloopexpr(var6, var_tkwloopnode2, var_pexprnode3, ((val*)NULL)); /* Direct call parser_prod#ALoopExpr#init_aloopexpr on <var6:ALoopExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction268> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction269#action for (self: ReduceAction269, Parser) */
void nitc__parser___nitc__parser__ReduceAction269___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwwhilenode2 = var_nodearraylist1;
/* <var_tkwwhilenode2:nullable Object> isa nullable TKwwhile */
cltype = type_nullable__nitc__TKwwhile.color;
idtype = type_nullable__nitc__TKwwhile.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7977);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7979);
fatal_exit(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype12 = type_nullable__nitc__TKwdo.color;
idtype13 = type_nullable__nitc__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7981);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7983);
fatal_exit(1);
}
var_plabelnode6 = var_nodearraylist7;
/* <var_plabelnode6:nullable Object> isa nullable ALabel */
cltype18 = type_nullable__nitc__ALabel.color;
idtype19 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 7985);
fatal_exit(1);
}
var20 = NEW_nitc__AWhileExpr(&type_nitc__AWhileExpr);
{
nitc__parser_prod___AWhileExpr___init_awhileexpr(var20, var_tkwwhilenode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, var_plabelnode6); /* Direct call parser_prod#AWhileExpr#init_awhileexpr on <var20:AWhileExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction269> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction270#action for (self: ReduceAction270, Parser) */
void nitc__parser___nitc__parser__ReduceAction270___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwwhilenode2 = var_nodearraylist1;
/* <var_tkwwhilenode2:nullable Object> isa nullable TKwwhile */
cltype = type_nullable__nitc__TKwwhile.color;
idtype = type_nullable__nitc__TKwwhile.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8009);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8011);
fatal_exit(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype11 = type_nullable__nitc__TKwdo.color;
idtype12 = type_nullable__nitc__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8013);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nitc__AExpr.color;
idtype15 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8015);
fatal_exit(1);
}
var16 = NEW_nitc__AWhileExpr(&type_nitc__AWhileExpr);
{
nitc__parser_prod___AWhileExpr___init_awhileexpr(var16, var_tkwwhilenode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, ((val*)NULL)); /* Direct call parser_prod#AWhileExpr#init_awhileexpr on <var16:AWhileExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction270> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction271#action for (self: ReduceAction271, Parser) */
void nitc__parser___nitc__parser__ReduceAction271___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_tkwdonode5 /* var tkwdonode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_plabelnode7 /* var plabelnode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AForExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
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
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode4 = var7;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable__nitc__TKwfor.color;
idtype = type_nullable__nitc__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8041);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_core__Array__core__Object.color;
idtype11 = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8043);
fatal_exit(1);
}
{
var12 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var_tkwdonode5 = var_nodearraylist5;
/* <var_tkwdonode5:nullable Object> isa nullable TKwdo */
cltype14 = type_nullable__nitc__TKwdo.color;
idtype15 = type_nullable__nitc__TKwdo.id;
if(var_tkwdonode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwdonode5&3)?type_info[((long)var_tkwdonode5&3)]:var_tkwdonode5->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwdonode5&3)?type_info[((long)var_tkwdonode5&3)]:var_tkwdonode5->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8046);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8048);
fatal_exit(1);
}
var_plabelnode7 = var_nodearraylist7;
/* <var_plabelnode7:nullable Object> isa nullable ALabel */
cltype20 = type_nullable__nitc__ALabel.color;
idtype21 = type_nullable__nitc__ALabel.id;
if(var_plabelnode7 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_plabelnode7&3)?type_info[((long)var_plabelnode7&3)]:var_plabelnode7->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_plabelnode7&3)?type_info[((long)var_plabelnode7&3)]:var_plabelnode7->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8050);
fatal_exit(1);
}
var22 = NEW_nitc__AForExpr(&type_nitc__AForExpr);
{
nitc__parser_prod___AForExpr___init_aforexpr(var22, var_tkwfornode2, var_listnode4, var_tkwdonode5, var_pexprnode6, var_plabelnode7); /* Direct call parser_prod#AForExpr#init_aforexpr on <var22:AForExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction271> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction272#action for (self: ReduceAction272, Parser) */
void nitc__parser___nitc__parser__ReduceAction272___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_tkwdonode5 /* var tkwdonode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AForExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
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
var_listnode4 = var6;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable__nitc__TKwfor.color;
idtype = type_nullable__nitc__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tkwfornode2&3)?type_info[((long)var_tkwfornode2&3)]:var_tkwfornode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8075);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8077);
fatal_exit(1);
}
{
var11 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_tkwdonode5 = var_nodearraylist5;
/* <var_tkwdonode5:nullable Object> isa nullable TKwdo */
cltype13 = type_nullable__nitc__TKwdo.color;
idtype14 = type_nullable__nitc__TKwdo.id;
if(var_tkwdonode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwdonode5&3)?type_info[((long)var_tkwdonode5&3)]:var_tkwdonode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwdonode5&3)?type_info[((long)var_tkwdonode5&3)]:var_tkwdonode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8080);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nitc__AExpr.color;
idtype17 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8082);
fatal_exit(1);
}
var18 = NEW_nitc__AForExpr(&type_nitc__AForExpr);
{
nitc__parser_prod___AForExpr___init_aforexpr(var18, var_tkwfornode2, var_listnode4, var_tkwdonode5, var_pexprnode6, ((val*)NULL)); /* Direct call parser_prod#AForExpr#init_aforexpr on <var18:AForExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction272> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction273#action for (self: ReduceAction273, Parser) */
void nitc__parser___nitc__parser__ReduceAction273___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pforgroupnode1 /* var pforgroupnode1: nullable Object */;
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
var_pforgroupnode1 = var_nodearraylist1;
if (var_pforgroupnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pforgroupnode1&3)?class_info[((long)var_pforgroupnode1&3)]:var_pforgroupnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pforgroupnode1, ((val*)NULL)); /* != on <var_pforgroupnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pforgroupnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction273> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction274#action for (self: ReduceAction274, Parser) */
void nitc__parser___nitc__parser__ReduceAction274___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pforgroupnode2 /* var pforgroupnode2: nullable Object */;
val* var7 /* : Array[Object] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var_listnode3 = var5;
var_listnode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8121);
fatal_exit(1);
}
var_pforgroupnode2 = var_nodearraylist5;
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var7;
if (var_pforgroupnode2 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))((((long)var_pforgroupnode2&3)?class_info[((long)var_pforgroupnode2&3)]:var_pforgroupnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pforgroupnode2, ((val*)NULL)); /* != on <var_pforgroupnode2:nullable Object>*/
var8 = var9;
}
if (var8){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pforgroupnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction274> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction275#action for (self: ReduceAction275, Parser) */
void nitc__parser___nitc__parser__ReduceAction275___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_tkwinnode4 /* var tkwinnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AForGroup */;
val* var_pforgroupnode1 /* var pforgroupnode1: nullable AForGroup */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_listnode3 = var5;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var6 = 0;
} else {
if(cltype >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8143);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var7;
var_tkwinnode4 = var_nodearraylist3;
/* <var_tkwinnode4:nullable Object> isa nullable TKwin */
cltype9 = type_nullable__nitc__TKwin.color;
idtype10 = type_nullable__nitc__TKwin.id;
if(var_tkwinnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwinnode4&3)?type_info[((long)var_tkwinnode4&3)]:var_tkwinnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwinnode4&3)?type_info[((long)var_tkwinnode4&3)]:var_tkwinnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8146);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8148);
fatal_exit(1);
}
var14 = NEW_nitc__AForGroup(&type_nitc__AForGroup);
{
nitc__parser_prod___AForGroup___init_aforgroup(var14, var_listnode3, var_tkwinnode4, var_pexprnode5); /* Direct call parser_prod#AForGroup#init_aforgroup on <var14:AForGroup>*/
}
var_pforgroupnode1 = var14;
var_node_list = var_pforgroupnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction275> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction276#action for (self: ReduceAction276, Parser) */
void nitc__parser___nitc__parser__ReduceAction276___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwwithnode2 = var_nodearraylist1;
/* <var_tkwwithnode2:nullable Object> isa nullable TKwwith */
cltype = type_nullable__nitc__TKwwith.color;
idtype = type_nullable__nitc__TKwwith.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8171);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8173);
fatal_exit(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype12 = type_nullable__nitc__TKwdo.color;
idtype13 = type_nullable__nitc__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8175);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8177);
fatal_exit(1);
}
var_plabelnode6 = var_nodearraylist7;
/* <var_plabelnode6:nullable Object> isa nullable ALabel */
cltype18 = type_nullable__nitc__ALabel.color;
idtype19 = type_nullable__nitc__ALabel.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8179);
fatal_exit(1);
}
var20 = NEW_nitc__AWithExpr(&type_nitc__AWithExpr);
{
nitc__parser_prod___AWithExpr___init_awithexpr(var20, var_tkwwithnode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, var_plabelnode6); /* Direct call parser_prod#AWithExpr#init_awithexpr on <var20:AWithExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction276> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction277#action for (self: ReduceAction277, Parser) */
void nitc__parser___nitc__parser__ReduceAction277___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwwithnode2 = var_nodearraylist1;
/* <var_tkwwithnode2:nullable Object> isa nullable TKwwith */
cltype = type_nullable__nitc__TKwwith.color;
idtype = type_nullable__nitc__TKwwith.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8203);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8205);
fatal_exit(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype11 = type_nullable__nitc__TKwdo.color;
idtype12 = type_nullable__nitc__TKwdo.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8207);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nitc__AExpr.color;
idtype15 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8209);
fatal_exit(1);
}
var16 = NEW_nitc__AWithExpr(&type_nitc__AWithExpr);
{
nitc__parser_prod___AWithExpr___init_awithexpr(var16, var_tkwwithnode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, ((val*)NULL)); /* Direct call parser_prod#AWithExpr#init_awithexpr on <var16:AWithExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction277> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction278#action for (self: ReduceAction278, Parser) */
void nitc__parser___nitc__parser__ReduceAction278___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8232);
fatal_exit(1);
}
var_ptypenode4 = var_nodearraylist2;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype7 = type_nullable__nitc__AType.color;
idtype8 = type_nullable__nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8234);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist3;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype10 = type_nullable__nitc__TAssign.color;
idtype11 = type_nullable__nitc__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8236);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nitc__AExpr.color;
idtype14 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8238);
fatal_exit(1);
}
var15 = NEW_nitc__AVardeclExpr(&type_nitc__AVardeclExpr);
{
nitc__parser_prod___AVardeclExpr___init_avardeclexpr(var15, ((val*)NULL), var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, ((val*)NULL)); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var15:AVardeclExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction278> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction279#action for (self: ReduceAction279, Parser) */
void nitc__parser___nitc__parser__ReduceAction279___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8263);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8265);
fatal_exit(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype11 = type_nullable__nitc__TAssign.color;
idtype12 = type_nullable__nitc__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8267);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nitc__AExpr.color;
idtype15 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8269);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist2;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype17 = type_nullable__nitc__AAnnotations.color;
idtype18 = type_nullable__nitc__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8271);
fatal_exit(1);
}
var19 = NEW_nitc__AVardeclExpr(&type_nitc__AVardeclExpr);
{
nitc__parser_prod___AVardeclExpr___init_avardeclexpr(var19, ((val*)NULL), var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var19:AVardeclExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction279> */
{
var21 = nitc___nitc__Parser___go_to(var_p, var20);
}
{
nitc___nitc__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction281#action for (self: ReduceAction281, Parser) */
void nitc__parser___nitc__parser__ReduceAction281___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nitc__TKwassert.color;
idtype = type_nullable__nitc__TKwassert.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8294);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist2;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype6 = type_nullable__nitc__AExpr.color;
idtype7 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8296);
fatal_exit(1);
}
var_tkwelsenode5 = var_nodearraylist3;
/* <var_tkwelsenode5:nullable Object> isa nullable TKwelse */
cltype9 = type_nullable__nitc__TKwelse.color;
idtype10 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8298);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype12 = type_nullable__nitc__AExpr.color;
idtype13 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8300);
fatal_exit(1);
}
var14 = NEW_nitc__AAssertExpr(&type_nitc__AAssertExpr);
{
nitc__parser_prod___AAssertExpr___init_aassertexpr(var14, var_tkwassertnode2, ((val*)NULL), var_pexprnode4, var_tkwelsenode5, var_pexprnode6); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var14:AAssertExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction281> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction282#action for (self: ReduceAction282, Parser) */
void nitc__parser___nitc__parser__ReduceAction282___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nitc__TKwassert.color;
idtype = type_nullable__nitc__TKwassert.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8323);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable__nitc__TId.color;
idtype8 = type_nullable__nitc__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8325);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8327);
fatal_exit(1);
}
var_tkwelsenode5 = var_nodearraylist4;
/* <var_tkwelsenode5:nullable Object> isa nullable TKwelse */
cltype13 = type_nullable__nitc__TKwelse.color;
idtype14 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8329);
fatal_exit(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable__nitc__AExpr.color;
idtype17 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8331);
fatal_exit(1);
}
var18 = NEW_nitc__AAssertExpr(&type_nitc__AAssertExpr);
{
nitc__parser_prod___AAssertExpr___init_aassertexpr(var18, var_tkwassertnode2, var_tidnode3, var_pexprnode4, var_tkwelsenode5, var_pexprnode6); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var18:AAssertExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction282> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction283#action for (self: ReduceAction283, Parser) */
void nitc__parser___nitc__parser__ReduceAction283___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nitc__TKwassert.color;
idtype = type_nullable__nitc__TKwassert.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8351);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist2;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nitc__AExpr.color;
idtype5 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8353);
fatal_exit(1);
}
var6 = NEW_nitc__AAssertExpr(&type_nitc__AAssertExpr);
{
nitc__parser_prod___AAssertExpr___init_aassertexpr(var6, var_tkwassertnode2, ((val*)NULL), var_pexprnode4, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var6:AAssertExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction283> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction284#action for (self: ReduceAction284, Parser) */
void nitc__parser___nitc__parser__ReduceAction284___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable__nitc__TKwassert.color;
idtype = type_nullable__nitc__TKwassert.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8374);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8376);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8378);
fatal_exit(1);
}
var10 = NEW_nitc__AAssertExpr(&type_nitc__AAssertExpr);
{
nitc__parser_prod___AAssertExpr___init_aassertexpr(var10, var_tkwassertnode2, var_tidnode3, var_pexprnode4, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAssertExpr#init_aassertexpr on <var10:AAssertExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction284> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction285#action for (self: ReduceAction285, Parser) */
void nitc__parser___nitc__parser__ReduceAction285___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction285> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction287#action for (self: ReduceAction287, Parser) */
void nitc__parser___nitc__parser__ReduceAction287___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist11 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var10;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable__nitc__TKwif.color;
idtype = type_nullable__nitc__TKwif.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8419);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nitc__AExpr.color;
idtype14 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8421);
fatal_exit(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype16 = type_nullable__nitc__TKwthen.color;
idtype17 = type_nullable__nitc__TKwthen.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8423);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype19 = type_nullable__nitc__AExpr.color;
idtype20 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8425);
fatal_exit(1);
}
var_tkwelsenode6 = var_nodearraylist9;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype22 = type_nullable__nitc__TKwelse.color;
idtype23 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8427);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist11;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nitc__AExpr.color;
idtype26 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8429);
fatal_exit(1);
}
var27 = NEW_nitc__AIfexprExpr(&type_nitc__AIfexprExpr);
{
nitc__parser_prod___AIfexprExpr___init_aifexprexpr(var27, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7); /* Direct call parser_prod#AIfexprExpr#init_aifexprexpr on <var27:AIfexprExpr>*/
}
var_pexprnode1 = var27;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction287> */
{
var29 = nitc___nitc__Parser___go_to(var_p, var28);
}
{
nitc___nitc__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction289#action for (self: ReduceAction289, Parser) */
void nitc__parser___nitc__parser__ReduceAction289___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8452);
fatal_exit(1);
}
var_tkwornode3 = var_nodearraylist2;
/* <var_tkwornode3:nullable Object> isa nullable TKwor */
cltype6 = type_nullable__nitc__TKwor.color;
idtype7 = type_nullable__nitc__TKwor.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8454);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8456);
fatal_exit(1);
}
var11 = NEW_nitc__AOrExpr(&type_nitc__AOrExpr);
{
nitc__parser_prod___AOrExpr___init_aorexpr(var11, var_pexprnode2, var_tkwornode3, var_pexprnode4); /* Direct call parser_prod#AOrExpr#init_aorexpr on <var11:AOrExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction289> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction290#action for (self: ReduceAction290, Parser) */
void nitc__parser___nitc__parser__ReduceAction290___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8476);
fatal_exit(1);
}
var_tkwandnode3 = var_nodearraylist2;
/* <var_tkwandnode3:nullable Object> isa nullable TKwand */
cltype6 = type_nullable__nitc__TKwand.color;
idtype7 = type_nullable__nitc__TKwand.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8478);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8480);
fatal_exit(1);
}
var11 = NEW_nitc__AAndExpr(&type_nitc__AAndExpr);
{
nitc__parser_prod___AAndExpr___init_aandexpr(var11, var_pexprnode2, var_tkwandnode3, var_pexprnode4); /* Direct call parser_prod#AAndExpr#init_aandexpr on <var11:AAndExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction290> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction291#action for (self: ReduceAction291, Parser) */
void nitc__parser___nitc__parser__ReduceAction291___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8501);
fatal_exit(1);
}
var_tkwornode3 = var_nodearraylist2;
/* <var_tkwornode3:nullable Object> isa nullable TKwor */
cltype7 = type_nullable__nitc__TKwor.color;
idtype8 = type_nullable__nitc__TKwor.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8503);
fatal_exit(1);
}
var_tkwelsenode4 = var_nodearraylist3;
/* <var_tkwelsenode4:nullable Object> isa nullable TKwelse */
cltype10 = type_nullable__nitc__TKwelse.color;
idtype11 = type_nullable__nitc__TKwelse.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8505);
fatal_exit(1);
}
var_pexprnode5 = var_nodearraylist5;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nitc__AExpr.color;
idtype14 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8507);
fatal_exit(1);
}
var15 = NEW_nitc__AOrElseExpr(&type_nitc__AOrElseExpr);
{
nitc__parser_prod___AOrElseExpr___init_aorelseexpr(var15, var_pexprnode2, var_tkwornode3, var_tkwelsenode4, var_pexprnode5); /* Direct call parser_prod#AOrElseExpr#init_aorelseexpr on <var15:AOrElseExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction291> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction292#action for (self: ReduceAction292, Parser) */
void nitc__parser___nitc__parser__ReduceAction292___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8528);
fatal_exit(1);
}
var_tkwimpliesnode3 = var_nodearraylist2;
/* <var_tkwimpliesnode3:nullable Object> isa nullable TKwimplies */
cltype6 = type_nullable__nitc__TKwimplies.color;
idtype7 = type_nullable__nitc__TKwimplies.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8530);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8532);
fatal_exit(1);
}
var11 = NEW_nitc__AImpliesExpr(&type_nitc__AImpliesExpr);
{
nitc__parser_prod___AImpliesExpr___init_aimpliesexpr(var11, var_pexprnode2, var_tkwimpliesnode3, var_pexprnode4); /* Direct call parser_prod#AImpliesExpr#init_aimpliesexpr on <var11:AImpliesExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction292> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction294#action for (self: ReduceAction294, Parser) */
void nitc__parser___nitc__parser__ReduceAction294___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwnotnode2 = var_nodearraylist1;
/* <var_tkwnotnode2:nullable Object> isa nullable TKwnot */
cltype = type_nullable__nitc__TKwnot.color;
idtype = type_nullable__nitc__TKwnot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8551);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable__nitc__AExpr.color;
idtype6 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8553);
fatal_exit(1);
}
var7 = NEW_nitc__ANotExpr(&type_nitc__ANotExpr);
{
nitc__parser_prod___ANotExpr___init_anotexpr(var7, var_tkwnotnode2, var_pexprnode3); /* Direct call parser_prod#ANotExpr#init_anotexpr on <var7:ANotExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction294> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction296#action for (self: ReduceAction296, Parser) */
void nitc__parser___nitc__parser__ReduceAction296___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8572);
fatal_exit(1);
}
var_teqnode3 = var_nodearraylist2;
/* <var_teqnode3:nullable Object> isa nullable TEq */
cltype6 = type_nullable__nitc__TEq.color;
idtype7 = type_nullable__nitc__TEq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8574);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8576);
fatal_exit(1);
}
var11 = NEW_nitc__AEqExpr(&type_nitc__AEqExpr);
{
nitc__parser_prod___AEqExpr___init_aeqexpr(var11, var_pexprnode2, var_teqnode3, var_pexprnode4); /* Direct call parser_prod#AEqExpr#init_aeqexpr on <var11:AEqExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction296> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction297#action for (self: ReduceAction297, Parser) */
void nitc__parser___nitc__parser__ReduceAction297___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8596);
fatal_exit(1);
}
var_tnenode3 = var_nodearraylist2;
/* <var_tnenode3:nullable Object> isa nullable TNe */
cltype6 = type_nullable__nitc__TNe.color;
idtype7 = type_nullable__nitc__TNe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8598);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8600);
fatal_exit(1);
}
var11 = NEW_nitc__ANeExpr(&type_nitc__ANeExpr);
{
nitc__parser_prod___ANeExpr___init_aneexpr(var11, var_pexprnode2, var_tnenode3, var_pexprnode4); /* Direct call parser_prod#ANeExpr#init_aneexpr on <var11:ANeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction297> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction298#action for (self: ReduceAction298, Parser) */
void nitc__parser___nitc__parser__ReduceAction298___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8620);
fatal_exit(1);
}
var_tltnode3 = var_nodearraylist2;
/* <var_tltnode3:nullable Object> isa nullable TLt */
cltype6 = type_nullable__nitc__TLt.color;
idtype7 = type_nullable__nitc__TLt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8622);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8624);
fatal_exit(1);
}
var11 = NEW_nitc__ALtExpr(&type_nitc__ALtExpr);
{
nitc__parser_prod___ALtExpr___init_altexpr(var11, var_pexprnode2, var_tltnode3, var_pexprnode4); /* Direct call parser_prod#ALtExpr#init_altexpr on <var11:ALtExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction298> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction299#action for (self: ReduceAction299, Parser) */
void nitc__parser___nitc__parser__ReduceAction299___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8644);
fatal_exit(1);
}
var_tlenode3 = var_nodearraylist2;
/* <var_tlenode3:nullable Object> isa nullable TLe */
cltype6 = type_nullable__nitc__TLe.color;
idtype7 = type_nullable__nitc__TLe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8646);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8648);
fatal_exit(1);
}
var11 = NEW_nitc__ALeExpr(&type_nitc__ALeExpr);
{
nitc__parser_prod___ALeExpr___init_aleexpr(var11, var_pexprnode2, var_tlenode3, var_pexprnode4); /* Direct call parser_prod#ALeExpr#init_aleexpr on <var11:ALeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction299> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction300#action for (self: ReduceAction300, Parser) */
void nitc__parser___nitc__parser__ReduceAction300___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8668);
fatal_exit(1);
}
var_tgtnode3 = var_nodearraylist2;
/* <var_tgtnode3:nullable Object> isa nullable TGt */
cltype6 = type_nullable__nitc__TGt.color;
idtype7 = type_nullable__nitc__TGt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8670);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8672);
fatal_exit(1);
}
var11 = NEW_nitc__AGtExpr(&type_nitc__AGtExpr);
{
nitc__parser_prod___AGtExpr___init_agtexpr(var11, var_pexprnode2, var_tgtnode3, var_pexprnode4); /* Direct call parser_prod#AGtExpr#init_agtexpr on <var11:AGtExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction300> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction301#action for (self: ReduceAction301, Parser) */
void nitc__parser___nitc__parser__ReduceAction301___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8692);
fatal_exit(1);
}
var_tgenode3 = var_nodearraylist2;
/* <var_tgenode3:nullable Object> isa nullable TGe */
cltype6 = type_nullable__nitc__TGe.color;
idtype7 = type_nullable__nitc__TGe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8694);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8696);
fatal_exit(1);
}
var11 = NEW_nitc__AGeExpr(&type_nitc__AGeExpr);
{
nitc__parser_prod___AGeExpr___init_ageexpr(var11, var_pexprnode2, var_tgenode3, var_pexprnode4); /* Direct call parser_prod#AGeExpr#init_ageexpr on <var11:AGeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction301> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction302#action for (self: ReduceAction302, Parser) */
void nitc__parser___nitc__parser__ReduceAction302___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8716);
fatal_exit(1);
}
var_tstarshipnode3 = var_nodearraylist2;
/* <var_tstarshipnode3:nullable Object> isa nullable TStarship */
cltype6 = type_nullable__nitc__TStarship.color;
idtype7 = type_nullable__nitc__TStarship.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8718);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8720);
fatal_exit(1);
}
var11 = NEW_nitc__AStarshipExpr(&type_nitc__AStarshipExpr);
{
nitc__parser_prod___AStarshipExpr___init_astarshipexpr(var11, var_pexprnode2, var_tstarshipnode3, var_pexprnode4); /* Direct call parser_prod#AStarshipExpr#init_astarshipexpr on <var11:AStarshipExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction302> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction303#action for (self: ReduceAction303, Parser) */
void nitc__parser___nitc__parser__ReduceAction303___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8740);
fatal_exit(1);
}
var_tkwisanode3 = var_nodearraylist2;
/* <var_tkwisanode3:nullable Object> isa nullable TKwisa */
cltype6 = type_nullable__nitc__TKwisa.color;
idtype7 = type_nullable__nitc__TKwisa.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8742);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8744);
fatal_exit(1);
}
var11 = NEW_nitc__AIsaExpr(&type_nitc__AIsaExpr);
{
nitc__parser_prod___AIsaExpr___init_aisaexpr(var11, var_pexprnode2, var_tkwisanode3, var_ptypenode4); /* Direct call parser_prod#AIsaExpr#init_aisaexpr on <var11:AIsaExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction303> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction305#action for (self: ReduceAction305, Parser) */
void nitc__parser___nitc__parser__ReduceAction305___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8764);
fatal_exit(1);
}
var_tpipenode3 = var_nodearraylist2;
/* <var_tpipenode3:nullable Object> isa nullable TPipe */
cltype6 = type_nullable__nitc__TPipe.color;
idtype7 = type_nullable__nitc__TPipe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8766);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8768);
fatal_exit(1);
}
var11 = NEW_nitc__APipeExpr(&type_nitc__APipeExpr);
{
nitc__parser_prod___APipeExpr___init_apipeexpr(var11, var_pexprnode2, var_tpipenode3, var_pexprnode4); /* Direct call parser_prod#APipeExpr#init_apipeexpr on <var11:APipeExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction305> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction307#action for (self: ReduceAction307, Parser) */
void nitc__parser___nitc__parser__ReduceAction307___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8788);
fatal_exit(1);
}
var_tcaretnode3 = var_nodearraylist2;
/* <var_tcaretnode3:nullable Object> isa nullable TCaret */
cltype6 = type_nullable__nitc__TCaret.color;
idtype7 = type_nullable__nitc__TCaret.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8790);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8792);
fatal_exit(1);
}
var11 = NEW_nitc__ACaretExpr(&type_nitc__ACaretExpr);
{
nitc__parser_prod___ACaretExpr___init_acaretexpr(var11, var_pexprnode2, var_tcaretnode3, var_pexprnode4); /* Direct call parser_prod#ACaretExpr#init_acaretexpr on <var11:ACaretExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction307> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction309#action for (self: ReduceAction309, Parser) */
void nitc__parser___nitc__parser__ReduceAction309___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8812);
fatal_exit(1);
}
var_tampnode3 = var_nodearraylist2;
/* <var_tampnode3:nullable Object> isa nullable TAmp */
cltype6 = type_nullable__nitc__TAmp.color;
idtype7 = type_nullable__nitc__TAmp.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8814);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8816);
fatal_exit(1);
}
var11 = NEW_nitc__AAmpExpr(&type_nitc__AAmpExpr);
{
nitc__parser_prod___AAmpExpr___init_aampexpr(var11, var_pexprnode2, var_tampnode3, var_pexprnode4); /* Direct call parser_prod#AAmpExpr#init_aampexpr on <var11:AAmpExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction309> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction311#action for (self: ReduceAction311, Parser) */
void nitc__parser___nitc__parser__ReduceAction311___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8836);
fatal_exit(1);
}
var_tllnode3 = var_nodearraylist2;
/* <var_tllnode3:nullable Object> isa nullable TLl */
cltype6 = type_nullable__nitc__TLl.color;
idtype7 = type_nullable__nitc__TLl.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8838);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8840);
fatal_exit(1);
}
var11 = NEW_nitc__ALlExpr(&type_nitc__ALlExpr);
{
nitc__parser_prod___ALlExpr___init_allexpr(var11, var_pexprnode2, var_tllnode3, var_pexprnode4); /* Direct call parser_prod#ALlExpr#init_allexpr on <var11:ALlExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction311> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction312#action for (self: ReduceAction312, Parser) */
void nitc__parser___nitc__parser__ReduceAction312___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8860);
fatal_exit(1);
}
var_tggnode3 = var_nodearraylist2;
/* <var_tggnode3:nullable Object> isa nullable TGg */
cltype6 = type_nullable__nitc__TGg.color;
idtype7 = type_nullable__nitc__TGg.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8862);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8864);
fatal_exit(1);
}
var11 = NEW_nitc__AGgExpr(&type_nitc__AGgExpr);
{
nitc__parser_prod___AGgExpr___init_aggexpr(var11, var_pexprnode2, var_tggnode3, var_pexprnode4); /* Direct call parser_prod#AGgExpr#init_aggexpr on <var11:AGgExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction312> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction314#action for (self: ReduceAction314, Parser) */
void nitc__parser___nitc__parser__ReduceAction314___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8884);
fatal_exit(1);
}
var_tplusnode3 = var_nodearraylist2;
/* <var_tplusnode3:nullable Object> isa nullable TPlus */
cltype6 = type_nullable__nitc__TPlus.color;
idtype7 = type_nullable__nitc__TPlus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8886);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8888);
fatal_exit(1);
}
var11 = NEW_nitc__APlusExpr(&type_nitc__APlusExpr);
{
nitc__parser_prod___APlusExpr___init_aplusexpr(var11, var_pexprnode2, var_tplusnode3, var_pexprnode4); /* Direct call parser_prod#APlusExpr#init_aplusexpr on <var11:APlusExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction314> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction315#action for (self: ReduceAction315, Parser) */
void nitc__parser___nitc__parser__ReduceAction315___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8908);
fatal_exit(1);
}
var_tminusnode3 = var_nodearraylist2;
/* <var_tminusnode3:nullable Object> isa nullable TMinus */
cltype6 = type_nullable__nitc__TMinus.color;
idtype7 = type_nullable__nitc__TMinus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8910);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8912);
fatal_exit(1);
}
var11 = NEW_nitc__AMinusExpr(&type_nitc__AMinusExpr);
{
nitc__parser_prod___AMinusExpr___init_aminusexpr(var11, var_pexprnode2, var_tminusnode3, var_pexprnode4); /* Direct call parser_prod#AMinusExpr#init_aminusexpr on <var11:AMinusExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction315> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction317#action for (self: ReduceAction317, Parser) */
void nitc__parser___nitc__parser__ReduceAction317___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8932);
fatal_exit(1);
}
var_tstarnode3 = var_nodearraylist2;
/* <var_tstarnode3:nullable Object> isa nullable TStar */
cltype6 = type_nullable__nitc__TStar.color;
idtype7 = type_nullable__nitc__TStar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8934);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8936);
fatal_exit(1);
}
var11 = NEW_nitc__AStarExpr(&type_nitc__AStarExpr);
{
nitc__parser_prod___AStarExpr___init_astarexpr(var11, var_pexprnode2, var_tstarnode3, var_pexprnode4); /* Direct call parser_prod#AStarExpr#init_astarexpr on <var11:AStarExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction317> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction318#action for (self: ReduceAction318, Parser) */
void nitc__parser___nitc__parser__ReduceAction318___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8956);
fatal_exit(1);
}
var_tslashnode3 = var_nodearraylist2;
/* <var_tslashnode3:nullable Object> isa nullable TSlash */
cltype6 = type_nullable__nitc__TSlash.color;
idtype7 = type_nullable__nitc__TSlash.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8958);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8960);
fatal_exit(1);
}
var11 = NEW_nitc__ASlashExpr(&type_nitc__ASlashExpr);
{
nitc__parser_prod___ASlashExpr___init_aslashexpr(var11, var_pexprnode2, var_tslashnode3, var_pexprnode4); /* Direct call parser_prod#ASlashExpr#init_aslashexpr on <var11:ASlashExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction318> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction319#action for (self: ReduceAction319, Parser) */
void nitc__parser___nitc__parser__ReduceAction319___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8980);
fatal_exit(1);
}
var_tpercentnode3 = var_nodearraylist2;
/* <var_tpercentnode3:nullable Object> isa nullable TPercent */
cltype6 = type_nullable__nitc__TPercent.color;
idtype7 = type_nullable__nitc__TPercent.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8982);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 8984);
fatal_exit(1);
}
var11 = NEW_nitc__APercentExpr(&type_nitc__APercentExpr);
{
nitc__parser_prod___APercentExpr___init_apercentexpr(var11, var_pexprnode2, var_tpercentnode3, var_pexprnode4); /* Direct call parser_prod#APercentExpr#init_apercentexpr on <var11:APercentExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction319> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction321#action for (self: ReduceAction321, Parser) */
void nitc__parser___nitc__parser__ReduceAction321___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9004);
fatal_exit(1);
}
var_tstarstarnode3 = var_nodearraylist2;
/* <var_tstarstarnode3:nullable Object> isa nullable TStarstar */
cltype6 = type_nullable__nitc__TStarstar.color;
idtype7 = type_nullable__nitc__TStarstar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9006);
fatal_exit(1);
}
var_pexprnode4 = var_nodearraylist4;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nitc__AExpr.color;
idtype10 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9008);
fatal_exit(1);
}
var11 = NEW_nitc__AStarstarExpr(&type_nitc__AStarstarExpr);
{
nitc__parser_prod___AStarstarExpr___init_astarstarexpr(var11, var_pexprnode2, var_tstarstarnode3, var_pexprnode4); /* Direct call parser_prod#AStarstarExpr#init_astarstarexpr on <var11:AStarstarExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction321> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction323#action for (self: ReduceAction323, Parser) */
void nitc__parser___nitc__parser__ReduceAction323___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable__nitc__TMinus.color;
idtype = type_nullable__nitc__TMinus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9026);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nitc__AExpr.color;
idtype5 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9028);
fatal_exit(1);
}
var6 = NEW_nitc__AUminusExpr(&type_nitc__AUminusExpr);
{
nitc__parser_prod___AUminusExpr___init_auminusexpr(var6, var_tminusnode2, var_pexprnode3); /* Direct call parser_prod#AUminusExpr#init_auminusexpr on <var6:AUminusExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction323> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction324#action for (self: ReduceAction324, Parser) */
void nitc__parser___nitc__parser__ReduceAction324___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable__nitc__TPlus.color;
idtype = type_nullable__nitc__TPlus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9045);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nitc__AExpr.color;
idtype5 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9047);
fatal_exit(1);
}
var6 = NEW_nitc__AUplusExpr(&type_nitc__AUplusExpr);
{
nitc__parser_prod___AUplusExpr___init_auplusexpr(var6, var_tplusnode2, var_pexprnode3); /* Direct call parser_prod#AUplusExpr#init_auplusexpr on <var6:AUplusExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction324> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction325#action for (self: ReduceAction325, Parser) */
void nitc__parser___nitc__parser__ReduceAction325___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_ttildenode2 = var_nodearraylist1;
/* <var_ttildenode2:nullable Object> isa nullable TTilde */
cltype = type_nullable__nitc__TTilde.color;
idtype = type_nullable__nitc__TTilde.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9064);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nitc__AExpr.color;
idtype5 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9066);
fatal_exit(1);
}
var6 = NEW_nitc__AUtildeExpr(&type_nitc__AUtildeExpr);
{
nitc__parser_prod___AUtildeExpr___init_autildeexpr(var6, var_ttildenode2, var_pexprnode3); /* Direct call parser_prod#AUtildeExpr#init_autildeexpr on <var6:AUtildeExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction325> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction326#action for (self: ReduceAction326, Parser) */
void nitc__parser___nitc__parser__ReduceAction326___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwoncenode2 = var_nodearraylist1;
/* <var_tkwoncenode2:nullable Object> isa nullable TKwonce */
cltype = type_nullable__nitc__TKwonce.color;
idtype = type_nullable__nitc__TKwonce.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9084);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable__nitc__AExpr.color;
idtype6 = type_nullable__nitc__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9086);
fatal_exit(1);
}
var7 = NEW_nitc__AOnceExpr(&type_nitc__AOnceExpr);
{
nitc__parser_prod___AOnceExpr___init_aonceexpr(var7, var_tkwoncenode2, var_pexprnode3); /* Direct call parser_prod#AOnceExpr#init_aonceexpr on <var7:AOnceExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction326> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction328#action for (self: ReduceAction328, Parser) */
void nitc__parser___nitc__parser__ReduceAction328___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9105);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable__nitc__AType.color;
idtype7 = type_nullable__nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9107);
fatal_exit(1);
}
var_pexprsnode5 = var_nodearraylist4;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nitc__AExprs.color;
idtype10 = type_nullable__nitc__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9109);
fatal_exit(1);
}
var11 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var11, var_tkwnewnode2, var_ptypenode3, ((val*)NULL), var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var11:ANewExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction328> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction329#action for (self: ReduceAction329, Parser) */
void nitc__parser___nitc__parser__ReduceAction329___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable__nitc__TKwnew.color;
idtype = type_nullable__nitc__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9129);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nitc__AType.color;
idtype6 = type_nullable__nitc__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9131);
fatal_exit(1);
}
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var8 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var8, var_listnode6); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode5 = var8;
var9 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var9, var_tkwnewnode2, var_ptypenode3, ((val*)NULL), var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var9:ANewExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction329> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction330#action for (self: ReduceAction330, Parser) */
void nitc__parser___nitc__parser__ReduceAction330___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nitc__TKwisset.color;
idtype = type_nullable__nitc__TKwisset.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9158);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9160);
fatal_exit(1);
}
var_tattridnode4 = var_nodearraylist6;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype11 = type_nullable__nitc__TAttrid.color;
idtype12 = type_nullable__nitc__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9162);
fatal_exit(1);
}
var13 = NEW_nitc__AIssetAttrExpr(&type_nitc__AIssetAttrExpr);
{
nitc__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var13, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var13:AIssetAttrExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction330> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction331#action for (self: ReduceAction331, Parser) */
void nitc__parser___nitc__parser__ReduceAction331___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nitc__TKwisset.color;
idtype = type_nullable__nitc__TKwisset.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9181);
fatal_exit(1);
}
var4 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var4); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/
}
var_pexprnode3 = var4;
var_tattridnode4 = var_nodearraylist3;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype6 = type_nullable__nitc__TAttrid.color;
idtype7 = type_nullable__nitc__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9184);
fatal_exit(1);
}
var8 = NEW_nitc__AIssetAttrExpr(&type_nitc__AIssetAttrExpr);
{
nitc__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var8, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var8:AIssetAttrExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction331> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction333#action for (self: ReduceAction333, Parser) */
void nitc__parser___nitc__parser__ReduceAction333___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9205);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype7 = type_nullable__nitc__TAttrid.color;
idtype8 = type_nullable__nitc__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9207);
fatal_exit(1);
}
var9 = NEW_nitc__AAttrExpr(&type_nitc__AAttrExpr);
{
nitc__parser_prod___AAttrExpr___init_aattrexpr(var9, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var9:AAttrExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction333> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction334#action for (self: ReduceAction334, Parser) */
void nitc__parser___nitc__parser__ReduceAction334___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable__nitc__TAttrid.color;
idtype = type_nullable__nitc__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9225);
fatal_exit(1);
}
var4 = NEW_nitc__AAttrExpr(&type_nitc__AAttrExpr);
{
nitc__parser_prod___AAttrExpr___init_aattrexpr(var4, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var4:AAttrExpr>*/
}
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction334> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction336#action for (self: ReduceAction336, Parser) */
void nitc__parser___nitc__parser__ReduceAction336___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var9 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var10 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9244);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9246);
fatal_exit(1);
}
var8 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var8, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var8:AQid>*/
}
var_pqidnode3 = var8;
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode7 = var9;
var10 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var10, var_listnode7); /* Direct call parser_prod#AListExprs#init_alistexprs on <var10:AListExprs>*/
}
var_pexprsnode6 = var10;
var11 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var11, var_pexprnode2, var_pqidnode3, var_pexprsnode6); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction336> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction338#action for (self: ReduceAction338, Parser) */
void nitc__parser___nitc__parser__ReduceAction338___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var15 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var16 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
val* var17 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9275);
fatal_exit(1);
}
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var_tclassidnode6 = var_nodearraylist4;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype8 = type_nullable__nitc__TClassid.color;
idtype9 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9278);
fatal_exit(1);
}
var10 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var10, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var10:AQualified>*/
}
var_pqualifiednode4 = var10;
var_tidnode7 = var_nodearraylist5;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype12 = type_nullable__nitc__TId.color;
idtype13 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9284);
fatal_exit(1);
}
var14 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var14, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var14:AQid>*/
}
var_pqidnode3 = var14;
var15 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode9 = var15;
var16 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var16, var_listnode9); /* Direct call parser_prod#AListExprs#init_alistexprs on <var16:AListExprs>*/
}
var_pexprsnode8 = var16;
var17 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var17, var_pexprnode2, var_pqidnode3, var_pexprsnode8); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var17:ACallExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction338> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction340#action for (self: ReduceAction340, Parser) */
void nitc__parser___nitc__parser__ReduceAction340___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var20 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var21 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var22 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9314);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9317);
fatal_exit(1);
}
{
var11 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var11;
var_tclassidnode7 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9320);
fatal_exit(1);
}
var15 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var15, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var15:AQualified>*/
}
var_pqualifiednode4 = var15;
var_tidnode8 = var_nodearraylist6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9326);
fatal_exit(1);
}
var19 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var19, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var19:AQid>*/
}
var_pqidnode3 = var19;
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
var22 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var22, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var22:ACallExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction340> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction342#action for (self: ReduceAction342, Parser) */
void nitc__parser___nitc__parser__ReduceAction342___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var16 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var17 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var18 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9355);
fatal_exit(1);
}
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype8 = type_core__Array__core__Object.color;
idtype9 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9358);
fatal_exit(1);
}
{
var10 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var10;
var11 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var11, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var11:AQualified>*/
}
var_pqualifiednode4 = var11;
var_tidnode8 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9365);
fatal_exit(1);
}
var15 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var15, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var15:AQid>*/
}
var_pqidnode3 = var15;
var16 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var16); /* Direct call array#Array#init on <var16:Array[Object]>*/
}
var_listnode10 = var16;
var17 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var17, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var17:AListExprs>*/
}
var_pexprsnode9 = var17;
var18 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var18, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var18:ACallExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction342> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction344#action for (self: ReduceAction344, Parser) */
void nitc__parser___nitc__parser__ReduceAction344___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var5 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var6 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
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
var_tidnode5 = var_nodearraylist1;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9391);
fatal_exit(1);
}
var3 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var3, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var3:AQid>*/
}
var_pqidnode3 = var3;
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var5 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var5, var_listnode7); /* Direct call parser_prod#AListExprs#init_alistexprs on <var5:AListExprs>*/
}
var_pexprsnode6 = var5;
var6 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var6, var_pexprnode2, var_pqidnode3, var_pexprsnode6); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var6:ACallExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction344> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction346#action for (self: ReduceAction346, Parser) */
void nitc__parser___nitc__parser__ReduceAction346___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var10 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var11 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
val* var12 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var2 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var2); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var_tclassidnode6 = var_nodearraylist1;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9419);
fatal_exit(1);
}
var5 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var5, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var5:AQualified>*/
}
var_pqualifiednode4 = var5;
var_tidnode7 = var_nodearraylist2;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype7 = type_nullable__nitc__TId.color;
idtype8 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9425);
fatal_exit(1);
}
var9 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var9, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var9:AQid>*/
}
var_pqidnode3 = var9;
var10 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode9 = var10;
var11 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var11, var_listnode9); /* Direct call parser_prod#AListExprs#init_alistexprs on <var11:AListExprs>*/
}
var_pexprsnode8 = var11;
var12 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var12, var_pexprnode2, var_pqidnode3, var_pexprsnode8); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var12:ACallExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction346> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction348#action for (self: ReduceAction348, Parser) */
void nitc__parser___nitc__parser__ReduceAction348___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var15 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var16 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var17 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9454);
fatal_exit(1);
}
{
var6 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var6;
var_tclassidnode7 = var_nodearraylist2;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype8 = type_nullable__nitc__TClassid.color;
idtype9 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9457);
fatal_exit(1);
}
var10 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var10, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var10:AQualified>*/
}
var_pqualifiednode4 = var10;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype12 = type_nullable__nitc__TId.color;
idtype13 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9463);
fatal_exit(1);
}
var14 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var14, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var14:AQid>*/
}
var_pqidnode3 = var14;
var15 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode10 = var15;
var16 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var16, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var16:AListExprs>*/
}
var_pexprsnode9 = var16;
var17 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var17, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var17:ACallExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction348> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction350#action for (self: ReduceAction350, Parser) */
void nitc__parser___nitc__parser__ReduceAction350___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var3 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var6 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var11 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var12 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var13 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var2 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var2); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/
}
var_pexprnode2 = var2;
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode6 = var3;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9491);
fatal_exit(1);
}
{
var5 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var5;
var6 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var6, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var6:AQualified>*/
}
var_pqualifiednode4 = var6;
var_tidnode8 = var_nodearraylist2;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype8 = type_nullable__nitc__TId.color;
idtype9 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9498);
fatal_exit(1);
}
var10 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var10, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var10:AQid>*/
}
var_pqidnode3 = var10;
var11 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode10 = var11;
var12 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var12, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var12:AListExprs>*/
}
var_pexprsnode9 = var12;
var13 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var13, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var13:ACallExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction350> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction352#action for (self: ReduceAction352, Parser) */
void nitc__parser___nitc__parser__ReduceAction352___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pqualifiednode2 = var_nodearraylist1;
/* <var_pqualifiednode2:nullable Object> isa nullable AQualified */
cltype = type_nullable__nitc__AQualified.color;
idtype = type_nullable__nitc__AQualified.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9524);
fatal_exit(1);
}
var_tkwsupernode3 = var_nodearraylist2;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype4 = type_nullable__nitc__TKwsuper.color;
idtype5 = type_nullable__nitc__TKwsuper.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9526);
fatal_exit(1);
}
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var7, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode4 = var7;
var8 = NEW_nitc__ASuperExpr(&type_nitc__ASuperExpr);
{
nitc__parser_prod___ASuperExpr___init_asuperexpr(var8, var_pqualifiednode2, var_tkwsupernode3, var_pexprsnode4); /* Direct call parser_prod#ASuperExpr#init_asuperexpr on <var8:ASuperExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction352> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction354#action for (self: ReduceAction354, Parser) */
void nitc__parser___nitc__parser__ReduceAction354___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9550);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype6 = type_nullable__nitc__TKwinit.color;
idtype7 = type_nullable__nitc__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9552);
fatal_exit(1);
}
var8 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode5 = var8;
var9 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var9, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var9:AListExprs>*/
}
var_pexprsnode4 = var9;
var10 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction354> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction356#action for (self: ReduceAction356, Parser) */
void nitc__parser___nitc__parser__ReduceAction356___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var1); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/
}
var_pexprnode2 = var1;
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable__nitc__TKwinit.color;
idtype = type_nullable__nitc__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9574);
fatal_exit(1);
}
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var4 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var4, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var4:AListExprs>*/
}
var_pexprsnode4 = var4;
var5 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var5, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var5:AInitExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction356> */
{
var7 = nitc___nitc__Parser___go_to(var_p, var6);
}
{
nitc___nitc__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction357#action for (self: ReduceAction357, Parser) */
void nitc__parser___nitc__parser__ReduceAction357___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9596);
fatal_exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype4 = type_nullable__nitc__AExprs.color;
idtype5 = type_nullable__nitc__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9598);
fatal_exit(1);
}
var6 = NEW_nitc__ABraExpr(&type_nitc__ABraExpr);
{
nitc__parser_prod___ABraExpr___init_abraexpr(var6, var_pexprnode2, var_pexprsnode3); /* Direct call parser_prod#ABraExpr#init_abraexpr on <var6:ABraExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction357> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction358#action for (self: ReduceAction358, Parser) */
void nitc__parser___nitc__parser__ReduceAction358___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AQid */;
val* var_pqidnode4 /* var pqidnode4: nullable AQid */;
val* var_pexprsnode7 /* var pexprsnode7: nullable Object */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9620);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9622);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist6;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype12 = type_nullable__nitc__TId.color;
idtype13 = type_nullable__nitc__TId.id;
if(var_tidnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9624);
fatal_exit(1);
}
var14 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var14, ((val*)NULL), var_tidnode6); /* Direct call parser_prod#AQid#init_aqid on <var14:AQid>*/
}
var_pqidnode4 = var14;
var_pexprsnode7 = var_nodearraylist7;
/* <var_pexprsnode7:nullable Object> isa nullable AExprs */
cltype16 = type_nullable__nitc__AExprs.color;
idtype17 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprsnode7&3)?type_info[((long)var_pexprsnode7&3)]:var_pexprsnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprsnode7&3)?type_info[((long)var_pexprsnode7&3)]:var_pexprsnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 9630);
fatal_exit(1);
}
var18 = NEW_nitc__ANewExpr(&type_nitc__ANewExpr);
{
nitc__parser_prod___ANewExpr___init_anewexpr(var18, var_tkwnewnode2, var_ptypenode3, var_pqidnode4, var_pexprsnode7); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var18:ANewExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction358> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
