#include "nit__parser.sep.0.h"
/* method parser#ReduceAction0#action for (self: ReduceAction0, Parser) */
void nit__parser___nit__parser__ReduceAction0___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AModule */;
val* var13 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var_pclassdefnode5 = var_nodearraylist1;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype = type_nullable__nit__AClassdef.color;
idtype = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pclassdefnode5->type->table_size) {
var5 = 0;
} else {
var5 = var_pclassdefnode5->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1043);
show_backtrace(1);
}
var6 = NULL;
if (var_pclassdefnode5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode5,var6) on <var_pclassdefnode5:nullable Object(nullable AClassdef)> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var_pclassdefnode5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode5, var_other) /* == on <var_pclassdefnode5:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode6, var_pclassdefnode5); /* Direct call array#Array#add on <var_listnode6:Array[Object]>*/
}
} else {
}
var12 = NEW_nit__AModule(&type_nit__AModule);
var13 = NULL;
{
nit__parser_prod___AModule___init_amodule(var12, var13, var_listnode3, var_listnode4, var_listnode6); /* Direct call parser_prod#AModule#init_amodule on <var12:AModule>*/
}
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction0> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction1#action for (self: ReduceAction1, Parser) */
void nit__parser___nit__parser__ReduceAction1___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode3 = var3;
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1068);
show_backtrace(1);
}
var_pclassdefnode5 = var_nodearraylist2;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable__nit__AClassdef.color;
idtype9 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pclassdefnode5->type->table_size) {
var7 = 0;
} else {
var7 = var_pclassdefnode5->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1070);
show_backtrace(1);
}
var10 = NULL;
if (var_pclassdefnode5 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode5,var10) on <var_pclassdefnode5:nullable Object(nullable AClassdef)> */
var_other = var10;
{
var14 = ((short int (*)(val* self, val* p0))(var_pclassdefnode5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode5, var_other) /* == on <var_pclassdefnode5:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode6, var_pclassdefnode5); /* Direct call array#Array#add on <var_listnode6:Array[Object]>*/
}
} else {
}
var16 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var16, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode6); /* Direct call parser_prod#AModule#init_amodule on <var16:AModule>*/
}
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction2#action for (self: ReduceAction2, Parser) */
void nit__parser___nit__parser__ReduceAction2___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var18 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1095);
show_backtrace(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var7;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype9 = type_nullable__nit__AClassdef.color;
idtype10 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pclassdefnode6->type->table_size) {
var8 = 0;
} else {
var8 = var_pclassdefnode6->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1098);
show_backtrace(1);
}
var11 = NULL;
if (var_pclassdefnode6 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,var11) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other) /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var17 = NEW_nit__AModule(&type_nit__AModule);
var18 = NULL;
{
nit__parser_prod___AModule___init_amodule(var17, var18, var_listnode4, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var17:AModule>*/
}
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction2> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction3#action for (self: ReduceAction3, Parser) */
void nit__parser___nit__parser__ReduceAction3___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1124);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1126);
show_backtrace(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable__nit__AClassdef.color;
idtype14 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode6->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode6->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1129);
show_backtrace(1);
}
var15 = NULL;
if (var_pclassdefnode6 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,var15) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = var15;
{
var19 = ((short int (*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other) /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var21 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var21, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var21:AModule>*/
}
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction3> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction4#action for (self: ReduceAction4, Parser) */
void nit__parser___nit__parser__ReduceAction4___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var18 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1154);
show_backtrace(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var7;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype9 = type_nullable__nit__AClassdef.color;
idtype10 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pclassdefnode6->type->table_size) {
var8 = 0;
} else {
var8 = var_pclassdefnode6->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1157);
show_backtrace(1);
}
var11 = NULL;
if (var_pclassdefnode6 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,var11) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other) /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var17 = NEW_nit__AModule(&type_nit__AModule);
var18 = NULL;
{
nit__parser_prod___AModule___init_amodule(var17, var18, var_listnode3, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var17:AModule>*/
}
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction4> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction5#action for (self: ReduceAction5, Parser) */
void nit__parser___nit__parser__ReduceAction5___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1183);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1185);
show_backtrace(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var11;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable__nit__AClassdef.color;
idtype14 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode6->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode6->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1188);
show_backtrace(1);
}
var15 = NULL;
if (var_pclassdefnode6 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,var15) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = var15;
{
var19 = ((short int (*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other) /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var21 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var21, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var21:AModule>*/
}
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction5> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction6#action for (self: ReduceAction6, Parser) */
void nit__parser___nit__parser__ReduceAction6___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var23 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1214);
show_backtrace(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var8;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode5->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1217);
show_backtrace(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var12;
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype14 = type_nullable__nit__AClassdef.color;
idtype15 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pclassdefnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_pclassdefnode7->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1220);
show_backtrace(1);
}
var16 = NULL;
if (var_pclassdefnode7 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,var16) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = var16;
{
var20 = ((short int (*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other) /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var22 = NEW_nit__AModule(&type_nit__AModule);
var23 = NULL;
{
nit__parser_prod___AModule___init_amodule(var22, var23, var_listnode4, var_listnode6, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var22:AModule>*/
}
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction6> */
{
var25 = nit___nit__Parser___go_to(var_p, var24);
}
{
nit___nit__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction7#action for (self: ReduceAction7, Parser) */
void nit__parser___nit__parser__ReduceAction7___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode4 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode8 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1247);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1249);
show_backtrace(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode5->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1252);
show_backtrace(1);
}
{
var16 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var16;
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype18 = type_nullable__nit__AClassdef.color;
idtype19 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclassdefnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_pclassdefnode7->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1255);
show_backtrace(1);
}
var20 = NULL;
if (var_pclassdefnode7 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,var20) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = var20;
{
var24 = ((short int (*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other) /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/;
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var26 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var26, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var26:AModule>*/
}
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction7> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction8#action for (self: ReduceAction8, Parser) */
void nit__parser___nit__parser__ReduceAction8___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var18 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var4 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode4 = var4;
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode7 = var5;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode5->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode5->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1280);
show_backtrace(1);
}
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable__nit__AClassdef.color;
idtype9 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pclassdefnode6->type->table_size) {
var7 = 0;
} else {
var7 = var_pclassdefnode6->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1282);
show_backtrace(1);
}
{
var10 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode5);
}
var_listnode7 = var10;
var11 = NULL;
if (var_pclassdefnode6 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,var11) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other) /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var17 = NEW_nit__AModule(&type_nit__AModule);
var18 = NULL;
{
nit__parser_prod___AModule___init_amodule(var17, var18, var_listnode3, var_listnode4, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var17:AModule>*/
}
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction8> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction9#action for (self: ReduceAction9, Parser) */
void nit__parser___nit__parser__ReduceAction9___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1309);
show_backtrace(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode5->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1311);
show_backtrace(1);
}
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable__nit__AClassdef.color;
idtype13 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pclassdefnode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pclassdefnode6->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1313);
show_backtrace(1);
}
{
var14 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode7, var_listnode5);
}
var_listnode7 = var14;
var15 = NULL;
if (var_pclassdefnode6 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode6,var15) on <var_pclassdefnode6:nullable Object(nullable AClassdef)> */
var_other = var15;
{
var19 = ((short int (*)(val* self, val* p0))(var_pclassdefnode6->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode6, var_other) /* == on <var_pclassdefnode6:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode7, var_pclassdefnode6); /* Direct call array#Array#add on <var_listnode7:Array[Object]>*/
}
} else {
}
var21 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var21, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode7); /* Direct call parser_prod#AModule#init_amodule on <var21:AModule>*/
}
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction9> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction10#action for (self: ReduceAction10, Parser) */
void nit__parser___nit__parser__ReduceAction10___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var23 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1340);
show_backtrace(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var8;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode6->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1343);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable__nit__AClassdef.color;
idtype14 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode7->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1345);
show_backtrace(1);
}
{
var15 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var15;
var16 = NULL;
if (var_pclassdefnode7 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,var16) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = var16;
{
var20 = ((short int (*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other) /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var22 = NEW_nit__AModule(&type_nit__AModule);
var23 = NULL;
{
nit__parser_prod___AModule___init_amodule(var22, var23, var_listnode4, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var22:AModule>*/
}
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction10> */
{
var25 = nit___nit__Parser___go_to(var_p, var24);
}
{
nit___nit__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction11#action for (self: ReduceAction11, Parser) */
void nit__parser___nit__parser__ReduceAction11___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode4 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode8 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1373);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1375);
show_backtrace(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode6->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1378);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable__nit__AClassdef.color;
idtype18 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pclassdefnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_pclassdefnode7->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1380);
show_backtrace(1);
}
{
var19 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var19;
var20 = NULL;
if (var_pclassdefnode7 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,var20) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = var20;
{
var24 = ((short int (*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other) /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/;
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var26 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var26, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var26:AModule>*/
}
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction11> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction12#action for (self: ReduceAction12, Parser) */
void nit__parser___nit__parser__ReduceAction12___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var23 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode8 = var6;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1407);
show_backtrace(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var8;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode6->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1410);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable__nit__AClassdef.color;
idtype14 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode7->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1412);
show_backtrace(1);
}
{
var15 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var15;
var16 = NULL;
if (var_pclassdefnode7 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,var16) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = var16;
{
var20 = ((short int (*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other) /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var22 = NEW_nit__AModule(&type_nit__AModule);
var23 = NULL;
{
nit__parser_prod___AModule___init_amodule(var22, var23, var_listnode3, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var22:AModule>*/
}
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var24 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction12> */
{
var25 = nit___nit__Parser___go_to(var_p, var24);
}
{
nit___nit__Parser___push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction13#action for (self: ReduceAction13, Parser) */
void nit__parser___nit__parser__ReduceAction13___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode3 = var5;
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode8 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1440);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode4->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1442);
show_backtrace(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var12;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_standard__Array__standard__Object.color;
idtype15 = type_standard__Array__standard__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode6->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1445);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable__nit__AClassdef.color;
idtype18 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pclassdefnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_pclassdefnode7->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1447);
show_backtrace(1);
}
{
var19 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode6);
}
var_listnode8 = var19;
var20 = NULL;
if (var_pclassdefnode7 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode7,var20) on <var_pclassdefnode7:nullable Object(nullable AClassdef)> */
var_other = var20;
{
var24 = ((short int (*)(val* self, val* p0))(var_pclassdefnode7->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode7, var_other) /* == on <var_pclassdefnode7:nullable AClassdef(AClassdef)>*/;
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode8, var_pclassdefnode7); /* Direct call array#Array#add on <var_listnode8:Array[Object]>*/
}
} else {
}
var26 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var26, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode8); /* Direct call parser_prod#AModule#init_amodule on <var26:AModule>*/
}
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction13> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction14#action for (self: ReduceAction14, Parser) */
void nit__parser___nit__parser__ReduceAction14___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : AModule */;
val* var28 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode9 = var7;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1475);
show_backtrace(1);
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_standard__Array__standard__Object.color;
idtype12 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode5->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1478);
show_backtrace(1);
}
{
var13 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var13;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_standard__Array__standard__Object.color;
idtype16 = type_standard__Array__standard__Object.id;
if(var_listnode7 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode7->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1481);
show_backtrace(1);
}
var_pclassdefnode8 = var_nodearraylist4;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype18 = type_nullable__nit__AClassdef.color;
idtype19 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclassdefnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_pclassdefnode8->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1483);
show_backtrace(1);
}
{
var20 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode9, var_listnode7);
}
var_listnode9 = var20;
var21 = NULL;
if (var_pclassdefnode8 == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode8,var21) on <var_pclassdefnode8:nullable Object(nullable AClassdef)> */
var_other = var21;
{
var25 = ((short int (*)(val* self, val* p0))(var_pclassdefnode8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode8, var_other) /* == on <var_pclassdefnode8:nullable AClassdef(AClassdef)>*/;
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode9, var_pclassdefnode8); /* Direct call array#Array#add on <var_listnode9:Array[Object]>*/
}
} else {
}
var27 = NEW_nit__AModule(&type_nit__AModule);
var28 = NULL;
{
nit__parser_prod___AModule___init_amodule(var27, var28, var_listnode4, var_listnode6, var_listnode9); /* Direct call parser_prod#AModule#init_amodule on <var27:AModule>*/
}
var_pmodulenode1 = var27;
var_node_list = var_pmodulenode1;
var29 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction14> */
{
var30 = nit___nit__Parser___go_to(var_p, var29);
}
{
nit___nit__Parser___push(var_p, var30, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction15#action for (self: ReduceAction15, Parser) */
void nit__parser___nit__parser__ReduceAction15___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : Array[Object] */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var_listnode4 = var6;
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var8 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode9 = var8;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable__nit__AModuledecl.color;
idtype = type_nullable__nit__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1512);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype11 = type_standard__Array__standard__Object.color;
idtype12 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1514);
show_backtrace(1);
}
{
var13 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var13;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype15 = type_standard__Array__standard__Object.color;
idtype16 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode5->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1517);
show_backtrace(1);
}
{
var17 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var17;
var_listnode7 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1520);
show_backtrace(1);
}
var_pclassdefnode8 = var_nodearraylist5;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype22 = type_nullable__nit__AClassdef.color;
idtype23 = type_nullable__nit__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclassdefnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_pclassdefnode8->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1522);
show_backtrace(1);
}
{
var24 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode9, var_listnode7);
}
var_listnode9 = var24;
var25 = NULL;
if (var_pclassdefnode8 == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pclassdefnode8,var25) on <var_pclassdefnode8:nullable Object(nullable AClassdef)> */
var_other = var25;
{
var29 = ((short int (*)(val* self, val* p0))(var_pclassdefnode8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pclassdefnode8, var_other) /* == on <var_pclassdefnode8:nullable AClassdef(AClassdef)>*/;
}
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode9, var_pclassdefnode8); /* Direct call array#Array#add on <var_listnode9:Array[Object]>*/
}
} else {
}
var31 = NEW_nit__AModule(&type_nit__AModule);
{
nit__parser_prod___AModule___init_amodule(var31, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode9); /* Direct call parser_prod#AModule#init_amodule on <var31:AModule>*/
}
var_pmodulenode1 = var31;
var_node_list = var_pmodulenode1;
var32 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction15> */
{
var33 = nit___nit__Parser___go_to(var_p, var32);
}
{
nit___nit__Parser___push(var_p, var33, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction16#action for (self: ReduceAction16, Parser) */
void nit__parser___nit__parser__ReduceAction16___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwmodulenode5 /* var tkwmodulenode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmodulenamenode6 /* var pmodulenamenode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AModuledecl */;
val* var_pmoduledeclnode1 /* var pmoduledeclnode1: nullable AModuledecl */;
long var26 /* : Int */;
long var27 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1551);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1553);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1555);
show_backtrace(1);
}
var_tkwmodulenode5 = var_nodearraylist4;
/* <var_tkwmodulenode5:nullable Object> isa nullable TKwmodule */
cltype17 = type_nullable__nit__TKwmodule.color;
idtype18 = type_nullable__nit__TKwmodule.id;
if(var_tkwmodulenode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwmodulenode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwmodulenode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1557);
show_backtrace(1);
}
var_pmodulenamenode6 = var_nodearraylist6;
/* <var_pmodulenamenode6:nullable Object> isa nullable AModuleName */
cltype20 = type_nullable__nit__AModuleName.color;
idtype21 = type_nullable__nit__AModuleName.id;
if(var_pmodulenamenode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmodulenamenode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pmodulenamenode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1559);
show_backtrace(1);
}
var_pannotationsnode7 = var_nodearraylist7;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nit__AAnnotations.color;
idtype24 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pannotationsnode7->type->table_size) {
var22 = 0;
} else {
var22 = var_pannotationsnode7->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1561);
show_backtrace(1);
}
var25 = NEW_nit__AModuledecl(&type_nit__AModuledecl);
{
nit__parser_prod___AModuledecl___init_amoduledecl(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmodulenode5, var_pmodulenamenode6, var_pannotationsnode7); /* Direct call parser_prod#AModuledecl#init_amoduledecl on <var25:AModuledecl>*/
}
var_pmoduledeclnode1 = var25;
var_node_list = var_pmoduledeclnode1;
var26 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction16> */
{
var27 = nit___nit__Parser___go_to(var_p, var26);
}
{
nit___nit__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction17#action for (self: ReduceAction17, Parser) */
void nit__parser___nit__parser__ReduceAction17___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pmodulenamenode4 /* var pmodulenamenode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AStdImport */;
val* var_pimportnode1 /* var pimportnode1: nullable AStdImport */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_pvisibilitynode2 = var_nodearraylist3;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable__nit__AVisibility.color;
idtype = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pvisibilitynode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pvisibilitynode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1588);
show_backtrace(1);
}
var_tkwimportnode3 = var_nodearraylist4;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype11 = type_nullable__nit__TKwimport.color;
idtype12 = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwimportnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwimportnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1590);
show_backtrace(1);
}
var_pmodulenamenode4 = var_nodearraylist6;
/* <var_pmodulenamenode4:nullable Object> isa nullable AModuleName */
cltype14 = type_nullable__nit__AModuleName.color;
idtype15 = type_nullable__nit__AModuleName.id;
if(var_pmodulenamenode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pmodulenamenode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pmodulenamenode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1592);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist7;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1594);
show_backtrace(1);
}
var19 = NEW_nit__AStdImport(&type_nit__AStdImport);
{
nit__parser_prod___AStdImport___init_astdimport(var19, var_pvisibilitynode2, var_tkwimportnode3, var_pmodulenamenode4, var_pannotationsnode5); /* Direct call parser_prod#AStdImport#init_astdimport on <var19:AStdImport>*/
}
var_pimportnode1 = var19;
var_node_list = var_pimportnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction17> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction18#action for (self: ReduceAction18, Parser) */
void nit__parser___nit__parser__ReduceAction18___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pvisibilitynode2 = var_nodearraylist3;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable__nit__AVisibility.color;
idtype = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1618);
show_backtrace(1);
}
var_tkwimportnode3 = var_nodearraylist4;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype10 = type_nullable__nit__TKwimport.color;
idtype11 = type_nullable__nit__TKwimport.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1620);
show_backtrace(1);
}
var_tkwendnode4 = var_nodearraylist6;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype13 = type_nullable__nit__TKwend.color;
idtype14 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1622);
show_backtrace(1);
}
var15 = NEW_nit__ANoImport(&type_nit__ANoImport);
{
nit__parser_prod___ANoImport___init_anoimport(var15, var_pvisibilitynode2, var_tkwimportnode3, var_tkwendnode4); /* Direct call parser_prod#ANoImport#init_anoimport on <var15:ANoImport>*/
}
var_pimportnode1 = var15;
var_node_list = var_pimportnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction18> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction19#action for (self: ReduceAction19, Parser) */
void nit__parser___nit__parser__ReduceAction19___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pclassdefnode1 = var_nodearraylist1;
var_node_list = var_pclassdefnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction19> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction20#action for (self: ReduceAction20, Parser) */
void nit__parser___nit__parser__ReduceAction20___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var10 /* : ATopClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable ATopClassdef */;
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
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable__nit__APropdef.color;
idtype = type_nullable__nit__APropdef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1651);
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
var8 = ((short int (*)(val* self, val* p0))(var_ppropdefnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ppropdefnode2, var_other) /* == on <var_ppropdefnode2:nullable APropdef(APropdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var10 = NEW_nit__ATopClassdef(&type_nit__ATopClassdef);
{
nit__parser_prod___ATopClassdef___init_atopclassdef(var10, var_listnode3); /* Direct call parser_prod#ATopClassdef#init_atopclassdef on <var10:ATopClassdef>*/
}
var_pclassdefnode1 = var10;
var_node_list = var_pclassdefnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction20> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction21#action for (self: ReduceAction21, Parser) */
void nit__parser___nit__parser__ReduceAction21___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var10 /* : AMainClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AMainClassdef */;
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
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable__nit__APropdef.color;
idtype = type_nullable__nit__APropdef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1670);
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
var8 = ((short int (*)(val* self, val* p0))(var_ppropdefnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ppropdefnode2, var_other) /* == on <var_ppropdefnode2:nullable APropdef(APropdef)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var10 = NEW_nit__AMainClassdef(&type_nit__AMainClassdef);
{
nit__parser_prod___AMainClassdef___init_amainclassdef(var10, var_listnode3); /* Direct call parser_prod#AMainClassdef#init_amainclassdef on <var10:AMainClassdef>*/
}
var_pclassdefnode1 = var10;
var_node_list = var_pclassdefnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction21> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction22#action for (self: ReduceAction22, Parser) */
void nit__parser___nit__parser__ReduceAction22___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction22> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction23#action for (self: ReduceAction23, Parser) */
void nit__parser___nit__parser__ReduceAction23___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NULL;
var_node_list = var2;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction23> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction24#action for (self: ReduceAction24, Parser) */
void nit__parser___nit__parser__ReduceAction24___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1708);
show_backtrace(1);
}
var4 = NEW_nit__AMainMethPropdef(&type_nit__AMainMethPropdef);
var5 = NULL;
{
nit__parser_prod___AMainMethPropdef___init_amainmethpropdef(var4, var5, var_pexprnode3); /* Direct call parser_prod#AMainMethPropdef#init_amainmethpropdef on <var4:AMainMethPropdef>*/
}
var_ppropdefnode1 = var4;
var_node_list = var_ppropdefnode1;
var6 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction24> */
{
var7 = nit___nit__Parser___go_to(var_p, var6);
}
{
nit___nit__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction26#action for (self: ReduceAction26, Parser) */
void nit__parser___nit__parser__ReduceAction26___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Object]>*/
}
var_listnode11 = var11;
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode12 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1735);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype15 = type_nullable__nit__TKwredef.color;
idtype16 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1737);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable__nit__AVisibility.color;
idtype19 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1739);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable__nit__AClasskind.color;
idtype22 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1741);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable__nit__TClassid.color;
idtype25 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1743);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype27 = type_standard__Array__standard__Object.color;
idtype28 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1745);
show_backtrace(1);
}
{
var29 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var29;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype31 = type_nullable__nit__TKwend.color;
idtype32 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1748);
show_backtrace(1);
}
var33 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var34 = NULL;
var35 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var34, var35, var_listnode11, var_listnode12, var_tkwendnode13); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var33:AStdClassdef>*/
}
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction26> */
{
var37 = nit___nit__Parser___go_to(var_p, var36);
}
{
nit___nit__Parser___push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction27#action for (self: ReduceAction27, Parser) */
void nit__parser___nit__parser__ReduceAction27___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode16 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1785);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1787);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable__nit__AVisibility.color;
idtype20 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1789);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable__nit__AClasskind.color;
idtype23 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1791);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable__nit__TClassid.color;
idtype26 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1793);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_standard__Array__standard__Object.color;
idtype29 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1795);
show_backtrace(1);
}
{
var30 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var31 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var31); /* Direct call array#Array#init on <var31:Array[Object]>*/
}
var_listnode13 = var31;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype33 = type_standard__Array__standard__Object.color;
idtype34 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1799);
show_backtrace(1);
}
{
var35 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var35;
var36 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var37 = NULL;
var38 = NULL;
var39 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var36, var37, var38, var_listnode13, var39); /* Direct call parser_prod#AAnnotations#init_aannotations on <var36:AAnnotations>*/
}
var_pannotationsnode9 = var36;
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype41 = type_nullable__nit__TKwend.color;
idtype42 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1808);
show_backtrace(1);
}
var43 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var44 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var44, var_listnode16, var_listnode17, var_tkwendnode18); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var43:AStdClassdef>*/
}
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction27> */
{
var46 = nit___nit__Parser___go_to(var_p, var45);
}
{
nit___nit__Parser___push(var_p, var46, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction28#action for (self: ReduceAction28, Parser) */
void nit__parser___nit__parser__ReduceAction28___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode11 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1845);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1847);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable__nit__AVisibility.color;
idtype20 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1849);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable__nit__AClasskind.color;
idtype23 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1851);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable__nit__TClassid.color;
idtype26 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1853);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_standard__Array__standard__Object.color;
idtype29 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1855);
show_backtrace(1);
}
{
var30 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype32 = type_nullable__nit__AExternCodeBlock.color;
idtype33 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1858);
show_backtrace(1);
}
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype35 = type_nullable__nit__TKwend.color;
idtype36 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1860);
show_backtrace(1);
}
var37 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var38 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var37, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var38, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var37:AStdClassdef>*/
}
var_pclassdefnode1 = var37;
var_node_list = var_pclassdefnode1;
var39 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction28> */
{
var40 = nit___nit__Parser___go_to(var_p, var39);
}
{
nit___nit__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction29#action for (self: ReduceAction29, Parser) */
void nit__parser___nit__parser__ReduceAction29___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode16 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1898);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable__nit__TKwredef.color;
idtype18 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1900);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable__nit__AVisibility.color;
idtype21 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1902);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable__nit__AClasskind.color;
idtype24 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1904);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable__nit__TClassid.color;
idtype27 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1906);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_standard__Array__standard__Object.color;
idtype30 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1908);
show_backtrace(1);
}
{
var31 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var32); /* Direct call array#Array#init on <var32:Array[Object]>*/
}
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_standard__Array__standard__Object.color;
idtype35 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1912);
show_backtrace(1);
}
{
var36 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var36;
var37 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var37, var38, var39, var_listnode13, var40); /* Direct call parser_prod#AAnnotations#init_aannotations on <var37:AAnnotations>*/
}
var_pannotationsnode9 = var37;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype42 = type_nullable__nit__AExternCodeBlock.color;
idtype43 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1921);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype45 = type_nullable__nit__TKwend.color;
idtype46 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1923);
show_backtrace(1);
}
var47 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var47, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var47:AStdClassdef>*/
}
var_pclassdefnode1 = var47;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction29> */
{
var49 = nit___nit__Parser___go_to(var_p, var48);
}
{
nit___nit__Parser___push(var_p, var49, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction30#action for (self: ReduceAction30, Parser) */
void nit__parser___nit__parser__ReduceAction30___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode12 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1960);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1962);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable__nit__AVisibility.color;
idtype20 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1964);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable__nit__AClasskind.color;
idtype23 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1966);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable__nit__TClassid.color;
idtype26 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1968);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_standard__Array__standard__Object.color;
idtype29 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1970);
show_backtrace(1);
}
{
var30 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype32 = type_standard__Array__standard__Object.color;
idtype33 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1973);
show_backtrace(1);
}
{
var34 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nit__TKwend.color;
idtype37 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 1976);
show_backtrace(1);
}
var38 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var39 = NULL;
var40 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var39, var40, var_listnode12, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var38:AStdClassdef>*/
}
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction30> */
{
var42 = nit___nit__Parser___go_to(var_p, var41);
}
{
nit___nit__Parser___push(var_p, var42, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction31#action for (self: ReduceAction31, Parser) */
void nit__parser___nit__parser__ReduceAction31___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode17 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode18 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2014);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable__nit__TKwredef.color;
idtype18 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2016);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable__nit__AVisibility.color;
idtype21 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2018);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable__nit__AClasskind.color;
idtype24 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2020);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable__nit__TClassid.color;
idtype27 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2022);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_standard__Array__standard__Object.color;
idtype30 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2024);
show_backtrace(1);
}
{
var31 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var32); /* Direct call array#Array#init on <var32:Array[Object]>*/
}
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_standard__Array__standard__Object.color;
idtype35 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2028);
show_backtrace(1);
}
{
var36 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var36;
var37 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var37, var38, var39, var_listnode13, var40); /* Direct call parser_prod#AAnnotations#init_aannotations on <var37:AAnnotations>*/
}
var_pannotationsnode9 = var37;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype42 = type_standard__Array__standard__Object.color;
idtype43 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2037);
show_backtrace(1);
}
{
var44 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var44;
var_tkwendnode19 = var_nodearraylist11;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype46 = type_nullable__nit__TKwend.color;
idtype47 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2040);
show_backtrace(1);
}
var48 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var49 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var49, var_listnode17, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var48:AStdClassdef>*/
}
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction31> */
{
var51 = nit___nit__Parser___go_to(var_p, var50);
}
{
nit___nit__Parser___push(var_p, var51, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction32#action for (self: ReduceAction32, Parser) */
void nit__parser___nit__parser__ReduceAction32___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode12 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2078);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable__nit__TKwredef.color;
idtype18 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2080);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable__nit__AVisibility.color;
idtype21 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2082);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable__nit__AClasskind.color;
idtype24 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2084);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable__nit__TClassid.color;
idtype27 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2086);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_standard__Array__standard__Object.color;
idtype30 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2088);
show_backtrace(1);
}
{
var31 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable__nit__AExternCodeBlock.color;
idtype34 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2091);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype36 = type_standard__Array__standard__Object.color;
idtype37 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2093);
show_backtrace(1);
}
{
var38 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var38;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype40 = type_nullable__nit__TKwend.color;
idtype41 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2096);
show_backtrace(1);
}
var42 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var43 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var42, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var43, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var42:AStdClassdef>*/
}
var_pclassdefnode1 = var42;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction32> */
{
var45 = nit___nit__Parser___go_to(var_p, var44);
}
{
nit___nit__Parser___push(var_p, var45, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction33#action for (self: ReduceAction33, Parser) */
void nit__parser___nit__parser__ReduceAction33___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode17 = var14;
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2135);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable__nit__TKwredef.color;
idtype19 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2137);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable__nit__AVisibility.color;
idtype22 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2139);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable__nit__AClasskind.color;
idtype25 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2141);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable__nit__TClassid.color;
idtype28 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2143);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_standard__Array__standard__Object.color;
idtype31 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2145);
show_backtrace(1);
}
{
var32 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var33 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var33); /* Direct call array#Array#init on <var33:Array[Object]>*/
}
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_standard__Array__standard__Object.color;
idtype36 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2149);
show_backtrace(1);
}
{
var37 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var37;
var38 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var38, var39, var40, var_listnode13, var41); /* Direct call parser_prod#AAnnotations#init_aannotations on <var38:AAnnotations>*/
}
var_pannotationsnode9 = var38;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype43 = type_nullable__nit__AExternCodeBlock.color;
idtype44 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2158);
show_backtrace(1);
}
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype46 = type_standard__Array__standard__Object.color;
idtype47 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2160);
show_backtrace(1);
}
{
var48 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var48;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype50 = type_nullable__nit__TKwend.color;
idtype51 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2163);
show_backtrace(1);
}
var52 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var52, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var52:AStdClassdef>*/
}
var_pclassdefnode1 = var52;
var_node_list = var_pclassdefnode1;
var53 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction33> */
{
var54 = nit___nit__Parser___go_to(var_p, var53);
}
{
nit___nit__Parser___push(var_p, var54, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction34#action for (self: ReduceAction34, Parser) */
void nit__parser___nit__parser__ReduceAction34___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode11 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2200);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable__nit__TKwredef.color;
idtype17 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2202);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable__nit__AVisibility.color;
idtype20 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2204);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable__nit__AClasskind.color;
idtype23 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2206);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable__nit__TClassid.color;
idtype26 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2208);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_standard__Array__standard__Object.color;
idtype29 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2210);
show_backtrace(1);
}
{
var30 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var30;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype32 = type_standard__Array__standard__Object.color;
idtype33 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2213);
show_backtrace(1);
}
{
var34 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nit__TKwend.color;
idtype37 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2216);
show_backtrace(1);
}
var38 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var39 = NULL;
var40 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var39, var40, var_listnode11, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var38:AStdClassdef>*/
}
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction34> */
{
var42 = nit___nit__Parser___go_to(var_p, var41);
}
{
nit___nit__Parser___push(var_p, var42, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction35#action for (self: ReduceAction35, Parser) */
void nit__parser___nit__parser__ReduceAction35___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode16 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode18 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2254);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable__nit__TKwredef.color;
idtype18 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2256);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable__nit__AVisibility.color;
idtype21 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2258);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable__nit__AClasskind.color;
idtype24 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2260);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable__nit__TClassid.color;
idtype27 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2262);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_standard__Array__standard__Object.color;
idtype30 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2264);
show_backtrace(1);
}
{
var31 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var32); /* Direct call array#Array#init on <var32:Array[Object]>*/
}
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_standard__Array__standard__Object.color;
idtype35 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2268);
show_backtrace(1);
}
{
var36 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var36;
var37 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var37, var38, var39, var_listnode13, var40); /* Direct call parser_prod#AAnnotations#init_aannotations on <var37:AAnnotations>*/
}
var_pannotationsnode9 = var37;
var_listnode17 = var_nodearraylist9;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype42 = type_standard__Array__standard__Object.color;
idtype43 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2277);
show_backtrace(1);
}
{
var44 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode18, var_listnode17);
}
var_listnode18 = var44;
var_tkwendnode19 = var_nodearraylist11;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype46 = type_nullable__nit__TKwend.color;
idtype47 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2280);
show_backtrace(1);
}
var48 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var49 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var49, var_listnode16, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var48:AStdClassdef>*/
}
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction35> */
{
var51 = nit___nit__Parser___go_to(var_p, var50);
}
{
nit___nit__Parser___push(var_p, var51, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction36#action for (self: ReduceAction36, Parser) */
void nit__parser___nit__parser__ReduceAction36___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode11 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2318);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable__nit__TKwredef.color;
idtype18 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2320);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable__nit__AVisibility.color;
idtype21 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2322);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable__nit__AClasskind.color;
idtype24 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2324);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable__nit__TClassid.color;
idtype27 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2326);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_standard__Array__standard__Object.color;
idtype30 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2328);
show_backtrace(1);
}
{
var31 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable__nit__AExternCodeBlock.color;
idtype34 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2331);
show_backtrace(1);
}
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype36 = type_standard__Array__standard__Object.color;
idtype37 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2333);
show_backtrace(1);
}
{
var38 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var38;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype40 = type_nullable__nit__TKwend.color;
idtype41 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2336);
show_backtrace(1);
}
var42 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var43 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var42, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var43, var_pexterncodeblocknode10, var_listnode11, var_listnode13, var_tkwendnode14); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var42:AStdClassdef>*/
}
var_pclassdefnode1 = var42;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction36> */
{
var45 = nit___nit__Parser___go_to(var_p, var44);
}
{
nit___nit__Parser___push(var_p, var45, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction37#action for (self: ReduceAction37, Parser) */
void nit__parser___nit__parser__ReduceAction37___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode16 = var14;
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2375);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable__nit__TKwredef.color;
idtype19 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2377);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable__nit__AVisibility.color;
idtype22 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2379);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable__nit__AClasskind.color;
idtype25 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2381);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable__nit__TClassid.color;
idtype28 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2383);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_standard__Array__standard__Object.color;
idtype31 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2385);
show_backtrace(1);
}
{
var32 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var33 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var33); /* Direct call array#Array#init on <var33:Array[Object]>*/
}
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_standard__Array__standard__Object.color;
idtype36 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2389);
show_backtrace(1);
}
{
var37 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var37;
var38 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var38, var39, var40, var_listnode13, var41); /* Direct call parser_prod#AAnnotations#init_aannotations on <var38:AAnnotations>*/
}
var_pannotationsnode9 = var38;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype43 = type_nullable__nit__AExternCodeBlock.color;
idtype44 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2398);
show_backtrace(1);
}
var_listnode17 = var_nodearraylist10;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype46 = type_standard__Array__standard__Object.color;
idtype47 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2400);
show_backtrace(1);
}
{
var48 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode18, var_listnode17);
}
var_listnode18 = var48;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype50 = type_nullable__nit__TKwend.color;
idtype51 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2403);
show_backtrace(1);
}
var52 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var52, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode18, var_tkwendnode19); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var52:AStdClassdef>*/
}
var_pclassdefnode1 = var52;
var_node_list = var_pclassdefnode1;
var53 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction37> */
{
var54 = nit___nit__Parser___go_to(var_p, var53);
}
{
nit___nit__Parser___push(var_p, var54, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction38#action for (self: ReduceAction38, Parser) */
void nit__parser___nit__parser__ReduceAction38___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var12 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var12); /* Direct call array#Array#init on <var12:Array[Object]>*/
}
var_listnode8 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode12 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode14 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2441);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable__nit__TKwredef.color;
idtype18 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2443);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable__nit__AVisibility.color;
idtype21 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2445);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable__nit__AClasskind.color;
idtype24 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2447);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable__nit__TClassid.color;
idtype27 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2449);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_standard__Array__standard__Object.color;
idtype30 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2451);
show_backtrace(1);
}
{
var31 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var31;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype33 = type_standard__Array__standard__Object.color;
idtype34 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2454);
show_backtrace(1);
}
{
var35 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var35;
var_listnode13 = var_nodearraylist9;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype37 = type_standard__Array__standard__Object.color;
idtype38 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2457);
show_backtrace(1);
}
{
var39 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode14, var_listnode13);
}
var_listnode14 = var39;
var_tkwendnode15 = var_nodearraylist11;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype41 = type_nullable__nit__TKwend.color;
idtype42 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2460);
show_backtrace(1);
}
var43 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var44 = NULL;
var45 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var44, var45, var_listnode12, var_listnode14, var_tkwendnode15); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var43:AStdClassdef>*/
}
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction38> */
{
var47 = nit___nit__Parser___go_to(var_p, var46);
}
{
nit___nit__Parser___push(var_p, var47, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction39#action for (self: ReduceAction39, Parser) */
void nit__parser___nit__parser__ReduceAction39___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode17 = var14;
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode19 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2499);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable__nit__TKwredef.color;
idtype19 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2501);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable__nit__AVisibility.color;
idtype22 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2503);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable__nit__AClasskind.color;
idtype25 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2505);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable__nit__TClassid.color;
idtype28 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2507);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_standard__Array__standard__Object.color;
idtype31 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2509);
show_backtrace(1);
}
{
var32 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var33 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var33); /* Direct call array#Array#init on <var33:Array[Object]>*/
}
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_standard__Array__standard__Object.color;
idtype36 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2513);
show_backtrace(1);
}
{
var37 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var37;
var38 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var38, var39, var40, var_listnode13, var41); /* Direct call parser_prod#AAnnotations#init_aannotations on <var38:AAnnotations>*/
}
var_pannotationsnode9 = var38;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype43 = type_standard__Array__standard__Object.color;
idtype44 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2522);
show_backtrace(1);
}
{
var45 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var45;
var_listnode18 = var_nodearraylist10;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype47 = type_standard__Array__standard__Object.color;
idtype48 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2525);
show_backtrace(1);
}
{
var49 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode19, var_listnode18);
}
var_listnode19 = var49;
var_tkwendnode20 = var_nodearraylist12;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype51 = type_nullable__nit__TKwend.color;
idtype52 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2528);
show_backtrace(1);
}
var53 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var54 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var53, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var54, var_listnode17, var_listnode19, var_tkwendnode20); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var53:AStdClassdef>*/
}
var_pclassdefnode1 = var53;
var_node_list = var_pclassdefnode1;
var55 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction39> */
{
var56 = nit___nit__Parser___go_to(var_p, var55);
}
{
nit___nit__Parser___push(var_p, var56, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction40#action for (self: ReduceAction40, Parser) */
void nit__parser___nit__parser__ReduceAction40___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var11;
{
var12 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var12;
var13 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[Object]>*/
}
var_listnode8 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode12 = var14;
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode14 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2567);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable__nit__TKwredef.color;
idtype19 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2569);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable__nit__AVisibility.color;
idtype22 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2571);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable__nit__AClasskind.color;
idtype25 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2573);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable__nit__TClassid.color;
idtype28 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2575);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_standard__Array__standard__Object.color;
idtype31 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2577);
show_backtrace(1);
}
{
var32 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var32;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype34 = type_nullable__nit__AExternCodeBlock.color;
idtype35 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2580);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype37 = type_standard__Array__standard__Object.color;
idtype38 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2582);
show_backtrace(1);
}
{
var39 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode12, var_listnode11);
}
var_listnode12 = var39;
var_listnode13 = var_nodearraylist10;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype41 = type_standard__Array__standard__Object.color;
idtype42 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2585);
show_backtrace(1);
}
{
var43 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode14, var_listnode13);
}
var_listnode14 = var43;
var_tkwendnode15 = var_nodearraylist12;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype45 = type_nullable__nit__TKwend.color;
idtype46 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2588);
show_backtrace(1);
}
var47 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
var48 = NULL;
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var47, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var48, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var47:AStdClassdef>*/
}
var_pclassdefnode1 = var47;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction40> */
{
var50 = nit___nit__Parser___go_to(var_p, var49);
}
{
nit___nit__Parser___push(var_p, var50, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction41#action for (self: ReduceAction41, Parser) */
void nit__parser___nit__parser__ReduceAction41___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist13 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist12 = var2;
{
var3 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var3;
{
var4 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist10 = var4;
{
var5 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist9 = var5;
{
var6 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var6;
{
var7 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist7 = var7;
{
var8 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist6 = var8;
{
var9 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist5 = var9;
{
var10 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist4 = var10;
{
var11 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist3 = var11;
{
var12 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var12;
{
var13 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var13;
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var14); /* Direct call array#Array#init on <var14:Array[Object]>*/
}
var_listnode8 = var14;
var15 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var15); /* Direct call array#Array#init on <var15:Array[Object]>*/
}
var_listnode17 = var15;
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var16); /* Direct call array#Array#init on <var16:Array[Object]>*/
}
var_listnode19 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2628);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable__nit__TKwredef.color;
idtype20 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2630);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable__nit__AVisibility.color;
idtype23 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2632);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype25 = type_nullable__nit__AClasskind.color;
idtype26 = type_nullable__nit__AClasskind.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2634);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype28 = type_nullable__nit__TClassid.color;
idtype29 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2636);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype31 = type_standard__Array__standard__Object.color;
idtype32 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2638);
show_backtrace(1);
}
{
var33 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var33;
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var34); /* Direct call array#Array#init on <var34:Array[Object]>*/
}
var_listnode13 = var34;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype36 = type_standard__Array__standard__Object.color;
idtype37 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2642);
show_backtrace(1);
}
{
var38 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode13, var_listnode12);
}
var_listnode13 = var38;
var39 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
var40 = NULL;
var41 = NULL;
var42 = NULL;
{
nit__parser_prod___AAnnotations___init_aannotations(var39, var40, var41, var_listnode13, var42); /* Direct call parser_prod#AAnnotations#init_aannotations on <var39:AAnnotations>*/
}
var_pannotationsnode9 = var39;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype44 = type_nullable__nit__AExternCodeBlock.color;
idtype45 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2651);
show_backtrace(1);
}
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype47 = type_standard__Array__standard__Object.color;
idtype48 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2653);
show_backtrace(1);
}
{
var49 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode17, var_listnode16);
}
var_listnode17 = var49;
var_listnode18 = var_nodearraylist11;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype51 = type_standard__Array__standard__Object.color;
idtype52 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2656);
show_backtrace(1);
}
{
var53 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode19, var_listnode18);
}
var_listnode19 = var53;
var_tkwendnode20 = var_nodearraylist13;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype55 = type_nullable__nit__TKwend.color;
idtype56 = type_nullable__nit__TKwend.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2659);
show_backtrace(1);
}
var57 = NEW_nit__AStdClassdef(&type_nit__AStdClassdef);
{
nit__parser_prod___AStdClassdef___init_astdclassdef(var57, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode19, var_tkwendnode20); /* Direct call parser_prod#AStdClassdef#init_astdclassdef on <var57:AStdClassdef>*/
}
var_pclassdefnode1 = var57;
var_node_list = var_pclassdefnode1;
var58 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction41> */
{
var59 = nit___nit__Parser___go_to(var_p, var58);
}
{
nit___nit__Parser___push(var_p, var59, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction43#action for (self: ReduceAction43, Parser) */
void nit__parser___nit__parser__ReduceAction43___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwredefnode1 = var_nodearraylist1;
var_node_list = var_tkwredefnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction43> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction44#action for (self: ReduceAction44, Parser) */
void nit__parser___nit__parser__ReduceAction44___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwclassnode2 = var_nodearraylist1;
/* <var_tkwclassnode2:nullable Object> isa nullable TKwclass */
cltype = type_nullable__nit__TKwclass.color;
idtype = type_nullable__nit__TKwclass.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2695);
show_backtrace(1);
}
var3 = NEW_nit__AConcreteClasskind(&type_nit__AConcreteClasskind);
{
nit__parser_prod___AConcreteClasskind___init_aconcreteclasskind(var3, var_tkwclassnode2); /* Direct call parser_prod#AConcreteClasskind#init_aconcreteclasskind on <var3:AConcreteClasskind>*/
}
var_pclasskindnode1 = var3;
var_node_list = var_pclasskindnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction44> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction45#action for (self: ReduceAction45, Parser) */
void nit__parser___nit__parser__ReduceAction45___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nit__TKwabstract.color;
idtype = type_nullable__nit__TKwabstract.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2711);
show_backtrace(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype5 = type_nullable__nit__TKwclass.color;
idtype6 = type_nullable__nit__TKwclass.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2713);
show_backtrace(1);
}
var7 = NEW_nit__AAbstractClasskind(&type_nit__AAbstractClasskind);
{
nit__parser_prod___AAbstractClasskind___init_aabstractclasskind(var7, var_tkwabstractnode2, var_tkwclassnode3); /* Direct call parser_prod#AAbstractClasskind#init_aabstractclasskind on <var7:AAbstractClasskind>*/
}
var_pclasskindnode1 = var7;
var_node_list = var_pclasskindnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction45> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction46#action for (self: ReduceAction46, Parser) */
void nit__parser___nit__parser__ReduceAction46___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwinterfacenode2 = var_nodearraylist1;
/* <var_tkwinterfacenode2:nullable Object> isa nullable TKwinterface */
cltype = type_nullable__nit__TKwinterface.color;
idtype = type_nullable__nit__TKwinterface.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2729);
show_backtrace(1);
}
var3 = NEW_nit__AInterfaceClasskind(&type_nit__AInterfaceClasskind);
{
nit__parser_prod___AInterfaceClasskind___init_ainterfaceclasskind(var3, var_tkwinterfacenode2); /* Direct call parser_prod#AInterfaceClasskind#init_ainterfaceclasskind on <var3:AInterfaceClasskind>*/
}
var_pclasskindnode1 = var3;
var_node_list = var_pclasskindnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction46> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction47#action for (self: ReduceAction47, Parser) */
void nit__parser___nit__parser__ReduceAction47___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwenumnode2 = var_nodearraylist1;
/* <var_tkwenumnode2:nullable Object> isa nullable TKwenum */
cltype = type_nullable__nit__TKwenum.color;
idtype = type_nullable__nit__TKwenum.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2744);
show_backtrace(1);
}
var3 = NEW_nit__AEnumClasskind(&type_nit__AEnumClasskind);
{
nit__parser_prod___AEnumClasskind___init_aenumclasskind(var3, var_tkwenumnode2); /* Direct call parser_prod#AEnumClasskind#init_aenumclasskind on <var3:AEnumClasskind>*/
}
var_pclasskindnode1 = var3;
var_node_list = var_pclasskindnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction47> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction48#action for (self: ReduceAction48, Parser) */
void nit__parser___nit__parser__ReduceAction48___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nit__TKwextern.color;
idtype = type_nullable__nit__TKwextern.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2760);
show_backtrace(1);
}
var_tkwclassnode3 = var_nodearraylist2;
/* <var_tkwclassnode3:nullable Object> isa nullable TKwclass */
cltype5 = type_nullable__nit__TKwclass.color;
idtype6 = type_nullable__nit__TKwclass.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2762);
show_backtrace(1);
}
var7 = NEW_nit__AExternClasskind(&type_nit__AExternClasskind);
{
nit__parser_prod___AExternClasskind___init_aexternclasskind(var7, var_tkwexternnode2, var_tkwclassnode3); /* Direct call parser_prod#AExternClasskind#init_aexternclasskind on <var7:AExternClasskind>*/
}
var_pclasskindnode1 = var7;
var_node_list = var_pclasskindnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction48> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction49#action for (self: ReduceAction49, Parser) */
void nit__parser___nit__parser__ReduceAction49___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pformaldefnode1 = var_nodearraylist3;
var7 = NULL;
if (var_pformaldefnode1 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int (*)(val* self, val* p0))(var_pformaldefnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, var7) /* != on <var_pformaldefnode1:nullable Object>*/;
var8 = var9;
}
if (var8){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction49> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction50#action for (self: ReduceAction50, Parser) */
void nit__parser___nit__parser__ReduceAction50___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode3 = var7;
var_pformaldefnode1 = var_nodearraylist3;
var_listnode2 = var_nodearraylist4;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2804);
show_backtrace(1);
}
var9 = NULL;
if (var_pformaldefnode1 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int (*)(val* self, val* p0))(var_pformaldefnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pformaldefnode1, var9) /* != on <var_pformaldefnode1:nullable Object>*/;
var10 = var11;
}
if (var10){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var12;
var_node_list = var_listnode3;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction50> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction51#action for (self: ReduceAction51, Parser) */
void nit__parser___nit__parser__ReduceAction51___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode1 = var1;
var_node_list = var_listnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction51> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction52#action for (self: ReduceAction52, Parser) */
void nit__parser___nit__parser__ReduceAction52___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pformaldefnode1 = var_nodearraylist3;
var_node_list = var_pformaldefnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction52> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction53#action for (self: ReduceAction53, Parser) */
void nit__parser___nit__parser__ReduceAction53___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2844);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nit__AType.color;
idtype6 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2846);
show_backtrace(1);
}
var7 = NEW_nit__AFormaldef(&type_nit__AFormaldef);
var8 = NULL;
{
nit__parser_prod___AFormaldef___init_aformaldef(var7, var_tclassidnode2, var_ptypenode3, var8); /* Direct call parser_prod#AFormaldef#init_aformaldef on <var7:AFormaldef>*/
}
var_pformaldefnode1 = var7;
var_node_list = var_pformaldefnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction53> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction54#action for (self: ReduceAction54, Parser) */
void nit__parser___nit__parser__ReduceAction54___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2865);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable__nit__AType.color;
idtype7 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2867);
show_backtrace(1);
}
var_pannotationsnode4 = var_nodearraylist2;
/* <var_pannotationsnode4:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nit__AAnnotations.color;
idtype10 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2869);
show_backtrace(1);
}
var11 = NEW_nit__AFormaldef(&type_nit__AFormaldef);
{
nit__parser_prod___AFormaldef___init_aformaldef(var11, var_tclassidnode2, var_ptypenode3, var_pannotationsnode4); /* Direct call parser_prod#AFormaldef#init_aformaldef on <var11:AFormaldef>*/
}
var_pformaldefnode1 = var11;
var_node_list = var_pformaldefnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction54> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction55#action for (self: ReduceAction55, Parser) */
void nit__parser___nit__parser__ReduceAction55___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwsupernode2 = var_nodearraylist2;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable__nit__TKwsuper.color;
idtype = type_nullable__nit__TKwsuper.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2890);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist4;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype8 = type_nullable__nit__AType.color;
idtype9 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2892);
show_backtrace(1);
}
var_pannotationsnode4 = var_nodearraylist5;
/* <var_pannotationsnode4:nullable Object> isa nullable AAnnotations */
cltype11 = type_nullable__nit__AAnnotations.color;
idtype12 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2894);
show_backtrace(1);
}
var13 = NEW_nit__ASuperclass(&type_nit__ASuperclass);
{
nit__parser_prod___ASuperclass___init_asuperclass(var13, var_tkwsupernode2, var_ptypenode3, var_pannotationsnode4); /* Direct call parser_prod#ASuperclass#init_asuperclass on <var13:ASuperclass>*/
}
var_psuperclassnode1 = var13;
var_node_list = var_psuperclassnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction55> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction56#action for (self: ReduceAction56, Parser) */
void nit__parser___nit__parser__ReduceAction56___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_ppropdefnode1 = var_nodearraylist1;
var_node_list = var_ppropdefnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction56> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
