#include "nitc__parser.sep.0.h"
/* method parser#ReduceAction476#action for (self: ReduceAction476, Parser) */
void nitc__parser___nitc__parser__ReduceAction476___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : ADoc */;
val* var_pdocnode1 /* var pdocnode1: nullable ADoc */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11877);
fatal_exit(1);
}
{
var3 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var3;
var4 = NEW_nitc__ADoc(&type_nitc__ADoc);
{
nitc__parser_prod___ADoc___init_adoc(var4, var_listnode3); /* Direct call parser_prod#ADoc#init_adoc on <var4:ADoc>*/
}
var_pdocnode1 = var4;
var_node_list = var_pdocnode1;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction476> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction477#action for (self: ReduceAction477, Parser) */
void nitc__parser___nitc__parser__ReduceAction477___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : ADoc */;
val* var_pdocnode1 /* var pdocnode1: nullable ADoc */;
long var6 /* : Int */;
long var7 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11895);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var5 = NEW_nitc__ADoc(&type_nitc__ADoc);
{
nitc__parser_prod___ADoc___init_adoc(var5, var_listnode3); /* Direct call parser_prod#ADoc#init_adoc on <var5:ADoc>*/
}
var_pdocnode1 = var5;
var_node_list = var_pdocnode1;
var6 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction477> */
{
var7 = nitc___nitc__Parser___go_to(var_p, var6);
}
{
nitc___nitc__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction480#action for (self: ReduceAction480, Parser) */
void nitc__parser___nitc__parser__ReduceAction480___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
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
var_node_list = ((val*)NULL);
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction480> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction482#action for (self: ReduceAction482, Parser) */
void nitc__parser___nitc__parser__ReduceAction482___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
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
var_node_list = ((val*)NULL);
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction482> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction483#action for (self: ReduceAction483, Parser) */
void nitc__parser___nitc__parser__ReduceAction483___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode1 /* var pdocnode1: nullable Object */;
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
var_pdocnode1 = var_nodearraylist2;
var_node_list = var_pdocnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction483> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction484#action for (self: ReduceAction484, Parser) */
void nitc__parser___nitc__parser__ReduceAction484___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode1 /* var pdocnode1: nullable Object */;
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
var_pdocnode1 = var_nodearraylist3;
var_node_list = var_pdocnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction484> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction486#action for (self: ReduceAction486, Parser) */
void nitc__parser___nitc__parser__ReduceAction486___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pdocnode1 /* var pdocnode1: nullable Object */;
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
var_pdocnode1 = var_nodearraylist4;
var_node_list = var_pdocnode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction486> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction488#action for (self: ReduceAction488, Parser) */
void nitc__parser___nitc__parser__ReduceAction488___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode1 /* var pdocnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pdocnode1 = var_nodearraylist1;
var_node_list = var_pdocnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction488> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction489#action for (self: ReduceAction489, Parser) */
void nitc__parser___nitc__parser__ReduceAction489___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction489> */
{
var1 = nitc___nitc__Parser___go_to(var_p, var);
}
{
nitc___nitc__Parser___push(var_p, var1, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction492#action for (self: ReduceAction492, Parser) */
void nitc__parser___nitc__parser__ReduceAction492___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
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
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction492> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction853#action for (self: ReduceAction853, Parser) */
void nitc__parser___nitc__parser__ReduceAction853___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nitc__TKwisset.color;
idtype = type_nullable__nitc__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwissetnode2&3)?type_info[((long)var_tkwissetnode2&3)]:var_tkwissetnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12005);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12007);
fatal_exit(1);
}
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nitc__TAttrid.color;
idtype10 = type_nullable__nitc__TAttrid.id;
if(var_tattridnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tattridnode4&3)?type_info[((long)var_tattridnode4&3)]:var_tattridnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12009);
fatal_exit(1);
}
var11 = NEW_nitc__AIssetAttrExpr(&type_nitc__AIssetAttrExpr);
{
nitc__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var11, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var11:AIssetAttrExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction853> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction855#action for (self: ReduceAction855, Parser) */
void nitc__parser___nitc__parser__ReduceAction855___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12028);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype5 = type_nullable__nitc__TAttrid.color;
idtype6 = type_nullable__nitc__TAttrid.id;
if(var_tattridnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tattridnode3&3)?type_info[((long)var_tattridnode3&3)]:var_tattridnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12030);
fatal_exit(1);
}
var7 = NEW_nitc__AAttrExpr(&type_nitc__AAttrExpr);
{
nitc__parser_prod___AAttrExpr___init_aattrexpr(var7, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var7:AAttrExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction855> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction856#action for (self: ReduceAction856, Parser) */
void nitc__parser___nitc__parser__ReduceAction856___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12048);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype5 = type_nullable__nitc__TId.color;
idtype6 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12050);
fatal_exit(1);
}
var7 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var7, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var7:AQid>*/
}
var_pqidnode3 = var7;
var_pexprsnode6 = var_nodearraylist3;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nitc__AExprs.color;
idtype10 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12056);
fatal_exit(1);
}
var11 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var11, var_pexprnode2, var_pqidnode3, var_pexprsnode6); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction856> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction857#action for (self: ReduceAction857, Parser) */
void nitc__parser___nitc__parser__ReduceAction857___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var7 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var9 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12074);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype4 = type_nullable__nitc__TId.color;
idtype5 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12076);
fatal_exit(1);
}
var6 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var6, ((val*)NULL), var_tidnode5); /* Direct call parser_prod#AQid#init_aqid on <var6:AQid>*/
}
var_pqidnode3 = var6;
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode7 = var7;
var8 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var8, var_listnode7); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode6 = var8;
var9 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var9, var_pexprnode2, var_pqidnode3, var_pexprsnode6); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction857> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction858#action for (self: ReduceAction858, Parser) */
void nitc__parser___nitc__parser__ReduceAction858___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode8 /* var pexprsnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12104);
fatal_exit(1);
}
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12107);
fatal_exit(1);
}
var9 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var9, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode4 = var9;
var_tidnode7 = var_nodearraylist3;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12113);
fatal_exit(1);
}
var13 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var13, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var13:AQid>*/
}
var_pqidnode3 = var13;
var_pexprsnode8 = var_nodearraylist4;
/* <var_pexprsnode8:nullable Object> isa nullable AExprs */
cltype15 = type_nullable__nitc__AExprs.color;
idtype16 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12119);
fatal_exit(1);
}
var17 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var17, var_pexprnode2, var_pqidnode3, var_pexprsnode8); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var17:ACallExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction858> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction859#action for (self: ReduceAction859, Parser) */
void nitc__parser___nitc__parser__ReduceAction859___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var13 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12138);
fatal_exit(1);
}
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var_tclassidnode6 = var_nodearraylist2;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nitc__TClassid.color;
idtype7 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12141);
fatal_exit(1);
}
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode5, var_tclassidnode6); /* Direct call parser_prod#AQualified#init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode4 = var8;
var_tidnode7 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12147);
fatal_exit(1);
}
var12 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var12, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod#AQid#init_aqid on <var12:AQid>*/
}
var_pqidnode3 = var12;
var13 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode9 = var13;
var14 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var14, var_listnode9); /* Direct call parser_prod#AListExprs#init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode8 = var14;
var15 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var15, var_pexprnode2, var_pqidnode3, var_pexprsnode8); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var15:ACallExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction859> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction860#action for (self: ReduceAction860, Parser) */
void nitc__parser___nitc__parser__ReduceAction860___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
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
val* var22 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12176);
fatal_exit(1);
}
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_listnode5 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12179);
fatal_exit(1);
}
{
var10 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var10;
var_tclassidnode7 = var_nodearraylist3;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype12 = type_nullable__nitc__TClassid.color;
idtype13 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12182);
fatal_exit(1);
}
var14 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var14, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var14:AQualified>*/
}
var_pqualifiednode4 = var14;
var_tidnode8 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12188);
fatal_exit(1);
}
var18 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var18, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var18:AQid>*/
}
var_pqidnode3 = var18;
var_pexprsnode9 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12194);
fatal_exit(1);
}
var22 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var22, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var22:ACallExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction860> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction861#action for (self: ReduceAction861, Parser) */
void nitc__parser___nitc__parser__ReduceAction861___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
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
val* var18 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var19 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var20 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12214);
fatal_exit(1);
}
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12217);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var_tclassidnode7 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12220);
fatal_exit(1);
}
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode6, var_tclassidnode7); /* Direct call parser_prod#AQualified#init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode8 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12226);
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
var20 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var20, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var20:ACallExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction861> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction862#action for (self: ReduceAction862, Parser) */
void nitc__parser___nitc__parser__ReduceAction862___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var10 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12254);
fatal_exit(1);
}
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype7 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12257);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var10 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var10, var_listnode6, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var10:AQualified>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12264);
fatal_exit(1);
}
var14 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var14, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var14:AQid>*/
}
var_pqidnode3 = var14;
var_pexprsnode9 = var_nodearraylist4;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype16 = type_nullable__nitc__AExprs.color;
idtype17 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12270);
fatal_exit(1);
}
var18 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var18, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var18:ACallExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction862> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction863#action for (self: ReduceAction863, Parser) */
void nitc__parser___nitc__parser__ReduceAction863___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var9 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var14 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var15 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var16 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12289);
fatal_exit(1);
}
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype6 = type_core__Array__core__Object.color;
idtype7 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var5 = 0;
} else {
if(cltype6 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12292);
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
var_tidnode8 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12299);
fatal_exit(1);
}
var13 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var13, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod#AQid#init_aqid on <var13:AQid>*/
}
var_pqidnode3 = var13;
var14 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode10 = var14;
var15 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var15, var_listnode10); /* Direct call parser_prod#AListExprs#init_alistexprs on <var15:AListExprs>*/
}
var_pexprsnode9 = var15;
var16 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var16, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var16:ACallExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction863> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction866#action for (self: ReduceAction866, Parser) */
void nitc__parser___nitc__parser__ReduceAction866___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12326);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype5 = type_nullable__nitc__TKwinit.color;
idtype6 = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12328);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12330);
fatal_exit(1);
}
var10 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction866> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction867#action for (self: ReduceAction867, Parser) */
void nitc__parser___nitc__parser__ReduceAction867___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var8 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12348);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype4 = type_nullable__nitc__TKwinit.color;
idtype5 = type_nullable__nitc__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwinitnode3&3)?type_info[((long)var_tkwinitnode3&3)]:var_tkwinitnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12350);
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
var8 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var8:AInitExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction867> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction891#action for (self: ReduceAction891, Parser) */
void nitc__parser___nitc__parser__ReduceAction891___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction891> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction892#action for (self: ReduceAction892, Parser) */
void nitc__parser___nitc__parser__ReduceAction892___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : AImplicitSelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImplicitSelfExpr */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var:AImplicitSelfExpr>*/
}
var_pexprnode1 = var;
var_node_list = var_pexprnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction892> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1053#action for (self: ReduceAction1053, Parser) */
void nitc__parser___nitc__parser__ReduceAction1053___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pimportnode1 /* var pimportnode1: nullable Object */;
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
var_pimportnode1 = var_nodearraylist1;
if (var_pimportnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode1&3)?class_info[((long)var_pimportnode1&3)]:var_pimportnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pimportnode1, ((val*)NULL)); /* != on <var_pimportnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pimportnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1053> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1054#action for (self: ReduceAction1054, Parser) */
void nitc__parser___nitc__parser__ReduceAction1054___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pimportnode2 /* var pimportnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12411);
fatal_exit(1);
}
var_pimportnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pimportnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode2&3)?class_info[((long)var_pimportnode2&3)]:var_pimportnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pimportnode2, ((val*)NULL)); /* != on <var_pimportnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pimportnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1054> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1055#action for (self: ReduceAction1055, Parser) */
void nitc__parser___nitc__parser__ReduceAction1055___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
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
var_pexterncodeblocknode1 = var_nodearraylist1;
if (var_pexterncodeblocknode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode1&3)?class_info[((long)var_pexterncodeblocknode1&3)]:var_pexterncodeblocknode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncodeblocknode1, ((val*)NULL)); /* != on <var_pexterncodeblocknode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncodeblocknode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1055> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1056#action for (self: ReduceAction1056, Parser) */
void nitc__parser___nitc__parser__ReduceAction1056___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncodeblocknode2 /* var pexterncodeblocknode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12445);
fatal_exit(1);
}
var_pexterncodeblocknode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexterncodeblocknode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode2&3)?class_info[((long)var_pexterncodeblocknode2&3)]:var_pexterncodeblocknode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncodeblocknode2, ((val*)NULL)); /* != on <var_pexterncodeblocknode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncodeblocknode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1056> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1057#action for (self: ReduceAction1057, Parser) */
void nitc__parser___nitc__parser__ReduceAction1057___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable Object */;
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
var_pclassdefnode1 = var_nodearraylist1;
if (var_pclassdefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode1&3)?class_info[((long)var_pclassdefnode1&3)]:var_pclassdefnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pclassdefnode1, ((val*)NULL)); /* != on <var_pclassdefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pclassdefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1057> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1058#action for (self: ReduceAction1058, Parser) */
void nitc__parser___nitc__parser__ReduceAction1058___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode2 /* var pclassdefnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12479);
fatal_exit(1);
}
var_pclassdefnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pclassdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode2&3)?class_info[((long)var_pclassdefnode2&3)]:var_pclassdefnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pclassdefnode2, ((val*)NULL)); /* != on <var_pclassdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pclassdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1058> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1060#action for (self: ReduceAction1060, Parser) */
void nitc__parser___nitc__parser__ReduceAction1060___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pformaldefnode2 /* var pformaldefnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12498);
fatal_exit(1);
}
var_pformaldefnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pformaldefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode2&3)?class_info[((long)var_pformaldefnode2&3)]:var_pformaldefnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pformaldefnode2, ((val*)NULL)); /* != on <var_pformaldefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pformaldefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1060> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1062#action for (self: ReduceAction1062, Parser) */
void nitc__parser___nitc__parser__ReduceAction1062___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12517);
fatal_exit(1);
}
var_ppropdefnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_ppropdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ppropdefnode2&3)?class_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_ppropdefnode2, ((val*)NULL)); /* != on <var_ppropdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1062> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1064#action for (self: ReduceAction1064, Parser) */
void nitc__parser___nitc__parser__ReduceAction1064___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode2 /* var pannotationnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12536);
fatal_exit(1);
}
var_pannotationnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pannotationnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode2&3)?class_info[((long)var_pannotationnode2&3)]:var_pannotationnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pannotationnode2, ((val*)NULL)); /* != on <var_pannotationnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pannotationnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1064> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1065#action for (self: ReduceAction1065, Parser) */
void nitc__parser___nitc__parser__ReduceAction1065___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
if (var_pparamnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pparamnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1065> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1066#action for (self: ReduceAction1066, Parser) */
void nitc__parser___nitc__parser__ReduceAction1066___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pparamnode2 /* var pparamnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12570);
fatal_exit(1);
}
var_pparamnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pparamnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode2&3)?class_info[((long)var_pparamnode2&3)]:var_pparamnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pparamnode2, ((val*)NULL)); /* != on <var_pparamnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pparamnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1066> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1067#action for (self: ReduceAction1067, Parser) */
void nitc__parser___nitc__parser__ReduceAction1067___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
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
var_pexterncallnode1 = var_nodearraylist1;
if (var_pexterncallnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode1&3)?class_info[((long)var_pexterncallnode1&3)]:var_pexterncallnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncallnode1, ((val*)NULL)); /* != on <var_pexterncallnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncallnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1067> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1068#action for (self: ReduceAction1068, Parser) */
void nitc__parser___nitc__parser__ReduceAction1068___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode2 /* var pexterncallnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12604);
fatal_exit(1);
}
var_pexterncallnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexterncallnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode2&3)?class_info[((long)var_pexterncallnode2&3)]:var_pexterncallnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncallnode2, ((val*)NULL)); /* != on <var_pexterncallnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncallnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1068> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1070#action for (self: ReduceAction1070, Parser) */
void nitc__parser___nitc__parser__ReduceAction1070___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12623);
fatal_exit(1);
}
var_ptypenode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_ptypenode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode2&3)?class_info[((long)var_ptypenode2&3)]:var_ptypenode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_ptypenode2, ((val*)NULL)); /* != on <var_ptypenode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_ptypenode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1070> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1072#action for (self: ReduceAction1072, Parser) */
void nitc__parser___nitc__parser__ReduceAction1072___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12642);
fatal_exit(1);
}
var_pexprnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode2&3)?class_info[((long)var_pexprnode2&3)]:var_pexprnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1072> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1078#action for (self: ReduceAction1078, Parser) */
void nitc__parser___nitc__parser__ReduceAction1078___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Array[Object] */;
val* var8 /* : Array[Object] */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12661);
fatal_exit(1);
}
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype5 = type_core__Array__core__Object.color;
idtype6 = type_core__Array__core__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype5 >= (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode2&3)?type_info[((long)var_listnode2&3)]:var_listnode2->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12663);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var7;
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1078> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1086#action for (self: ReduceAction1086, Parser) */
void nitc__parser___nitc__parser__ReduceAction1086___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12679);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_tidnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1086> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1087#action for (self: ReduceAction1087, Parser) */
void nitc__parser___nitc__parser__ReduceAction1087___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tcommentnode1 /* var tcommentnode1: nullable Object */;
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
var_tcommentnode1 = var_nodearraylist1;
if (var_tcommentnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode1&3)?class_info[((long)var_tcommentnode1&3)]:var_tcommentnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tcommentnode1, ((val*)NULL)); /* != on <var_tcommentnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_tcommentnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1087> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1088#action for (self: ReduceAction1088, Parser) */
void nitc__parser___nitc__parser__ReduceAction1088___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tcommentnode2 /* var tcommentnode2: nullable Object */;
val* var4 /* : Array[Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_listnode1&3)?type_info[((long)var_listnode1&3)]:var_listnode1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12713);
fatal_exit(1);
}
var_tcommentnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_tcommentnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode2&3)?class_info[((long)var_tcommentnode2&3)]:var_tcommentnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tcommentnode2, ((val*)NULL)); /* != on <var_tcommentnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_tcommentnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1088> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
