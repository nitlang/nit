#include "parser.sep.0.h"
/* method parser#ReduceAction18#action for (self: ReduceAction18, Parser) */
void parser__ReduceAction18__action(val* self, val* p0) {
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
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ANoImport */;
val* var_pimportnode1 /* var pimportnode1: nullable ANoImport */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var7;
var_pvisibilitynode2 = var_nodearraylist3;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable_parser_nodes__AVisibility.color;
idtype = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pvisibilitynode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pvisibilitynode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1432);
show_backtrace(1);
}
var_tkwimportnode3 = var_nodearraylist4;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype10 = type_nullable_parser_nodes__TKwimport.color;
idtype11 = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwimportnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwimportnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1434);
show_backtrace(1);
}
var_tkwendnode4 = var_nodearraylist6;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype13 = type_nullable_parser_nodes__TKwend.color;
idtype14 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwendnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwendnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1436);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ANoImport(&type_parser_nodes__ANoImport);
{
parser_prod__ANoImport__init_anoimport(var15, var_pvisibilitynode2, var_tkwimportnode3, var_tkwendnode4); /* Direct call parser_prod#ANoImport#init_anoimport on <var15:ANoImport>*/
}
var_pimportnode1 = var15;
var_node_list = var_pimportnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction18> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction18#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction18__action(val* self, val* p0) {
parser__ReduceAction18__action(self, p0); /* Direct call parser#ReduceAction18#action on <self:Object(ReduceAction18)>*/
RET_LABEL:;
}
/* method parser#ReduceAction19#action for (self: ReduceAction19, Parser) */
void parser__ReduceAction19__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pclassdefnode1 = var_nodearraylist1;
var_node_list = var_pclassdefnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction19> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction19#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction19__action(val* self, val* p0) {
parser__ReduceAction19__action(self, p0); /* Direct call parser#ReduceAction19#action on <self:Object(ReduceAction19)>*/
RET_LABEL:;
}
/* method parser#ReduceAction20#action for (self: ReduceAction20, Parser) */
void parser__ReduceAction20__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ATopClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable ATopClassdef */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable_parser_nodes__APropdef.color;
idtype = type_nullable_parser_nodes__APropdef.id;
if(var_ppropdefnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_ppropdefnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_ppropdefnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1465);
show_backtrace(1);
}
var4 = NULL;
if (var_ppropdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ppropdefnode2,var4) on <var_ppropdefnode2:nullable Object(nullable APropdef)> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_ppropdefnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_ppropdefnode2, var_other) /* == on <var_ppropdefnode2:nullable APropdef(APropdef)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
array__Array__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var11 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
{
parser_prod__ATopClassdef__init_atopclassdef(var11, var_listnode3); /* Direct call parser_prod#ATopClassdef#init_atopclassdef on <var11:ATopClassdef>*/
}
var_pclassdefnode1 = var11;
var_node_list = var_pclassdefnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction20> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction20#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction20__action(val* self, val* p0) {
parser__ReduceAction20__action(self, p0); /* Direct call parser#ReduceAction20#action on <self:Object(ReduceAction20)>*/
RET_LABEL:;
}
/* method parser#ReduceAction21#action for (self: ReduceAction21, Parser) */
void parser__ReduceAction21__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : AMainClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AMainClassdef */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable_parser_nodes__APropdef.color;
idtype = type_nullable_parser_nodes__APropdef.id;
if(var_ppropdefnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_ppropdefnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_ppropdefnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1484);
show_backtrace(1);
}
var4 = NULL;
if (var_ppropdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ppropdefnode2,var4) on <var_ppropdefnode2:nullable Object(nullable APropdef)> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_ppropdefnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_ppropdefnode2, var_other) /* == on <var_ppropdefnode2:nullable APropdef(APropdef)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
array__Array__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var11 = NEW_parser_nodes__AMainClassdef(&type_parser_nodes__AMainClassdef);
{
parser_prod__AMainClassdef__init_amainclassdef(var11, var_listnode3); /* Direct call parser_prod#AMainClassdef#init_amainclassdef on <var11:AMainClassdef>*/
}
var_pclassdefnode1 = var11;
var_node_list = var_pclassdefnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction21> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction21#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction21__action(val* self, val* p0) {
parser__ReduceAction21__action(self, p0); /* Direct call parser#ReduceAction21#action on <self:Object(ReduceAction21)>*/
RET_LABEL:;
}
/* method parser#ReduceAction22#action for (self: ReduceAction22, Parser) */
void parser__ReduceAction22__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : null */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NULL;
var_node_list = var1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction22> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction22#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction22__action(val* self, val* p0) {
parser__ReduceAction22__action(self, p0); /* Direct call parser#ReduceAction22#action on <self:Object(ReduceAction22)>*/
RET_LABEL:;
}
/* method parser#ReduceAction23#action for (self: ReduceAction23, Parser) */
void parser__ReduceAction23__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : null */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NULL;
var_node_list = var2;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction23> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction23#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction23__action(val* self, val* p0) {
parser__ReduceAction23__action(self, p0); /* Direct call parser#ReduceAction23#action on <self:Object(ReduceAction23)>*/
RET_LABEL:;
}
/* method parser#ReduceAction24#action for (self: ReduceAction24, Parser) */
void parser__ReduceAction24__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AMainMethPropdef */;
val* var5 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMainMethPropdef */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode3->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1522);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AMainMethPropdef(&type_parser_nodes__AMainMethPropdef);
var5 = NULL;
{
parser_prod__AMainMethPropdef__init_amainmethpropdef(var4, var5, var_pexprnode3); /* Direct call parser_prod#AMainMethPropdef#init_amainmethpropdef on <var4:AMainMethPropdef>*/
}
var_ppropdefnode1 = var4;
var_node_list = var_ppropdefnode1;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction24> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction24#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction24__action(val* self, val* p0) {
parser__ReduceAction24__action(self, p0); /* Direct call parser#ReduceAction24#action on <self:Object(ReduceAction24)>*/
RET_LABEL:;
}
/* method parser#ReduceAction26#action for (self: ReduceAction26, Parser) */
void parser__ReduceAction26__action(val* self, val* p0) {
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
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AStdClassdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var36 /* : Int */;
long var37 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var10); /* Direct call array#Array#init on <var10:Array[Object]>*/
}
var_listnode8 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode12 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1549);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype15 = type_nullable_parser_nodes__TKwredef.color;
idtype16 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwredefnode3->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwredefnode3->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1551);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1553);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1555);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1557);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode7->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode7->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1559);
show_backtrace(1);
}
{
var29 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var29;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype31 = type_nullable_parser_nodes__TKwend.color;
idtype32 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_tkwendnode13->type->table_size) {
var30 = 0;
} else {
var30 = var_tkwendnode13->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1562);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var34 = NULL;
var35 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var34, var35, var_listnode11, var_listnode12, var_tkwendnode13); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var33:AStdClassdef>*/
}
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction26> */
{
var37 = parser_work__Parser__go_to(var_p, var36);
}
{
parser_work__Parser__push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction26#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction26__action(val* self, val* p0) {
parser__ReduceAction26__action(self, p0); /* Direct call parser#ReduceAction26#action on <self:Object(ReduceAction26)>*/
RET_LABEL:;
}
/* method parser#ReduceAction27#action for (self: ReduceAction27, Parser) */
void parser__ReduceAction27__action(val* self, val* p0) {
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
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var31 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var36 /* : AAnnotations */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode16 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1599);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1601);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1603);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1605);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1607);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode7->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1609);
show_backtrace(1);
}
{
var30 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var31); /* Direct call array#Array#init on <var31:Array[Object]>*/
}
var_listnode13 = var31;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode12->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode12->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1613);
show_backtrace(1);
}
{
var35 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var35;
var36 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var37 = NULL;
var38 = NULL;
var39 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var36, var37, var38, var_listnode13, var39); /* Direct call parser_prod#AAnnotations#init_aannotations on <var36:AAnnotations>*/
}
var_pannotationsnode9 = var36;
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode18->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode18->type->type_table[cltype41] == idtype42;
}
}
if (unlikely(!var40)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1622);
show_backtrace(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var44, var_listnode16, var_listnode17, var_tkwendnode18); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var43:AStdClassdef>*/
}
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction27> */
{
var46 = parser_work__Parser__go_to(var_p, var45);
}
{
parser_work__Parser__push(var_p, var46, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction27#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction27__action(val* self, val* p0) {
parser__ReduceAction27__action(self, p0); /* Direct call parser#ReduceAction27#action on <self:Object(ReduceAction27)>*/
RET_LABEL:;
}
/* method parser#ReduceAction28#action for (self: ReduceAction28, Parser) */
void parser__ReduceAction28__action(val* self, val* p0) {
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
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : AStdClassdef */;
val* var38 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var39 /* : Int */;
long var40 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1659);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1661);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1663);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1665);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1667);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode7->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1669);
show_backtrace(1);
}
{
var30 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype32 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype33 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_pexterncodeblocknode10->type->table_size) {
var31 = 0;
} else {
var31 = var_pexterncodeblocknode10->type->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1672);
show_backtrace(1);
}
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype35 = type_nullable_parser_nodes__TKwend.color;
idtype36 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_tkwendnode13->type->table_size) {
var34 = 0;
} else {
var34 = var_tkwendnode13->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1674);
show_backtrace(1);
}
var37 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var38 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var37, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var38, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var37:AStdClassdef>*/
}
var_pclassdefnode1 = var37;
var_node_list = var_pclassdefnode1;
var39 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction28> */
{
var40 = parser_work__Parser__go_to(var_p, var39);
}
{
parser_work__Parser__push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction28#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction28__action(val* self, val* p0) {
parser__ReduceAction28__action(self, p0); /* Direct call parser#ReduceAction28#action on <self:Object(ReduceAction28)>*/
RET_LABEL:;
}
/* method parser#ReduceAction29#action for (self: ReduceAction29, Parser) */
void parser__ReduceAction29__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var37 /* : AAnnotations */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var48 /* : Int */;
long var49 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1712);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1714);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1716);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1718);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1720);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1722);
show_backtrace(1);
}
{
var31 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var32); /* Direct call array#Array#init on <var32:Array[Object]>*/
}
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode12->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode12->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1726);
show_backtrace(1);
}
{
var36 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var36;
var37 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var37, var38, var39, var_listnode13, var40); /* Direct call parser_prod#AAnnotations#init_aannotations on <var37:AAnnotations>*/
}
var_pannotationsnode9 = var37;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype42 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype43 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_pexterncodeblocknode15->type->table_size) {
var41 = 0;
} else {
var41 = var_pexterncodeblocknode15->type->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1735);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype45 = type_nullable_parser_nodes__TKwend.color;
idtype46 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_tkwendnode18->type->table_size) {
var44 = 0;
} else {
var44 = var_tkwendnode18->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1737);
show_backtrace(1);
}
var47 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
{
parser_prod__AStdClassdef__init_astdclassdef(var47, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var47:AStdClassdef>*/
}
var_pclassdefnode1 = var47;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction29> */
{
var49 = parser_work__Parser__go_to(var_p, var48);
}
{
parser_work__Parser__push(var_p, var49, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction29#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction29__action(val* self, val* p0) {
parser__ReduceAction29__action(self, p0); /* Direct call parser#ReduceAction29#action on <self:Object(ReduceAction29)>*/
RET_LABEL:;
}
/* method parser#ReduceAction30#action for (self: ReduceAction30, Parser) */
void parser__ReduceAction30__action(val* self, val* p0) {
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
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AStdClassdef */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode12 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1774);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1776);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1778);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1780);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1782);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode7->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1784);
show_backtrace(1);
}
{
var30 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode11->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode11->type->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1787);
show_backtrace(1);
}
{
var34 = parser_work__ReduceAction__concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode14->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode14->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1790);
show_backtrace(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
var40 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var39, var40, var_listnode12, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var38:AStdClassdef>*/
}
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction30> */
{
var42 = parser_work__Parser__go_to(var_p, var41);
}
{
parser_work__Parser__push(var_p, var42, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction30#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction30__action(val* self, val* p0) {
parser__ReduceAction30__action(self, p0); /* Direct call parser#ReduceAction30#action on <self:Object(ReduceAction30)>*/
RET_LABEL:;
}
/* method parser#ReduceAction31#action for (self: ReduceAction31, Parser) */
void parser__ReduceAction31__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var37 /* : AAnnotations */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AStdClassdef */;
val* var49 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var50 /* : Int */;
long var51 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode17 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode18 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1828);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1830);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1832);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1834);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1836);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1838);
show_backtrace(1);
}
{
var31 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var32); /* Direct call array#Array#init on <var32:Array[Object]>*/
}
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode12->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode12->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1842);
show_backtrace(1);
}
{
var36 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var36;
var37 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var37, var38, var39, var_listnode13, var40); /* Direct call parser_prod#AAnnotations#init_aannotations on <var37:AAnnotations>*/
}
var_pannotationsnode9 = var37;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode16->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode16->type->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1851);
show_backtrace(1);
}
{
var44 = parser_work__ReduceAction__concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var44;
var_tkwendnode19 = var_nodearraylist11;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype46 = type_nullable_parser_nodes__TKwend.color;
idtype47 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_tkwendnode19->type->table_size) {
var45 = 0;
} else {
var45 = var_tkwendnode19->type->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1854);
show_backtrace(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var49 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var49, var_listnode17, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var48:AStdClassdef>*/
}
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction31> */
{
var51 = parser_work__Parser__go_to(var_p, var50);
}
{
parser_work__Parser__push(var_p, var51, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction31#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction31__action(val* self, val* p0) {
parser__ReduceAction31__action(self, p0); /* Direct call parser#ReduceAction31#action on <self:Object(ReduceAction31)>*/
RET_LABEL:;
}
/* method parser#ReduceAction32#action for (self: ReduceAction32, Parser) */
void parser__ReduceAction32__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : AStdClassdef */;
val* var43 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var44 /* : Int */;
long var45 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1892);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1894);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1896);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1898);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1900);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1902);
show_backtrace(1);
}
{
var31 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode10->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode10->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1905);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode11->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode11->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1907);
show_backtrace(1);
}
{
var38 = parser_work__ReduceAction__concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var38;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype40 = type_nullable_parser_nodes__TKwend.color;
idtype41 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_tkwendnode14->type->table_size) {
var39 = 0;
} else {
var39 = var_tkwendnode14->type->type_table[cltype40] == idtype41;
}
}
if (unlikely(!var39)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1910);
show_backtrace(1);
}
var42 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var43 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var42, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var43, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var42:AStdClassdef>*/
}
var_pclassdefnode1 = var42;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction32> */
{
var45 = parser_work__Parser__go_to(var_p, var44);
}
{
parser_work__Parser__push(var_p, var45, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction32#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction32__action(val* self, val* p0) {
parser__ReduceAction32__action(self, p0); /* Direct call parser#ReduceAction32#action on <self:Object(ReduceAction32)>*/
RET_LABEL:;
}
/* method parser#ReduceAction33#action for (self: ReduceAction33, Parser) */
void parser__ReduceAction33__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var38 /* : AAnnotations */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
val* var52 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var53 /* : Int */;
long var54 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode17 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1949);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1951);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1953);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1955);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1957);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1959);
show_backtrace(1);
}
{
var32 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var33); /* Direct call array#Array#init on <var33:Array[Object]>*/
}
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode12->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1963);
show_backtrace(1);
}
{
var37 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var38, var39, var40, var_listnode13, var41); /* Direct call parser_prod#AAnnotations#init_aannotations on <var38:AAnnotations>*/
}
var_pannotationsnode9 = var38;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype43 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype44 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_pexterncodeblocknode15->type->table_size) {
var42 = 0;
} else {
var42 = var_pexterncodeblocknode15->type->type_table[cltype43] == idtype44;
}
}
if (unlikely(!var42)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1972);
show_backtrace(1);
}
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype46 = type_array__Arraykernel__Object.color;
idtype47 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var45 = 0;
} else {
if(cltype46 >= var_listnode16->type->table_size) {
var45 = 0;
} else {
var45 = var_listnode16->type->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1974);
show_backtrace(1);
}
{
var48 = parser_work__ReduceAction__concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var48;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype50 = type_nullable_parser_nodes__TKwend.color;
idtype51 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var49 = 1;
} else {
if(cltype50 >= var_tkwendnode19->type->table_size) {
var49 = 0;
} else {
var49 = var_tkwendnode19->type->type_table[cltype50] == idtype51;
}
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 1977);
show_backtrace(1);
}
var52 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
{
parser_prod__AStdClassdef__init_astdclassdef(var52, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var52:AStdClassdef>*/
}
var_pclassdefnode1 = var52;
var_node_list = var_pclassdefnode1;
var53 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction33> */
{
var54 = parser_work__Parser__go_to(var_p, var53);
}
{
parser_work__Parser__push(var_p, var54, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction33#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction33__action(val* self, val* p0) {
parser__ReduceAction33__action(self, p0); /* Direct call parser#ReduceAction33#action on <self:Object(ReduceAction33)>*/
RET_LABEL:;
}
/* method parser#ReduceAction34#action for (self: ReduceAction34, Parser) */
void parser__ReduceAction34__action(val* self, val* p0) {
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
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AStdClassdef */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2014);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2016);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2018);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2020);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2022);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode7->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2024);
show_backtrace(1);
}
{
var30 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode12->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode12->type->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2027);
show_backtrace(1);
}
{
var34 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode14->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode14->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2030);
show_backtrace(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
var40 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var39, var40, var_listnode11, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var38:AStdClassdef>*/
}
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction34> */
{
var42 = parser_work__Parser__go_to(var_p, var41);
}
{
parser_work__Parser__push(var_p, var42, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction34#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction34__action(val* self, val* p0) {
parser__ReduceAction34__action(self, p0); /* Direct call parser#ReduceAction34#action on <self:Object(ReduceAction34)>*/
RET_LABEL:;
}
/* method parser#ReduceAction35#action for (self: ReduceAction35, Parser) */
void parser__ReduceAction35__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var37 /* : AAnnotations */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode17 /* var listnode17: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AStdClassdef */;
val* var49 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var50 /* : Int */;
long var51 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode18 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2068);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2070);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2072);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2074);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2076);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2078);
show_backtrace(1);
}
{
var31 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var32); /* Direct call array#Array#init on <var32:Array[Object]>*/
}
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode12->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode12->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2082);
show_backtrace(1);
}
{
var36 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var36;
var37 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var37, var38, var39, var_listnode13, var40); /* Direct call parser_prod#AAnnotations#init_aannotations on <var37:AAnnotations>*/
}
var_pannotationsnode9 = var37;
var_listnode17 = var_nodearraylist9;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode17->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode17->type->type_table[cltype42] == idtype43;
}
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2091);
show_backtrace(1);
}
{
var44 = parser_work__ReduceAction__concat(self, var_listnode18, var_listnode17);
}
var_listnode18 = var44;
var_tkwendnode19 = var_nodearraylist11;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype46 = type_nullable_parser_nodes__TKwend.color;
idtype47 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_tkwendnode19->type->table_size) {
var45 = 0;
} else {
var45 = var_tkwendnode19->type->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2094);
show_backtrace(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var49 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var49, var_listnode16, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var48:AStdClassdef>*/
}
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction35> */
{
var51 = parser_work__Parser__go_to(var_p, var50);
}
{
parser_work__Parser__push(var_p, var51, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction35#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction35__action(val* self, val* p0) {
parser__ReduceAction35__action(self, p0); /* Direct call parser#ReduceAction35#action on <self:Object(ReduceAction35)>*/
RET_LABEL:;
}
/* method parser#ReduceAction36#action for (self: ReduceAction36, Parser) */
void parser__ReduceAction36__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : AStdClassdef */;
val* var43 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var44 /* : Int */;
long var45 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2132);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2134);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2136);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2138);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2140);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2142);
show_backtrace(1);
}
{
var31 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode10->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode10->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2145);
show_backtrace(1);
}
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode12->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode12->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2147);
show_backtrace(1);
}
{
var38 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var38;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype40 = type_nullable_parser_nodes__TKwend.color;
idtype41 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_tkwendnode14->type->table_size) {
var39 = 0;
} else {
var39 = var_tkwendnode14->type->type_table[cltype40] == idtype41;
}
}
if (unlikely(!var39)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2150);
show_backtrace(1);
}
var42 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var43 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var42, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var43, var_pexterncodeblocknode10, var_listnode11, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var42:AStdClassdef>*/
}
var_pclassdefnode1 = var42;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction36> */
{
var45 = parser_work__Parser__go_to(var_p, var44);
}
{
parser_work__Parser__push(var_p, var45, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction36#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction36__action(val* self, val* p0) {
parser__ReduceAction36__action(self, p0); /* Direct call parser#ReduceAction36#action on <self:Object(ReduceAction36)>*/
RET_LABEL:;
}
/* method parser#ReduceAction37#action for (self: ReduceAction37, Parser) */
void parser__ReduceAction37__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var38 /* : AAnnotations */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var_listnode17 /* var listnode17: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
val* var52 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var53 /* : Int */;
long var54 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode16 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2189);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2191);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2193);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2195);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2197);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2199);
show_backtrace(1);
}
{
var32 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var33); /* Direct call array#Array#init on <var33:Array[Object]>*/
}
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode12->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2203);
show_backtrace(1);
}
{
var37 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var38, var39, var40, var_listnode13, var41); /* Direct call parser_prod#AAnnotations#init_aannotations on <var38:AAnnotations>*/
}
var_pannotationsnode9 = var38;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype43 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype44 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_pexterncodeblocknode15->type->table_size) {
var42 = 0;
} else {
var42 = var_pexterncodeblocknode15->type->type_table[cltype43] == idtype44;
}
}
if (unlikely(!var42)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2212);
show_backtrace(1);
}
var_listnode17 = var_nodearraylist10;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype46 = type_array__Arraykernel__Object.color;
idtype47 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var45 = 0;
} else {
if(cltype46 >= var_listnode17->type->table_size) {
var45 = 0;
} else {
var45 = var_listnode17->type->type_table[cltype46] == idtype47;
}
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2214);
show_backtrace(1);
}
{
var48 = parser_work__ReduceAction__concat(self, var_listnode18, var_listnode17);
}
var_listnode18 = var48;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype50 = type_nullable_parser_nodes__TKwend.color;
idtype51 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var49 = 1;
} else {
if(cltype50 >= var_tkwendnode19->type->table_size) {
var49 = 0;
} else {
var49 = var_tkwendnode19->type->type_table[cltype50] == idtype51;
}
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2217);
show_backtrace(1);
}
var52 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
{
parser_prod__AStdClassdef__init_astdclassdef(var52, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var52:AStdClassdef>*/
}
var_pclassdefnode1 = var52;
var_node_list = var_pclassdefnode1;
var53 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction37> */
{
var54 = parser_work__Parser__go_to(var_p, var53);
}
{
parser_work__Parser__push(var_p, var54, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction37#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction37__action(val* self, val* p0) {
parser__ReduceAction37__action(self, p0); /* Direct call parser#ReduceAction37#action on <self:Object(ReduceAction37)>*/
RET_LABEL:;
}
/* method parser#ReduceAction38#action for (self: ReduceAction38, Parser) */
void parser__ReduceAction38__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode14 /* var listnode14: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
val* var45 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var46 /* : Int */;
long var47 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode14 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2255);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2257);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2259);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2261);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2263);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2265);
show_backtrace(1);
}
{
var31 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode11->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode11->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2268);
show_backtrace(1);
}
{
var35 = parser_work__ReduceAction__concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var35;
var_listnode13 = var_nodearraylist9;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode13->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode13->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2271);
show_backtrace(1);
}
{
var39 = parser_work__ReduceAction__concat(self, var_listnode14, var_listnode13);
}
var_listnode14 = var39;
var_tkwendnode15 = var_nodearraylist11;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode15->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode15->type->type_table[cltype41] == idtype42;
}
}
if (unlikely(!var40)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2274);
show_backtrace(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
var45 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var44, var45, var_listnode12, var_listnode14, var_tkwendnode15); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var43:AStdClassdef>*/
}
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction38> */
{
var47 = parser_work__Parser__go_to(var_p, var46);
}
{
parser_work__Parser__push(var_p, var47, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction38#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction38__action(val* self, val* p0) {
parser__ReduceAction38__action(self, p0); /* Direct call parser#ReduceAction38#action on <self:Object(ReduceAction38)>*/
RET_LABEL:;
}
/* method parser#ReduceAction39#action for (self: ReduceAction39, Parser) */
void parser__ReduceAction39__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode19 /* var listnode19: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var38 /* : AAnnotations */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var53 /* : AStdClassdef */;
val* var54 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var55 /* : Int */;
long var56 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode17 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode19 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2313);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2315);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2317);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2319);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2321);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2323);
show_backtrace(1);
}
{
var32 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var33); /* Direct call array#Array#init on <var33:Array[Object]>*/
}
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode12->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2327);
show_backtrace(1);
}
{
var37 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var38, var39, var40, var_listnode13, var41); /* Direct call parser_prod#AAnnotations#init_aannotations on <var38:AAnnotations>*/
}
var_pannotationsnode9 = var38;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype43 = type_array__Arraykernel__Object.color;
idtype44 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var_listnode16->type->table_size) {
var42 = 0;
} else {
var42 = var_listnode16->type->type_table[cltype43] == idtype44;
}
}
if (unlikely(!var42)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2336);
show_backtrace(1);
}
{
var45 = parser_work__ReduceAction__concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var45;
var_listnode18 = var_nodearraylist10;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype47 = type_array__Arraykernel__Object.color;
idtype48 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var46 = 0;
} else {
if(cltype47 >= var_listnode18->type->table_size) {
var46 = 0;
} else {
var46 = var_listnode18->type->type_table[cltype47] == idtype48;
}
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2339);
show_backtrace(1);
}
{
var49 = parser_work__ReduceAction__concat(self, var_listnode19, var_listnode18);
}
var_listnode19 = var49;
var_tkwendnode20 = var_nodearraylist12;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype51 = type_nullable_parser_nodes__TKwend.color;
idtype52 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var50 = 1;
} else {
if(cltype51 >= var_tkwendnode20->type->table_size) {
var50 = 0;
} else {
var50 = var_tkwendnode20->type->type_table[cltype51] == idtype52;
}
}
if (unlikely(!var50)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2342);
show_backtrace(1);
}
var53 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var54 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var53, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var54, var_listnode17, var_listnode19, var_tkwendnode20); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var53:AStdClassdef>*/
}
var_pclassdefnode1 = var53;
var_node_list = var_pclassdefnode1;
var55 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction39> */
{
var56 = parser_work__Parser__go_to(var_p, var55);
}
{
parser_work__Parser__push(var_p, var56, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction39#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction39__action(val* self, val* p0) {
parser__ReduceAction39__action(self, p0); /* Direct call parser#ReduceAction39#action on <self:Object(ReduceAction39)>*/
RET_LABEL:;
}
/* method parser#ReduceAction40#action for (self: ReduceAction40, Parser) */
void parser__ReduceAction40__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode14 /* var listnode14: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : AStdClassdef */;
val* var48 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var49 /* : Int */;
long var50 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode12 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode14 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2381);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2383);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2385);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2387);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2389);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2391);
show_backtrace(1);
}
{
var32 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype34 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype35 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_pexterncodeblocknode10->type->table_size) {
var33 = 0;
} else {
var33 = var_pexterncodeblocknode10->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2394);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode11->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode11->type->type_table[cltype37] == idtype38;
}
}
if (unlikely(!var36)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2396);
show_backtrace(1);
}
{
var39 = parser_work__ReduceAction__concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var39;
var_listnode13 = var_nodearraylist10;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype41 = type_array__Arraykernel__Object.color;
idtype42 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var40 = 0;
} else {
if(cltype41 >= var_listnode13->type->table_size) {
var40 = 0;
} else {
var40 = var_listnode13->type->type_table[cltype41] == idtype42;
}
}
if (unlikely(!var40)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2399);
show_backtrace(1);
}
{
var43 = parser_work__ReduceAction__concat(self, var_listnode14, var_listnode13);
}
var_listnode14 = var43;
var_tkwendnode15 = var_nodearraylist12;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype45 = type_nullable_parser_nodes__TKwend.color;
idtype46 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_tkwendnode15->type->table_size) {
var44 = 0;
} else {
var44 = var_tkwendnode15->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2402);
show_backtrace(1);
}
var47 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var48 = NULL;
{
parser_prod__AStdClassdef__init_astdclassdef(var47, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var48, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var47:AStdClassdef>*/
}
var_pclassdefnode1 = var47;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction40> */
{
var50 = parser_work__Parser__go_to(var_p, var49);
}
{
parser_work__Parser__push(var_p, var50, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction40#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction40__action(val* self, val* p0) {
parser__ReduceAction40__action(self, p0); /* Direct call parser#ReduceAction40#action on <self:Object(ReduceAction40)>*/
RET_LABEL:;
}
/* method parser#ReduceAction41#action for (self: ReduceAction41, Parser) */
void parser__ReduceAction41__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var14 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode19 /* var listnode19: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var39 /* : AAnnotations */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: nullable Object */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var53 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
val* var57 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var58 /* : Int */;
long var59 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist13 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist12 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var11;
{
var12 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var12;
{
var13 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode8 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode17 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var16); /* Direct call array#Array#init on <var16:Array[Object]>*/
}
var_listnode19 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var17 = 0;
} else {
var17 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2442);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable_parser_nodes__TKwredef.color;
idtype20 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwredefnode3->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwredefnode3->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2444);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable_parser_nodes__AVisibility.color;
idtype23 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pvisibilitynode4->type->table_size) {
var21 = 0;
} else {
var21 = var_pvisibilitynode4->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2446);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype25 = type_nullable_parser_nodes__AClasskind.color;
idtype26 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclasskindnode5->type->table_size) {
var24 = 0;
} else {
var24 = var_pclasskindnode5->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2448);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype28 = type_nullable_parser_nodes__TClassid.color;
idtype29 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tclassidnode6->type->table_size) {
var27 = 0;
} else {
var27 = var_tclassidnode6->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2450);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode7->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode7->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2452);
show_backtrace(1);
}
{
var33 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var33;
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var34); /* Direct call array#Array#init on <var34:Array[Object]>*/
}
var_listnode13 = var34;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode12->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode12->type->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2456);
show_backtrace(1);
}
{
var38 = parser_work__ReduceAction__concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var38;
var39 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var40 = NULL;
var41 = NULL;
var42 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var39, var40, var41, var_listnode13, var42); /* Direct call parser_prod#AAnnotations#init_aannotations on <var39:AAnnotations>*/
}
var_pannotationsnode9 = var39;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype44 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype45 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var43 = 1;
} else {
if(cltype44 >= var_pexterncodeblocknode15->type->table_size) {
var43 = 0;
} else {
var43 = var_pexterncodeblocknode15->type->type_table[cltype44] == idtype45;
}
}
if (unlikely(!var43)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2465);
show_backtrace(1);
}
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype47 = type_array__Arraykernel__Object.color;
idtype48 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var46 = 0;
} else {
if(cltype47 >= var_listnode16->type->table_size) {
var46 = 0;
} else {
var46 = var_listnode16->type->type_table[cltype47] == idtype48;
}
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2467);
show_backtrace(1);
}
{
var49 = parser_work__ReduceAction__concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var49;
var_listnode18 = var_nodearraylist11;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype51 = type_array__Arraykernel__Object.color;
idtype52 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var50 = 0;
} else {
if(cltype51 >= var_listnode18->type->table_size) {
var50 = 0;
} else {
var50 = var_listnode18->type->type_table[cltype51] == idtype52;
}
}
if (unlikely(!var50)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2470);
show_backtrace(1);
}
{
var53 = parser_work__ReduceAction__concat(self, var_listnode19, var_listnode18);
}
var_listnode19 = var53;
var_tkwendnode20 = var_nodearraylist13;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype55 = type_nullable_parser_nodes__TKwend.color;
idtype56 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var54 = 1;
} else {
if(cltype55 >= var_tkwendnode20->type->table_size) {
var54 = 0;
} else {
var54 = var_tkwendnode20->type->type_table[cltype55] == idtype56;
}
}
if (unlikely(!var54)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2473);
show_backtrace(1);
}
var57 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
{
parser_prod__AStdClassdef__init_astdclassdef(var57, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode19, var_tkwendnode20); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var57:AStdClassdef>*/
}
var_pclassdefnode1 = var57;
var_node_list = var_pclassdefnode1;
var58 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction41> */
{
var59 = parser_work__Parser__go_to(var_p, var58);
}
{
parser_work__Parser__push(var_p, var59, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction41#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction41__action(val* self, val* p0) {
parser__ReduceAction41__action(self, p0); /* Direct call parser#ReduceAction41#action on <self:Object(ReduceAction41)>*/
RET_LABEL:;
}
/* method parser#ReduceAction43#action for (self: ReduceAction43, Parser) */
void parser__ReduceAction43__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwredefnode1 /* var tkwredefnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwredefnode1 = var_nodearraylist1;
var_node_list = var_tkwredefnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction43> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction43#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction43__action(val* self, val* p0) {
parser__ReduceAction43__action(self, p0); /* Direct call parser#ReduceAction43#action on <self:Object(ReduceAction43)>*/
RET_LABEL:;
}
/* method parser#ReduceAction44#action for (self: ReduceAction44, Parser) */
void parser__ReduceAction44__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwclassnode2 /* var tkwclassnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AConcreteClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AConcreteClasskind */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwclassnode2 = var_nodearraylist1;
/* <var_tkwclassnode2:nullable Object> isa nullable TKwclass */
cltype = type_nullable_parser_nodes__TKwclass.color;
idtype = type_nullable_parser_nodes__TKwclass.id;
if(var_tkwclassnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwclassnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwclassnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2509);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AConcreteClasskind(&type_parser_nodes__AConcreteClasskind);
{
parser_prod__AConcreteClasskind__init_aconcreteclasskind(var3, var_tkwclassnode2); /* Direct call parser_prod#AConcreteClasskind#init_aconcreteclasskind on <var3:AConcreteClasskind>*/
}
var_pclasskindnode1 = var3;
var_node_list = var_pclasskindnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction44> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction44#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction44__action(val* self, val* p0) {
parser__ReduceAction44__action(self, p0); /* Direct call parser#ReduceAction44#action on <self:Object(ReduceAction44)>*/
RET_LABEL:;
}
/* method parser#ReduceAction45#action for (self: ReduceAction45, Parser) */
void parser__ReduceAction45__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabstractnode2 /* var tkwabstractnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwclassnode3 /* var tkwclassnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAbstractClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AAbstractClasskind */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable_parser_nodes__TKwabstract.color;
idtype = type_nullable_parser_nodes__TKwabstract.id;
if(var_tkwabstractnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwabstractnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwabstractnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2525);
show_backtrace(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype5 = type_nullable_parser_nodes__TKwclass.color;
idtype6 = type_nullable_parser_nodes__TKwclass.id;
if(var_tkwclassnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tkwclassnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwclassnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2527);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AAbstractClasskind(&type_parser_nodes__AAbstractClasskind);
{
parser_prod__AAbstractClasskind__init_aabstractclasskind(var7, var_tkwabstractnode2, var_tkwclassnode3); /* Direct call parser_prod#AAbstractClasskind#init_aabstractclasskind on <var7:AAbstractClasskind>*/
}
var_pclasskindnode1 = var7;
var_node_list = var_pclasskindnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction45> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction45#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction45__action(val* self, val* p0) {
parser__ReduceAction45__action(self, p0); /* Direct call parser#ReduceAction45#action on <self:Object(ReduceAction45)>*/
RET_LABEL:;
}
/* method parser#ReduceAction46#action for (self: ReduceAction46, Parser) */
void parser__ReduceAction46__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwinterfacenode2 /* var tkwinterfacenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AInterfaceClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AInterfaceClasskind */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwinterfacenode2 = var_nodearraylist1;
/* <var_tkwinterfacenode2:nullable Object> isa nullable TKwinterface */
cltype = type_nullable_parser_nodes__TKwinterface.color;
idtype = type_nullable_parser_nodes__TKwinterface.id;
if(var_tkwinterfacenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwinterfacenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwinterfacenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2543);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AInterfaceClasskind(&type_parser_nodes__AInterfaceClasskind);
{
parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(var3, var_tkwinterfacenode2); /* Direct call parser_prod#AInterfaceClasskind#init_ainterfaceclasskind on <var3:AInterfaceClasskind>*/
}
var_pclasskindnode1 = var3;
var_node_list = var_pclasskindnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction46> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction46#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction46__action(val* self, val* p0) {
parser__ReduceAction46__action(self, p0); /* Direct call parser#ReduceAction46#action on <self:Object(ReduceAction46)>*/
RET_LABEL:;
}
/* method parser#ReduceAction47#action for (self: ReduceAction47, Parser) */
void parser__ReduceAction47__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwenumnode2 /* var tkwenumnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AEnumClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AEnumClasskind */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwenumnode2 = var_nodearraylist1;
/* <var_tkwenumnode2:nullable Object> isa nullable TKwenum */
cltype = type_nullable_parser_nodes__TKwenum.color;
idtype = type_nullable_parser_nodes__TKwenum.id;
if(var_tkwenumnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwenumnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwenumnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2558);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AEnumClasskind(&type_parser_nodes__AEnumClasskind);
{
parser_prod__AEnumClasskind__init_aenumclasskind(var3, var_tkwenumnode2); /* Direct call parser_prod#AEnumClasskind#init_aenumclasskind on <var3:AEnumClasskind>*/
}
var_pclasskindnode1 = var3;
var_node_list = var_pclasskindnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction47> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction47#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction47__action(val* self, val* p0) {
parser__ReduceAction47__action(self, p0); /* Direct call parser#ReduceAction47#action on <self:Object(ReduceAction47)>*/
RET_LABEL:;
}
/* method parser#ReduceAction48#action for (self: ReduceAction48, Parser) */
void parser__ReduceAction48__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwexternnode2 /* var tkwexternnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwclassnode3 /* var tkwclassnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AExternClasskind */;
val* var_pclasskindnode1 /* var pclasskindnode1: nullable AExternClasskind */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable_parser_nodes__TKwextern.color;
idtype = type_nullable_parser_nodes__TKwextern.id;
if(var_tkwexternnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwexternnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwexternnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2574);
show_backtrace(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype5 = type_nullable_parser_nodes__TKwclass.color;
idtype6 = type_nullable_parser_nodes__TKwclass.id;
if(var_tkwclassnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tkwclassnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwclassnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2576);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AExternClasskind(&type_parser_nodes__AExternClasskind);
{
parser_prod__AExternClasskind__init_aexternclasskind(var7, var_tkwexternnode2, var_tkwclassnode3); /* Direct call parser_prod#AExternClasskind#init_aexternclasskind on <var7:AExternClasskind>*/
}
var_pclasskindnode1 = var7;
var_node_list = var_pclasskindnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction48> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction48#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction48__action(val* self, val* p0) {
parser__ReduceAction48__action(self, p0); /* Direct call parser#ReduceAction48#action on <self:Object(ReduceAction48)>*/
RET_LABEL:;
}
/* method parser#ReduceAction49#action for (self: ReduceAction49, Parser) */
void parser__ReduceAction49__action(val* self, val* p0) {
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
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode2 = var6;
var_pformaldefnode1 = var_nodearraylist3;
var7 = NULL;
if (var_pformaldefnode1 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int (*)(val*, val*))(var_pformaldefnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pformaldefnode1, var7) /* != on <var_pformaldefnode1:nullable Object>*/;
var8 = var9;
}
if (var8){
{
array__Array__add(var_listnode2, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction49> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction49#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction49__action(val* self, val* p0) {
parser__ReduceAction49__action(self, p0); /* Direct call parser#ReduceAction49#action on <self:Object(ReduceAction49)>*/
RET_LABEL:;
}
/* method parser#ReduceAction50#action for (self: ReduceAction50, Parser) */
void parser__ReduceAction50__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode3 = var7;
var_pformaldefnode1 = var_nodearraylist3;
var_listnode2 = var_nodearraylist4;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var8 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2618);
show_backtrace(1);
}
var9 = NULL;
if (var_pformaldefnode1 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int (*)(val*, val*))(var_pformaldefnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pformaldefnode1, var9) /* != on <var_pformaldefnode1:nullable Object>*/;
var10 = var11;
}
if (var10){
{
array__Array__add(var_listnode3, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var12 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var12;
var_node_list = var_listnode3;
var13 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction50> */
{
var14 = parser_work__Parser__go_to(var_p, var13);
}
{
parser_work__Parser__push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction50#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction50__action(val* self, val* p0) {
parser__ReduceAction50__action(self, p0); /* Direct call parser#ReduceAction50#action on <self:Object(ReduceAction50)>*/
RET_LABEL:;
}
/* method parser#ReduceAction51#action for (self: ReduceAction51, Parser) */
void parser__ReduceAction51__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode1 /* var listnode1: Array[Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode1 = var1;
var_node_list = var_listnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction51> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction51#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction51__action(val* self, val* p0) {
parser__ReduceAction51__action(self, p0); /* Direct call parser#ReduceAction51#action on <self:Object(ReduceAction51)>*/
RET_LABEL:;
}
/* method parser#ReduceAction52#action for (self: ReduceAction52, Parser) */
void parser__ReduceAction52__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var3;
var_pformaldefnode1 = var_nodearraylist3;
var_node_list = var_pformaldefnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction52> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction52#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction52__action(val* self, val* p0) {
parser__ReduceAction52__action(self, p0); /* Direct call parser#ReduceAction52#action on <self:Object(ReduceAction52)>*/
RET_LABEL:;
}
/* method parser#ReduceAction53#action for (self: ReduceAction53, Parser) */
void parser__ReduceAction53__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AFormaldef */;
val* var8 /* : null */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable AFormaldef */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tclassidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tclassidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2658);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable_parser_nodes__AType.color;
idtype6 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_ptypenode3->type->table_size) {
var4 = 0;
} else {
var4 = var_ptypenode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2660);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AFormaldef(&type_parser_nodes__AFormaldef);
var8 = NULL;
{
parser_prod__AFormaldef__init_aformaldef(var7, var_tclassidnode2, var_ptypenode3, var8); /* Direct call parser_prod#AFormaldef#init_aformaldef on <var7:AFormaldef>*/
}
var_pformaldefnode1 = var7;
var_node_list = var_pformaldefnode1;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction53> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction53#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction53__action(val* self, val* p0) {
parser__ReduceAction53__action(self, p0); /* Direct call parser#ReduceAction53#action on <self:Object(ReduceAction53)>*/
RET_LABEL:;
}
/* method parser#ReduceAction54#action for (self: ReduceAction54, Parser) */
void parser__ReduceAction54__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode4 /* var pannotationsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AFormaldef */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable AFormaldef */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var3;
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tclassidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tclassidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2679);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable_parser_nodes__AType.color;
idtype7 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_ptypenode3->type->table_size) {
var5 = 0;
} else {
var5 = var_ptypenode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2681);
show_backtrace(1);
}
var_pannotationsnode4 = var_nodearraylist2;
/* <var_pannotationsnode4:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable_parser_nodes__AAnnotations.color;
idtype10 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pannotationsnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pannotationsnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2683);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AFormaldef(&type_parser_nodes__AFormaldef);
{
parser_prod__AFormaldef__init_aformaldef(var11, var_tclassidnode2, var_ptypenode3, var_pannotationsnode4); /* Direct call parser_prod#AFormaldef#init_aformaldef on <var11:AFormaldef>*/
}
var_pformaldefnode1 = var11;
var_node_list = var_pformaldefnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction54> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction54#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction54__action(val* self, val* p0) {
parser__ReduceAction54__action(self, p0); /* Direct call parser#ReduceAction54#action on <self:Object(ReduceAction54)>*/
RET_LABEL:;
}
/* method parser#ReduceAction55#action for (self: ReduceAction55, Parser) */
void parser__ReduceAction55__action(val* self, val* p0) {
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
val* var_tkwsupernode2 /* var tkwsupernode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pannotationsnode4 /* var pannotationsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ASuperclass */;
val* var_psuperclassnode1 /* var psuperclassnode1: nullable ASuperclass */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var5;
var_tkwsupernode2 = var_nodearraylist2;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable_parser_nodes__TKwsuper.color;
idtype = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwsupernode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwsupernode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2704);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist4;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype8 = type_nullable_parser_nodes__AType.color;
idtype9 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_ptypenode3->type->table_size) {
var7 = 0;
} else {
var7 = var_ptypenode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2706);
show_backtrace(1);
}
var_pannotationsnode4 = var_nodearraylist5;
/* <var_pannotationsnode4:nullable Object> isa nullable AAnnotations */
cltype11 = type_nullable_parser_nodes__AAnnotations.color;
idtype12 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pannotationsnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pannotationsnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2708);
show_backtrace(1);
}
var13 = NEW_parser_nodes__ASuperclass(&type_parser_nodes__ASuperclass);
{
parser_prod__ASuperclass__init_asuperclass(var13, var_tkwsupernode2, var_ptypenode3, var_pannotationsnode4); /* Direct call parser_prod#ASuperclass#init_asuperclass on <var13:ASuperclass>*/
}
var_psuperclassnode1 = var13;
var_node_list = var_psuperclassnode1;
var14 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction55> */
{
var15 = parser_work__Parser__go_to(var_p, var14);
}
{
parser_work__Parser__push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction55#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction55__action(val* self, val* p0) {
parser__ReduceAction55__action(self, p0); /* Direct call parser#ReduceAction55#action on <self:Object(ReduceAction55)>*/
RET_LABEL:;
}
/* method parser#ReduceAction56#action for (self: ReduceAction56, Parser) */
void parser__ReduceAction56__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var_ppropdefnode1 = var_nodearraylist1;
var_node_list = var_ppropdefnode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction56> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction56#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction56__action(val* self, val* p0) {
parser__ReduceAction56__action(self, p0); /* Direct call parser#ReduceAction56#action on <self:Object(ReduceAction56)>*/
RET_LABEL:;
}
/* method parser#ReduceAction57#action for (self: ReduceAction57, Parser) */
void parser__ReduceAction57__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AConcreteMethPropdef */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteMethPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2745);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable_parser_nodes__TKwredef.color;
idtype13 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwredefnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwredefnode3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2747);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode4->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2749);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable_parser_nodes__TKwmeth.color;
idtype19 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwmethnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwmethnode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2751);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype21 = type_nullable_parser_nodes__AMethid.color;
idtype22 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pmethidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_pmethidnode6->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2753);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype24 = type_nullable_parser_nodes__ASignature.color;
idtype25 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_psignaturenode7->type->table_size) {
var23 = 0;
} else {
var23 = var_psignaturenode7->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2755);
show_backtrace(1);
}
var_pexprnode9 = var_nodearraylist8;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode9->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2757);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AConcreteMethPropdef(&type_parser_nodes__AConcreteMethPropdef);
var30 = NULL;
{
parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var30, var_pexprnode9); /* Direct call parser_prod#AConcreteMethPropdef#init_aconcretemethpropdef on <var29:AConcreteMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction57> */
{
var32 = parser_work__Parser__go_to(var_p, var31);
}
{
parser_work__Parser__push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction57#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction57__action(val* self, val* p0) {
parser__ReduceAction57__action(self, p0); /* Direct call parser#ReduceAction57#action on <self:Object(ReduceAction57)>*/
RET_LABEL:;
}
/* method parser#ReduceAction58#action for (self: ReduceAction58, Parser) */
void parser__ReduceAction58__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AConcreteMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteMethPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var10;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2788);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable_parser_nodes__TKwredef.color;
idtype14 = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2790);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2792);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype19 = type_nullable_parser_nodes__TKwmeth.color;
idtype20 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwmethnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwmethnode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2794);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype22 = type_nullable_parser_nodes__AMethid.color;
idtype23 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pmethidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_pmethidnode6->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2796);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype25 = type_nullable_parser_nodes__ASignature.color;
idtype26 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_psignaturenode7->type->table_size) {
var24 = 0;
} else {
var24 = var_psignaturenode7->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2798);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode8->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode8->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2800);
show_backtrace(1);
}
var_pexprnode9 = var_nodearraylist9;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode9->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode9->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2802);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AConcreteMethPropdef(&type_parser_nodes__AConcreteMethPropdef);
{
parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9); /* Direct call parser_prod#AConcreteMethPropdef#init_aconcretemethpropdef on <var33:AConcreteMethPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction58> */
{
var35 = parser_work__Parser__go_to(var_p, var34);
}
{
parser_work__Parser__push(var_p, var35, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction58#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction58__action(val* self, val* p0) {
parser__ReduceAction58__action(self, p0); /* Direct call parser#ReduceAction58#action on <self:Object(ReduceAction58)>*/
RET_LABEL:;
}
/* method parser#ReduceAction59#action for (self: ReduceAction59, Parser) */
void parser__ReduceAction59__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ADeferredMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ADeferredMethPropdef */;
long var28 /* : Int */;
long var29 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2830);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable_parser_nodes__TKwredef.color;
idtype11 = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2832);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable_parser_nodes__AVisibility.color;
idtype14 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2834);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype16 = type_nullable_parser_nodes__TKwmeth.color;
idtype17 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwmethnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwmethnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2836);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype19 = type_nullable_parser_nodes__AMethid.color;
idtype20 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pmethidnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pmethidnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2838);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype22 = type_nullable_parser_nodes__ASignature.color;
idtype23 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_psignaturenode7->type->table_size) {
var21 = 0;
} else {
var21 = var_psignaturenode7->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2840);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable_parser_nodes__AAnnotations.color;
idtype26 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pannotationsnode8->type->table_size) {
var24 = 0;
} else {
var24 = var_pannotationsnode8->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2842);
show_backtrace(1);
}
var27 = NEW_parser_nodes__ADeferredMethPropdef(&type_parser_nodes__ADeferredMethPropdef);
{
parser_prod__ADeferredMethPropdef__init_adeferredmethpropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8); /* Direct call parser_prod#ADeferredMethPropdef#init_adeferredmethpropdef on <var27:ADeferredMethPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction59> */
{
var29 = parser_work__Parser__go_to(var_p, var28);
}
{
parser_work__Parser__push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction59#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction59__action(val* self, val* p0) {
parser__ReduceAction59__action(self, p0); /* Direct call parser#ReduceAction59#action on <self:Object(ReduceAction59)>*/
RET_LABEL:;
}
/* method parser#ReduceAction60#action for (self: ReduceAction60, Parser) */
void parser__ReduceAction60__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : ADeferredMethPropdef */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ADeferredMethPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2870);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2872);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2874);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable_parser_nodes__TKwmeth.color;
idtype18 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwmethnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwmethnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2876);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype20 = type_nullable_parser_nodes__AMethid.color;
idtype21 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmethidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pmethidnode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2878);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype23 = type_nullable_parser_nodes__ASignature.color;
idtype24 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_psignaturenode7->type->table_size) {
var22 = 0;
} else {
var22 = var_psignaturenode7->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2880);
show_backtrace(1);
}
var25 = NEW_parser_nodes__ADeferredMethPropdef(&type_parser_nodes__ADeferredMethPropdef);
var26 = NULL;
{
parser_prod__ADeferredMethPropdef__init_adeferredmethpropdef(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var26); /* Direct call parser_prod#ADeferredMethPropdef#init_adeferredmethpropdef on <var25:ADeferredMethPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction60> */
{
var28 = parser_work__Parser__go_to(var_p, var27);
}
{
parser_work__Parser__push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction60#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction60__action(val* self, val* p0) {
parser__ReduceAction60__action(self, p0); /* Direct call parser#ReduceAction60#action on <self:Object(ReduceAction60)>*/
RET_LABEL:;
}
/* method parser#ReduceAction61#action for (self: ReduceAction61, Parser) */
void parser__ReduceAction61__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AInternMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AInternMethPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2908);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2910);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2912);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable_parser_nodes__TKwmeth.color;
idtype18 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwmethnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwmethnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2914);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype20 = type_nullable_parser_nodes__AMethid.color;
idtype21 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmethidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pmethidnode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2916);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype23 = type_nullable_parser_nodes__ASignature.color;
idtype24 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_psignaturenode7->type->table_size) {
var22 = 0;
} else {
var22 = var_psignaturenode7->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2918);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AInternMethPropdef(&type_parser_nodes__AInternMethPropdef);
{
parser_prod__AInternMethPropdef__init_ainternmethpropdef(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7); /* Direct call parser_prod#AInternMethPropdef#init_ainternmethpropdef on <var25:AInternMethPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction61> */
{
var27 = parser_work__Parser__go_to(var_p, var26);
}
{
parser_work__Parser__push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction61#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction61__action(val* self, val* p0) {
parser__ReduceAction61__action(self, p0); /* Direct call parser#ReduceAction61#action on <self:Object(ReduceAction61)>*/
RET_LABEL:;
}
/* method parser#ReduceAction62#action for (self: ReduceAction62, Parser) */
void parser__ReduceAction62__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AInternNewPropdef */;
val* var22 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AInternNewPropdef */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2944);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable_parser_nodes__TKwredef.color;
idtype11 = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2946);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable_parser_nodes__AVisibility.color;
idtype14 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2948);
show_backtrace(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable_parser_nodes__TKwnew.color;
idtype17 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnewnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnewnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2950);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype19 = type_nullable_parser_nodes__ASignature.color;
idtype20 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_psignaturenode7->type->table_size) {
var18 = 0;
} else {
var18 = var_psignaturenode7->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2952);
show_backtrace(1);
}
var21 = NEW_parser_nodes__AInternNewPropdef(&type_parser_nodes__AInternNewPropdef);
var22 = NULL;
{
parser_prod__AInternNewPropdef__init_ainternnewpropdef(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var22, var_psignaturenode7); /* Direct call parser_prod#AInternNewPropdef#init_ainternnewpropdef on <var21:AInternNewPropdef>*/
}
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var23 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction62> */
{
var24 = parser_work__Parser__go_to(var_p, var23);
}
{
parser_work__Parser__push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction62#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction62__action(val* self, val* p0) {
parser__ReduceAction62__action(self, p0); /* Direct call parser#ReduceAction62#action on <self:Object(ReduceAction62)>*/
RET_LABEL:;
}
/* method parser#ReduceAction63#action for (self: ReduceAction63, Parser) */
void parser__ReduceAction63__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AInternNewPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AInternNewPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2979);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2981);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2983);
show_backtrace(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable_parser_nodes__TKwnew.color;
idtype18 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnewnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnewnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2985);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype20 = type_nullable_parser_nodes__AMethid.color;
idtype21 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmethidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pmethidnode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2987);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype23 = type_nullable_parser_nodes__ASignature.color;
idtype24 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_psignaturenode7->type->table_size) {
var22 = 0;
} else {
var22 = var_psignaturenode7->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 2989);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AInternNewPropdef(&type_parser_nodes__AInternNewPropdef);
{
parser_prod__AInternNewPropdef__init_ainternnewpropdef(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7); /* Direct call parser_prod#AInternNewPropdef#init_ainternnewpropdef on <var25:AInternNewPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction63> */
{
var27 = parser_work__Parser__go_to(var_p, var26);
}
{
parser_work__Parser__push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction63#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction63__action(val* self, val* p0) {
parser__ReduceAction63__action(self, p0); /* Direct call parser#ReduceAction63#action on <self:Object(ReduceAction63)>*/
RET_LABEL:;
}
/* method parser#ReduceAction64#action for (self: ReduceAction64, Parser) */
void parser__ReduceAction64__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tstringnode9 /* var tstringnode9: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pexterncallsnode10 /* var pexterncallsnode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var_pexterncodeblocknode11 /* var pexterncodeblocknode11: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : AExternMethPropdef */;
val* var38 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
long var39 /* : Int */;
long var40 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist11 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist10 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var9;
{
var10 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var10;
{
var11 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var11;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3019);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype14 = type_nullable_parser_nodes__TKwredef.color;
idtype15 = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3021);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3023);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype20 = type_nullable_parser_nodes__TKwmeth.color;
idtype21 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwmethnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwmethnode5->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3025);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype23 = type_nullable_parser_nodes__AMethid.color;
idtype24 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pmethidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_pmethidnode6->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3027);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype26 = type_nullable_parser_nodes__ASignature.color;
idtype27 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_psignaturenode7->type->table_size) {
var25 = 0;
} else {
var25 = var_psignaturenode7->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3029);
show_backtrace(1);
}
var_tstringnode9 = var_nodearraylist9;
/* <var_tstringnode9:nullable Object> isa nullable TString */
cltype29 = type_nullable_parser_nodes__TString.color;
idtype30 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode9 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tstringnode9->type->table_size) {
var28 = 0;
} else {
var28 = var_tstringnode9->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3031);
show_backtrace(1);
}
var_pexterncallsnode10 = var_nodearraylist10;
/* <var_pexterncallsnode10:nullable Object> isa nullable AExternCalls */
cltype32 = type_nullable_parser_nodes__AExternCalls.color;
idtype33 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode10 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_pexterncallsnode10->type->table_size) {
var31 = 0;
} else {
var31 = var_pexterncallsnode10->type->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3033);
show_backtrace(1);
}
var_pexterncodeblocknode11 = var_nodearraylist11;
/* <var_pexterncodeblocknode11:nullable Object> isa nullable AExternCodeBlock */
cltype35 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype36 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode11 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_pexterncodeblocknode11->type->table_size) {
var34 = 0;
} else {
var34 = var_pexterncodeblocknode11->type->type_table[cltype35] == idtype36;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3035);
show_backtrace(1);
}
var37 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var38 = NULL;
{
parser_prod__AExternMethPropdef__init_aexternmethpropdef(var37, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var38, var_tstringnode9, var_pexterncallsnode10, var_pexterncodeblocknode11); /* Direct call parser_prod#AExternMethPropdef#init_aexternmethpropdef on <var37:AExternMethPropdef>*/
}
var_ppropdefnode1 = var37;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction64> */
{
var40 = parser_work__Parser__go_to(var_p, var39);
}
{
parser_work__Parser__push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction64#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction64__action(val* self, val* p0) {
parser__ReduceAction64__action(self, p0); /* Direct call parser#ReduceAction64#action on <self:Object(ReduceAction64)>*/
RET_LABEL:;
}
/* method parser#ReduceAction65#action for (self: ReduceAction65, Parser) */
void parser__ReduceAction65__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexterncallsnode10 /* var pexterncallsnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode11 /* var pexterncodeblocknode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AExternMethPropdef */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3066);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3068);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3070);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable_parser_nodes__TKwmeth.color;
idtype18 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwmethnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwmethnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3072);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype20 = type_nullable_parser_nodes__AMethid.color;
idtype21 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmethidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pmethidnode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3074);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype23 = type_nullable_parser_nodes__ASignature.color;
idtype24 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_psignaturenode7->type->table_size) {
var22 = 0;
} else {
var22 = var_psignaturenode7->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3076);
show_backtrace(1);
}
var_pexterncallsnode10 = var_nodearraylist7;
/* <var_pexterncallsnode10:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable_parser_nodes__AExternCalls.color;
idtype27 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexterncallsnode10->type->table_size) {
var25 = 0;
} else {
var25 = var_pexterncallsnode10->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3078);
show_backtrace(1);
}
var_pexterncodeblocknode11 = var_nodearraylist8;
/* <var_pexterncodeblocknode11:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype30 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexterncodeblocknode11->type->table_size) {
var28 = 0;
} else {
var28 = var_pexterncodeblocknode11->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3080);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var32 = NULL;
var33 = NULL;
{
parser_prod__AExternMethPropdef__init_aexternmethpropdef(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var32, var33, var_pexterncallsnode10, var_pexterncodeblocknode11); /* Direct call parser_prod#AExternMethPropdef#init_aexternmethpropdef on <var31:AExternMethPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction65> */
{
var35 = parser_work__Parser__go_to(var_p, var34);
}
{
parser_work__Parser__push(var_p, var35, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction65#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction65__action(val* self, val* p0) {
parser__ReduceAction65__action(self, p0); /* Direct call parser#ReduceAction65#action on <self:Object(ReduceAction65)>*/
RET_LABEL:;
}
/* method parser#ReduceAction66#action for (self: ReduceAction66, Parser) */
void parser__ReduceAction66__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexterncallsnode10 /* var pexterncallsnode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexterncodeblocknode11 /* var pexterncodeblocknode11: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AExternMethPropdef */;
val* var36 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
long var37 /* : Int */;
long var38 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3112);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable_parser_nodes__TKwredef.color;
idtype13 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwredefnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwredefnode3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3114);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode4->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3116);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable_parser_nodes__TKwmeth.color;
idtype19 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwmethnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwmethnode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3118);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype21 = type_nullable_parser_nodes__AMethid.color;
idtype22 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pmethidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_pmethidnode6->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3120);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype24 = type_nullable_parser_nodes__ASignature.color;
idtype25 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_psignaturenode7->type->table_size) {
var23 = 0;
} else {
var23 = var_psignaturenode7->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3122);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable_parser_nodes__AAnnotations.color;
idtype28 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pannotationsnode8->type->table_size) {
var26 = 0;
} else {
var26 = var_pannotationsnode8->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3124);
show_backtrace(1);
}
var_pexterncallsnode10 = var_nodearraylist8;
/* <var_pexterncallsnode10:nullable Object> isa nullable AExternCalls */
cltype30 = type_nullable_parser_nodes__AExternCalls.color;
idtype31 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode10 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncallsnode10->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncallsnode10->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3126);
show_backtrace(1);
}
var_pexterncodeblocknode11 = var_nodearraylist9;
/* <var_pexterncodeblocknode11:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode11 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode11->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode11->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3128);
show_backtrace(1);
}
var35 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var36 = NULL;
{
parser_prod__AExternMethPropdef__init_aexternmethpropdef(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var36, var_pexterncallsnode10, var_pexterncodeblocknode11); /* Direct call parser_prod#AExternMethPropdef#init_aexternmethpropdef on <var35:AExternMethPropdef>*/
}
var_ppropdefnode1 = var35;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction66> */
{
var38 = parser_work__Parser__go_to(var_p, var37);
}
{
parser_work__Parser__push(var_p, var38, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction66#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction66__action(val* self, val* p0) {
parser__ReduceAction66__action(self, p0); /* Direct call parser#ReduceAction66#action on <self:Object(ReduceAction66)>*/
RET_LABEL:;
}
/* method parser#ReduceAction67#action for (self: ReduceAction67, Parser) */
void parser__ReduceAction67__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAttrPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3157);
show_backtrace(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable_parser_nodes__TKwredef.color;
idtype10 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwredefnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwredefnode5->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3159);
show_backtrace(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode6->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3161);
show_backtrace(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable_parser_nodes__TKwvar.color;
idtype16 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwvarnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwvarnode7->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3163);
show_backtrace(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype18 = type_nullable_parser_nodes__TAttrid.color;
idtype19 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tattridnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_tattridnode8->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3165);
show_backtrace(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype21 = type_nullable_parser_nodes__AType.color;
idtype22 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_ptypenode10->type->table_size) {
var20 = 0;
} else {
var20 = var_ptypenode10->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3167);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var23, var_pdocnode2, var24, var25, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var26, var_ptypenode10, var27, var28); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var23:AAttrPropdef>*/
}
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction67> */
{
var30 = parser_work__Parser__go_to(var_p, var29);
}
{
parser_work__Parser__push(var_p, var30, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction67#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction67__action(val* self, val* p0) {
parser__ReduceAction67__action(self, p0); /* Direct call parser#ReduceAction67#action on <self:Object(ReduceAction67)>*/
RET_LABEL:;
}
/* method parser#ReduceAction68#action for (self: ReduceAction68, Parser) */
void parser__ReduceAction68__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAttrPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3198);
show_backtrace(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype10 = type_nullable_parser_nodes__AAble.color;
idtype11 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pablenode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pablenode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3200);
show_backtrace(1);
}
var_tkwredefnode5 = var_nodearraylist3;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable_parser_nodes__TKwredef.color;
idtype14 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwredefnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwredefnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3202);
show_backtrace(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode6->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3204);
show_backtrace(1);
}
var_tkwvarnode7 = var_nodearraylist5;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable_parser_nodes__TKwvar.color;
idtype20 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwvarnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwvarnode7->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3206);
show_backtrace(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype22 = type_nullable_parser_nodes__TAttrid.color;
idtype23 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tattridnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_tattridnode8->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3208);
show_backtrace(1);
}
var_ptypenode10 = var_nodearraylist7;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype25 = type_nullable_parser_nodes__AType.color;
idtype26 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_ptypenode10->type->table_size) {
var24 = 0;
} else {
var24 = var_ptypenode10->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 3210);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var27, var_pdocnode2, var_pablenode3, var28, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var29, var_ptypenode10, var30, var31); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var27:AAttrPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction68> */
{
var33 = parser_work__Parser__go_to(var_p, var32);
}
{
parser_work__Parser__push(var_p, var33, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction68#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction68__action(val* self, val* p0) {
parser__ReduceAction68__action(self, p0); /* Direct call parser#ReduceAction68#action on <self:Object(ReduceAction68)>*/
RET_LABEL:;
}
