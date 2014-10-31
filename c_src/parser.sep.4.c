#include "parser.sep.0.h"
/* method parser#ReduceAction148#action for (self: ReduceAction148, Parser) */
void parser__ReduceAction148__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
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
var_pexterncodeblocknode1 = var_nodearraylist2;
var_node_list = var_pexterncodeblocknode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction148> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction148#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction148__action(val* self, val* p0) {
parser__ReduceAction148__action(self, p0); /* Direct call parser#ReduceAction148#action on <self:Object(ReduceAction148)>*/
RET_LABEL:;
}
/* method parser#ReduceAction149#action for (self: ReduceAction149, Parser) */
void parser__ReduceAction149__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AType */;
val* var9 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Array[Object]>*/;
}
var_listnode4 = var3;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tclassidnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tclassidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5186);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype6 = type_nullable_parser_nodes__AAnnotations.color;
idtype7 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pannotationsnode5->type->table_size) {
var5 = 0;
} else {
var5 = var_pannotationsnode5->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5188);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var9 = NULL;
{
parser_prod__AType__init_atype(var8, var9, var_tclassidnode3, var_listnode4, var_pannotationsnode5); /* Direct call parser_prod#AType#init_atype on <var8:AType>*/
}
var_ptypenode1 = var8;
var_node_list = var_ptypenode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction149> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction149#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction149__action(val* self, val* p0) {
parser__ReduceAction149__action(self, p0); /* Direct call parser#ReduceAction149#action on <self:Object(ReduceAction149)>*/
RET_LABEL:;
}
/* method parser#ReduceAction150#action for (self: ReduceAction150, Parser) */
void parser__ReduceAction150__action(val* self, val* p0) {
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
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var13 /* : Int */;
long var14 /* : Int */;
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
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[Object]>*/;
}
var_listnode4 = var4;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwnullablenode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwnullablenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5209);
show_backtrace(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype7 = type_nullable_parser_nodes__TClassid.color;
idtype8 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tclassidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tclassidnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5211);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype10 = type_nullable_parser_nodes__AAnnotations.color;
idtype11 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pannotationsnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_pannotationsnode5->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5213);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
{
parser_prod__AType__init_atype(var12, var_tkwnullablenode2, var_tclassidnode3, var_listnode4, var_pannotationsnode5); /* Direct call parser_prod#AType#init_atype on <var12:AType>*/
}
var_ptypenode1 = var12;
var_node_list = var_ptypenode1;
var13 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction150> */
{
var14 = parser_work__Parser__go_to(var_p, var13);
}
{
parser_work__Parser__push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction150#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction150__action(val* self, val* p0) {
parser__ReduceAction150__action(self, p0); /* Direct call parser#ReduceAction150#action on <self:Object(ReduceAction150)>*/
RET_LABEL:;
}
/* method parser#ReduceAction151#action for (self: ReduceAction151, Parser) */
void parser__ReduceAction151__action(val* self, val* p0) {
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
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AType */;
val* var18 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:Array[Object]>*/;
}
var_listnode5 = var8;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tclassidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tclassidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5238);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5240);
show_backtrace(1);
}
{
var13 = parser_work__ReduceAction__concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var13;
var_pannotationsnode6 = var_nodearraylist7;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype15 = type_nullable_parser_nodes__AAnnotations.color;
idtype16 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pannotationsnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pannotationsnode6->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5243);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var18 = NULL;
{
parser_prod__AType__init_atype(var17, var18, var_tclassidnode3, var_listnode5, var_pannotationsnode6); /* Direct call parser_prod#AType#init_atype on <var17:AType>*/
}
var_ptypenode1 = var17;
var_node_list = var_ptypenode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction151> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction151#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction151__action(val* self, val* p0) {
parser__ReduceAction151__action(self, p0); /* Direct call parser#ReduceAction151#action on <self:Object(ReduceAction151)>*/
RET_LABEL:;
}
/* method parser#ReduceAction152#action for (self: ReduceAction152, Parser) */
void parser__ReduceAction152__action(val* self, val* p0) {
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
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:Array[Object]>*/;
}
var_listnode5 = var9;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_tkwnullablenode2->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwnullablenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5269);
show_backtrace(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype12 = type_nullable_parser_nodes__TClassid.color;
idtype13 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tclassidnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tclassidnode3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5271);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist5;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode4->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5273);
show_backtrace(1);
}
{
var17 = parser_work__ReduceAction__concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var17;
var_pannotationsnode6 = var_nodearraylist8;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable_parser_nodes__AAnnotations.color;
idtype20 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pannotationsnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pannotationsnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5276);
show_backtrace(1);
}
var21 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
{
parser_prod__AType__init_atype(var21, var_tkwnullablenode2, var_tclassidnode3, var_listnode5, var_pannotationsnode6); /* Direct call parser_prod#AType#init_atype on <var21:AType>*/
}
var_ptypenode1 = var21;
var_node_list = var_ptypenode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction152> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction152#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction152__action(val* self, val* p0) {
parser__ReduceAction152__action(self, p0); /* Direct call parser#ReduceAction152#action on <self:Object(ReduceAction152)>*/
RET_LABEL:;
}
/* method parser#ReduceAction153#action for (self: ReduceAction153, Parser) */
void parser__ReduceAction153__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:Array[Object]>*/;
}
var_listnode2 = var2;
var_ptypenode1 = var_nodearraylist1;
var3 = NULL;
if (var_ptypenode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val*, val*))(var_ptypenode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_ptypenode1, var3) /* != on <var_ptypenode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_ptypenode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction153> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction153#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction153__action(val* self, val* p0) {
parser__ReduceAction153__action(self, p0); /* Direct call parser#ReduceAction153#action on <self:Object(ReduceAction153)>*/
RET_LABEL:;
}
/* method parser#ReduceAction154#action for (self: ReduceAction154, Parser) */
void parser__ReduceAction154__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Array[Object]>*/;
}
var_listnode3 = var3;
var_ptypenode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5312);
show_backtrace(1);
}
var5 = NULL;
if (var_ptypenode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int (*)(val*, val*))(var_ptypenode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_ptypenode1, var5) /* != on <var_ptypenode1:nullable Object>*/;
var6 = var7;
}
if (var6){
{
array__Array__add(var_listnode3, var_ptypenode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var8 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction154> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction154#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction154__action(val* self, val* p0) {
parser__ReduceAction154__action(self, p0); /* Direct call parser#ReduceAction154#action on <self:Object(ReduceAction154)>*/
RET_LABEL:;
}
/* method parser#ReduceAction155#action for (self: ReduceAction155, Parser) */
void parser__ReduceAction155__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist3;
var_node_list = var_ptypenode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction155> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction155#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction155__action(val* self, val* p0) {
parser__ReduceAction155__action(self, p0); /* Direct call parser#ReduceAction155#action on <self:Object(ReduceAction155)>*/
RET_LABEL:;
}
/* method parser#ReduceAction159#action for (self: ReduceAction159, Parser) */
void parser__ReduceAction159__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var2;
var_pexprnode1 = var_nodearraylist2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction159> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction159#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction159__action(val* self, val* p0) {
parser__ReduceAction159__action(self, p0); /* Direct call parser#ReduceAction159#action on <self:Object(ReduceAction159)>*/
RET_LABEL:;
}
/* method parser#ReduceAction160#action for (self: ReduceAction160, Parser) */
void parser__ReduceAction160__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tkwendnode3 /* var tkwendnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Array[Object]>*/;
}
var_listnode2 = var3;
var_tkwendnode3 = var_nodearraylist2;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable_parser_nodes__TKwend.color;
idtype = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwendnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwendnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5355);
show_backtrace(1);
}
var5 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
parser_prod__ABlockExpr__init_ablockexpr(var5, var_listnode2, var_tkwendnode3); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var5:ABlockExpr>*/
}
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction160> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction160#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction160__action(val* self, val* p0) {
parser__ReduceAction160__action(self, p0); /* Direct call parser#ReduceAction160#action on <self:Object(ReduceAction160)>*/
RET_LABEL:;
}
/* method parser#ReduceAction161#action for (self: ReduceAction161, Parser) */
void parser__ReduceAction161__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tkwendnode3 /* var tkwendnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:Array[Object]>*/;
}
var_listnode2 = var2;
var_tkwendnode3 = var_nodearraylist1;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable_parser_nodes__TKwend.color;
idtype = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwendnode3->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwendnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5372);
show_backtrace(1);
}
var4 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
parser_prod__ABlockExpr__init_ablockexpr(var4, var_listnode2, var_tkwendnode3); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var4:ABlockExpr>*/
}
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction161> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction161#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction161__action(val* self, val* p0) {
parser__ReduceAction161__action(self, p0); /* Direct call parser#ReduceAction161#action on <self:Object(ReduceAction161)>*/
RET_LABEL:;
}
/* method parser#ReduceAction162#action for (self: ReduceAction162, Parser) */
void parser__ReduceAction162__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction162> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction162#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction162__action(val* self, val* p0) {
parser__ReduceAction162__action(self, p0); /* Direct call parser#ReduceAction162#action on <self:Object(ReduceAction162)>*/
RET_LABEL:;
}
/* method parser#ReduceAction163#action for (self: ReduceAction163, Parser) */
void parser__ReduceAction163__action(val* self, val* p0) {
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
short int var10 /* : Bool */;
val* var11 /* : ABlockExpr */;
val* var12 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:Array[Object]>*/;
}
var_listnode3 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5400);
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
var9 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
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
array__Array__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var11 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var12 = NULL;
{
parser_prod__ABlockExpr__init_ablockexpr(var11, var_listnode3, var12); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var11:ABlockExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction163> */
{
var14 = parser_work__Parser__go_to(var_p, var13);
}
{
parser_work__Parser__push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction163#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction163__action(val* self, val* p0) {
parser__ReduceAction163__action(self, p0); /* Direct call parser#ReduceAction163#action on <self:Object(ReduceAction163)>*/
RET_LABEL:;
}
/* method parser#ReduceAction164#action for (self: ReduceAction164, Parser) */
void parser__ReduceAction164__action(val* self, val* p0) {
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
short int var14 /* : Bool */;
val* var15 /* : Array[Object] */;
val* var16 /* : ABlockExpr */;
val* var17 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Array[Object]>*/;
}
var_listnode4 = var3;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5421);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype6 = type_array__Arraykernel__Object.color;
idtype7 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5423);
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
var13 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
array__Array__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var15 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var15;
var16 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var17 = NULL;
{
parser_prod__ABlockExpr__init_ablockexpr(var16, var_listnode4, var17); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var16:ABlockExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction164> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction164#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction164__action(val* self, val* p0) {
parser__ReduceAction164__action(self, p0); /* Direct call parser#ReduceAction164#action on <self:Object(ReduceAction164)>*/
RET_LABEL:;
}
/* method parser#ReduceAction165#action for (self: ReduceAction165, Parser) */
void parser__ReduceAction165__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ABlockExpr */;
val* var13 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
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
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Array[Object]>*/;
}
var_listnode3 = var3;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5445);
show_backtrace(1);
}
var5 = NULL;
if (var_pexprnode2 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,var5) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = var5;
{
var10 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
array__Array__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var12 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var13 = NULL;
{
parser_prod__ABlockExpr__init_ablockexpr(var12, var_listnode3, var13); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var12:ABlockExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction165> */
{
var15 = parser_work__Parser__go_to(var_p, var14);
}
{
parser_work__Parser__push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction165#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction165__action(val* self, val* p0) {
parser__ReduceAction165__action(self, p0); /* Direct call parser#ReduceAction165#action on <self:Object(ReduceAction165)>*/
RET_LABEL:;
}
/* method parser#ReduceAction166#action for (self: ReduceAction166, Parser) */
void parser__ReduceAction166__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[Object] */;
val* var17 /* : ABlockExpr */;
val* var18 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[Object]>*/;
}
var_listnode4 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5467);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_array__Arraykernel__Object.color;
idtype8 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= var_listnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5469);
show_backtrace(1);
}
var9 = NULL;
if (var_pexprnode2 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,var9) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
array__Array__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var16 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var16;
var17 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var18 = NULL;
{
parser_prod__ABlockExpr__init_ablockexpr(var17, var_listnode4, var18); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var17:ABlockExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction166> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction166#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction166__action(val* self, val* p0) {
parser__ReduceAction166__action(self, p0); /* Direct call parser#ReduceAction166#action on <self:Object(ReduceAction166)>*/
RET_LABEL:;
}
/* method parser#ReduceAction167#action for (self: ReduceAction167, Parser) */
void parser__ReduceAction167__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[Object]>*/;
}
var_listnode3 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5492);
show_backtrace(1);
}
var6 = NULL;
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,var6) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_tkwendnode4 = var_nodearraylist3;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype14 = type_nullable_parser_nodes__TKwend.color;
idtype15 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwendnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwendnode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5497);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
parser_prod__ABlockExpr__init_ablockexpr(var16, var_listnode3, var_tkwendnode4); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var16:ABlockExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction167> */
{
var18 = parser_work__Parser__go_to(var_p, var17);
}
{
parser_work__Parser__push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction167#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction167__action(val* self, val* p0) {
parser__ReduceAction167__action(self, p0); /* Direct call parser#ReduceAction167#action on <self:Object(ReduceAction167)>*/
RET_LABEL:;
}
/* method parser#ReduceAction168#action for (self: ReduceAction168, Parser) */
void parser__ReduceAction168__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Array[Object] */;
val* var_tkwendnode5 /* var tkwendnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:Array[Object]>*/;
}
var_listnode4 = var5;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5517);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5519);
show_backtrace(1);
}
var10 = NULL;
if (var_pexprnode2 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,var10) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = var10;
{
var15 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode2, var_other) /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
array__Array__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var17 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var17;
var_tkwendnode5 = var_nodearraylist4;
/* <var_tkwendnode5:nullable Object> isa nullable TKwend */
cltype19 = type_nullable_parser_nodes__TKwend.color;
idtype20 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwendnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwendnode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5525);
show_backtrace(1);
}
var21 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
{
parser_prod__ABlockExpr__init_ablockexpr(var21, var_listnode4, var_tkwendnode5); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var21:ABlockExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction168> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction168#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction168__action(val* self, val* p0) {
parser__ReduceAction168__action(self, p0); /* Direct call parser#ReduceAction168#action on <self:Object(ReduceAction168)>*/
RET_LABEL:;
}
/* method parser#ReduceAction172#action for (self: ReduceAction172, Parser) */
void parser__ReduceAction172__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AReturnExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable_parser_nodes__TKwreturn.color;
idtype = type_nullable_parser_nodes__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwreturnnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwreturnnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5541);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
var4 = NULL;
{
parser_prod__AReturnExpr__init_areturnexpr(var3, var_tkwreturnnode2, var4); /* Direct call parser_prod#AReturnExpr#init_areturnexpr on <var3:AReturnExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction172> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction172#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction172__action(val* self, val* p0) {
parser__ReduceAction172__action(self, p0); /* Direct call parser#ReduceAction172#action on <self:Object(ReduceAction172)>*/
RET_LABEL:;
}
/* method parser#ReduceAction173#action for (self: ReduceAction173, Parser) */
void parser__ReduceAction173__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AReturnExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
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
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable_parser_nodes__TKwreturn.color;
idtype = type_nullable_parser_nodes__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwreturnnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwreturnnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5558);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable_parser_nodes__AExpr.color;
idtype6 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5560);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
{
parser_prod__AReturnExpr__init_areturnexpr(var7, var_tkwreturnnode2, var_pexprnode3); /* Direct call parser_prod#AReturnExpr#init_areturnexpr on <var7:AReturnExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction173> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction173#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction173__action(val* self, val* p0) {
parser__ReduceAction173__action(self, p0); /* Direct call parser#ReduceAction173#action on <self:Object(ReduceAction173)>*/
RET_LABEL:;
}
/* method parser#ReduceAction174#action for (self: ReduceAction174, Parser) */
void parser__ReduceAction174__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ABreakExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5576);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
var4 = NULL;
{
parser_prod__ABreakExpr__init_abreakexpr(var3, var_tkwbreaknode2, var4); /* Direct call parser_prod#ABreakExpr#init_abreakexpr on <var3:ABreakExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction174> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction174#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction174__action(val* self, val* p0) {
parser__ReduceAction174__action(self, p0); /* Direct call parser#ReduceAction174#action on <self:Object(ReduceAction174)>*/
RET_LABEL:;
}
/* method parser#ReduceAction175#action for (self: ReduceAction175, Parser) */
void parser__ReduceAction175__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ABreakExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
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
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5593);
show_backtrace(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype5 = type_nullable_parser_nodes__ALabel.color;
idtype6 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_plabelnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_plabelnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5595);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
{
parser_prod__ABreakExpr__init_abreakexpr(var7, var_tkwbreaknode2, var_plabelnode3); /* Direct call parser_prod#ABreakExpr#init_abreakexpr on <var7:ABreakExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction175> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction175#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction175__action(val* self, val* p0) {
parser__ReduceAction175__action(self, p0); /* Direct call parser#ReduceAction175#action on <self:Object(ReduceAction175)>*/
RET_LABEL:;
}
/* method parser#ReduceAction176#action for (self: ReduceAction176, Parser) */
void parser__ReduceAction176__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabortnode2 /* var tkwabortnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AAbortExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAbortExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwabortnode2 = var_nodearraylist1;
/* <var_tkwabortnode2:nullable Object> isa nullable TKwabort */
cltype = type_nullable_parser_nodes__TKwabort.color;
idtype = type_nullable_parser_nodes__TKwabort.id;
if(var_tkwabortnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwabortnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwabortnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5611);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AAbortExpr(&type_parser_nodes__AAbortExpr);
{
parser_prod__AAbortExpr__init_aabortexpr(var3, var_tkwabortnode2); /* Direct call parser_prod#AAbortExpr#init_aabortexpr on <var3:AAbortExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction176> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction176#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction176__action(val* self, val* p0) {
parser__ReduceAction176__action(self, p0); /* Direct call parser#ReduceAction176#action on <self:Object(ReduceAction176)>*/
RET_LABEL:;
}
/* method parser#ReduceAction177#action for (self: ReduceAction177, Parser) */
void parser__ReduceAction177__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AContinueExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwcontinuenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwcontinuenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5626);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var4 = NULL;
{
parser_prod__AContinueExpr__init_acontinueexpr(var3, var_tkwcontinuenode2, var4); /* Direct call parser_prod#AContinueExpr#init_acontinueexpr on <var3:AContinueExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction177> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction177#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction177__action(val* self, val* p0) {
parser__ReduceAction177__action(self, p0); /* Direct call parser#ReduceAction177#action on <self:Object(ReduceAction177)>*/
RET_LABEL:;
}
/* method parser#ReduceAction178#action for (self: ReduceAction178, Parser) */
void parser__ReduceAction178__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AContinueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
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
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwcontinuenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwcontinuenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5643);
show_backtrace(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype5 = type_nullable_parser_nodes__ALabel.color;
idtype6 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_plabelnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_plabelnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5645);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
{
parser_prod__AContinueExpr__init_acontinueexpr(var7, var_tkwcontinuenode2, var_plabelnode3); /* Direct call parser_prod#AContinueExpr#init_acontinueexpr on <var7:AContinueExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction178> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction178#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction178__action(val* self, val* p0) {
parser__ReduceAction178__action(self, p0); /* Direct call parser#ReduceAction178#action on <self:Object(ReduceAction178)>*/
RET_LABEL:;
}
/* method parser#ReduceAction185#action for (self: ReduceAction185, Parser) */
void parser__ReduceAction185__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5665);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable_parser_nodes__TId.color;
idtype9 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5667);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable_parser_nodes__AExprs.color;
idtype12 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprsnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprsnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5669);
show_backtrace(1);
}
var13 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
parser_prod__ACallExpr__init_acallexpr(var13, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var13:ACallExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction185> */
{
var15 = parser_work__Parser__go_to(var_p, var14);
}
{
parser_work__Parser__push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction185#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction185__action(val* self, val* p0) {
parser__ReduceAction185__action(self, p0); /* Direct call parser#ReduceAction185#action on <self:Object(ReduceAction185)>*/
RET_LABEL:;
}
/* method parser#ReduceAction186#action for (self: ReduceAction186, Parser) */
void parser__ReduceAction186__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5691);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5693);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable_parser_nodes__AExprs.color;
idtype13 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprsnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprsnode4->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5695);
show_backtrace(1);
}
var14 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
parser_prod__ACallExpr__init_acallexpr(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var14:ACallExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction186> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction186#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction186__action(val* self, val* p0) {
parser__ReduceAction186__action(self, p0); /* Direct call parser#ReduceAction186#action on <self:Object(ReduceAction186)>*/
RET_LABEL:;
}
/* method parser#ReduceAction187#action for (self: ReduceAction187, Parser) */
void parser__ReduceAction187__action(val* self, val* p0) {
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
val* var15 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5718);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5720);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5722);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
parser_prod__ACallExpr__init_acallexpr(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var15:ACallExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction187> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction187#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction187__action(val* self, val* p0) {
parser__ReduceAction187__action(self, p0); /* Direct call parser#ReduceAction187#action on <self:Object(ReduceAction187)>*/
RET_LABEL:;
}
/* method parser#ReduceAction189#action for (self: ReduceAction189, Parser) */
void parser__ReduceAction189__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
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
var3 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var3) on <var3:AImplicitSelfExpr> */
RET_LABEL4:(void)0;
}
}
var_pexprnode2 = var3;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5741);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode4->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5743);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
parser_prod__ACallExpr__init_acallexpr(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction189> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction189#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction189__action(val* self, val* p0) {
parser__ReduceAction189__action(self, p0); /* Direct call parser#ReduceAction189#action on <self:Object(ReduceAction189)>*/
RET_LABEL:;
}
/* method parser#ReduceAction190#action for (self: ReduceAction190, Parser) */
void parser__ReduceAction190__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var4) on <var4:AImplicitSelfExpr> */
RET_LABEL5:(void)0;
}
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5763);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable_parser_nodes__AExprs.color;
idtype9 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprsnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprsnode4->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5765);
show_backtrace(1);
}
var10 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
parser_prod__ACallExpr__init_acallexpr(var10, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var10:ACallExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction190> */
{
var12 = parser_work__Parser__go_to(var_p, var11);
}
{
parser_work__Parser__push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction190#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction190__action(val* self, val* p0) {
parser__ReduceAction190__action(self, p0); /* Direct call parser#ReduceAction190#action on <self:Object(ReduceAction190)>*/
RET_LABEL:;
}
/* method parser#ReduceAction191#action for (self: ReduceAction191, Parser) */
void parser__ReduceAction191__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5786);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5788);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
{
parser_prod__ACallExpr__init_acallexpr(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction191> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction191#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction191__action(val* self, val* p0) {
parser__ReduceAction191__action(self, p0); /* Direct call parser#ReduceAction191#action on <self:Object(ReduceAction191)>*/
RET_LABEL:;
}
/* method parser#ReduceAction193#action for (self: ReduceAction193, Parser) */
void parser__ReduceAction193__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tkwsupernode3 /* var tkwsupernode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
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
var_pqualifiednode2 = var_nodearraylist1;
/* <var_pqualifiednode2:nullable Object> isa nullable AQualified */
cltype = type_nullable_parser_nodes__AQualified.color;
idtype = type_nullable_parser_nodes__AQualified.id;
if(var_pqualifiednode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_pqualifiednode2->type->table_size) {
var4 = 0;
} else {
var4 = var_pqualifiednode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5807);
show_backtrace(1);
}
var_tkwsupernode3 = var_nodearraylist2;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype6 = type_nullable_parser_nodes__TKwsuper.color;
idtype7 = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tkwsupernode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwsupernode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5809);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5811);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ASuperExpr(&type_parser_nodes__ASuperExpr);
{
parser_prod__ASuperExpr__init_asuperexpr(var11, var_pqualifiednode2, var_tkwsupernode3, var_pexprsnode4); /* Direct call parser_prod#ASuperExpr#init_asuperexpr on <var11:ASuperExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction193> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction193#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction193__action(val* self, val* p0) {
parser__ReduceAction193__action(self, p0); /* Direct call parser#ReduceAction193#action on <self:Object(ReduceAction193)>*/
RET_LABEL:;
}
/* method parser#ReduceAction194#action for (self: ReduceAction194, Parser) */
void parser__ReduceAction194__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5832);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype8 = type_nullable_parser_nodes__TKwinit.color;
idtype9 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwinitnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwinitnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5834);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable_parser_nodes__AExprs.color;
idtype12 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprsnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprsnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5836);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
{
parser_prod__AInitExpr__init_ainitexpr(var13, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var13:AInitExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction194> */
{
var15 = parser_work__Parser__go_to(var_p, var14);
}
{
parser_work__Parser__push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction194#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction194__action(val* self, val* p0) {
parser__ReduceAction194__action(self, p0); /* Direct call parser#ReduceAction194#action on <self:Object(ReduceAction194)>*/
RET_LABEL:;
}
/* method parser#ReduceAction195#action for (self: ReduceAction195, Parser) */
void parser__ReduceAction195__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
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
var3 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var3) on <var3:AImplicitSelfExpr> */
RET_LABEL4:(void)0;
}
}
var_pexprnode2 = var3;
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable_parser_nodes__TKwinit.color;
idtype = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwinitnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwinitnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5855);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode4->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5857);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
{
parser_prod__AInitExpr__init_ainitexpr(var9, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var9:AInitExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction195> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction195#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction195__action(val* self, val* p0) {
parser__ReduceAction195__action(self, p0); /* Direct call parser#ReduceAction195#action on <self:Object(ReduceAction195)>*/
RET_LABEL:;
}
/* method parser#ReduceAction196#action for (self: ReduceAction196, Parser) */
void parser__ReduceAction196__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5879);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist5;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype9 = type_nullable_parser_nodes__TKwinit.color;
idtype10 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwinitnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwinitnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5881);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable_parser_nodes__AExprs.color;
idtype13 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprsnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprsnode4->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5883);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
{
parser_prod__AInitExpr__init_ainitexpr(var14, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var14:AInitExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction196> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction196#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction196__action(val* self, val* p0) {
parser__ReduceAction196__action(self, p0); /* Direct call parser#ReduceAction196#action on <self:Object(ReduceAction196)>*/
RET_LABEL:;
}
/* method parser#ReduceAction197#action for (self: ReduceAction197, Parser) */
void parser__ReduceAction197__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5906);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist6;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype10 = type_nullable_parser_nodes__TKwinit.color;
idtype11 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwinitnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwinitnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5908);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5910);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
{
parser_prod__AInitExpr__init_ainitexpr(var15, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var15:AInitExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction197> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction197#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction197__action(val* self, val* p0) {
parser__ReduceAction197__action(self, p0); /* Direct call parser#ReduceAction197#action on <self:Object(ReduceAction197)>*/
RET_LABEL:;
}
/* method parser#ReduceAction199#action for (self: ReduceAction199, Parser) */
void parser__ReduceAction199__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var4) on <var4:AImplicitSelfExpr> */
RET_LABEL5:(void)0;
}
}
var_pexprnode2 = var4;
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable_parser_nodes__TKwinit.color;
idtype = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwinitnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwinitnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5930);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable_parser_nodes__AExprs.color;
idtype9 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprsnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprsnode4->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5932);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
{
parser_prod__AInitExpr__init_ainitexpr(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction199> */
{
var12 = parser_work__Parser__go_to(var_p, var11);
}
{
parser_work__Parser__push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction199#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction199__action(val* self, val* p0) {
parser__ReduceAction199__action(self, p0); /* Direct call parser#ReduceAction199#action on <self:Object(ReduceAction199)>*/
RET_LABEL:;
}
/* method parser#ReduceAction200#action for (self: ReduceAction200, Parser) */
void parser__ReduceAction200__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tkwinitnode3 = var_nodearraylist3;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable_parser_nodes__TKwinit.color;
idtype = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwinitnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwinitnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5953);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5955);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
{
parser_prod__AInitExpr__init_ainitexpr(var11, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod#AInitExpr#init_ainitexpr on <var11:AInitExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction200> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction200#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction200__action(val* self, val* p0) {
parser__ReduceAction200__action(self, p0); /* Direct call parser#ReduceAction200#action on <self:Object(ReduceAction200)>*/
RET_LABEL:;
}
/* method parser#ReduceAction202#action for (self: ReduceAction202, Parser) */
void parser__ReduceAction202__action(val* self, val* p0) {
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
val* var_tkwdebugnode2 /* var tkwdebugnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwtypenode3 /* var tkwtypenode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ADebugTypeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADebugTypeExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_tkwdebugnode2 = var_nodearraylist1;
/* <var_tkwdebugnode2:nullable Object> isa nullable TKwdebug */
cltype = type_nullable_parser_nodes__TKwdebug.color;
idtype = type_nullable_parser_nodes__TKwdebug.id;
if(var_tkwdebugnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwdebugnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwdebugnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5976);
show_backtrace(1);
}
var_tkwtypenode3 = var_nodearraylist2;
/* <var_tkwtypenode3:nullable Object> isa nullable TKwtype */
cltype8 = type_nullable_parser_nodes__TKwtype.color;
idtype9 = type_nullable_parser_nodes__TKwtype.id;
if(var_tkwtypenode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwtypenode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwtypenode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5978);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist5;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype11 = type_nullable_parser_nodes__AExpr.color;
idtype12 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5980);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist3;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype14 = type_nullable_parser_nodes__AType.color;
idtype15 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_ptypenode5->type->table_size) {
var13 = 0;
} else {
var13 = var_ptypenode5->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5982);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ADebugTypeExpr(&type_parser_nodes__ADebugTypeExpr);
{
parser_prod__ADebugTypeExpr__init_adebugtypeexpr(var16, var_tkwdebugnode2, var_tkwtypenode3, var_pexprnode4, var_ptypenode5); /* Direct call parser_prod#ADebugTypeExpr#init_adebugtypeexpr on <var16:ADebugTypeExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction202> */
{
var18 = parser_work__Parser__go_to(var_p, var17);
}
{
parser_work__Parser__push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction202#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction202__action(val* self, val* p0) {
parser__ReduceAction202__action(self, p0); /* Direct call parser#ReduceAction202#action on <self:Object(ReduceAction202)>*/
RET_LABEL:;
}
/* method parser#ReduceAction203#action for (self: ReduceAction203, Parser) */
void parser__ReduceAction203__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwlabelnode2 /* var tkwlabelnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALabel */;
val* var4 /* : null */;
val* var_plabelnode1 /* var plabelnode1: nullable ALabel */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable_parser_nodes__TKwlabel.color;
idtype = type_nullable_parser_nodes__TKwlabel.id;
if(var_tkwlabelnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwlabelnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwlabelnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6000);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALabel(&type_parser_nodes__ALabel);
var4 = NULL;
{
parser_prod__ALabel__init_alabel(var3, var_tkwlabelnode2, var4); /* Direct call parser_prod#ALabel#init_alabel on <var3:ALabel>*/
}
var_plabelnode1 = var3;
var_node_list = var_plabelnode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction203> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction203#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction203__action(val* self, val* p0) {
parser__ReduceAction203__action(self, p0); /* Direct call parser#ReduceAction203#action on <self:Object(ReduceAction203)>*/
RET_LABEL:;
}
/* method parser#ReduceAction204#action for (self: ReduceAction204, Parser) */
void parser__ReduceAction204__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwlabelnode2 /* var tkwlabelnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ALabel */;
val* var_plabelnode1 /* var plabelnode1: nullable ALabel */;
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
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable_parser_nodes__TKwlabel.color;
idtype = type_nullable_parser_nodes__TKwlabel.id;
if(var_tkwlabelnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwlabelnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwlabelnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6017);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable_parser_nodes__TId.color;
idtype6 = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6019);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ALabel(&type_parser_nodes__ALabel);
{
parser_prod__ALabel__init_alabel(var7, var_tkwlabelnode2, var_tidnode3); /* Direct call parser_prod#ALabel#init_alabel on <var7:ALabel>*/
}
var_plabelnode1 = var7;
var_node_list = var_plabelnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction204> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction204#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction204__action(val* self, val* p0) {
parser__ReduceAction204__action(self, p0); /* Direct call parser#ReduceAction204#action on <self:Object(ReduceAction204)>*/
RET_LABEL:;
}
/* method parser#ReduceAction205#action for (self: ReduceAction205, Parser) */
void parser__ReduceAction205__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var11 /* : AVardeclExpr */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var14 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6037);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6039);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype9 = type_nullable_parser_nodes__AType.color;
idtype10 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_ptypenode4->type->table_size) {
var8 = 0;
} else {
var8 = var_ptypenode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6041);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var12 = NULL;
var13 = NULL;
var14 = NULL;
{
parser_prod__AVardeclExpr__init_avardeclexpr(var11, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var12, var13, var14); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var11:AVardeclExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction205> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction205#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction205__action(val* self, val* p0) {
parser__ReduceAction205__action(self, p0); /* Direct call parser#ReduceAction205#action on <self:Object(ReduceAction205)>*/
RET_LABEL:;
}
/* method parser#ReduceAction206#action for (self: ReduceAction206, Parser) */
void parser__ReduceAction206__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AVardeclExpr */;
val* var16 /* : null */;
val* var17 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6064);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable_parser_nodes__TId.color;
idtype8 = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6066);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype10 = type_nullable_parser_nodes__AType.color;
idtype11 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_ptypenode4->type->table_size) {
var9 = 0;
} else {
var9 = var_ptypenode4->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6068);
show_backtrace(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable_parser_nodes__AAnnotations.color;
idtype14 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pannotationsnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pannotationsnode7->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6070);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var16 = NULL;
var17 = NULL;
{
parser_prod__AVardeclExpr__init_avardeclexpr(var15, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var16, var17, var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var15:AVardeclExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction206> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction206#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction206__action(val* self, val* p0) {
parser__ReduceAction206__action(self, p0); /* Direct call parser#ReduceAction206#action on <self:Object(ReduceAction206)>*/
RET_LABEL:;
}
/* method parser#ReduceAction207#action for (self: ReduceAction207, Parser) */
void parser__ReduceAction207__action(val* self, val* p0) {
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
val* var20 /* : AVardeclExpr */;
val* var21 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6095);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6097);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype12 = type_nullable_parser_nodes__AType.color;
idtype13 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_ptypenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_ptypenode4->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6099);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype15 = type_nullable_parser_nodes__TAssign.color;
idtype16 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tassignnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tassignnode5->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6101);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype18 = type_nullable_parser_nodes__AExpr.color;
idtype19 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexprnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_pexprnode6->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6103);
show_backtrace(1);
}
var20 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var21 = NULL;
{
parser_prod__AVardeclExpr__init_avardeclexpr(var20, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var21); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var20:AVardeclExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction207> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction207#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction207__action(val* self, val* p0) {
parser__ReduceAction207__action(self, p0); /* Direct call parser#ReduceAction207#action on <self:Object(ReduceAction207)>*/
RET_LABEL:;
}
/* method parser#ReduceAction208#action for (self: ReduceAction208, Parser) */
void parser__ReduceAction208__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
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
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6129);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6131);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype13 = type_nullable_parser_nodes__AType.color;
idtype14 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_ptypenode4->type->table_size) {
var12 = 0;
} else {
var12 = var_ptypenode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6133);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype16 = type_nullable_parser_nodes__TAssign.color;
idtype17 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tassignnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tassignnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6135);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6137);
show_backtrace(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable_parser_nodes__AAnnotations.color;
idtype23 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pannotationsnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_pannotationsnode7->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6139);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
{
parser_prod__AVardeclExpr__init_avardeclexpr(var24, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var_pannotationsnode7); /* Direct call parser_prod#AVardeclExpr#init_avardeclexpr on <var24:AVardeclExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction208> */
{
var26 = parser_work__Parser__go_to(var_p, var25);
}
{
parser_work__Parser__push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction208#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction208__action(val* self, val* p0) {
parser__ReduceAction208__action(self, p0); /* Direct call parser#ReduceAction208#action on <self:Object(ReduceAction208)>*/
RET_LABEL:;
}
/* method parser#ReduceAction209#action for (self: ReduceAction209, Parser) */
void parser__ReduceAction209__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6165);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype10 = type_nullable_parser_nodes__TAttrid.color;
idtype11 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tattridnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tattridnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6167);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist6;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype13 = type_nullable_parser_nodes__TAssign.color;
idtype14 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tassignnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tassignnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6169);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6171);
show_backtrace(1);
}
var18 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
{
parser_prod__AAttrAssignExpr__init_aattrassignexpr(var18, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#AAttrAssignExpr#init_aattrassignexpr on <var18:AAttrAssignExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction209> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction209#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction209__action(val* self, val* p0) {
parser__ReduceAction209__action(self, p0); /* Direct call parser#ReduceAction209#action on <self:Object(ReduceAction209)>*/
RET_LABEL:;
}
/* method parser#ReduceAction210#action for (self: ReduceAction210, Parser) */
void parser__ReduceAction210__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6193);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype9 = type_nullable_parser_nodes__TAssign.color;
idtype10 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tassignnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tassignnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6195);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6197);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
{
parser_prod__AAttrAssignExpr__init_aattrassignexpr(var14, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#AAttrAssignExpr#init_aattrassignexpr on <var14:AAttrAssignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction210> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction210#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction210__action(val* self, val* p0) {
parser__ReduceAction210__action(self, p0); /* Direct call parser#ReduceAction210#action on <self:Object(ReduceAction210)>*/
RET_LABEL:;
}
/* method parser#ReduceAction211#action for (self: ReduceAction211, Parser) */
void parser__ReduceAction211__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6221);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6223);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6225);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist6;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype16 = type_nullable_parser_nodes__TAssign.color;
idtype17 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tassignnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tassignnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6227);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6229);
show_backtrace(1);
}
var21 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var21:ACallAssignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction211> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction211#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction211__action(val* self, val* p0) {
parser__ReduceAction211__action(self, p0); /* Direct call parser#ReduceAction211#action on <self:Object(ReduceAction211)>*/
RET_LABEL:;
}
/* method parser#ReduceAction212#action for (self: ReduceAction212, Parser) */
void parser__ReduceAction212__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6253);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6255);
show_backtrace(1);
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:Array[Object]>*/;
}
var_listnode5 = var11;
var12 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var12, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var12:AListExprs>*/
}
var_pexprsnode4 = var12;
var_tassignnode6 = var_nodearraylist5;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype14 = type_nullable_parser_nodes__TAssign.color;
idtype15 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tassignnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_tassignnode6->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6261);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist6;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode7->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6263);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var19, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var19:ACallAssignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction212> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction212#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction212__action(val* self, val* p0) {
parser__ReduceAction212__action(self, p0); /* Direct call parser#ReduceAction212#action on <self:Object(ReduceAction212)>*/
RET_LABEL:;
}
/* method parser#ReduceAction213#action for (self: ReduceAction213, Parser) */
void parser__ReduceAction213__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6289);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6291);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable_parser_nodes__AExprs.color;
idtype15 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprsnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprsnode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6293);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist7;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype17 = type_nullable_parser_nodes__TAssign.color;
idtype18 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tassignnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tassignnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6295);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist8;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable_parser_nodes__AExpr.color;
idtype21 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pexprnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pexprnode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6297);
show_backtrace(1);
}
var22 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var22, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var22:ACallAssignExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction213> */
{
var24 = parser_work__Parser__go_to(var_p, var23);
}
{
parser_work__Parser__push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction213#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction213__action(val* self, val* p0) {
parser__ReduceAction213__action(self, p0); /* Direct call parser#ReduceAction213#action on <self:Object(ReduceAction213)>*/
RET_LABEL:;
}
/* method parser#ReduceAction214#action for (self: ReduceAction214, Parser) */
void parser__ReduceAction214__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6322);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6324);
show_backtrace(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var12->class->vft[COLOR_kernel__Object__init]))(var12) /* init on <var12:Array[Object]>*/;
}
var_listnode5 = var12;
var13 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var13, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var13:AListExprs>*/
}
var_pexprsnode4 = var13;
var_tassignnode6 = var_nodearraylist6;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype15 = type_nullable_parser_nodes__TAssign.color;
idtype16 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tassignnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_tassignnode6->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6330);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype18 = type_nullable_parser_nodes__AExpr.color;
idtype19 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexprnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_pexprnode7->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6332);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var20, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var20:ACallAssignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction214> */
{
var22 = parser_work__Parser__go_to(var_p, var21);
}
{
parser_work__Parser__push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction214#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction214__action(val* self, val* p0) {
parser__ReduceAction214__action(self, p0); /* Direct call parser#ReduceAction214#action on <self:Object(ReduceAction214)>*/
RET_LABEL:;
}
/* method parser#ReduceAction215#action for (self: ReduceAction215, Parser) */
void parser__ReduceAction215__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6359);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype12 = type_nullable_parser_nodes__TId.color;
idtype13 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tidnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tidnode3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6361);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype15 = type_nullable_parser_nodes__AExprs.color;
idtype16 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprsnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprsnode4->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6363);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist8;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype18 = type_nullable_parser_nodes__TAssign.color;
idtype19 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tassignnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tassignnode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6365);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist9;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype21 = type_nullable_parser_nodes__AExpr.color;
idtype22 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pexprnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_pexprnode6->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6367);
show_backtrace(1);
}
var23 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var23, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var23:ACallAssignExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction215> */
{
var25 = parser_work__Parser__go_to(var_p, var24);
}
{
parser_work__Parser__push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction215#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction215__action(val* self, val* p0) {
parser__ReduceAction215__action(self, p0); /* Direct call parser#ReduceAction215#action on <self:Object(ReduceAction215)>*/
RET_LABEL:;
}
/* method parser#ReduceAction216#action for (self: ReduceAction216, Parser) */
void parser__ReduceAction216__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6393);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6395);
show_backtrace(1);
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var13->class->vft[COLOR_kernel__Object__init]))(var13) /* init on <var13:Array[Object]>*/;
}
var_listnode5 = var13;
var14 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var14, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode4 = var14;
var_tassignnode6 = var_nodearraylist7;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype16 = type_nullable_parser_nodes__TAssign.color;
idtype17 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tassignnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_tassignnode6->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6401);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode7->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6403);
show_backtrace(1);
}
var21 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var21:ACallAssignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction216> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction216#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction216__action(val* self, val* p0) {
parser__ReduceAction216__action(self, p0); /* Direct call parser#ReduceAction216#action on <self:Object(ReduceAction216)>*/
RET_LABEL:;
}
/* method parser#ReduceAction219#action for (self: ReduceAction219, Parser) */
void parser__ReduceAction219__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6426);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6428);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist3;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype12 = type_nullable_parser_nodes__TAssign.color;
idtype13 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tassignnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tassignnode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6430);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode6->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6432);
show_backtrace(1);
}
var17 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var17:ACallAssignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction219> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction219#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction219__action(val* self, val* p0) {
parser__ReduceAction219__action(self, p0); /* Direct call parser#ReduceAction219#action on <self:Object(ReduceAction219)>*/
RET_LABEL:;
}
/* method parser#ReduceAction220#action for (self: ReduceAction220, Parser) */
void parser__ReduceAction220__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : AImplicitSelfExpr */;
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
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var4) on <var4:AImplicitSelfExpr> */
RET_LABEL5:(void)0;
}
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6454);
show_backtrace(1);
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[Object]>*/;
}
var_listnode5 = var7;
var8 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var8, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode4 = var8;
var_tassignnode6 = var_nodearraylist2;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype10 = type_nullable_parser_nodes__TAssign.color;
idtype11 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tassignnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_tassignnode6->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6460);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist3;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode7->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6462);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var15:ACallAssignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction220> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction220#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction220__action(val* self, val* p0) {
parser__ReduceAction220__action(self, p0); /* Direct call parser#ReduceAction220#action on <self:Object(ReduceAction220)>*/
RET_LABEL:;
}
/* method parser#ReduceAction221#action for (self: ReduceAction221, Parser) */
void parser__ReduceAction221__action(val* self, val* p0) {
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
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var6) on <var6:AImplicitSelfExpr> */
RET_LABEL7:(void)0;
}
}
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6486);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable_parser_nodes__AExprs.color;
idtype11 = type_nullable_parser_nodes__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6488);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype13 = type_nullable_parser_nodes__TAssign.color;
idtype14 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tassignnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tassignnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6490);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode6->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6492);
show_backtrace(1);
}
var18 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var18, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var18:ACallAssignExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction221> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction221#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction221__action(val* self, val* p0) {
parser__ReduceAction221__action(self, p0); /* Direct call parser#ReduceAction221#action on <self:Object(ReduceAction221)>*/
RET_LABEL:;
}
/* method parser#ReduceAction222#action for (self: ReduceAction222, Parser) */
void parser__ReduceAction222__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var9 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6515);
show_backtrace(1);
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:Array[Object]>*/;
}
var_listnode5 = var8;
var9 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var9, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var9:AListExprs>*/
}
var_pexprsnode4 = var9;
var_tassignnode6 = var_nodearraylist3;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype11 = type_nullable_parser_nodes__TAssign.color;
idtype12 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tassignnode6->type->table_size) {
var10 = 0;
} else {
var10 = var_tassignnode6->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6521);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist4;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6523);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var16:ACallAssignExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction222> */
{
var18 = parser_work__Parser__go_to(var_p, var17);
}
{
parser_work__Parser__push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction222#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction222__action(val* self, val* p0) {
parser__ReduceAction222__action(self, p0); /* Direct call parser#ReduceAction222#action on <self:Object(ReduceAction222)>*/
RET_LABEL:;
}
/* method parser#ReduceAction223#action for (self: ReduceAction223, Parser) */
void parser__ReduceAction223__action(val* self, val* p0) {
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
val* var7 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
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
val* var19 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var7 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var7) on <var7:AImplicitSelfExpr> */
RET_LABEL8:(void)0;
}
}
var_pexprnode2 = var7;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6548);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable_parser_nodes__AExprs.color;
idtype12 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprsnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprsnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6550);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype14 = type_nullable_parser_nodes__TAssign.color;
idtype15 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tassignnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tassignnode5->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6552);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode6->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6554);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var19, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var19:ACallAssignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction223> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction223#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction223__action(val* self, val* p0) {
parser__ReduceAction223__action(self, p0); /* Direct call parser#ReduceAction223#action on <self:Object(ReduceAction223)>*/
RET_LABEL:;
}
/* method parser#ReduceAction224#action for (self: ReduceAction224, Parser) */
void parser__ReduceAction224__action(val* self, val* p0) {
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
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var10 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_tassignnode6 /* var tassignnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var6) on <var6:AImplicitSelfExpr> */
RET_LABEL7:(void)0;
}
}
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6578);
show_backtrace(1);
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:Array[Object]>*/;
}
var_listnode5 = var9;
var10 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var10, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var10:AListExprs>*/
}
var_pexprsnode4 = var10;
var_tassignnode6 = var_nodearraylist4;
/* <var_tassignnode6:nullable Object> isa nullable TAssign */
cltype12 = type_nullable_parser_nodes__TAssign.color;
idtype13 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tassignnode6->type->table_size) {
var11 = 0;
} else {
var11 = var_tassignnode6->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6584);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist5;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode7->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6586);
show_backtrace(1);
}
var17 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
{
parser_prod__ACallAssignExpr__init_acallassignexpr(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode6, var_pexprnode7); /* Direct call parser_prod#ACallAssignExpr#init_acallassignexpr on <var17:ACallAssignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction224> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction224#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction224__action(val* self, val* p0) {
parser__ReduceAction224__action(self, p0); /* Direct call parser#ReduceAction224#action on <self:Object(ReduceAction224)>*/
RET_LABEL:;
}
/* method parser#ReduceAction227#action for (self: ReduceAction227, Parser) */
void parser__ReduceAction227__action(val* self, val* p0) {
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
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ABraAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraAssignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6608);
show_backtrace(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6610);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype10 = type_nullable_parser_nodes__TAssign.color;
idtype11 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tassignnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tassignnode4->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6612);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6614);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ABraAssignExpr(&type_parser_nodes__ABraAssignExpr);
{
parser_prod__ABraAssignExpr__init_abraassignexpr(var15, var_pexprnode2, var_pexprsnode3, var_tassignnode4, var_pexprnode5); /* Direct call parser_prod#ABraAssignExpr#init_abraassignexpr on <var15:ABraAssignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction227> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction227#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction227__action(val* self, val* p0) {
parser__ReduceAction227__action(self, p0); /* Direct call parser#ReduceAction227#action on <self:Object(ReduceAction227)>*/
RET_LABEL:;
}
/* method parser#ReduceAction228#action for (self: ReduceAction228, Parser) */
void parser__ReduceAction228__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6638);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype10 = type_nullable_parser_nodes__TAttrid.color;
idtype11 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tattridnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tattridnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6640);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist6;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype13 = type_nullable_parser_nodes__AAssignOp.color;
idtype14 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_passignopnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_passignopnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6642);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6644);
show_backtrace(1);
}
var18 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
{
parser_prod__AAttrReassignExpr__init_aattrreassignexpr(var18, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#AAttrReassignExpr#init_aattrreassignexpr on <var18:AAttrReassignExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction228> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction228#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction228__action(val* self, val* p0) {
parser__ReduceAction228__action(self, p0); /* Direct call parser#ReduceAction228#action on <self:Object(ReduceAction228)>*/
RET_LABEL:;
}
/* method parser#ReduceAction229#action for (self: ReduceAction229, Parser) */
void parser__ReduceAction229__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6666);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype9 = type_nullable_parser_nodes__AAssignOp.color;
idtype10 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_passignopnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_passignopnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6668);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6670);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
{
parser_prod__AAttrReassignExpr__init_aattrreassignexpr(var14, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#AAttrReassignExpr#init_aattrreassignexpr on <var14:AAttrReassignExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction229> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction229#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction229__action(val* self, val* p0) {
parser__ReduceAction229__action(self, p0); /* Direct call parser#ReduceAction229#action on <self:Object(ReduceAction229)>*/
RET_LABEL:;
}
/* method parser#ReduceAction230#action for (self: ReduceAction230, Parser) */
void parser__ReduceAction230__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6694);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6696);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6698);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist6;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype16 = type_nullable_parser_nodes__AAssignOp.color;
idtype17 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_passignopnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_passignopnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6700);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6702);
show_backtrace(1);
}
var21 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var21:ACallReassignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction230> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction230#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction230__action(val* self, val* p0) {
parser__ReduceAction230__action(self, p0); /* Direct call parser#ReduceAction230#action on <self:Object(ReduceAction230)>*/
RET_LABEL:;
}
/* method parser#ReduceAction231#action for (self: ReduceAction231, Parser) */
void parser__ReduceAction231__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6726);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6728);
show_backtrace(1);
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:Array[Object]>*/;
}
var_listnode5 = var11;
var12 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var12, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var12:AListExprs>*/
}
var_pexprsnode4 = var12;
var_passignopnode6 = var_nodearraylist5;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype14 = type_nullable_parser_nodes__AAssignOp.color;
idtype15 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_passignopnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_passignopnode6->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6734);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist6;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode7->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6736);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var19, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var19:ACallReassignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction231> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction231#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction231__action(val* self, val* p0) {
parser__ReduceAction231__action(self, p0); /* Direct call parser#ReduceAction231#action on <self:Object(ReduceAction231)>*/
RET_LABEL:;
}
/* method parser#ReduceAction232#action for (self: ReduceAction232, Parser) */
void parser__ReduceAction232__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6762);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6764);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable_parser_nodes__AExprs.color;
idtype15 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprsnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprsnode4->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6766);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist7;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype17 = type_nullable_parser_nodes__AAssignOp.color;
idtype18 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_passignopnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_passignopnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6768);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist8;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable_parser_nodes__AExpr.color;
idtype21 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pexprnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pexprnode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6770);
show_backtrace(1);
}
var22 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var22, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var22:ACallReassignExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction232> */
{
var24 = parser_work__Parser__go_to(var_p, var23);
}
{
parser_work__Parser__push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction232#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction232__action(val* self, val* p0) {
parser__ReduceAction232__action(self, p0); /* Direct call parser#ReduceAction232#action on <self:Object(ReduceAction232)>*/
RET_LABEL:;
}
/* method parser#ReduceAction233#action for (self: ReduceAction233, Parser) */
void parser__ReduceAction233__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6795);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6797);
show_backtrace(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var12->class->vft[COLOR_kernel__Object__init]))(var12) /* init on <var12:Array[Object]>*/;
}
var_listnode5 = var12;
var13 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var13, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var13:AListExprs>*/
}
var_pexprsnode4 = var13;
var_passignopnode6 = var_nodearraylist6;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype15 = type_nullable_parser_nodes__AAssignOp.color;
idtype16 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_passignopnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_passignopnode6->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6803);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist7;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype18 = type_nullable_parser_nodes__AExpr.color;
idtype19 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexprnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_pexprnode7->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6805);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var20, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var20:ACallReassignExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction233> */
{
var22 = parser_work__Parser__go_to(var_p, var21);
}
{
parser_work__Parser__push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction233#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction233__action(val* self, val* p0) {
parser__ReduceAction233__action(self, p0); /* Direct call parser#ReduceAction233#action on <self:Object(ReduceAction233)>*/
RET_LABEL:;
}
/* method parser#ReduceAction234#action for (self: ReduceAction234, Parser) */
void parser__ReduceAction234__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6832);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype12 = type_nullable_parser_nodes__TId.color;
idtype13 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tidnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tidnode3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6834);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype15 = type_nullable_parser_nodes__AExprs.color;
idtype16 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprsnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprsnode4->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6836);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist8;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype18 = type_nullable_parser_nodes__AAssignOp.color;
idtype19 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_passignopnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_passignopnode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6838);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist9;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype21 = type_nullable_parser_nodes__AExpr.color;
idtype22 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pexprnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_pexprnode6->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6840);
show_backtrace(1);
}
var23 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var23, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var23:ACallReassignExpr>*/
}
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction234> */
{
var25 = parser_work__Parser__go_to(var_p, var24);
}
{
parser_work__Parser__push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction234#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction234__action(val* self, val* p0) {
parser__ReduceAction234__action(self, p0); /* Direct call parser#ReduceAction234#action on <self:Object(ReduceAction234)>*/
RET_LABEL:;
}
/* method parser#ReduceAction235#action for (self: ReduceAction235, Parser) */
void parser__ReduceAction235__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6866);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6868);
show_backtrace(1);
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var13->class->vft[COLOR_kernel__Object__init]))(var13) /* init on <var13:Array[Object]>*/;
}
var_listnode5 = var13;
var14 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var14, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode4 = var14;
var_passignopnode6 = var_nodearraylist7;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype16 = type_nullable_parser_nodes__AAssignOp.color;
idtype17 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_passignopnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_passignopnode6->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6874);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist8;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode7->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6876);
show_backtrace(1);
}
var21 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var21:ACallReassignExpr>*/
}
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction235> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction235#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction235__action(val* self, val* p0) {
parser__ReduceAction235__action(self, p0); /* Direct call parser#ReduceAction235#action on <self:Object(ReduceAction235)>*/
RET_LABEL:;
}
/* method parser#ReduceAction238#action for (self: ReduceAction238, Parser) */
void parser__ReduceAction238__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6899);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6901);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist3;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype12 = type_nullable_parser_nodes__AAssignOp.color;
idtype13 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_passignopnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_passignopnode5->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6903);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode6->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6905);
show_backtrace(1);
}
var17 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var17:ACallReassignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction238> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction238#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction238__action(val* self, val* p0) {
parser__ReduceAction238__action(self, p0); /* Direct call parser#ReduceAction238#action on <self:Object(ReduceAction238)>*/
RET_LABEL:;
}
/* method parser#ReduceAction239#action for (self: ReduceAction239, Parser) */
void parser__ReduceAction239__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : AImplicitSelfExpr */;
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
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var4) on <var4:AImplicitSelfExpr> */
RET_LABEL5:(void)0;
}
}
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6927);
show_backtrace(1);
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[Object]>*/;
}
var_listnode5 = var7;
var8 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var8, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode4 = var8;
var_passignopnode6 = var_nodearraylist2;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype10 = type_nullable_parser_nodes__AAssignOp.color;
idtype11 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_passignopnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_passignopnode6->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6933);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist3;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode7->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6935);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var15:ACallReassignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction239> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction239#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction239__action(val* self, val* p0) {
parser__ReduceAction239__action(self, p0); /* Direct call parser#ReduceAction239#action on <self:Object(ReduceAction239)>*/
RET_LABEL:;
}
/* method parser#ReduceAction240#action for (self: ReduceAction240, Parser) */
void parser__ReduceAction240__action(val* self, val* p0) {
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
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var6) on <var6:AImplicitSelfExpr> */
RET_LABEL7:(void)0;
}
}
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6959);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable_parser_nodes__AExprs.color;
idtype11 = type_nullable_parser_nodes__AExprs.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6961);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist4;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype13 = type_nullable_parser_nodes__AAssignOp.color;
idtype14 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_passignopnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_passignopnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6963);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode6->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6965);
show_backtrace(1);
}
var18 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var18, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var18:ACallReassignExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction240> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction240#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction240__action(val* self, val* p0) {
parser__ReduceAction240__action(self, p0); /* Direct call parser#ReduceAction240#action on <self:Object(ReduceAction240)>*/
RET_LABEL:;
}
/* method parser#ReduceAction241#action for (self: ReduceAction241, Parser) */
void parser__ReduceAction241__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var9 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6988);
show_backtrace(1);
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:Array[Object]>*/;
}
var_listnode5 = var8;
var9 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var9, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var9:AListExprs>*/
}
var_pexprsnode4 = var9;
var_passignopnode6 = var_nodearraylist3;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype11 = type_nullable_parser_nodes__AAssignOp.color;
idtype12 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_passignopnode6->type->table_size) {
var10 = 0;
} else {
var10 = var_passignopnode6->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6994);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist4;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 6996);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var16:ACallReassignExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction241> */
{
var18 = parser_work__Parser__go_to(var_p, var17);
}
{
parser_work__Parser__push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction241#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction241__action(val* self, val* p0) {
parser__ReduceAction241__action(self, p0); /* Direct call parser#ReduceAction241#action on <self:Object(ReduceAction241)>*/
RET_LABEL:;
}
/* method parser#ReduceAction242#action for (self: ReduceAction242, Parser) */
void parser__ReduceAction242__action(val* self, val* p0) {
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
val* var7 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var7 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var7) on <var7:AImplicitSelfExpr> */
RET_LABEL8:(void)0;
}
}
var_pexprnode2 = var7;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7021);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable_parser_nodes__AExprs.color;
idtype12 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprsnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprsnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7023);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist5;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype14 = type_nullable_parser_nodes__AAssignOp.color;
idtype15 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_passignopnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_passignopnode5->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7025);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode6->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7027);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var19, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var19:ACallReassignExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction242> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction242#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction242__action(val* self, val* p0) {
parser__ReduceAction242__action(self, p0); /* Direct call parser#ReduceAction242#action on <self:Object(ReduceAction242)>*/
RET_LABEL:;
}
/* method parser#ReduceAction243#action for (self: ReduceAction243, Parser) */
void parser__ReduceAction243__action(val* self, val* p0) {
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
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var10 /* : AListExprs */;
val* var_pexprsnode4 /* var pexprsnode4: nullable AListExprs */;
val* var_passignopnode6 /* var passignopnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var6) on <var6:AImplicitSelfExpr> */
RET_LABEL7:(void)0;
}
}
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7051);
show_backtrace(1);
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:Array[Object]>*/;
}
var_listnode5 = var9;
var10 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var10, var_listnode5); /* Direct call parser_prod#AListExprs#init_alistexprs on <var10:AListExprs>*/
}
var_pexprsnode4 = var10;
var_passignopnode6 = var_nodearraylist4;
/* <var_passignopnode6:nullable Object> isa nullable AAssignOp */
cltype12 = type_nullable_parser_nodes__AAssignOp.color;
idtype13 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_passignopnode6->type->table_size) {
var11 = 0;
} else {
var11 = var_passignopnode6->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7057);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist5;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode7->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7059);
show_backtrace(1);
}
var17 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
{
parser_prod__ACallReassignExpr__init_acallreassignexpr(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode6, var_pexprnode7); /* Direct call parser_prod#ACallReassignExpr#init_acallreassignexpr on <var17:ACallReassignExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction243> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction243#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction243__action(val* self, val* p0) {
parser__ReduceAction243__action(self, p0); /* Direct call parser#ReduceAction243#action on <self:Object(ReduceAction243)>*/
RET_LABEL:;
}
/* method parser#ReduceAction246#action for (self: ReduceAction246, Parser) */
void parser__ReduceAction246__action(val* self, val* p0) {
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
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ABraReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraReassignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7081);
show_backtrace(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7083);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype10 = type_nullable_parser_nodes__AAssignOp.color;
idtype11 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_passignopnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_passignopnode4->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7085);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7087);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ABraReassignExpr(&type_parser_nodes__ABraReassignExpr);
{
parser_prod__ABraReassignExpr__init_abrareassignexpr(var15, var_pexprnode2, var_pexprsnode3, var_passignopnode4, var_pexprnode5); /* Direct call parser_prod#ABraReassignExpr#init_abrareassignexpr on <var15:ABraReassignExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction246> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction246#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction246__action(val* self, val* p0) {
parser__ReduceAction246__action(self, p0); /* Direct call parser#ReduceAction246#action on <self:Object(ReduceAction246)>*/
RET_LABEL:;
}
/* method parser#ReduceAction247#action for (self: ReduceAction247, Parser) */
void parser__ReduceAction247__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpluseqnode2 /* var tpluseqnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APlusAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable APlusAssignOp */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tpluseqnode2 = var_nodearraylist1;
/* <var_tpluseqnode2:nullable Object> isa nullable TPluseq */
cltype = type_nullable_parser_nodes__TPluseq.color;
idtype = type_nullable_parser_nodes__TPluseq.id;
if(var_tpluseqnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tpluseqnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tpluseqnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7105);
show_backtrace(1);
}
var3 = NEW_parser_nodes__APlusAssignOp(&type_parser_nodes__APlusAssignOp);
{
parser_prod__APlusAssignOp__init_aplusassignop(var3, var_tpluseqnode2); /* Direct call parser_prod#APlusAssignOp#init_aplusassignop on <var3:APlusAssignOp>*/
}
var_passignopnode1 = var3;
var_node_list = var_passignopnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction247> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction247#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction247__action(val* self, val* p0) {
parser__ReduceAction247__action(self, p0); /* Direct call parser#ReduceAction247#action on <self:Object(ReduceAction247)>*/
RET_LABEL:;
}
/* method parser#ReduceAction248#action for (self: ReduceAction248, Parser) */
void parser__ReduceAction248__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminuseqnode2 /* var tminuseqnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMinusAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable AMinusAssignOp */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tminuseqnode2 = var_nodearraylist1;
/* <var_tminuseqnode2:nullable Object> isa nullable TMinuseq */
cltype = type_nullable_parser_nodes__TMinuseq.color;
idtype = type_nullable_parser_nodes__TMinuseq.id;
if(var_tminuseqnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tminuseqnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tminuseqnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7120);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AMinusAssignOp(&type_parser_nodes__AMinusAssignOp);
{
parser_prod__AMinusAssignOp__init_aminusassignop(var3, var_tminuseqnode2); /* Direct call parser_prod#AMinusAssignOp#init_aminusassignop on <var3:AMinusAssignOp>*/
}
var_passignopnode1 = var3;
var_node_list = var_passignopnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction248> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction248#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction248__action(val* self, val* p0) {
parser__ReduceAction248__action(self, p0); /* Direct call parser#ReduceAction248#action on <self:Object(ReduceAction248)>*/
RET_LABEL:;
}
/* method parser#ReduceAction249#action for (self: ReduceAction249, Parser) */
void parser__ReduceAction249__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwdonode2 /* var tkwdonode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_plabelnode4 /* var plabelnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ADoExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADoExpr */;
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
var_tkwdonode2 = var_nodearraylist1;
/* <var_tkwdonode2:nullable Object> isa nullable TKwdo */
cltype = type_nullable_parser_nodes__TKwdo.color;
idtype = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwdonode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwdonode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7137);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable_parser_nodes__AExpr.color;
idtype7 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7139);
show_backtrace(1);
}
var_plabelnode4 = var_nodearraylist3;
/* <var_plabelnode4:nullable Object> isa nullable ALabel */
cltype9 = type_nullable_parser_nodes__ALabel.color;
idtype10 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_plabelnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_plabelnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 7141);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ADoExpr(&type_parser_nodes__ADoExpr);
{
parser_prod__ADoExpr__init_adoexpr(var11, var_tkwdonode2, var_pexprnode3, var_plabelnode4); /* Direct call parser_prod#ADoExpr#init_adoexpr on <var11:ADoExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction249> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction249#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction249__action(val* self, val* p0) {
parser__ReduceAction249__action(self, p0); /* Direct call parser#ReduceAction249#action on <self:Object(ReduceAction249)>*/
RET_LABEL:;
}
