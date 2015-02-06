#include "nit__parser.sep.0.h"
/* method parser#ReduceAction358#action for (self: ReduceAction358, Parser) */
void nit__parser___nit__parser__ReduceAction358___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AParExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AParExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9127);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable__nit__AExpr.color;
idtype10 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9129);
show_backtrace(1);
}
var_tcparnode4 = var_nodearraylist5;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype12 = type_nullable__nit__TCpar.color;
idtype13 = type_nullable__nit__TCpar.id;
if(var_tcparnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tcparnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tcparnode4->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9131);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist6;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pannotationsnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_pannotationsnode5->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9133);
show_backtrace(1);
}
var17 = NEW_nit__AParExpr(&type_nit__AParExpr);
{
nit__parser_prod___AParExpr___init_aparexpr(var17, var_toparnode2, var_pexprnode3, var_tcparnode4, var_pannotationsnode5); /* Direct call parser_prod#AParExpr#init_aparexpr on <var17:AParExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction358> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction360#action for (self: ReduceAction360, Parser) */
void nit__parser___nit__parser__ReduceAction360___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[Object] */;
val* var15 /* : AManyExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AManyExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9153);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype6 = type_standard__Array__standard__Object.color;
idtype7 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_listnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9155);
show_backtrace(1);
}
var8 = NULL;
if (var_pexprnode2 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,var8) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = var8;
{
var12 = ((short int (*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var14 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var14;
var15 = NEW_nit__AManyExpr(&type_nit__AManyExpr);
{
nit__parser_prod___AManyExpr___init_amanyexpr(var15, var_listnode4); /* Direct call parser_prod#AManyExpr#init_amanyexpr on <var15:AManyExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction360> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction361#action for (self: ReduceAction361, Parser) */
void nit__parser___nit__parser__ReduceAction361___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
var = NULL;
var_node_list = var;
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction361> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction362#action for (self: ReduceAction362, Parser) */
void nit__parser___nit__parser__ReduceAction362___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pexprnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pexprnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pexprnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, var3) /* != on <var_pexprnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction362> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: ReduceAction363, Parser) */
void nit__parser___nit__parser__ReduceAction363___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9205);
show_backtrace(1);
}
var5 = NULL;
if (var_pexprnode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int (*)(val* self, val* p0))(var_pexprnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, var5) /* != on <var_pexprnode1:nullable Object>*/;
var6 = var7;
}
if (var6){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction363> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: ReduceAction365, Parser) */
void nit__parser___nit__parser__ReduceAction365___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction365> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction367#action for (self: ReduceAction367, Parser) */
void nit__parser___nit__parser__ReduceAction367___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AIfExpr */;
val* var16 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
if(cltype >= var_tkwifnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwifnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9239);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable__nit__AExpr.color;
idtype11 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9241);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype13 = type_nullable__nit__AExpr.color;
idtype14 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9243);
show_backtrace(1);
}
var15 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
var16 = NULL;
{
nit__parser_prod___AIfExpr___init_aifexpr(var15, var_tkwifnode2, var_pexprnode3, var_pexprnode4, var16); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var15:AIfExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction367> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: ReduceAction368, Parser) */
void nit__parser___nit__parser__ReduceAction368___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9264);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable__nit__AExpr.color;
idtype8 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9266);
show_backtrace(1);
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode2);
}
var_listnode4 = var9;
var10 = NULL;
if (var_pexprnode3 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode3,var10) on <var_pexprnode3:nullable Object(nullable AExpr)> */
var_other = var10;
{
var14 = ((short int (*)(val* self, val* p0))(var_pexprnode3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode3, var_other) /* == on <var_pexprnode3:nullable AExpr(AExpr)>*/;
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode3); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype17 = type_nullable__nit__AAnnotations.color;
idtype18 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pannotationsnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pannotationsnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9272);
show_backtrace(1);
}
var19 = NEW_nit__ASuperstringExpr(&type_nit__ASuperstringExpr);
{
nit__parser_prod___ASuperstringExpr___init_asuperstringexpr(var19, var_listnode4, var_pannotationsnode5); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var19:ASuperstringExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction368> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction369#action for (self: ReduceAction369, Parser) */
void nit__parser___nit__parser__ReduceAction369___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : Array[Object] */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9292);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9294);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype11 = type_nullable__nit__AExpr.color;
idtype12 = type_nullable__nit__AExpr.id;
if(var_pexprnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9296);
show_backtrace(1);
}
{
var13 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode2);
}
var_listnode5 = var13;
{
var14 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode3);
}
var_listnode5 = var14;
var15 = NULL;
if (var_pexprnode4 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode4,var15) on <var_pexprnode4:nullable Object(nullable AExpr)> */
var_other = var15;
{
var19 = ((short int (*)(val* self, val* p0))(var_pexprnode4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode4, var_other) /* == on <var_pexprnode4:nullable AExpr(AExpr)>*/;
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode5, var_pexprnode4); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
var_pannotationsnode6 = var_nodearraylist4;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable__nit__AAnnotations.color;
idtype23 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pannotationsnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_pannotationsnode6->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9303);
show_backtrace(1);
}
var24 = NEW_nit__ASuperstringExpr(&type_nit__ASuperstringExpr);
{
nit__parser_prod___ASuperstringExpr___init_asuperstringexpr(var24, var_listnode5, var_pannotationsnode6); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var24:ASuperstringExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction369> */
{
var26 = nit___nit__Parser___go_to(var_p, var25);
}
{
nit___nit__Parser___push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: ReduceAction370, Parser) */
void nit__parser___nit__parser__ReduceAction370___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode3 = var5;
var_pexprnode1 = var_nodearraylist1;
var_pexprnode2 = var_nodearraylist3;
var6 = NULL;
if (var_pexprnode1 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pexprnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, var6) /* != on <var_pexprnode1:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var9 = NULL;
if (var_pexprnode2 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int (*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, var9) /* != on <var_pexprnode2:nullable Object>*/;
var10 = var11;
}
if (var10){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction370> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction371#action for (self: ReduceAction371, Parser) */
void nit__parser___nit__parser__ReduceAction371___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode2 = var3;
var_pexprnode1 = var_nodearraylist1;
var4 = NULL;
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int (*)(val* self, val* p0))(var_pexprnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, var4) /* != on <var_pexprnode1:nullable Object>*/;
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
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
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstartstringnode2 /* var tstartstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStartStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStartStringExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tstartstringnode2 = var_nodearraylist1;
/* <var_tstartstringnode2:nullable Object> isa nullable TStartString */
cltype = type_nullable__nit__TStartString.color;
idtype = type_nullable__nit__TStartString.id;
if(var_tstartstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstartstringnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstartstringnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9357);
show_backtrace(1);
}
var3 = NEW_nit__AStartStringExpr(&type_nit__AStartStringExpr);
{
nit__parser_prod___AStartStringExpr___init_astartstringexpr(var3, var_tstartstringnode2); /* Direct call parser_prod#AStartStringExpr#init_astartstringexpr on <var3:AStartStringExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction372> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction375#action for (self: ReduceAction375, Parser) */
void nit__parser___nit__parser__ReduceAction375___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tmidstringnode2 /* var tmidstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMidStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMidStringExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tmidstringnode2 = var_nodearraylist1;
/* <var_tmidstringnode2:nullable Object> isa nullable TMidString */
cltype = type_nullable__nit__TMidString.color;
idtype = type_nullable__nit__TMidString.id;
if(var_tmidstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tmidstringnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tmidstringnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9372);
show_backtrace(1);
}
var3 = NEW_nit__AMidStringExpr(&type_nit__AMidStringExpr);
{
nit__parser_prod___AMidStringExpr___init_amidstringexpr(var3, var_tmidstringnode2); /* Direct call parser_prod#AMidStringExpr#init_amidstringexpr on <var3:AMidStringExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction375> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: ReduceAction376, Parser) */
void nit__parser___nit__parser__ReduceAction376___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tendstringnode2 /* var tendstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AEndStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEndStringExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tendstringnode2 = var_nodearraylist1;
/* <var_tendstringnode2:nullable Object> isa nullable TEndString */
cltype = type_nullable__nit__TEndString.color;
idtype = type_nullable__nit__TEndString.id;
if(var_tendstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tendstringnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tendstringnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9387);
show_backtrace(1);
}
var3 = NEW_nit__AEndStringExpr(&type_nit__AEndStringExpr);
{
nit__parser_prod___AEndStringExpr___init_aendstringexpr(var3, var_tendstringnode2); /* Direct call parser_prod#AEndStringExpr#init_aendstringexpr on <var3:AEndStringExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction376> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: ReduceAction377, Parser) */
void nit__parser___nit__parser__ReduceAction377___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tatnode2 /* var tatnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode4 /* var pannotationnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : AAnnotations */;
val* var15 /* : null */;
val* var16 /* : null */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable__nit__TAt.color;
idtype = type_nullable__nit__TAt.id;
if(var_tatnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tatnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tatnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9404);
show_backtrace(1);
}
var_pannotationnode4 = var_nodearraylist2;
/* <var_pannotationnode4:nullable Object> isa nullable AAnnotation */
cltype6 = type_nullable__nit__AAnnotation.color;
idtype7 = type_nullable__nit__AAnnotation.id;
if(var_pannotationnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pannotationnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_pannotationnode4->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9406);
show_backtrace(1);
}
var8 = NULL;
if (var_pannotationnode4 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pannotationnode4,var8) on <var_pannotationnode4:nullable Object(nullable AAnnotation)> */
var_other = var8;
{
var12 = ((short int (*)(val* self, val* p0))(var_pannotationnode4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pannotationnode4, var_other) /* == on <var_pannotationnode4:nullable AAnnotation(AAnnotation)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode5, var_pannotationnode4); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
var14 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var15 = NULL;
var16 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var14, var_tatnode2, var15, var_listnode5, var16); /* Direct call parser_prod#AAnnotations#init_aannotations on <var14:AAnnotations>*/
}
var_pannotationsnode1 = var14;
var_node_list = var_pannotationsnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction377> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction378#action for (self: ReduceAction378, Parser) */
void nit__parser___nit__parser__ReduceAction378___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tatnode2 /* var tatnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode3 /* var toparnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode5 = var7;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable__nit__TAt.color;
idtype = type_nullable__nit__TAt.id;
if(var_tatnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tatnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tatnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9433);
show_backtrace(1);
}
var_toparnode3 = var_nodearraylist2;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype10 = type_nullable__nit__TOpar.color;
idtype11 = type_nullable__nit__TOpar.id;
if(var_toparnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_toparnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_toparnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9435);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_listnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_listnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9437);
show_backtrace(1);
}
{
var15 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var15;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype17 = type_nullable__nit__TCpar.color;
idtype18 = type_nullable__nit__TCpar.id;
if(var_tcparnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tcparnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_tcparnode6->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9440);
show_backtrace(1);
}
var19 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
nit__parser_prod___AAnnotations___init_aannotations(var19, var_tatnode2, var_toparnode3, var_listnode5, var_tcparnode6); /* Direct call parser_prod#AAnnotations#init_aannotations on <var19:AAnnotations>*/
}
var_pannotationsnode1 = var19;
var_node_list = var_pannotationsnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction378> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: ReduceAction379, Parser) */
void nit__parser___nit__parser__ReduceAction379___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pannotationsnode1 = var_nodearraylist1;
var_node_list = var_pannotationsnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction379> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction381#action for (self: ReduceAction381, Parser) */
void nit__parser___nit__parser__ReduceAction381___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AAnnotation */;
val* var17 /* : null */;
val* var18 /* : null */;
val* var19 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwredefnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwredefnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9473);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype8 = type_nullable__nit__AVisibility.color;
idtype9 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pvisibilitynode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pvisibilitynode4->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9475);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype11 = type_nullable__nit__AAtid.color;
idtype12 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_patidnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_patidnode5->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9477);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist4;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype14 = type_nullable__nit__AAnnotations.color;
idtype15 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pannotationsnode9->type->table_size) {
var13 = 0;
} else {
var13 = var_pannotationsnode9->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9479);
show_backtrace(1);
}
var16 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var17 = NULL;
var18 = NULL;
var19 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var16, var17, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var18, var_listnode7, var19, var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var16:AAnnotation>*/
}
var_pannotationnode1 = var16;
var_node_list = var_pannotationnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction381> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: ReduceAction382, Parser) */
void nit__parser___nit__parser__ReduceAction382___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AAnnotation */;
val* var32 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_listnode8 = var10;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype >= var_tkwredefnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwredefnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9510);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pvisibilitynode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pvisibilitynode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9512);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype16 = type_nullable__nit__AAtid.color;
idtype17 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_patidnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_patidnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9514);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist4;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype19 = type_nullable__nit__TOpar.color;
idtype20 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_toparnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_toparnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9516);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype22 = type_standard__Array__standard__Object.color;
idtype23 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var21 = 0;
} else {
if(cltype22 >= var_listnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_listnode7->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9518);
show_backtrace(1);
}
{
var24 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var24;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype26 = type_nullable__nit__TCpar.color;
idtype27 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tcparnode9->type->table_size) {
var25 = 0;
} else {
var25 = var_tcparnode9->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9521);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype29 = type_nullable__nit__AAnnotations.color;
idtype30 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pannotationsnode10->type->table_size) {
var28 = 0;
} else {
var28 = var_pannotationsnode10->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9523);
show_backtrace(1);
}
var31 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var32 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var31, var32, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var31:AAnnotation>*/
}
var_pannotationnode1 = var31;
var_node_list = var_pannotationnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction382> */
{
var34 = nit___nit__Parser___go_to(var_p, var33);
}
{
nit___nit__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: ReduceAction383, Parser) */
void nit__parser___nit__parser__ReduceAction383___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var5 /* : AAnnotations */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode5 = var2;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9546);
show_backtrace(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var4;
var5 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var6 = NULL;
var7 = NULL;
var8 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var5, var6, var7, var_listnode5, var8); /* Direct call parser_prod#AAnnotations#init_aannotations on <var5:AAnnotations>*/
}
var_pannotationsnode1 = var5;
var_node_list = var_pannotationsnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction383> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction384#action for (self: ReduceAction384, Parser) */
void nit__parser___nit__parser__ReduceAction384___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pannotationnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pannotationnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pannotationnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode1, var3) /* != on <var_pannotationnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction384> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction385#action for (self: ReduceAction385, Parser) */
void nit__parser___nit__parser__ReduceAction385___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_pannotationnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9583);
show_backtrace(1);
}
var5 = NULL;
if (var_pannotationnode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int (*)(val* self, val* p0))(var_pannotationnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode1, var5) /* != on <var_pannotationnode1:nullable Object>*/;
var6 = var7;
}
if (var6){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction385> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: ReduceAction388, Parser) */
void nit__parser___nit__parser__ReduceAction388___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : AAnnotation */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwredefnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwredefnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9603);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype8 = type_nullable__nit__AVisibility.color;
idtype9 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pvisibilitynode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pvisibilitynode4->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9605);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype11 = type_nullable__nit__AAtid.color;
idtype12 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_patidnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_patidnode5->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9607);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist4;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype14 = type_nullable__nit__AExpr.color;
idtype15 = type_nullable__nit__AExpr.id;
if(var_pexprnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode7->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9609);
show_backtrace(1);
}
var16 = NULL;
if (var_pexprnode7 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode7,var16) on <var_pexprnode7:nullable Object(nullable AExpr)> */
var_other = var16;
{
var20 = ((short int (*)(val* self, val* p0))(var_pexprnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode7, var_other) /* == on <var_pexprnode7:nullable AExpr(AExpr)>*/;
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pexprnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var22 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var23 = NULL;
var24 = NULL;
var25 = NULL;
var26 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var22, var23, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var24, var_listnode8, var25, var26); /* Direct call parser_prod#AAnnotation#init_aannotation on <var22:AAnnotation>*/
}
var_pannotationnode1 = var22;
var_node_list = var_pannotationnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction388> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction390#action for (self: ReduceAction390, Parser) */
void nit__parser___nit__parser__ReduceAction390___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_pannotationnode1 = var_nodearraylist3;
var_node_list = var_pannotationnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction390> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction392#action for (self: ReduceAction392, Parser) */
void nit__parser___nit__parser__ReduceAction392___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var17 /* : AAnnotation */;
val* var18 /* : null */;
val* var19 /* : null */;
val* var20 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var21 /* : Int */;
long var22 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_listnode7 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9652);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwredefnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwredefnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9654);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode4->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9656);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nit__AAtid.color;
idtype16 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_patidnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_patidnode5->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9658);
show_backtrace(1);
}
var17 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var18 = NULL;
var19 = NULL;
var20 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var17, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var18, var_listnode7, var19, var20); /* Direct call parser_prod#AAnnotation#init_aannotation on <var17:AAnnotation>*/
}
var_pannotationnode1 = var17;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction392> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction393#action for (self: ReduceAction393, Parser) */
void nit__parser___nit__parser__ReduceAction393___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AAnnotation */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var24 /* : Int */;
long var25 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode7 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9686);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwredefnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwredefnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9688);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pvisibilitynode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pvisibilitynode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9690);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype16 = type_nullable__nit__AAtid.color;
idtype17 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_patidnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_patidnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9692);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist5;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable__nit__AAnnotations.color;
idtype20 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pannotationsnode9->type->table_size) {
var18 = 0;
} else {
var18 = var_pannotationsnode9->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9694);
show_backtrace(1);
}
var21 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var22 = NULL;
var23 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var22, var_listnode7, var23, var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var21:AAnnotation>*/
}
var_pannotationnode1 = var21;
var_node_list = var_pannotationnode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction393> */
{
var25 = nit___nit__Parser___go_to(var_p, var24);
}
{
nit___nit__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction394#action for (self: ReduceAction394, Parser) */
void nit__parser___nit__parser__ReduceAction394___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var31 /* : AAnnotation */;
val* var32 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_listnode8 = var10;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9725);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwredefnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwredefnode3->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9727);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode4->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9729);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype19 = type_nullable__nit__AAtid.color;
idtype20 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_patidnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_patidnode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9731);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype22 = type_nullable__nit__TOpar.color;
idtype23 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_toparnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_toparnode6->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9733);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_standard__Array__standard__Object.color;
idtype26 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode7->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9735);
show_backtrace(1);
}
{
var27 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var27;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype29 = type_nullable__nit__TCpar.color;
idtype30 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tcparnode9->type->table_size) {
var28 = 0;
} else {
var28 = var_tcparnode9->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9738);
show_backtrace(1);
}
var31 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var32 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var32); /* Direct call parser_prod#AAnnotation#init_aannotation on <var31:AAnnotation>*/
}
var_pannotationnode1 = var31;
var_node_list = var_pannotationnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction394> */
{
var34 = nit___nit__Parser___go_to(var_p, var33);
}
{
nit___nit__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction395#action for (self: ReduceAction395, Parser) */
void nit__parser___nit__parser__ReduceAction395___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var36 /* : Int */;
long var37 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_listnode8 = var11;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var12 = 0;
} else {
var12 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9770);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype14 = type_nullable__nit__TKwredef.color;
idtype15 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwredefnode3->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwredefnode3->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9772);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable__nit__AVisibility.color;
idtype18 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode4->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9774);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype20 = type_nullable__nit__AAtid.color;
idtype21 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_patidnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_patidnode5->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9776);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype23 = type_nullable__nit__TOpar.color;
idtype24 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_toparnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_toparnode6->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9778);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_standard__Array__standard__Object.color;
idtype27 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode7->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9780);
show_backtrace(1);
}
{
var28 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var28;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype30 = type_nullable__nit__TCpar.color;
idtype31 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_tcparnode9->type->table_size) {
var29 = 0;
} else {
var29 = var_tcparnode9->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9783);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype33 = type_nullable__nit__AAnnotations.color;
idtype34 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pannotationsnode10->type->table_size) {
var32 = 0;
} else {
var32 = var_pannotationsnode10->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9785);
show_backtrace(1);
}
var35 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var35:AAnnotation>*/
}
var_pannotationnode1 = var35;
var_node_list = var_pannotationnode1;
var36 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction395> */
{
var37 = nit___nit__Parser___go_to(var_p, var36);
}
{
nit___nit__Parser___push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction396#action for (self: ReduceAction396, Parser) */
void nit__parser___nit__parser__ReduceAction396___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var22 /* : AAnnotation */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var26 /* : Int */;
long var27 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode8 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9813);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwredefnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwredefnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9815);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pvisibilitynode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pvisibilitynode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9817);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype16 = type_nullable__nit__AAtid.color;
idtype17 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_patidnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_patidnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9819);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype19 = type_standard__Array__standard__Object.color;
idtype20 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode7->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9821);
show_backtrace(1);
}
{
var21 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var21;
var22 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var23 = NULL;
var24 = NULL;
var25 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var22, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var23, var_listnode8, var24, var25); /* Direct call parser_prod#AAnnotation#init_aannotation on <var22:AAnnotation>*/
}
var_pannotationnode1 = var22;
var_node_list = var_pannotationnode1;
var26 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction396> */
{
var27 = nit___nit__Parser___go_to(var_p, var26);
}
{
nit___nit__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction397#action for (self: ReduceAction397, Parser) */
void nit__parser___nit__parser__ReduceAction397___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AAnnotation */;
val* var10 /* : null */;
val* var11 /* : null */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var14 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9847);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype7 = type_nullable__nit__AAtid.color;
idtype8 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_patidnode5->type->table_size) {
var6 = 0;
} else {
var6 = var_patidnode5->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9849);
show_backtrace(1);
}
var9 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var10 = NULL;
var11 = NULL;
var12 = NULL;
var13 = NULL;
var14 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var9, var_pdocnode2, var10, var11, var_patidnode5, var12, var_listnode7, var13, var14); /* Direct call parser_prod#AAnnotation#init_aannotation on <var9:AAnnotation>*/
}
var_pannotationnode1 = var9;
var_node_list = var_pannotationnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction397> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction398#action for (self: ReduceAction398, Parser) */
void nit__parser___nit__parser__ReduceAction398___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AAnnotation */;
val* var14 /* : null */;
val* var15 /* : null */;
val* var16 /* : null */;
val* var17 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9875);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype8 = type_nullable__nit__AAtid.color;
idtype9 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_patidnode5->type->table_size) {
var7 = 0;
} else {
var7 = var_patidnode5->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9877);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist3;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype11 = type_nullable__nit__AAnnotations.color;
idtype12 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pannotationsnode9->type->table_size) {
var10 = 0;
} else {
var10 = var_pannotationsnode9->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9879);
show_backtrace(1);
}
var13 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var14 = NULL;
var15 = NULL;
var16 = NULL;
var17 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var13, var_pdocnode2, var14, var15, var_patidnode5, var16, var_listnode7, var17, var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var13:AAnnotation>*/
}
var_pannotationnode1 = var13;
var_node_list = var_pannotationnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction398> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction399#action for (self: ReduceAction399, Parser) */
void nit__parser___nit__parser__ReduceAction399___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var8 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAnnotation */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode8 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9908);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype11 = type_nullable__nit__AAtid.color;
idtype12 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_patidnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_patidnode5->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9910);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype14 = type_nullable__nit__TOpar.color;
idtype15 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_toparnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_toparnode6->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9912);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype17 = type_standard__Array__standard__Object.color;
idtype18 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var16 = 0;
} else {
if(cltype17 >= var_listnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_listnode7->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9914);
show_backtrace(1);
}
{
var19 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var19;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype21 = type_nullable__nit__TCpar.color;
idtype22 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tcparnode9->type->table_size) {
var20 = 0;
} else {
var20 = var_tcparnode9->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9917);
show_backtrace(1);
}
var23 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var24 = NULL;
var25 = NULL;
var26 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var23, var_pdocnode2, var24, var25, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var26); /* Direct call parser_prod#AAnnotation#init_aannotation on <var23:AAnnotation>*/
}
var_pannotationnode1 = var23;
var_node_list = var_pannotationnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction399> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction400#action for (self: ReduceAction400, Parser) */
void nit__parser___nit__parser__ReduceAction400___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_toparnode6 /* var toparnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var_tcparnode9 /* var tcparnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAnnotation */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var30 /* : Int */;
long var31 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9947);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype12 = type_nullable__nit__AAtid.color;
idtype13 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_patidnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_patidnode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9949);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype15 = type_nullable__nit__TOpar.color;
idtype16 = type_nullable__nit__TOpar.id;
if(var_toparnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_toparnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_toparnode6->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9951);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_standard__Array__standard__Object.color;
idtype19 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_listnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_listnode7->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9953);
show_backtrace(1);
}
{
var20 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var20;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype22 = type_nullable__nit__TCpar.color;
idtype23 = type_nullable__nit__TCpar.id;
if(var_tcparnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tcparnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_tcparnode9->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9956);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pannotationsnode10->type->table_size) {
var24 = 0;
} else {
var24 = var_pannotationsnode10->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9958);
show_backtrace(1);
}
var27 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var28 = NULL;
var29 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var27, var_pdocnode2, var28, var29, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var27:AAnnotation>*/
}
var_pannotationnode1 = var27;
var_node_list = var_pannotationnode1;
var30 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction400> */
{
var31 = nit___nit__Parser___go_to(var_p, var30);
}
{
nit___nit__Parser___push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction401#action for (self: ReduceAction401, Parser) */
void nit__parser___nit__parser__ReduceAction401___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_patidnode5 /* var patidnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : AAnnotation */;
val* var15 /* : null */;
val* var16 /* : null */;
val* var17 /* : null */;
val* var18 /* : null */;
val* var19 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode8 = var5;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9984);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype8 = type_nullable__nit__AAtid.color;
idtype9 = type_nullable__nit__AAtid.id;
if(var_patidnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_patidnode5->type->table_size) {
var7 = 0;
} else {
var7 = var_patidnode5->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9986);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype11 = type_standard__Array__standard__Object.color;
idtype12 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode7->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode7->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9988);
show_backtrace(1);
}
{
var13 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var13;
var14 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
var15 = NULL;
var16 = NULL;
var17 = NULL;
var18 = NULL;
var19 = NULL;
{
nit__parser_prod___AAnnotation___init_aannotation(var14, var_pdocnode2, var15, var16, var_patidnode5, var17, var_listnode8, var18, var19); /* Direct call parser_prod#AAnnotation#init_aannotation on <var14:AAnnotation>*/
}
var_pannotationnode1 = var14;
var_node_list = var_pannotationnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction401> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction405#action for (self: ReduceAction405, Parser) */
void nit__parser___nit__parser__ReduceAction405___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ATypeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ATypeExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10011);
show_backtrace(1);
}
var3 = NEW_nit__ATypeExpr(&type_nit__ATypeExpr);
{
nit__parser_prod___ATypeExpr___init_atypeexpr(var3, var_ptypenode2); /* Direct call parser_prod#ATypeExpr#init_atypeexpr on <var3:ATypeExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction405> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction408#action for (self: ReduceAction408, Parser) */
void nit__parser___nit__parser__ReduceAction408___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_pmethidnode3 /* var pmethidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AMethidExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMethidExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10029);
show_backtrace(1);
}
var_pmethidnode3 = var_nodearraylist4;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype7 = type_nullable__nit__AMethid.color;
idtype8 = type_nullable__nit__AMethid.id;
if(var_pmethidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pmethidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pmethidnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10031);
show_backtrace(1);
}
var9 = NEW_nit__AMethidExpr(&type_nit__AMethidExpr);
{
nit__parser_prod___AMethidExpr___init_amethidexpr(var9, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod#AMethidExpr#init_amethidexpr on <var9:AMethidExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction408> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction409#action for (self: ReduceAction409, Parser) */
void nit__parser___nit__parser__ReduceAction409___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_pmethidnode3 /* var pmethidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AMethidExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMethidExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var2) on <var2:AImplicitSelfExpr> */
RET_LABEL3:(void)0;
}
}
var_pexprnode2 = var2;
var_pmethidnode3 = var_nodearraylist1;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype = type_nullable__nit__AMethid.color;
idtype = type_nullable__nit__AMethid.id;
if(var_pmethidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_pmethidnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pmethidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10048);
show_backtrace(1);
}
var5 = NEW_nit__AMethidExpr(&type_nit__AMethidExpr);
{
nit__parser_prod___AMethidExpr___init_amethidexpr(var5, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod#AMethidExpr#init_amethidexpr on <var5:AMethidExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction409> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction410#action for (self: ReduceAction410, Parser) */
void nit__parser___nit__parser__ReduceAction410___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode2 /* var pannotationsnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AAtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAtExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pannotationsnode2 = var_nodearraylist1;
/* <var_pannotationsnode2:nullable Object> isa nullable AAnnotations */
cltype = type_nullable__nit__AAnnotations.color;
idtype = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pannotationsnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_pannotationsnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10064);
show_backtrace(1);
}
var3 = NEW_nit__AAtExpr(&type_nit__AAtExpr);
{
nit__parser_prod___AAtExpr___init_aatexpr(var3, var_pannotationsnode2); /* Direct call parser_prod#AAtExpr#init_aatexpr on <var3:AAtExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction410> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction411#action for (self: ReduceAction411, Parser) */
void nit__parser___nit__parser__ReduceAction411___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AIdAtid */;
val* var_patidnode1 /* var patidnode1: nullable AIdAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10079);
show_backtrace(1);
}
var3 = NEW_nit__AIdAtid(&type_nit__AIdAtid);
{
nit__parser_prod___AIdAtid___init_aidatid(var3, var_tidnode2); /* Direct call parser_prod#AIdAtid#init_aidatid on <var3:AIdAtid>*/
}
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction411> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction412#action for (self: ReduceAction412, Parser) */
void nit__parser___nit__parser__ReduceAction412___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwexternnode2 /* var tkwexternnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AKwexternAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwexternAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nit__TKwextern.color;
idtype = type_nullable__nit__TKwextern.id;
if(var_tkwexternnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwexternnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwexternnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10094);
show_backtrace(1);
}
var3 = NEW_nit__AKwexternAtid(&type_nit__AKwexternAtid);
{
nit__parser_prod___AKwexternAtid___init_akwexternatid(var3, var_tkwexternnode2); /* Direct call parser_prod#AKwexternAtid#init_akwexternatid on <var3:AKwexternAtid>*/
}
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction412> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction413#action for (self: ReduceAction413, Parser) */
void nit__parser___nit__parser__ReduceAction413___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabstractnode2 /* var tkwabstractnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AKwabstractAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwabstractAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nit__TKwabstract.color;
idtype = type_nullable__nit__TKwabstract.id;
if(var_tkwabstractnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwabstractnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwabstractnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10109);
show_backtrace(1);
}
var3 = NEW_nit__AKwabstractAtid(&type_nit__AKwabstractAtid);
{
nit__parser_prod___AKwabstractAtid___init_akwabstractatid(var3, var_tkwabstractnode2); /* Direct call parser_prod#AKwabstractAtid#init_akwabstractatid on <var3:AKwabstractAtid>*/
}
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction413> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction414#action for (self: ReduceAction414, Parser) */
void nit__parser___nit__parser__ReduceAction414___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10128);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10130);
show_backtrace(1);
}
{
var10 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype12 = type_nullable__nit__TCpar.color;
idtype13 = type_nullable__nit__TCpar.id;
if(var_tcparnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tcparnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tcparnode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10133);
show_backtrace(1);
}
var14 = NEW_nit__AParExprs(&type_nit__AParExprs);
{
nit__parser_prod___AParExprs___init_aparexprs(var14, var_toparnode2, var_listnode4, var_tcparnode5); /* Direct call parser_prod#AParExprs#init_aparexprs on <var14:AParExprs>*/
}
var_pexprsnode1 = var14;
var_node_list = var_pexprsnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction414> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction415#action for (self: ReduceAction415, Parser) */
void nit__parser___nit__parser__ReduceAction415___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10153);
show_backtrace(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype7 = type_nullable__nit__TCpar.color;
idtype8 = type_nullable__nit__TCpar.id;
if(var_tcparnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tcparnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tcparnode4->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10155);
show_backtrace(1);
}
var9 = NEW_nit__AParExprs(&type_nit__AParExprs);
{
nit__parser_prod___AParExprs___init_aparexprs(var9, var_toparnode2, var_listnode3, var_tcparnode4); /* Direct call parser_prod#AParExprs#init_aparexprs on <var9:AParExprs>*/
}
var_pexprsnode1 = var9;
var_node_list = var_pexprsnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction415> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction417#action for (self: ReduceAction417, Parser) */
void nit__parser___nit__parser__ReduceAction417___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10173);
show_backtrace(1);
}
var4 = NULL;
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,var4) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var10 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var10, var_listnode3); /* Direct call parser_prod#AListExprs#init_alistexprs on <var10:AListExprs>*/
}
var_pexprsnode1 = var10;
var_node_list = var_pexprsnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction417> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction419#action for (self: ReduceAction419, Parser) */
void nit__parser___nit__parser__ReduceAction419___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var2 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var2 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var2, var_listnode2); /* Direct call parser_prod#AListExprs#init_alistexprs on <var2:AListExprs>*/
}
var_pexprsnode1 = var2;
var_node_list = var_pexprsnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction419> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction420#action for (self: ReduceAction420, Parser) */
void nit__parser___nit__parser__ReduceAction420___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ABraExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable ABraExprs */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10208);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10210);
show_backtrace(1);
}
{
var10 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_tcbranode5 = var_nodearraylist4;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype12 = type_nullable__nit__TCbra.color;
idtype13 = type_nullable__nit__TCbra.id;
if(var_tcbranode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tcbranode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tcbranode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10213);
show_backtrace(1);
}
var14 = NEW_nit__ABraExprs(&type_nit__ABraExprs);
{
nit__parser_prod___ABraExprs___init_abraexprs(var14, var_tobranode2, var_listnode4, var_tcbranode5); /* Direct call parser_prod#ABraExprs#init_abraexprs on <var14:ABraExprs>*/
}
var_pexprsnode1 = var14;
var_node_list = var_pexprsnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction420> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction421#action for (self: ReduceAction421, Parser) */
void nit__parser___nit__parser__ReduceAction421___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var5 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10231);
show_backtrace(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var5 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var5, var_listnode3); /* Direct call parser_prod#AListExprs#init_alistexprs on <var5:AListExprs>*/
}
var_pexprsnode1 = var5;
var_node_list = var_pexprsnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction421> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction423#action for (self: ReduceAction423, Parser) */
void nit__parser___nit__parser__ReduceAction423___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist3;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10251);
show_backtrace(1);
}
var6 = NULL;
if (var_pexprnode1 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pexprnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, var6) /* != on <var_pexprnode1:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var9;
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction423> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction424#action for (self: ReduceAction424, Parser) */
void nit__parser___nit__parser__ReduceAction424___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction424> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction425#action for (self: ReduceAction425, Parser) */
void nit__parser___nit__parser__ReduceAction425___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_listnode2 = var6;
var_listnode1 = var_nodearraylist3;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10286);
show_backtrace(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var8;
var_node_list = var_listnode2;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction425> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction426#action for (self: ReduceAction426, Parser) */
void nit__parser___nit__parser__ReduceAction426___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10300);
show_backtrace(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var4;
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction426> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction427#action for (self: ReduceAction427, Parser) */
void nit__parser___nit__parser__ReduceAction427___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_tidnode1 = var_nodearraylist1;
var3 = NULL;
if (var_tidnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_tidnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode1, var3) /* != on <var_tidnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_tidnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction427> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction428#action for (self: ReduceAction428, Parser) */
void nit__parser___nit__parser__ReduceAction428___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var7 /* : Array[Object] */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode3 = var5;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10332);
show_backtrace(1);
}
var_tidnode2 = var_nodearraylist4;
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var7;
var8 = NULL;
if (var_tidnode2 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int (*)(val* self, val* p0))(var_tidnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode2, var8) /* != on <var_tidnode2:nullable Object>*/;
var9 = var10;
}
if (var9){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction428> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction429#action for (self: ReduceAction429, Parser) */
void nit__parser___nit__parser__ReduceAction429___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AModuleName */;
val* var5 /* : null */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_tidnode4 = var_nodearraylist1;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode4->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode4->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10350);
show_backtrace(1);
}
var4 = NEW_nit__AModuleName(&type_nit__AModuleName);
var5 = NULL;
{
nit__parser_prod___AModuleName___init_amodulename(var4, var5, var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var4:AModuleName>*/
}
var_pmodulenamenode1 = var4;
var_node_list = var_pmodulenamenode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction429> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction430#action for (self: ReduceAction430, Parser) */
void nit__parser___nit__parser__ReduceAction430___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AModuleName */;
val* var10 /* : null */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10369);
show_backtrace(1);
}
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var5;
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_tidnode5 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tidnode5->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode5->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10372);
show_backtrace(1);
}
var9 = NEW_nit__AModuleName(&type_nit__AModuleName);
var10 = NULL;
{
nit__parser_prod___AModuleName___init_amodulename(var9, var10, var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var9:AModuleName>*/
}
var_pmodulenamenode1 = var9;
var_node_list = var_pmodulenamenode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction430> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction431#action for (self: ReduceAction431, Parser) */
void nit__parser___nit__parser__ReduceAction431___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
if(var_tquadnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tquadnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tquadnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10392);
show_backtrace(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_tidnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tidnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode4->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10394);
show_backtrace(1);
}
var9 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
nit__parser_prod___AModuleName___init_amodulename(var9, var_tquadnode2, var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var9:AModuleName>*/
}
var_pmodulenamenode1 = var9;
var_node_list = var_pmodulenamenode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction431> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction432#action for (self: ReduceAction432, Parser) */
void nit__parser___nit__parser__ReduceAction432___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
if(var_tquadnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tquadnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tquadnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10415);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10417);
show_backtrace(1);
}
{
var10 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype12 = type_nullable__nit__TId.color;
idtype13 = type_nullable__nit__TId.id;
if(var_tidnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tidnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tidnode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10420);
show_backtrace(1);
}
var14 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
nit__parser_prod___AModuleName___init_amodulename(var14, var_tquadnode2, var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var14:AModuleName>*/
}
var_pmodulenamenode1 = var14;
var_node_list = var_pmodulenamenode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction432> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction433#action for (self: ReduceAction433, Parser) */
void nit__parser___nit__parser__ReduceAction433___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tclassidnode3->type->table_size) {
var3 = 0;
} else {
var3 = var_tclassidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10438);
show_backtrace(1);
}
var4 = NEW_nit__AQualified(&type_nit__AQualified);
{
nit__parser_prod___AQualified___init_aqualified(var4, var_listnode2, var_tclassidnode3); /* Direct call parser_prod#AQualified#init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode1 = var4;
var_node_list = var_pqualifiednode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction433> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction434#action for (self: ReduceAction434, Parser) */
void nit__parser___nit__parser__ReduceAction434___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var_tclassidnode4 /* var tclassidnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQualified */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10456);
show_backtrace(1);
}
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var5;
var_tclassidnode4 = var_nodearraylist2;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype7 = type_nullable__nit__TClassid.color;
idtype8 = type_nullable__nit__TClassid.id;
if(var_tclassidnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tclassidnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tclassidnode4->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10459);
show_backtrace(1);
}
var9 = NEW_nit__AQualified(&type_nit__AQualified);
{
nit__parser_prod___AQualified___init_aqualified(var9, var_listnode3, var_tclassidnode4); /* Direct call parser_prod#AQualified#init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode1 = var9;
var_node_list = var_pqualifiednode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction434> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction435#action for (self: ReduceAction435, Parser) */
void nit__parser___nit__parser__ReduceAction435___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var5 /* : AQualified */;
val* var6 /* : null */;
val* var_pqualifiednode1 /* var pqualifiednode1: nullable AQualified */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10476);
show_backtrace(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var5 = NEW_nit__AQualified(&type_nit__AQualified);
var6 = NULL;
{
nit__parser_prod___AQualified___init_aqualified(var5, var_listnode3, var6); /* Direct call parser_prod#AQualified#init_aqualified on <var5:AQualified>*/
}
var_pqualifiednode1 = var5;
var_node_list = var_pqualifiednode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction435> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction437#action for (self: ReduceAction437, Parser) */
void nit__parser___nit__parser__ReduceAction437___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction437> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction438#action for (self: ReduceAction438, Parser) */
void nit__parser___nit__parser__ReduceAction438___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tclassidnode1 = var_nodearraylist2;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction438> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction439#action for (self: ReduceAction439, Parser) */
void nit__parser___nit__parser__ReduceAction439___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_tclassidnode1 = var_nodearraylist3;
var_node_list = var_tclassidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction439> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction441#action for (self: ReduceAction441, Parser) */
void nit__parser___nit__parser__ReduceAction441___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pmethidnode1 = var_nodearraylist1;
var_node_list = var_pmethidnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction441> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction442#action for (self: ReduceAction442, Parser) */
void nit__parser___nit__parser__ReduceAction442___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pmethidnode1 = var_nodearraylist2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction442> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction443#action for (self: ReduceAction443, Parser) */
void nit__parser___nit__parser__ReduceAction443___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode1 /* var pmethidnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_pmethidnode1 = var_nodearraylist3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction443> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction445#action for (self: ReduceAction445, Parser) */
void nit__parser___nit__parser__ReduceAction445___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction445> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction446#action for (self: ReduceAction446, Parser) */
void nit__parser___nit__parser__ReduceAction446___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction446> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction448#action for (self: ReduceAction448, Parser) */
void nit__parser___nit__parser__ReduceAction448___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwendnode1 /* var tkwendnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwendnode1 = var_nodearraylist1;
var_node_list = var_tkwendnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction448> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction449#action for (self: ReduceAction449, Parser) */
void nit__parser___nit__parser__ReduceAction449___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction449> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction451#action for (self: ReduceAction451, Parser) */
void nit__parser___nit__parser__ReduceAction451___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10612);
show_backtrace(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var5 = NEW_nit__ADoc(&type_nit__ADoc);
{
nit__parser_prod___ADoc___init_adoc(var5, var_listnode3); /* Direct call parser_prod#ADoc#init_adoc on <var5:ADoc>*/
}
var_pdocnode1 = var5;
var_node_list = var_pdocnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction451> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction452#action for (self: ReduceAction452, Parser) */
void nit__parser___nit__parser__ReduceAction452___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var6 /* : ADoc */;
val* var_pdocnode1 /* var pdocnode1: nullable ADoc */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10630);
show_backtrace(1);
}
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var5;
var6 = NEW_nit__ADoc(&type_nit__ADoc);
{
nit__parser_prod___ADoc___init_adoc(var6, var_listnode3); /* Direct call parser_prod#ADoc#init_adoc on <var6:ADoc>*/
}
var_pdocnode1 = var6;
var_node_list = var_pdocnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction452> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction455#action for (self: ReduceAction455, Parser) */
void nit__parser___nit__parser__ReduceAction455___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode1 /* var pdocnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pdocnode1 = var_nodearraylist1;
var_node_list = var_pdocnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction455> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction456#action for (self: ReduceAction456, Parser) */
void nit__parser___nit__parser__ReduceAction456___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction456> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction457#action for (self: ReduceAction457, Parser) */
void nit__parser___nit__parser__ReduceAction457___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction457> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction786#action for (self: ReduceAction786, Parser) */
void nit__parser___nit__parser__ReduceAction786___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nit__TKwisset.color;
idtype = type_nullable__nit__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10681);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable__nit__AExpr.color;
idtype8 = type_nullable__nit__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10683);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype10 = type_nullable__nit__TAttrid.color;
idtype11 = type_nullable__nit__TAttrid.id;
if(var_tattridnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tattridnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tattridnode4->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10685);
show_backtrace(1);
}
var12 = NEW_nit__AIssetAttrExpr(&type_nit__AIssetAttrExpr);
{
nit__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var12, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var12:AIssetAttrExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction786> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction788#action for (self: ReduceAction788, Parser) */
void nit__parser___nit__parser__ReduceAction788___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
if(cltype >= var_pexprnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10704);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype6 = type_nullable__nit__TAttrid.color;
idtype7 = type_nullable__nit__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tattridnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tattridnode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10706);
show_backtrace(1);
}
var8 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
nit__parser_prod___AAttrExpr___init_aattrexpr(var8, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var8:AAttrExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction788> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction789#action for (self: ReduceAction789, Parser) */
void nit__parser___nit__parser__ReduceAction789___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
if(cltype >= var_pexprnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10724);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tidnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tidnode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10726);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nit__AExprs.color;
idtype10 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprsnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprsnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10728);
show_backtrace(1);
}
var11 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction789> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction790#action for (self: ReduceAction790, Parser) */
void nit__parser___nit__parser__ReduceAction790___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var9 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10746);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable__nit__TId.color;
idtype6 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tidnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10748);
show_backtrace(1);
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
var9 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction790> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction791#action for (self: ReduceAction791, Parser) */
void nit__parser___nit__parser__ReduceAction791___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10772);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10774);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable__nit__AExprs.color;
idtype11 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprsnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprsnode4->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10776);
show_backtrace(1);
}
var12 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var12, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var12:ACallExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction791> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction792#action for (self: ReduceAction792, Parser) */
void nit__parser___nit__parser__ReduceAction792___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
var = NULL;
var_node_list = var;
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
if(cltype >= var_pexprnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10795);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tidnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tidnode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10797);
show_backtrace(1);
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
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction792> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction799#action for (self: ReduceAction799, Parser) */
void nit__parser___nit__parser__ReduceAction799___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
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
if(cltype >= var_pexprnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10820);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype6 = type_nullable__nit__TKwinit.color;
idtype7 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tkwinitnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwinitnode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10822);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nit__AExprs.color;
idtype10 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprsnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprsnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10824);
show_backtrace(1);
}
var11 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var11, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var11:AInitExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction799> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction800#action for (self: ReduceAction800, Parser) */
void nit__parser___nit__parser__ReduceAction800___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var9 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10842);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype5 = type_nullable__nit__TKwinit.color;
idtype6 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tkwinitnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwinitnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10844);
show_backtrace(1);
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
var9 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var9, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var9:AInitExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction800> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction823#action for (self: ReduceAction823, Parser) */
void nit__parser___nit__parser__ReduceAction823___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
var = NULL;
var_node_list = var;
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction823> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction824#action for (self: ReduceAction824, Parser) */
void nit__parser___nit__parser__ReduceAction824___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImplicitSelfExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var1) on <var1:AImplicitSelfExpr> */
RET_LABEL2:(void)0;
}
}
var_pexprnode1 = var1;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction824> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction974#action for (self: ReduceAction974, Parser) */
void nit__parser___nit__parser__ReduceAction974___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pimportnode1 /* var pimportnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pimportnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pimportnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pimportnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pimportnode1, var3) /* != on <var_pimportnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pimportnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction974> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction975#action for (self: ReduceAction975, Parser) */
void nit__parser___nit__parser__ReduceAction975___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pimportnode2 /* var pimportnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10905);
show_backtrace(1);
}
var_pimportnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pimportnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pimportnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pimportnode2, var6) /* != on <var_pimportnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pimportnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction975> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction976#action for (self: ReduceAction976, Parser) */
void nit__parser___nit__parser__ReduceAction976___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pexterncodeblocknode1 = var_nodearraylist1;
var3 = NULL;
if (var_pexterncodeblocknode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pexterncodeblocknode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncodeblocknode1, var3) /* != on <var_pexterncodeblocknode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncodeblocknode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction976> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction977#action for (self: ReduceAction977, Parser) */
void nit__parser___nit__parser__ReduceAction977___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncodeblocknode2 /* var pexterncodeblocknode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10939);
show_backtrace(1);
}
var_pexterncodeblocknode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pexterncodeblocknode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pexterncodeblocknode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncodeblocknode2, var6) /* != on <var_pexterncodeblocknode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncodeblocknode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction977> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction978#action for (self: ReduceAction978, Parser) */
void nit__parser___nit__parser__ReduceAction978___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pclassdefnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pclassdefnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pclassdefnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode1, var3) /* != on <var_pclassdefnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pclassdefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction978> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction979#action for (self: ReduceAction979, Parser) */
void nit__parser___nit__parser__ReduceAction979___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode2 /* var pclassdefnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10973);
show_backtrace(1);
}
var_pclassdefnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pclassdefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pclassdefnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode2, var6) /* != on <var_pclassdefnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pclassdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction979> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction980#action for (self: ReduceAction980, Parser) */
void nit__parser___nit__parser__ReduceAction980___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_psuperclassnode1 /* var psuperclassnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_psuperclassnode1 = var_nodearraylist1;
var3 = NULL;
if (var_psuperclassnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_psuperclassnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_psuperclassnode1, var3) /* != on <var_psuperclassnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_psuperclassnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction980> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction981#action for (self: ReduceAction981, Parser) */
void nit__parser___nit__parser__ReduceAction981___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_psuperclassnode2 /* var psuperclassnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11007);
show_backtrace(1);
}
var_psuperclassnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_psuperclassnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_psuperclassnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_psuperclassnode2, var6) /* != on <var_psuperclassnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_psuperclassnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction981> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction982#action for (self: ReduceAction982, Parser) */
void nit__parser___nit__parser__ReduceAction982___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_ppropdefnode1 = var_nodearraylist1;
var3 = NULL;
if (var_ppropdefnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_ppropdefnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode1, var3) /* != on <var_ppropdefnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_ppropdefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction982> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction983#action for (self: ReduceAction983, Parser) */
void nit__parser___nit__parser__ReduceAction983___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11041);
show_backtrace(1);
}
var_ppropdefnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_ppropdefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_ppropdefnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode2, var6) /* != on <var_ppropdefnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction983> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction984#action for (self: ReduceAction984, Parser) */
void nit__parser___nit__parser__ReduceAction984___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pformaldefnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pformaldefnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pformaldefnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, var3) /* != on <var_pformaldefnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction984> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction985#action for (self: ReduceAction985, Parser) */
void nit__parser___nit__parser__ReduceAction985___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pformaldefnode2 /* var pformaldefnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11075);
show_backtrace(1);
}
var_pformaldefnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pformaldefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pformaldefnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode2, var6) /* != on <var_pformaldefnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pformaldefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction985> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction986#action for (self: ReduceAction986, Parser) */
void nit__parser___nit__parser__ReduceAction986___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pparamnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pparamnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pparamnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, var3) /* != on <var_pparamnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pparamnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction986> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction987#action for (self: ReduceAction987, Parser) */
void nit__parser___nit__parser__ReduceAction987___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pparamnode2 /* var pparamnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11109);
show_backtrace(1);
}
var_pparamnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pparamnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pparamnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode2, var6) /* != on <var_pparamnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pparamnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction987> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction988#action for (self: ReduceAction988, Parser) */
void nit__parser___nit__parser__ReduceAction988___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pexterncallnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pexterncallnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_pexterncallnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode1, var3) /* != on <var_pexterncallnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncallnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction988> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction989#action for (self: ReduceAction989, Parser) */
void nit__parser___nit__parser__ReduceAction989___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode2 /* var pexterncallnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11143);
show_backtrace(1);
}
var_pexterncallnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pexterncallnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pexterncallnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode2, var6) /* != on <var_pexterncallnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncallnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction989> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction991#action for (self: ReduceAction991, Parser) */
void nit__parser___nit__parser__ReduceAction991___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11162);
show_backtrace(1);
}
var_ptypenode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_ptypenode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_ptypenode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ptypenode2, var6) /* != on <var_ptypenode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ptypenode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction991> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction993#action for (self: ReduceAction993, Parser) */
void nit__parser___nit__parser__ReduceAction993___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11181);
show_backtrace(1);
}
var_pexprnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, var6) /* != on <var_pexprnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction993> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction999#action for (self: ReduceAction999, Parser) */
void nit__parser___nit__parser__ReduceAction999___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11200);
show_backtrace(1);
}
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype6 = type_standard__Array__standard__Object.color;
idtype7 = type_standard__Array__standard__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_listnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode2->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11202);
show_backtrace(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var8;
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var9;
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction999> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1001#action for (self: ReduceAction1001, Parser) */
void nit__parser___nit__parser__ReduceAction1001___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode2 /* var pannotationnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11218);
show_backtrace(1);
}
var_pannotationnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pannotationnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pannotationnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode2, var6) /* != on <var_pannotationnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pannotationnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1001> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1011#action for (self: ReduceAction1011, Parser) */
void nit__parser___nit__parser__ReduceAction1011___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11237);
show_backtrace(1);
}
var_tidnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_tidnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_tidnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode2, var6) /* != on <var_tidnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1011> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1012#action for (self: ReduceAction1012, Parser) */
void nit__parser___nit__parser__ReduceAction1012___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tcommentnode1 /* var tcommentnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_tcommentnode1 = var_nodearraylist1;
var3 = NULL;
if (var_tcommentnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_tcommentnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tcommentnode1, var3) /* != on <var_tcommentnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_tcommentnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1012> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1013#action for (self: ReduceAction1013, Parser) */
void nit__parser___nit__parser__ReduceAction1013___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tcommentnode2 /* var tcommentnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11271);
show_backtrace(1);
}
var_tcommentnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_tcommentnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_tcommentnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tcommentnode2, var6) /* != on <var_tcommentnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_tcommentnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1013> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1014#action for (self: ReduceAction1014, Parser) */
void nit__parser___nit__parser__ReduceAction1014___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_teolnode1 /* var teolnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_teolnode1 = var_nodearraylist1;
var3 = NULL;
if (var_teolnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val* self, val* p0))(var_teolnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_teolnode1, var3) /* != on <var_teolnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_teolnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1014> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1015#action for (self: ReduceAction1015, Parser) */
void nit__parser___nit__parser__ReduceAction1015___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_teolnode2 /* var teolnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11305);
show_backtrace(1);
}
var_teolnode2 = var_nodearraylist2;
{
var5 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_teolnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_teolnode2->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_teolnode2, var6) /* != on <var_teolnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_teolnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1015> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
