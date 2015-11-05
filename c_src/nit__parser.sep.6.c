#include "nit__parser.sep.0.h"
/* method parser#ReduceAction396#action for (self: ReduceAction396, Parser) */
void nit__parser___nit__parser__ReduceAction396___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction396> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction398#action for (self: ReduceAction398, Parser) */
void nit__parser___nit__parser__ReduceAction398___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9600);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9602);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9604);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9606);
fatal_exit(1);
}
var17 = NEW_nit__AIfExpr(&type_nit__AIfExpr);
{
nit__parser_prod___AIfExpr___init_aifexpr(var17, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AIfExpr#init_aifexpr on <var17:AIfExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9629);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable__nit__AExpr.color;
idtype7 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9631);
fatal_exit(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode2);
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
var12 = ((short int(*)(val* self, val* p0))(var_pexprnode3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode3, var_other); /* == on <var_pexprnode3:nullable AExpr(AExpr)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode3); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype15 = type_nullable__nit__AAnnotations.color;
idtype16 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9637);
fatal_exit(1);
}
var17 = NEW_nit__ASuperstringExpr(&type_nit__ASuperstringExpr);
{
nit__parser_prod___ASuperstringExpr___init_asuperstringexpr(var17, var_listnode4, var_pannotationsnode5); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var17:ASuperstringExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction399> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction400#action for (self: ReduceAction400, Parser) */
void nit__parser___nit__parser__ReduceAction400___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9657);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9659);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9661);
fatal_exit(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode2);
}
var_listnode5 = var12;
{
var13 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode3);
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
var17 = ((short int(*)(val* self, val* p0))(var_pexprnode4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode4, var_other); /* == on <var_pexprnode4:nullable AExpr(AExpr)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode5, var_pexprnode4); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
var_pannotationsnode6 = var_nodearraylist4;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable__nit__AAnnotations.color;
idtype21 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9668);
fatal_exit(1);
}
var22 = NEW_nit__ASuperstringExpr(&type_nit__ASuperstringExpr);
{
nit__parser_prod___ASuperstringExpr___init_asuperstringexpr(var22, var_listnode5, var_pannotationsnode6); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var22:ASuperstringExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction400> */
{
var24 = nit___nit__Parser___go_to(var_p, var23);
}
{
nit___nit__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction401#action for (self: ReduceAction401, Parser) */
void nit__parser___nit__parser__ReduceAction401___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
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
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode2&3)?class_info[((long)var_pexprnode2&3)]:var_pexprnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object>*/
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction401> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction402#action for (self: ReduceAction402, Parser) */
void nit__parser___nit__parser__ReduceAction402___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode2 = var2;
var_pexprnode1 = var_nodearraylist1;
if (var_pexprnode1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var3 = var4;
}
if (var3){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction402> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction403#action for (self: ReduceAction403, Parser) */
void nit__parser___nit__parser__ReduceAction403___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstartstringnode2 = var_nodearraylist1;
/* <var_tstartstringnode2:nullable Object> isa nullable TStartString */
cltype = type_nullable__nit__TStartString.color;
idtype = type_nullable__nit__TStartString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9722);
fatal_exit(1);
}
var2 = NEW_nit__AStartStringExpr(&type_nit__AStartStringExpr);
{
nit__parser_prod___AStartStringExpr___init_astartstringexpr(var2, var_tstartstringnode2); /* Direct call parser_prod#AStartStringExpr#init_astartstringexpr on <var2:AStartStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction403> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction406#action for (self: ReduceAction406, Parser) */
void nit__parser___nit__parser__ReduceAction406___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tmidstringnode2 = var_nodearraylist1;
/* <var_tmidstringnode2:nullable Object> isa nullable TMidString */
cltype = type_nullable__nit__TMidString.color;
idtype = type_nullable__nit__TMidString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9737);
fatal_exit(1);
}
var2 = NEW_nit__AMidStringExpr(&type_nit__AMidStringExpr);
{
nit__parser_prod___AMidStringExpr___init_amidstringexpr(var2, var_tmidstringnode2); /* Direct call parser_prod#AMidStringExpr#init_amidstringexpr on <var2:AMidStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction406> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction407#action for (self: ReduceAction407, Parser) */
void nit__parser___nit__parser__ReduceAction407___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tendstringnode2 = var_nodearraylist1;
/* <var_tendstringnode2:nullable Object> isa nullable TEndString */
cltype = type_nullable__nit__TEndString.color;
idtype = type_nullable__nit__TEndString.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9752);
fatal_exit(1);
}
var2 = NEW_nit__AEndStringExpr(&type_nit__AEndStringExpr);
{
nit__parser_prod___AEndStringExpr___init_aendstringexpr(var2, var_tendstringnode2); /* Direct call parser_prod#AEndStringExpr#init_aendstringexpr on <var2:AEndStringExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction407> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction408#action for (self: ReduceAction408, Parser) */
void nit__parser___nit__parser__ReduceAction408___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode6 = var2;
var_tatnode3 = var_nodearraylist1;
/* <var_tatnode3:nullable Object> isa nullable TAt */
cltype = type_nullable__nit__TAt.color;
idtype = type_nullable__nit__TAt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9769);
fatal_exit(1);
}
var_pannotationnode5 = var_nodearraylist2;
/* <var_pannotationnode5:nullable Object> isa nullable AAnnotation */
cltype5 = type_nullable__nit__AAnnotation.color;
idtype6 = type_nullable__nit__AAnnotation.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9771);
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
var10 = ((short int(*)(val* self, val* p0))(var_pannotationnode5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pannotationnode5, var_other); /* == on <var_pannotationnode5:nullable AAnnotation(AAnnotation)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode6, var_pannotationnode5); /* Direct call array#Array#add on <var_listnode6:Array[Object]>*/
}
} else {
}
var12 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
nit__parser_prod___AAnnotations___init_aannotations(var12, ((val*)NULL), var_tatnode3, ((val*)NULL), var_listnode6, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotations#init_aannotations on <var12:AAnnotations>*/
}
var_pannotationsnode1 = var12;
var_node_list = var_pannotationsnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction408> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction409#action for (self: ReduceAction409, Parser) */
void nit__parser___nit__parser__ReduceAction409___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode6 = var6;
var_tatnode3 = var_nodearraylist1;
/* <var_tatnode3:nullable Object> isa nullable TAt */
cltype = type_nullable__nit__TAt.color;
idtype = type_nullable__nit__TAt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9800);
fatal_exit(1);
}
var_toparnode4 = var_nodearraylist2;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype9 = type_nullable__nit__TOpar.color;
idtype10 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9802);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype12 = type_standard__Array__standard__Object.color;
idtype13 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9804);
fatal_exit(1);
}
{
var14 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var14;
var_tcparnode7 = var_nodearraylist6;
/* <var_tcparnode7:nullable Object> isa nullable TCpar */
cltype16 = type_nullable__nit__TCpar.color;
idtype17 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9807);
fatal_exit(1);
}
var18 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
nit__parser_prod___AAnnotations___init_aannotations(var18, ((val*)NULL), var_tatnode3, var_toparnode4, var_listnode6, var_tcparnode7, ((val*)NULL)); /* Direct call parser_prod#AAnnotations#init_aannotations on <var18:AAnnotations>*/
}
var_pannotationsnode1 = var18;
var_node_list = var_pannotationsnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction409> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction410#action for (self: ReduceAction410, Parser) */
void nit__parser___nit__parser__ReduceAction410___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pannotationsnode1 = var_nodearraylist1;
var_node_list = var_pannotationsnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction410> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction412#action for (self: ReduceAction412, Parser) */
void nit__parser___nit__parser__ReduceAction412___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode7 = var4;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9842);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype7 = type_nullable__nit__AVisibility.color;
idtype8 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9844);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nit__AAtid.color;
idtype11 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9846);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist4;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable__nit__AAnnotations.color;
idtype14 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9848);
fatal_exit(1);
}
var15 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var15, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var15:AAnnotation>*/
}
var_pannotationnode1 = var15;
var_node_list = var_pannotationnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction412> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction413#action for (self: ReduceAction413, Parser) */
void nit__parser___nit__parser__ReduceAction413___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9879);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9881);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nit__AAtid.color;
idtype16 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9883);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist4;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype18 = type_nullable__nit__TOpar.color;
idtype19 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9885);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype21 = type_standard__Array__standard__Object.color;
idtype22 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9887);
fatal_exit(1);
}
{
var23 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var23;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype25 = type_nullable__nit__TCpar.color;
idtype26 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9890);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable__nit__AAnnotations.color;
idtype29 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9892);
fatal_exit(1);
}
var30 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var30, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var30:AAnnotation>*/
}
var_pannotationnode1 = var30;
var_node_list = var_pannotationnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction413> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction414#action for (self: ReduceAction414, Parser) */
void nit__parser___nit__parser__ReduceAction414___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pannotationnode1 = var_nodearraylist1;
if (var_pannotationnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode1&3)?class_info[((long)var_pannotationnode1&3)]:var_pannotationnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode1, ((val*)NULL)); /* != on <var_pannotationnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction414> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction415#action for (self: ReduceAction415, Parser) */
void nit__parser___nit__parser__ReduceAction415___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pannotationnode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9932);
fatal_exit(1);
}
if (var_pannotationnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode1&3)?class_info[((long)var_pannotationnode1&3)]:var_pannotationnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode1, ((val*)NULL)); /* != on <var_pannotationnode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction415> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction418#action for (self: ReduceAction418, Parser) */
void nit__parser___nit__parser__ReduceAction418___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode8 = var4;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable__nit__TKwredef.color;
idtype = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9952);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype7 = type_nullable__nit__AVisibility.color;
idtype8 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9954);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nit__AAtid.color;
idtype11 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9956);
fatal_exit(1);
}
var_pexprnode7 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 9958);
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
var18 = ((short int(*)(val* self, val* p0))(var_pexprnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode7, var_other); /* == on <var_pexprnode7:nullable AExpr(AExpr)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pexprnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var20 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var20, ((val*)NULL), var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var20:AAnnotation>*/
}
var_pannotationnode1 = var20;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction418> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction420#action for (self: ReduceAction420, Parser) */
void nit__parser___nit__parser__ReduceAction420___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pannotationnode1 = var_nodearraylist3;
var_node_list = var_pannotationnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction420> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction421#action for (self: ReduceAction421, Parser) */
void nit__parser___nit__parser__ReduceAction421___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10001);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype8 = type_nullable__nit__TKwredef.color;
idtype9 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10003);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable__nit__AVisibility.color;
idtype12 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10005);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype14 = type_nullable__nit__AAtid.color;
idtype15 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10007);
fatal_exit(1);
}
var16 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var16, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var16:AAnnotation>*/
}
var_pannotationnode1 = var16;
var_node_list = var_pannotationnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction421> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction422#action for (self: ReduceAction422, Parser) */
void nit__parser___nit__parser__ReduceAction422___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode7 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10035);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10037);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10039);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nit__AAtid.color;
idtype16 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10041);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist5;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype18 = type_nullable__nit__AAnnotations.color;
idtype19 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10043);
fatal_exit(1);
}
var20 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var20, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var20:AAnnotation>*/
}
var_pannotationnode1 = var20;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction422> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction423#action for (self: ReduceAction423, Parser) */
void nit__parser___nit__parser__ReduceAction423___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10074);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10076);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10078);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype18 = type_nullable__nit__AAtid.color;
idtype19 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10080);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype21 = type_nullable__nit__TOpar.color;
idtype22 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10082);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype24 = type_standard__Array__standard__Object.color;
idtype25 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10084);
fatal_exit(1);
}
{
var26 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var26;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype28 = type_nullable__nit__TCpar.color;
idtype29 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10087);
fatal_exit(1);
}
var30 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var30:AAnnotation>*/
}
var_pannotationnode1 = var30;
var_node_list = var_pannotationnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction423> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction424#action for (self: ReduceAction424, Parser) */
void nit__parser___nit__parser__ReduceAction424___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode8 = var10;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10119);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10121);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10123);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype19 = type_nullable__nit__AAtid.color;
idtype20 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10125);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype22 = type_nullable__nit__TOpar.color;
idtype23 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10127);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_standard__Array__standard__Object.color;
idtype26 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10129);
fatal_exit(1);
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
if(cltype29 >= (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_tcparnode9&3)?type_info[((long)var_tcparnode9&3)]:var_tcparnode9->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10132);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype32 = type_nullable__nit__AAnnotations.color;
idtype33 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10134);
fatal_exit(1);
}
var34 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var34:AAnnotation>*/
}
var_pannotationnode1 = var34;
var_node_list = var_pannotationnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction424> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction425#action for (self: ReduceAction425, Parser) */
void nit__parser___nit__parser__ReduceAction425___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode8 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10162);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10164);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10166);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nit__AAtid.color;
idtype16 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10168);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_standard__Array__standard__Object.color;
idtype19 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10170);
fatal_exit(1);
}
{
var20 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var20;
var21 = NEW_nit__AAnnotation(&type_nit__AAnnotation);
{
nit__parser_prod___AAnnotation___init_aannotation(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotation#init_aannotation on <var21:AAnnotation>*/
}
var_pannotationnode1 = var21;
var_node_list = var_pannotationnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction425> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction426#action for (self: ReduceAction426, Parser) */
void nit__parser___nit__parser__ReduceAction426___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode7 = var2;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10195);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype5 = type_nullable__nit__AAtid.color;
idtype6 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10197);
fatal_exit(1);
}
var7 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
nit__parser_prod___AAnnotPropdef___init_aannotpropdef(var7, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var7:AAnnotPropdef>*/
}
var_ppropdefnode1 = var7;
var_node_list = var_ppropdefnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction426> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction427#action for (self: ReduceAction427, Parser) */
void nit__parser___nit__parser__ReduceAction427___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode7 = var3;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10222);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype6 = type_nullable__nit__AAtid.color;
idtype7 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10224);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist3;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nit__AAnnotations.color;
idtype10 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10226);
fatal_exit(1);
}
var11 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
nit__parser_prod___AAnnotPropdef___init_aannotpropdef(var11, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var11:AAnnotPropdef>*/
}
var_ppropdefnode1 = var11;
var_node_list = var_ppropdefnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction427> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction428#action for (self: ReduceAction428, Parser) */
void nit__parser___nit__parser__ReduceAction428___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode8 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10254);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype9 = type_nullable__nit__AAtid.color;
idtype10 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10256);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype12 = type_nullable__nit__TOpar.color;
idtype13 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10258);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_standard__Array__standard__Object.color;
idtype16 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10260);
fatal_exit(1);
}
{
var17 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var17;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype19 = type_nullable__nit__TCpar.color;
idtype20 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10263);
fatal_exit(1);
}
var21 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
nit__parser_prod___AAnnotPropdef___init_aannotpropdef(var21, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var21:AAnnotPropdef>*/
}
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction428> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction429#action for (self: ReduceAction429, Parser) */
void nit__parser___nit__parser__ReduceAction429___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10292);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nit__AAtid.color;
idtype11 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10294);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype13 = type_nullable__nit__TOpar.color;
idtype14 = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10296);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype16 = type_standard__Array__standard__Object.color;
idtype17 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10298);
fatal_exit(1);
}
{
var18 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var18;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype20 = type_nullable__nit__TCpar.color;
idtype21 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10301);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nit__AAnnotations.color;
idtype24 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10303);
fatal_exit(1);
}
var25 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
nit__parser_prod___AAnnotPropdef___init_aannotpropdef(var25, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var25:AAnnotPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction429> */
{
var27 = nit___nit__Parser___go_to(var_p, var26);
}
{
nit___nit__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction430#action for (self: ReduceAction430, Parser) */
void nit__parser___nit__parser__ReduceAction430___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode8 = var3;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10328);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype6 = type_nullable__nit__AAtid.color;
idtype7 = type_nullable__nit__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10330);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10332);
fatal_exit(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var11;
var12 = NEW_nit__AAnnotPropdef(&type_nit__AAnnotPropdef);
{
nit__parser_prod___AAnnotPropdef___init_aannotpropdef(var12, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotPropdef#init_aannotpropdef on <var12:AAnnotPropdef>*/
}
var_ppropdefnode1 = var12;
var_node_list = var_ppropdefnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction430> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction434#action for (self: ReduceAction434, Parser) */
void nit__parser___nit__parser__ReduceAction434___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10355);
fatal_exit(1);
}
var2 = NEW_nit__ATypeExpr(&type_nit__ATypeExpr);
{
nit__parser_prod___ATypeExpr___init_atypeexpr(var2, var_ptypenode2); /* Direct call parser_prod#ATypeExpr#init_atypeexpr on <var2:ATypeExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction434> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction437#action for (self: ReduceAction437, Parser) */
void nit__parser___nit__parser__ReduceAction437___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10373);
fatal_exit(1);
}
var_pmethidnode3 = var_nodearraylist4;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype6 = type_nullable__nit__AMethid.color;
idtype7 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10375);
fatal_exit(1);
}
var8 = NEW_nit__AMethidExpr(&type_nit__AMethidExpr);
{
nit__parser_prod___AMethidExpr___init_amethidexpr(var8, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod#AMethidExpr#init_amethidexpr on <var8:AMethidExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction437> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction438#action for (self: ReduceAction438, Parser) */
void nit__parser___nit__parser__ReduceAction438___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var1); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/
}
var_pexprnode2 = var1;
var_pmethidnode3 = var_nodearraylist1;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype = type_nullable__nit__AMethid.color;
idtype = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10392);
fatal_exit(1);
}
var3 = NEW_nit__AMethidExpr(&type_nit__AMethidExpr);
{
nit__parser_prod___AMethidExpr___init_amethidexpr(var3, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod#AMethidExpr#init_amethidexpr on <var3:AMethidExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction438> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction439#action for (self: ReduceAction439, Parser) */
void nit__parser___nit__parser__ReduceAction439___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pannotationsnode2 = var_nodearraylist1;
/* <var_pannotationsnode2:nullable Object> isa nullable AAnnotations */
cltype = type_nullable__nit__AAnnotations.color;
idtype = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10408);
fatal_exit(1);
}
var2 = NEW_nit__AAtExpr(&type_nit__AAtExpr);
{
nit__parser_prod___AAtExpr___init_aatexpr(var2, var_pannotationsnode2); /* Direct call parser_prod#AAtExpr#init_aatexpr on <var2:AAtExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction439> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction440#action for (self: ReduceAction440, Parser) */
void nit__parser___nit__parser__ReduceAction440___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10423);
fatal_exit(1);
}
var2 = NEW_nit__AIdAtid(&type_nit__AIdAtid);
{
nit__parser_prod___AIdAtid___init_aidatid(var2, var_tidnode2); /* Direct call parser_prod#AIdAtid#init_aidatid on <var2:AIdAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction440> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction441#action for (self: ReduceAction441, Parser) */
void nit__parser___nit__parser__ReduceAction441___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nit__TKwextern.color;
idtype = type_nullable__nit__TKwextern.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10438);
fatal_exit(1);
}
var2 = NEW_nit__AKwexternAtid(&type_nit__AKwexternAtid);
{
nit__parser_prod___AKwexternAtid___init_akwexternatid(var2, var_tkwexternnode2); /* Direct call parser_prod#AKwexternAtid#init_akwexternatid on <var2:AKwexternAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction441> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction442#action for (self: ReduceAction442, Parser) */
void nit__parser___nit__parser__ReduceAction442___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nit__TKwabstract.color;
idtype = type_nullable__nit__TKwabstract.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10453);
fatal_exit(1);
}
var2 = NEW_nit__AKwabstractAtid(&type_nit__AKwabstractAtid);
{
nit__parser_prod___AKwabstractAtid___init_akwabstractatid(var2, var_tkwabstractnode2); /* Direct call parser_prod#AKwabstractAtid#init_akwabstractatid on <var2:AKwabstractAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10472);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10474);
fatal_exit(1);
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype11 = type_nullable__nit__TCpar.color;
idtype12 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10477);
fatal_exit(1);
}
var13 = NEW_nit__AParExprs(&type_nit__AParExprs);
{
nit__parser_prod___AParExprs___init_aparexprs(var13, var_toparnode2, var_listnode4, var_tcparnode5); /* Direct call parser_prod#AParExprs#init_aparexprs on <var13:AParExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction443> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction444#action for (self: ReduceAction444, Parser) */
void nit__parser___nit__parser__ReduceAction444___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10497);
fatal_exit(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype6 = type_nullable__nit__TCpar.color;
idtype7 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10499);
fatal_exit(1);
}
var8 = NEW_nit__AParExprs(&type_nit__AParExprs);
{
nit__parser_prod___AParExprs___init_aparexprs(var8, var_toparnode2, var_listnode3, var_tcparnode4); /* Direct call parser_prod#AParExprs#init_aparexprs on <var8:AParExprs>*/
}
var_pexprsnode1 = var8;
var_node_list = var_pexprsnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction444> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction446#action for (self: ReduceAction446, Parser) */
void nit__parser___nit__parser__ReduceAction446___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10517);
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
var6 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var8 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var8, var_listnode3); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode1 = var8;
var_node_list = var_pexprsnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction446> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction448#action for (self: ReduceAction448, Parser) */
void nit__parser___nit__parser__ReduceAction448___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Object]>*/
}
var_listnode2 = var;
var1 = NEW_nit__AListExprs(&type_nit__AListExprs);
{
nit__parser_prod___AListExprs___init_alistexprs(var1, var_listnode2); /* Direct call parser_prod#AListExprs#init_alistexprs on <var1:AListExprs>*/
}
var_pexprsnode1 = var1;
var_node_list = var_pexprsnode1;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10552);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10554);
fatal_exit(1);
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tcbranode5 = var_nodearraylist4;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype11 = type_nullable__nit__TCbra.color;
idtype12 = type_nullable__nit__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10557);
fatal_exit(1);
}
var13 = NEW_nit__ABraExprs(&type_nit__ABraExprs);
{
nit__parser_prod___ABraExprs___init_abraexprs(var13, var_tobranode2, var_listnode4, var_tcbranode5); /* Direct call parser_prod#ABraExprs#init_abraexprs on <var13:ABraExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction449> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction451#action for (self: ReduceAction451, Parser) */
void nit__parser___nit__parser__ReduceAction451___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist3;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10578);
fatal_exit(1);
}
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction451> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction452#action for (self: ReduceAction452, Parser) */
void nit__parser___nit__parser__ReduceAction452___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction452> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction453#action for (self: ReduceAction453, Parser) */
void nit__parser___nit__parser__ReduceAction453___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode2 = var5;
var_listnode1 = var_nodearraylist3;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10613);
fatal_exit(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var7;
var_node_list = var_listnode2;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction453> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction454#action for (self: ReduceAction454, Parser) */
void nit__parser___nit__parser__ReduceAction454___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10627);
fatal_exit(1);
}
{
var3 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var3;
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction454> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction455#action for (self: ReduceAction455, Parser) */
void nit__parser___nit__parser__ReduceAction455___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tidnode1 = var_nodearraylist1;
if (var_tidnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tidnode1&3)?class_info[((long)var_tidnode1&3)]:var_tidnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode1, ((val*)NULL)); /* != on <var_tidnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_tidnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction455> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction456#action for (self: ReduceAction456, Parser) */
void nit__parser___nit__parser__ReduceAction456___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10659);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist4;
{
var6 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var6;
if (var_tidnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction456> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction457#action for (self: ReduceAction457, Parser) */
void nit__parser___nit__parser__ReduceAction457___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_tidnode4 = var_nodearraylist1;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10677);
fatal_exit(1);
}
var3 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
nit__parser_prod___AModuleName___init_amodulename(var3, ((val*)NULL), var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var3:AModuleName>*/
}
var_pmodulenamenode1 = var3;
var_node_list = var_pmodulenamenode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction457> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction458#action for (self: ReduceAction458, Parser) */
void nit__parser___nit__parser__ReduceAction458___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10696);
fatal_exit(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var4;
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10699);
fatal_exit(1);
}
var8 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
nit__parser_prod___AModuleName___init_amodulename(var8, ((val*)NULL), var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction458> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction459#action for (self: ReduceAction459, Parser) */
void nit__parser___nit__parser__ReduceAction459___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10719);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype6 = type_nullable__nit__TId.color;
idtype7 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10721);
fatal_exit(1);
}
var8 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
nit__parser_prod___AModuleName___init_amodulename(var8, var_tquadnode2, var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction459> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction460#action for (self: ReduceAction460, Parser) */
void nit__parser___nit__parser__ReduceAction460___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nit__TQuad.color;
idtype = type_nullable__nit__TQuad.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10742);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10744);
fatal_exit(1);
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype11 = type_nullable__nit__TId.color;
idtype12 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10747);
fatal_exit(1);
}
var13 = NEW_nit__AModuleName(&type_nit__AModuleName);
{
nit__parser_prod___AModuleName___init_amodulename(var13, var_tquadnode2, var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var13:AModuleName>*/
}
var_pmodulenamenode1 = var13;
var_node_list = var_pmodulenamenode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction460> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction461#action for (self: ReduceAction461, Parser) */
void nit__parser___nit__parser__ReduceAction461___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10765);
fatal_exit(1);
}
var3 = NEW_nit__AQualified(&type_nit__AQualified);
{
nit__parser_prod___AQualified___init_aqualified(var3, var_listnode2, var_tclassidnode3); /* Direct call parser_prod#AQualified#init_aqualified on <var3:AQualified>*/
}
var_pqualifiednode1 = var3;
var_node_list = var_pqualifiednode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction461> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction462#action for (self: ReduceAction462, Parser) */
void nit__parser___nit__parser__ReduceAction462___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode2 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10783);
fatal_exit(1);
}
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var_tclassidnode4 = var_nodearraylist2;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nit__TClassid.color;
idtype7 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10786);
fatal_exit(1);
}
var8 = NEW_nit__AQualified(&type_nit__AQualified);
{
nit__parser_prod___AQualified___init_aqualified(var8, var_listnode3, var_tclassidnode4); /* Direct call parser_prod#AQualified#init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode1 = var8;
var_node_list = var_pqualifiednode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction462> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction463#action for (self: ReduceAction463, Parser) */
void nit__parser___nit__parser__ReduceAction463___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10803);
fatal_exit(1);
}
{
var3 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var3;
var4 = NEW_nit__AQualified(&type_nit__AQualified);
{
nit__parser_prod___AQualified___init_aqualified(var4, var_listnode3, ((val*)NULL)); /* Direct call parser_prod#AQualified#init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode1 = var4;
var_node_list = var_pqualifiednode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction463> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction465#action for (self: ReduceAction465, Parser) */
void nit__parser___nit__parser__ReduceAction465___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction465> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction466#action for (self: ReduceAction466, Parser) */
void nit__parser___nit__parser__ReduceAction466___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
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
var_tclassidnode1 = var_nodearraylist2;
var_node_list = var_tclassidnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction466> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction467#action for (self: ReduceAction467, Parser) */
void nit__parser___nit__parser__ReduceAction467___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tclassidnode1 = var_nodearraylist3;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction467> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction469#action for (self: ReduceAction469, Parser) */
void nit__parser___nit__parser__ReduceAction469___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pmethidnode1 = var_nodearraylist1;
var_node_list = var_pmethidnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction469> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction470#action for (self: ReduceAction470, Parser) */
void nit__parser___nit__parser__ReduceAction470___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pmethidnode1 = var_nodearraylist2;
var_node_list = var_pmethidnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction470> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction471#action for (self: ReduceAction471, Parser) */
void nit__parser___nit__parser__ReduceAction471___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pmethidnode1 = var_nodearraylist3;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction471> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction473#action for (self: ReduceAction473, Parser) */
void nit__parser___nit__parser__ReduceAction473___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction473> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction474#action for (self: ReduceAction474, Parser) */
void nit__parser___nit__parser__ReduceAction474___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction474> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction476#action for (self: ReduceAction476, Parser) */
void nit__parser___nit__parser__ReduceAction476___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwendnode1 = var_nodearraylist1;
var_node_list = var_tkwendnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction476> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction477#action for (self: ReduceAction477, Parser) */
void nit__parser___nit__parser__ReduceAction477___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction477> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction480#action for (self: ReduceAction480, Parser) */
void nit__parser___nit__parser__ReduceAction480___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10939);
fatal_exit(1);
}
{
var3 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var3;
var4 = NEW_nit__ADoc(&type_nit__ADoc);
{
nit__parser_prod___ADoc___init_adoc(var4, var_listnode3); /* Direct call parser_prod#ADoc#init_adoc on <var4:ADoc>*/
}
var_pdocnode1 = var4;
var_node_list = var_pdocnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction480> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction481#action for (self: ReduceAction481, Parser) */
void nit__parser___nit__parser__ReduceAction481___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 10957);
fatal_exit(1);
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
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction481> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction484#action for (self: ReduceAction484, Parser) */
void nit__parser___nit__parser__ReduceAction484___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_node_list = ((val*)NULL);
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction484> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction486#action for (self: ReduceAction486, Parser) */
void nit__parser___nit__parser__ReduceAction486___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_node_list = ((val*)NULL);
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction486> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction487#action for (self: ReduceAction487, Parser) */
void nit__parser___nit__parser__ReduceAction487___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pdocnode1 = var_nodearraylist2;
var_node_list = var_pdocnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction487> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction488#action for (self: ReduceAction488, Parser) */
void nit__parser___nit__parser__ReduceAction488___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode1 = var_nodearraylist3;
var_node_list = var_pdocnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction488> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction490#action for (self: ReduceAction490, Parser) */
void nit__parser___nit__parser__ReduceAction490___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode1 = var_nodearraylist4;
var_node_list = var_pdocnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction490> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction492#action for (self: ReduceAction492, Parser) */
void nit__parser___nit__parser__ReduceAction492___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pdocnode1 = var_nodearraylist1;
var_node_list = var_pdocnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction492> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction493#action for (self: ReduceAction493, Parser) */
void nit__parser___nit__parser__ReduceAction493___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction493> */
{
var1 = nit___nit__Parser___go_to(var_p, var);
}
{
nit___nit__Parser___push(var_p, var1, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction496#action for (self: ReduceAction496, Parser) */
void nit__parser___nit__parser__ReduceAction496___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction496> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction871#action for (self: ReduceAction871, Parser) */
void nit__parser___nit__parser__ReduceAction871___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nit__TKwisset.color;
idtype = type_nullable__nit__TKwisset.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11067);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable__nit__AExpr.color;
idtype7 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11069);
fatal_exit(1);
}
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nit__TAttrid.color;
idtype10 = type_nullable__nit__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11071);
fatal_exit(1);
}
var11 = NEW_nit__AIssetAttrExpr(&type_nit__AIssetAttrExpr);
{
nit__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var11, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var11:AIssetAttrExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction871> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction873#action for (self: ReduceAction873, Parser) */
void nit__parser___nit__parser__ReduceAction873___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11090);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype5 = type_nullable__nit__TAttrid.color;
idtype6 = type_nullable__nit__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11092);
fatal_exit(1);
}
var7 = NEW_nit__AAttrExpr(&type_nit__AAttrExpr);
{
nit__parser_prod___AAttrExpr___init_aattrexpr(var7, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var7:AAttrExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction873> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction874#action for (self: ReduceAction874, Parser) */
void nit__parser___nit__parser__ReduceAction874___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11110);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11112);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11114);
fatal_exit(1);
}
var10 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var10, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var10:ACallExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction874> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction875#action for (self: ReduceAction875, Parser) */
void nit__parser___nit__parser__ReduceAction875___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var8 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11132);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11134);
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
var8 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var8, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var8:ACallExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction875> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction876#action for (self: ReduceAction876, Parser) */
void nit__parser___nit__parser__ReduceAction876___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11158);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11160);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11162);
fatal_exit(1);
}
var11 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction876> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction877#action for (self: ReduceAction877, Parser) */
void nit__parser___nit__parser__ReduceAction877___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11181);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11183);
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
var9 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction877> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction884#action for (self: ReduceAction884, Parser) */
void nit__parser___nit__parser__ReduceAction884___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11206);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype5 = type_nullable__nit__TKwinit.color;
idtype6 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11208);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11210);
fatal_exit(1);
}
var10 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction884> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction885#action for (self: ReduceAction885, Parser) */
void nit__parser___nit__parser__ReduceAction885___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11228);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype4 = type_nullable__nit__TKwinit.color;
idtype5 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11230);
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
var8 = NEW_nit__AInitExpr(&type_nit__AInitExpr);
{
nit__parser_prod___AInitExpr___init_ainitexpr(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var8:AInitExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction885> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction916#action for (self: ReduceAction916, Parser) */
void nit__parser___nit__parser__ReduceAction916___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction916> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction917#action for (self: ReduceAction917, Parser) */
void nit__parser___nit__parser__ReduceAction917___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : AImplicitSelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImplicitSelfExpr */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_nit__AImplicitSelfExpr(&type_nit__AImplicitSelfExpr);
{
nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var); /* Direct call parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr on <var:AImplicitSelfExpr>*/
}
var_pexprnode1 = var;
var_node_list = var_pexprnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction917> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1078#action for (self: ReduceAction1078, Parser) */
void nit__parser___nit__parser__ReduceAction1078___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pimportnode1 = var_nodearraylist1;
if (var_pimportnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode1&3)?class_info[((long)var_pimportnode1&3)]:var_pimportnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pimportnode1, ((val*)NULL)); /* != on <var_pimportnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pimportnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1078> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1079#action for (self: ReduceAction1079, Parser) */
void nit__parser___nit__parser__ReduceAction1079___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11291);
fatal_exit(1);
}
var_pimportnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pimportnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode2&3)?class_info[((long)var_pimportnode2&3)]:var_pimportnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pimportnode2, ((val*)NULL)); /* != on <var_pimportnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pimportnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1079> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1080#action for (self: ReduceAction1080, Parser) */
void nit__parser___nit__parser__ReduceAction1080___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pexterncodeblocknode1 = var_nodearraylist1;
if (var_pexterncodeblocknode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode1&3)?class_info[((long)var_pexterncodeblocknode1&3)]:var_pexterncodeblocknode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncodeblocknode1, ((val*)NULL)); /* != on <var_pexterncodeblocknode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncodeblocknode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1080> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1081#action for (self: ReduceAction1081, Parser) */
void nit__parser___nit__parser__ReduceAction1081___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11325);
fatal_exit(1);
}
var_pexterncodeblocknode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexterncodeblocknode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode2&3)?class_info[((long)var_pexterncodeblocknode2&3)]:var_pexterncodeblocknode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncodeblocknode2, ((val*)NULL)); /* != on <var_pexterncodeblocknode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncodeblocknode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1081> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1082#action for (self: ReduceAction1082, Parser) */
void nit__parser___nit__parser__ReduceAction1082___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pclassdefnode1 = var_nodearraylist1;
if (var_pclassdefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode1&3)?class_info[((long)var_pclassdefnode1&3)]:var_pclassdefnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode1, ((val*)NULL)); /* != on <var_pclassdefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pclassdefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1082> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1083#action for (self: ReduceAction1083, Parser) */
void nit__parser___nit__parser__ReduceAction1083___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11359);
fatal_exit(1);
}
var_pclassdefnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pclassdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode2&3)?class_info[((long)var_pclassdefnode2&3)]:var_pclassdefnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pclassdefnode2, ((val*)NULL)); /* != on <var_pclassdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pclassdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1083> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1085#action for (self: ReduceAction1085, Parser) */
void nit__parser___nit__parser__ReduceAction1085___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11378);
fatal_exit(1);
}
var_pformaldefnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pformaldefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode2&3)?class_info[((long)var_pformaldefnode2&3)]:var_pformaldefnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode2, ((val*)NULL)); /* != on <var_pformaldefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pformaldefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1085> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1087#action for (self: ReduceAction1087, Parser) */
void nit__parser___nit__parser__ReduceAction1087___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11397);
fatal_exit(1);
}
var_ppropdefnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_ppropdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ppropdefnode2&3)?class_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ppropdefnode2, ((val*)NULL)); /* != on <var_ppropdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1087> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1089#action for (self: ReduceAction1089, Parser) */
void nit__parser___nit__parser__ReduceAction1089___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11416);
fatal_exit(1);
}
var_pannotationnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pannotationnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode2&3)?class_info[((long)var_pannotationnode2&3)]:var_pannotationnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pannotationnode2, ((val*)NULL)); /* != on <var_pannotationnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pannotationnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1089> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1090#action for (self: ReduceAction1090, Parser) */
void nit__parser___nit__parser__ReduceAction1090___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pparamnode1 = var_nodearraylist1;
if (var_pparamnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pparamnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1090> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1091#action for (self: ReduceAction1091, Parser) */
void nit__parser___nit__parser__ReduceAction1091___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11450);
fatal_exit(1);
}
var_pparamnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pparamnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode2&3)?class_info[((long)var_pparamnode2&3)]:var_pparamnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode2, ((val*)NULL)); /* != on <var_pparamnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pparamnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1091> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1092#action for (self: ReduceAction1092, Parser) */
void nit__parser___nit__parser__ReduceAction1092___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pexterncallnode1 = var_nodearraylist1;
if (var_pexterncallnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode1&3)?class_info[((long)var_pexterncallnode1&3)]:var_pexterncallnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode1, ((val*)NULL)); /* != on <var_pexterncallnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncallnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1092> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1093#action for (self: ReduceAction1093, Parser) */
void nit__parser___nit__parser__ReduceAction1093___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11484);
fatal_exit(1);
}
var_pexterncallnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexterncallnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode2&3)?class_info[((long)var_pexterncallnode2&3)]:var_pexterncallnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexterncallnode2, ((val*)NULL)); /* != on <var_pexterncallnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncallnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1093> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1095#action for (self: ReduceAction1095, Parser) */
void nit__parser___nit__parser__ReduceAction1095___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11503);
fatal_exit(1);
}
var_ptypenode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_ptypenode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode2&3)?class_info[((long)var_ptypenode2&3)]:var_ptypenode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ptypenode2, ((val*)NULL)); /* != on <var_ptypenode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ptypenode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1095> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1097#action for (self: ReduceAction1097, Parser) */
void nit__parser___nit__parser__ReduceAction1097___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11522);
fatal_exit(1);
}
var_pexprnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode2&3)?class_info[((long)var_pexprnode2&3)]:var_pexprnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1097> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1103#action for (self: ReduceAction1103, Parser) */
void nit__parser___nit__parser__ReduceAction1103___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11541);
fatal_exit(1);
}
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype5 = type_standard__Array__standard__Object.color;
idtype6 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11543);
fatal_exit(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var7;
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1103> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1111#action for (self: ReduceAction1111, Parser) */
void nit__parser___nit__parser__ReduceAction1111___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11559);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_tidnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1111> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1112#action for (self: ReduceAction1112, Parser) */
void nit__parser___nit__parser__ReduceAction1112___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tcommentnode1 = var_nodearraylist1;
if (var_tcommentnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode1&3)?class_info[((long)var_tcommentnode1&3)]:var_tcommentnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tcommentnode1, ((val*)NULL)); /* != on <var_tcommentnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_tcommentnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1112> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1113#action for (self: ReduceAction1113, Parser) */
void nit__parser___nit__parser__ReduceAction1113___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 11593);
fatal_exit(1);
}
var_tcommentnode2 = var_nodearraylist2;
{
var4 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_tcommentnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode2&3)?class_info[((long)var_tcommentnode2&3)]:var_tcommentnode2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_tcommentnode2, ((val*)NULL)); /* != on <var_tcommentnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_tcommentnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1113> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
