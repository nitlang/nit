#include "parser.sep.0.h"
/* method parser#ReduceAction362#action for (self: ReduceAction362, Parser) */
void parser__ReduceAction362__action(val* self, val* p0) {
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var4); /* Direct call array#Array#init on <var4:Array[Object]>*/
}
var_listnode3 = var4;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable_parser_nodes__TQuad.color;
idtype = type_nullable_parser_nodes__TQuad.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9230);
show_backtrace(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype7 = type_nullable_parser_nodes__TId.color;
idtype8 = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9232);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
{
parser_prod__AModuleName__init_amodulename(var9, var_tquadnode2, var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var9:AModuleName>*/
}
var_pmodulenamenode1 = var9;
var_node_list = var_pmodulenamenode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction362> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction362#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction362__action(val* self, val* p0) {
parser__ReduceAction362__action(self, p0); /* Direct call parser#ReduceAction362#action on <self:Object(ReduceAction362)>*/
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: ReduceAction363, Parser) */
void parser__ReduceAction363__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var5); /* Direct call array#Array#init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable_parser_nodes__TQuad.color;
idtype = type_nullable_parser_nodes__TQuad.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9253);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_array__Arraykernel__Object.color;
idtype9 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9255);
show_backtrace(1);
}
{
var10 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype12 = type_nullable_parser_nodes__TId.color;
idtype13 = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9258);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
{
parser_prod__AModuleName__init_amodulename(var14, var_tquadnode2, var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var14:AModuleName>*/
}
var_pmodulenamenode1 = var14;
var_node_list = var_pmodulenamenode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction363> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction363__action(val* self, val* p0) {
parser__ReduceAction363__action(self, p0); /* Direct call parser#ReduceAction363#action on <self:Object(ReduceAction363)>*/
RET_LABEL:;
}
/* method parser#ReduceAction364#action for (self: ReduceAction364, Parser) */
void parser__ReduceAction364__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9276);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AQualified(&type_parser_nodes__AQualified);
{
parser_prod__AQualified__init_aqualified(var4, var_listnode2, var_tclassidnode3); /* Direct call parser_prod#AQualified#init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode1 = var4;
var_node_list = var_pqualifiednode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction364> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction364#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction364__action(val* self, val* p0) {
parser__ReduceAction364__action(self, p0); /* Direct call parser#ReduceAction364#action on <self:Object(ReduceAction364)>*/
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: ReduceAction365, Parser) */
void parser__ReduceAction365__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9294);
show_backtrace(1);
}
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var5;
var_tclassidnode4 = var_nodearraylist2;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype7 = type_nullable_parser_nodes__TClassid.color;
idtype8 = type_nullable_parser_nodes__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9297);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AQualified(&type_parser_nodes__AQualified);
{
parser_prod__AQualified__init_aqualified(var9, var_listnode3, var_tclassidnode4); /* Direct call parser_prod#AQualified#init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode1 = var9;
var_node_list = var_pqualifiednode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction365> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction365__action(val* self, val* p0) {
parser__ReduceAction365__action(self, p0); /* Direct call parser#ReduceAction365#action on <self:Object(ReduceAction365)>*/
RET_LABEL:;
}
/* method parser#ReduceAction366#action for (self: ReduceAction366, Parser) */
void parser__ReduceAction366__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9314);
show_backtrace(1);
}
{
var4 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var5 = NEW_parser_nodes__AQualified(&type_parser_nodes__AQualified);
var6 = NULL;
{
parser_prod__AQualified__init_aqualified(var5, var_listnode3, var6); /* Direct call parser_prod#AQualified#init_aqualified on <var5:AQualified>*/
}
var_pqualifiednode1 = var5;
var_node_list = var_pqualifiednode1;
var7 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction366> */
{
var8 = parser_work__Parser__go_to(var_p, var7);
}
{
parser_work__Parser__push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction366#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction366__action(val* self, val* p0) {
parser__ReduceAction366__action(self, p0); /* Direct call parser#ReduceAction366#action on <self:Object(ReduceAction366)>*/
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: ReduceAction368, Parser) */
void parser__ReduceAction368__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction368> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction368__action(val* self, val* p0) {
parser__ReduceAction368__action(self, p0); /* Direct call parser#ReduceAction368#action on <self:Object(ReduceAction368)>*/
RET_LABEL:;
}
/* method parser#ReduceAction369#action for (self: ReduceAction369, Parser) */
void parser__ReduceAction369__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
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
var_tidnode1 = var_nodearraylist2;
var_node_list = var_tidnode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction369> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction369#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction369__action(val* self, val* p0) {
parser__ReduceAction369__action(self, p0); /* Direct call parser#ReduceAction369#action on <self:Object(ReduceAction369)>*/
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: ReduceAction370, Parser) */
void parser__ReduceAction370__action(val* self, val* p0) {
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
var_tidnode1 = var_nodearraylist3;
var_node_list = var_tidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction370> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction370__action(val* self, val* p0) {
parser__ReduceAction370__action(self, p0); /* Direct call parser#ReduceAction370#action on <self:Object(ReduceAction370)>*/
RET_LABEL:;
}
/* method parser#ReduceAction372#action for (self: ReduceAction372, Parser) */
void parser__ReduceAction372__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction372> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction372#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction372__action(val* self, val* p0) {
parser__ReduceAction372__action(self, p0); /* Direct call parser#ReduceAction372#action on <self:Object(ReduceAction372)>*/
RET_LABEL:;
}
/* method parser#ReduceAction373#action for (self: ReduceAction373, Parser) */
void parser__ReduceAction373__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var_tclassidnode1 = var_nodearraylist2;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction373> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction373#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction373__action(val* self, val* p0) {
parser__ReduceAction373__action(self, p0); /* Direct call parser#ReduceAction373#action on <self:Object(ReduceAction373)>*/
RET_LABEL:;
}
/* method parser#ReduceAction374#action for (self: ReduceAction374, Parser) */
void parser__ReduceAction374__action(val* self, val* p0) {
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
var_tclassidnode1 = var_nodearraylist3;
var_node_list = var_tclassidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction374> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction374#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction374__action(val* self, val* p0) {
parser__ReduceAction374__action(self, p0); /* Direct call parser#ReduceAction374#action on <self:Object(ReduceAction374)>*/
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: ReduceAction376, Parser) */
void parser__ReduceAction376__action(val* self, val* p0) {
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
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction376> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction376__action(val* self, val* p0) {
parser__ReduceAction376__action(self, p0); /* Direct call parser#ReduceAction376#action on <self:Object(ReduceAction376)>*/
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: ReduceAction377, Parser) */
void parser__ReduceAction377__action(val* self, val* p0) {
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
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction377> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction377__action(val* self, val* p0) {
parser__ReduceAction377__action(self, p0); /* Direct call parser#ReduceAction377#action on <self:Object(ReduceAction377)>*/
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: ReduceAction379, Parser) */
void parser__ReduceAction379__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwendnode1 = var_nodearraylist1;
var_node_list = var_tkwendnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction379> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction379__action(val* self, val* p0) {
parser__ReduceAction379__action(self, p0); /* Direct call parser#ReduceAction379#action on <self:Object(ReduceAction379)>*/
RET_LABEL:;
}
/* method parser#ReduceAction380#action for (self: ReduceAction380, Parser) */
void parser__ReduceAction380__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction380> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction380#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction380__action(val* self, val* p0) {
parser__ReduceAction380__action(self, p0); /* Direct call parser#ReduceAction380#action on <self:Object(ReduceAction380)>*/
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: ReduceAction382, Parser) */
void parser__ReduceAction382__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9450);
show_backtrace(1);
}
{
var4 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var5 = NEW_parser_nodes__ADoc(&type_parser_nodes__ADoc);
{
parser_prod__ADoc__init_adoc(var5, var_listnode3); /* Direct call parser_prod#ADoc#init_adoc on <var5:ADoc>*/
}
var_pdocnode1 = var5;
var_node_list = var_pdocnode1;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction382> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction382__action(val* self, val* p0) {
parser__ReduceAction382__action(self, p0); /* Direct call parser#ReduceAction382#action on <self:Object(ReduceAction382)>*/
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: ReduceAction383, Parser) */
void parser__ReduceAction383__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9468);
show_backtrace(1);
}
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var5;
var6 = NEW_parser_nodes__ADoc(&type_parser_nodes__ADoc);
{
parser_prod__ADoc__init_adoc(var6, var_listnode3); /* Direct call parser_prod#ADoc#init_adoc on <var6:ADoc>*/
}
var_pdocnode1 = var6;
var_node_list = var_pdocnode1;
var7 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction383> */
{
var8 = parser_work__Parser__go_to(var_p, var7);
}
{
parser_work__Parser__push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction383__action(val* self, val* p0) {
parser__ReduceAction383__action(self, p0); /* Direct call parser#ReduceAction383#action on <self:Object(ReduceAction383)>*/
RET_LABEL:;
}
/* method parser#ReduceAction386#action for (self: ReduceAction386, Parser) */
void parser__ReduceAction386__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pdocnode1 = var_nodearraylist1;
var_node_list = var_pdocnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction386> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction386#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction386__action(val* self, val* p0) {
parser__ReduceAction386__action(self, p0); /* Direct call parser#ReduceAction386#action on <self:Object(ReduceAction386)>*/
RET_LABEL:;
}
/* method parser#ReduceAction387#action for (self: ReduceAction387, Parser) */
void parser__ReduceAction387__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction387> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction387#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction387__action(val* self, val* p0) {
parser__ReduceAction387__action(self, p0); /* Direct call parser#ReduceAction387#action on <self:Object(ReduceAction387)>*/
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: ReduceAction388, Parser) */
void parser__ReduceAction388__action(val* self, val* p0) {
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
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction388> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction388__action(val* self, val* p0) {
parser__ReduceAction388__action(self, p0); /* Direct call parser#ReduceAction388#action on <self:Object(ReduceAction388)>*/
RET_LABEL:;
}
/* method parser#ReduceAction604#action for (self: ReduceAction604, Parser) */
void parser__ReduceAction604__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist4 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist3 = var2;
{
var3 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var3;
{
var4 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var4;
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9519);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9521);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype10 = type_nullable_parser_nodes__TAttrid.color;
idtype11 = type_nullable_parser_nodes__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9523);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
{
parser_prod__AIssetAttrExpr__init_aissetattrexpr(var12, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var12:AIssetAttrExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction604> */
{
var14 = parser_work__Parser__go_to(var_p, var13);
}
{
parser_work__Parser__push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction604#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction604__action(val* self, val* p0) {
parser__ReduceAction604__action(self, p0); /* Direct call parser#ReduceAction604#action on <self:Object(ReduceAction604)>*/
RET_LABEL:;
}
/* method parser#ReduceAction605#action for (self: ReduceAction605, Parser) */
void parser__ReduceAction605__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9542);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype6 = type_nullable_parser_nodes__TAttrid.color;
idtype7 = type_nullable_parser_nodes__TAttrid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9544);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
{
parser_prod__AAttrExpr__init_aattrexpr(var8, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var8:AAttrExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction605> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction605#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction605__action(val* self, val* p0) {
parser__ReduceAction605__action(self, p0); /* Direct call parser#ReduceAction605#action on <self:Object(ReduceAction605)>*/
RET_LABEL:;
}
/* method parser#ReduceAction606#action for (self: ReduceAction606, Parser) */
void parser__ReduceAction606__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9562);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype6 = type_nullable_parser_nodes__TId.color;
idtype7 = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9564);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable_parser_nodes__AExprs.color;
idtype10 = type_nullable_parser_nodes__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9566);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
parser_prod__ACallExpr__init_acallexpr(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction606> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction606#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction606__action(val* self, val* p0) {
parser__ReduceAction606__action(self, p0); /* Direct call parser#ReduceAction606#action on <self:Object(ReduceAction606)>*/
RET_LABEL:;
}
/* method parser#ReduceAction608#action for (self: ReduceAction608, Parser) */
void parser__ReduceAction608__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9585);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype6 = type_nullable_parser_nodes__TKwinit.color;
idtype7 = type_nullable_parser_nodes__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9587);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable_parser_nodes__AExprs.color;
idtype10 = type_nullable_parser_nodes__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9589);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
{
parser_prod__AInitExpr__init_ainitexpr(var11, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var11:AInitExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction608> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction608#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction608__action(val* self, val* p0) {
parser__ReduceAction608__action(self, p0); /* Direct call parser#ReduceAction608#action on <self:Object(ReduceAction608)>*/
RET_LABEL:;
}
/* method parser#ReduceAction624#action for (self: ReduceAction624, Parser) */
void parser__ReduceAction624__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction624> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction624#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction624__action(val* self, val* p0) {
parser__ReduceAction624__action(self, p0); /* Direct call parser#ReduceAction624#action on <self:Object(ReduceAction624)>*/
RET_LABEL:;
}
/* method parser#ReduceAction625#action for (self: ReduceAction625, Parser) */
void parser__ReduceAction625__action(val* self, val* p0) {
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
var1 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var1) on <var1:AImplicitSelfExpr> */
RET_LABEL2:(void)0;
}
}
var_pexprnode1 = var1;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction625> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction625#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction625__action(val* self, val* p0) {
parser__ReduceAction625__action(self, p0); /* Direct call parser#ReduceAction625#action on <self:Object(ReduceAction625)>*/
RET_LABEL:;
}
/* method parser#ReduceAction792#action for (self: ReduceAction792, Parser) */
void parser__ReduceAction792__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pimportnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pimportnode1, var3) /* != on <var_pimportnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pimportnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction792> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction792#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction792__action(val* self, val* p0) {
parser__ReduceAction792__action(self, p0); /* Direct call parser#ReduceAction792#action on <self:Object(ReduceAction792)>*/
RET_LABEL:;
}
/* method parser#ReduceAction793#action for (self: ReduceAction793, Parser) */
void parser__ReduceAction793__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9646);
show_backtrace(1);
}
var_pimportnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pimportnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pimportnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pimportnode2, var6) /* != on <var_pimportnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pimportnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction793> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction793#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction793__action(val* self, val* p0) {
parser__ReduceAction793__action(self, p0); /* Direct call parser#ReduceAction793#action on <self:Object(ReduceAction793)>*/
RET_LABEL:;
}
/* method parser#ReduceAction794#action for (self: ReduceAction794, Parser) */
void parser__ReduceAction794__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pexterncodeblocknode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexterncodeblocknode1, var3) /* != on <var_pexterncodeblocknode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pexterncodeblocknode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction794> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction794#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction794__action(val* self, val* p0) {
parser__ReduceAction794__action(self, p0); /* Direct call parser#ReduceAction794#action on <self:Object(ReduceAction794)>*/
RET_LABEL:;
}
/* method parser#ReduceAction795#action for (self: ReduceAction795, Parser) */
void parser__ReduceAction795__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9680);
show_backtrace(1);
}
var_pexterncodeblocknode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pexterncodeblocknode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pexterncodeblocknode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexterncodeblocknode2, var6) /* != on <var_pexterncodeblocknode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pexterncodeblocknode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction795> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction795#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction795__action(val* self, val* p0) {
parser__ReduceAction795__action(self, p0); /* Direct call parser#ReduceAction795#action on <self:Object(ReduceAction795)>*/
RET_LABEL:;
}
/* method parser#ReduceAction796#action for (self: ReduceAction796, Parser) */
void parser__ReduceAction796__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pclassdefnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pclassdefnode1, var3) /* != on <var_pclassdefnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pclassdefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction796> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction796#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction796__action(val* self, val* p0) {
parser__ReduceAction796__action(self, p0); /* Direct call parser#ReduceAction796#action on <self:Object(ReduceAction796)>*/
RET_LABEL:;
}
/* method parser#ReduceAction797#action for (self: ReduceAction797, Parser) */
void parser__ReduceAction797__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9714);
show_backtrace(1);
}
var_pclassdefnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pclassdefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pclassdefnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pclassdefnode2, var6) /* != on <var_pclassdefnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pclassdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction797> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction797#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction797__action(val* self, val* p0) {
parser__ReduceAction797__action(self, p0); /* Direct call parser#ReduceAction797#action on <self:Object(ReduceAction797)>*/
RET_LABEL:;
}
/* method parser#ReduceAction798#action for (self: ReduceAction798, Parser) */
void parser__ReduceAction798__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_psuperclassnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_psuperclassnode1, var3) /* != on <var_psuperclassnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_psuperclassnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction798> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction798#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction798__action(val* self, val* p0) {
parser__ReduceAction798__action(self, p0); /* Direct call parser#ReduceAction798#action on <self:Object(ReduceAction798)>*/
RET_LABEL:;
}
/* method parser#ReduceAction799#action for (self: ReduceAction799, Parser) */
void parser__ReduceAction799__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9748);
show_backtrace(1);
}
var_psuperclassnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_psuperclassnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_psuperclassnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_psuperclassnode2, var6) /* != on <var_psuperclassnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_psuperclassnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction799> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction799#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction799__action(val* self, val* p0) {
parser__ReduceAction799__action(self, p0); /* Direct call parser#ReduceAction799#action on <self:Object(ReduceAction799)>*/
RET_LABEL:;
}
/* method parser#ReduceAction800#action for (self: ReduceAction800, Parser) */
void parser__ReduceAction800__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_ppropdefnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_ppropdefnode1, var3) /* != on <var_ppropdefnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_ppropdefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction800> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction800#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction800__action(val* self, val* p0) {
parser__ReduceAction800__action(self, p0); /* Direct call parser#ReduceAction800#action on <self:Object(ReduceAction800)>*/
RET_LABEL:;
}
/* method parser#ReduceAction801#action for (self: ReduceAction801, Parser) */
void parser__ReduceAction801__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9782);
show_backtrace(1);
}
var_ppropdefnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_ppropdefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_ppropdefnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_ppropdefnode2, var6) /* != on <var_ppropdefnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_ppropdefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction801> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction801#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction801__action(val* self, val* p0) {
parser__ReduceAction801__action(self, p0); /* Direct call parser#ReduceAction801#action on <self:Object(ReduceAction801)>*/
RET_LABEL:;
}
/* method parser#ReduceAction802#action for (self: ReduceAction802, Parser) */
void parser__ReduceAction802__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pformaldefnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pformaldefnode1, var3) /* != on <var_pformaldefnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pformaldefnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction802> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction802#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction802__action(val* self, val* p0) {
parser__ReduceAction802__action(self, p0); /* Direct call parser#ReduceAction802#action on <self:Object(ReduceAction802)>*/
RET_LABEL:;
}
/* method parser#ReduceAction803#action for (self: ReduceAction803, Parser) */
void parser__ReduceAction803__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9816);
show_backtrace(1);
}
var_pformaldefnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pformaldefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pformaldefnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pformaldefnode2, var6) /* != on <var_pformaldefnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pformaldefnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction803> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction803#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction803__action(val* self, val* p0) {
parser__ReduceAction803__action(self, p0); /* Direct call parser#ReduceAction803#action on <self:Object(ReduceAction803)>*/
RET_LABEL:;
}
/* method parser#ReduceAction804#action for (self: ReduceAction804, Parser) */
void parser__ReduceAction804__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pparamnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pparamnode1, var3) /* != on <var_pparamnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pparamnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction804> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction804#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction804__action(val* self, val* p0) {
parser__ReduceAction804__action(self, p0); /* Direct call parser#ReduceAction804#action on <self:Object(ReduceAction804)>*/
RET_LABEL:;
}
/* method parser#ReduceAction805#action for (self: ReduceAction805, Parser) */
void parser__ReduceAction805__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9850);
show_backtrace(1);
}
var_pparamnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pparamnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pparamnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pparamnode2, var6) /* != on <var_pparamnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pparamnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction805> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction805#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction805__action(val* self, val* p0) {
parser__ReduceAction805__action(self, p0); /* Direct call parser#ReduceAction805#action on <self:Object(ReduceAction805)>*/
RET_LABEL:;
}
/* method parser#ReduceAction806#action for (self: ReduceAction806, Parser) */
void parser__ReduceAction806__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pexterncallnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexterncallnode1, var3) /* != on <var_pexterncallnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pexterncallnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction806> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction806#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction806__action(val* self, val* p0) {
parser__ReduceAction806__action(self, p0); /* Direct call parser#ReduceAction806#action on <self:Object(ReduceAction806)>*/
RET_LABEL:;
}
/* method parser#ReduceAction807#action for (self: ReduceAction807, Parser) */
void parser__ReduceAction807__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9884);
show_backtrace(1);
}
var_pexterncallnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pexterncallnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pexterncallnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexterncallnode2, var6) /* != on <var_pexterncallnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pexterncallnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction807> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction807#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction807__action(val* self, val* p0) {
parser__ReduceAction807__action(self, p0); /* Direct call parser#ReduceAction807#action on <self:Object(ReduceAction807)>*/
RET_LABEL:;
}
/* method parser#ReduceAction809#action for (self: ReduceAction809, Parser) */
void parser__ReduceAction809__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9903);
show_backtrace(1);
}
var_ptypenode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_ptypenode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_ptypenode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_ptypenode2, var6) /* != on <var_ptypenode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_ptypenode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction809> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction809#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction809__action(val* self, val* p0) {
parser__ReduceAction809__action(self, p0); /* Direct call parser#ReduceAction809#action on <self:Object(ReduceAction809)>*/
RET_LABEL:;
}
/* method parser#ReduceAction810#action for (self: ReduceAction810, Parser) */
void parser__ReduceAction810__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pexprnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexprnode1, var3) /* != on <var_pexprnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction810> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction810#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction810__action(val* self, val* p0) {
parser__ReduceAction810__action(self, p0); /* Direct call parser#ReduceAction810#action on <self:Object(ReduceAction810)>*/
RET_LABEL:;
}
/* method parser#ReduceAction811#action for (self: ReduceAction811, Parser) */
void parser__ReduceAction811__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9937);
show_backtrace(1);
}
var_pexprnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexprnode2, var6) /* != on <var_pexprnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction811> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction811#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction811__action(val* self, val* p0) {
parser__ReduceAction811__action(self, p0); /* Direct call parser#ReduceAction811#action on <self:Object(ReduceAction811)>*/
RET_LABEL:;
}
/* method parser#ReduceAction812#action for (self: ReduceAction812, Parser) */
void parser__ReduceAction812__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9955);
show_backtrace(1);
}
{
var4 = parser_work__ReduceAction__concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var4;
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction812> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction812#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction812__action(val* self, val* p0) {
parser__ReduceAction812__action(self, p0); /* Direct call parser#ReduceAction812#action on <self:Object(ReduceAction812)>*/
RET_LABEL:;
}
/* method parser#ReduceAction813#action for (self: ReduceAction813, Parser) */
void parser__ReduceAction813__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9970);
show_backtrace(1);
}
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype6 = type_array__Arraykernel__Object.color;
idtype7 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9972);
show_backtrace(1);
}
{
var8 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var8;
{
var9 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var9;
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction813> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction813#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction813__action(val* self, val* p0) {
parser__ReduceAction813__action(self, p0); /* Direct call parser#ReduceAction813#action on <self:Object(ReduceAction813)>*/
RET_LABEL:;
}
/* method parser#ReduceAction815#action for (self: ReduceAction815, Parser) */
void parser__ReduceAction815__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9988);
show_backtrace(1);
}
var_pannotationnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_pannotationnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pannotationnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pannotationnode2, var6) /* != on <var_pannotationnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pannotationnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction815> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction815#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction815__action(val* self, val* p0) {
parser__ReduceAction815__action(self, p0); /* Direct call parser#ReduceAction815#action on <self:Object(ReduceAction815)>*/
RET_LABEL:;
}
/* method parser#ReduceAction821#action for (self: ReduceAction821, Parser) */
void parser__ReduceAction821__action(val* self, val* p0) {
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
val* var_patargnode2 /* var patargnode2: nullable Object */;
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 10007);
show_backtrace(1);
}
var_patargnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_patargnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_patargnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_patargnode2, var6) /* != on <var_patargnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_patargnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction821> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction821#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction821__action(val* self, val* p0) {
parser__ReduceAction821__action(self, p0); /* Direct call parser#ReduceAction821#action on <self:Object(ReduceAction821)>*/
RET_LABEL:;
}
/* method parser#ReduceAction825#action for (self: ReduceAction825, Parser) */
void parser__ReduceAction825__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 10026);
show_backtrace(1);
}
var_tidnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_tidnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_tidnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_tidnode2, var6) /* != on <var_tidnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction825> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction825#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction825__action(val* self, val* p0) {
parser__ReduceAction825__action(self, p0); /* Direct call parser#ReduceAction825#action on <self:Object(ReduceAction825)>*/
RET_LABEL:;
}
/* method parser#ReduceAction826#action for (self: ReduceAction826, Parser) */
void parser__ReduceAction826__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_tcommentnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_tcommentnode1, var3) /* != on <var_tcommentnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_tcommentnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction826> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction826#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction826__action(val* self, val* p0) {
parser__ReduceAction826__action(self, p0); /* Direct call parser#ReduceAction826#action on <self:Object(ReduceAction826)>*/
RET_LABEL:;
}
/* method parser#ReduceAction827#action for (self: ReduceAction827, Parser) */
void parser__ReduceAction827__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 10060);
show_backtrace(1);
}
var_tcommentnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_tcommentnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_tcommentnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_tcommentnode2, var6) /* != on <var_tcommentnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_tcommentnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction827> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction827#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction827__action(val* self, val* p0) {
parser__ReduceAction827__action(self, p0); /* Direct call parser#ReduceAction827#action on <self:Object(ReduceAction827)>*/
RET_LABEL:;
}
/* method parser#ReduceAction828#action for (self: ReduceAction828, Parser) */
void parser__ReduceAction828__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_teolnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_teolnode1, var3) /* != on <var_teolnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_teolnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction828> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction828#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction828__action(val* self, val* p0) {
parser__ReduceAction828__action(self, p0); /* Direct call parser#ReduceAction828#action on <self:Object(ReduceAction828)>*/
RET_LABEL:;
}
/* method parser#ReduceAction829#action for (self: ReduceAction829, Parser) */
void parser__ReduceAction829__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 10094);
show_backtrace(1);
}
var_teolnode2 = var_nodearraylist2;
{
var5 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var5;
var6 = NULL;
if (var_teolnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_teolnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_teolnode2, var6) /* != on <var_teolnode2:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_teolnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction829> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction829#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction829__action(val* self, val* p0) {
parser__ReduceAction829__action(self, p0); /* Direct call parser#ReduceAction829#action on <self:Object(ReduceAction829)>*/
RET_LABEL:;
}
