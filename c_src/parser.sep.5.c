#include "parser.sep.0.h"
/* method parser#ReduceAction252#action for (self: ReduceAction252, Parser) */
void parser__ReduceAction252__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AImpliesExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImpliesExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7183);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7185);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AImpliesExpr(&type_parser_nodes__AImpliesExpr);
{
parser_prod__AImpliesExpr__init_aimpliesexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AImpliesExpr#init_aimpliesexpr on <var9:AImpliesExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction252> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction252#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction252__action(val* self, val* p0) {
parser__ReduceAction252__action(self, p0); /* Direct call parser#ReduceAction252#action on <self:Object(ReduceAction252)>*/
RET_LABEL:;
}
/* method parser#ReduceAction254#action for (self: ReduceAction254, Parser) */
void parser__ReduceAction254__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnotnode2 /* var tkwnotnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : ANotExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANotExpr */;
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
var_tkwnotnode2 = var_nodearraylist1;
/* <var_tkwnotnode2:nullable Object> isa nullable TKwnot */
cltype = type_nullable_parser_nodes__TKwnot.color;
idtype = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwnotnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwnotnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7203);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7205);
show_backtrace(1);
}
var8 = NEW_parser_nodes__ANotExpr(&type_parser_nodes__ANotExpr);
{
parser_prod__ANotExpr__init_anotexpr(var8, var_tkwnotnode2, var_pexprnode3); /* Direct call parser_prod#ANotExpr#init_anotexpr on <var8:ANotExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction254> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction254#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction254__action(val* self, val* p0) {
parser__ReduceAction254__action(self, p0); /* Direct call parser#ReduceAction254#action on <self:Object(ReduceAction254)>*/
RET_LABEL:;
}
/* method parser#ReduceAction256#action for (self: ReduceAction256, Parser) */
void parser__ReduceAction256__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AEqExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEqExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7224);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7226);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AEqExpr(&type_parser_nodes__AEqExpr);
{
parser_prod__AEqExpr__init_aeqexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AEqExpr#init_aeqexpr on <var9:AEqExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction256> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction256#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction256__action(val* self, val* p0) {
parser__ReduceAction256__action(self, p0); /* Direct call parser#ReduceAction256#action on <self:Object(ReduceAction256)>*/
RET_LABEL:;
}
/* method parser#ReduceAction257#action for (self: ReduceAction257, Parser) */
void parser__ReduceAction257__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ANeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANeExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7245);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7247);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ANeExpr(&type_parser_nodes__ANeExpr);
{
parser_prod__ANeExpr__init_aneexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#ANeExpr#init_aneexpr on <var9:ANeExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction257> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction257#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction257__action(val* self, val* p0) {
parser__ReduceAction257__action(self, p0); /* Direct call parser#ReduceAction257#action on <self:Object(ReduceAction257)>*/
RET_LABEL:;
}
/* method parser#ReduceAction258#action for (self: ReduceAction258, Parser) */
void parser__ReduceAction258__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ALtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALtExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7266);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7268);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ALtExpr(&type_parser_nodes__ALtExpr);
{
parser_prod__ALtExpr__init_altexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#ALtExpr#init_altexpr on <var9:ALtExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction258> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction258#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction258__action(val* self, val* p0) {
parser__ReduceAction258__action(self, p0); /* Direct call parser#ReduceAction258#action on <self:Object(ReduceAction258)>*/
RET_LABEL:;
}
/* method parser#ReduceAction259#action for (self: ReduceAction259, Parser) */
void parser__ReduceAction259__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ALeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALeExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7287);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7289);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ALeExpr(&type_parser_nodes__ALeExpr);
{
parser_prod__ALeExpr__init_aleexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#ALeExpr#init_aleexpr on <var9:ALeExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction259> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction259#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction259__action(val* self, val* p0) {
parser__ReduceAction259__action(self, p0); /* Direct call parser#ReduceAction259#action on <self:Object(ReduceAction259)>*/
RET_LABEL:;
}
/* method parser#ReduceAction260#action for (self: ReduceAction260, Parser) */
void parser__ReduceAction260__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ALlExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALlExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7308);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7310);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ALlExpr(&type_parser_nodes__ALlExpr);
{
parser_prod__ALlExpr__init_allexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#ALlExpr#init_allexpr on <var9:ALlExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction260> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction260#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction260__action(val* self, val* p0) {
parser__ReduceAction260__action(self, p0); /* Direct call parser#ReduceAction260#action on <self:Object(ReduceAction260)>*/
RET_LABEL:;
}
/* method parser#ReduceAction261#action for (self: ReduceAction261, Parser) */
void parser__ReduceAction261__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AGtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGtExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7329);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7331);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AGtExpr(&type_parser_nodes__AGtExpr);
{
parser_prod__AGtExpr__init_agtexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AGtExpr#init_agtexpr on <var9:AGtExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction261> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction261#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction261__action(val* self, val* p0) {
parser__ReduceAction261__action(self, p0); /* Direct call parser#ReduceAction261#action on <self:Object(ReduceAction261)>*/
RET_LABEL:;
}
/* method parser#ReduceAction262#action for (self: ReduceAction262, Parser) */
void parser__ReduceAction262__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AGeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGeExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7350);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7352);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AGeExpr(&type_parser_nodes__AGeExpr);
{
parser_prod__AGeExpr__init_ageexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AGeExpr#init_ageexpr on <var9:AGeExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction262> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction262#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction262__action(val* self, val* p0) {
parser__ReduceAction262__action(self, p0); /* Direct call parser#ReduceAction262#action on <self:Object(ReduceAction262)>*/
RET_LABEL:;
}
/* method parser#ReduceAction263#action for (self: ReduceAction263, Parser) */
void parser__ReduceAction263__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AGgExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGgExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7371);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7373);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AGgExpr(&type_parser_nodes__AGgExpr);
{
parser_prod__AGgExpr__init_aggexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AGgExpr#init_aggexpr on <var9:AGgExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction263> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction263#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction263__action(val* self, val* p0) {
parser__ReduceAction263__action(self, p0); /* Direct call parser#ReduceAction263#action on <self:Object(ReduceAction263)>*/
RET_LABEL:;
}
/* method parser#ReduceAction264#action for (self: ReduceAction264, Parser) */
void parser__ReduceAction264__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AStarshipExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarshipExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7392);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7394);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AStarshipExpr(&type_parser_nodes__AStarshipExpr);
{
parser_prod__AStarshipExpr__init_astarshipexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AStarshipExpr#init_astarshipexpr on <var9:AStarshipExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction264> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction264#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction264__action(val* self, val* p0) {
parser__ReduceAction264__action(self, p0); /* Direct call parser#ReduceAction264#action on <self:Object(ReduceAction264)>*/
RET_LABEL:;
}
/* method parser#ReduceAction265#action for (self: ReduceAction265, Parser) */
void parser__ReduceAction265__action(val* self, val* p0) {
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
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AIsaExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIsaExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7413);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist4;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype7 = type_nullable_parser_nodes__AType.color;
idtype8 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_ptypenode3->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7415);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AIsaExpr(&type_parser_nodes__AIsaExpr);
{
parser_prod__AIsaExpr__init_aisaexpr(var9, var_pexprnode2, var_ptypenode3); /* Direct call parser_prod#AIsaExpr#init_aisaexpr on <var9:AIsaExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction265> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction265#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction265__action(val* self, val* p0) {
parser__ReduceAction265__action(self, p0); /* Direct call parser#ReduceAction265#action on <self:Object(ReduceAction265)>*/
RET_LABEL:;
}
/* method parser#ReduceAction267#action for (self: ReduceAction267, Parser) */
void parser__ReduceAction267__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : APlusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APlusExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7434);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7436);
show_backtrace(1);
}
var9 = NEW_parser_nodes__APlusExpr(&type_parser_nodes__APlusExpr);
{
parser_prod__APlusExpr__init_aplusexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#APlusExpr#init_aplusexpr on <var9:APlusExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction267> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction267#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction267__action(val* self, val* p0) {
parser__ReduceAction267__action(self, p0); /* Direct call parser#ReduceAction267#action on <self:Object(ReduceAction267)>*/
RET_LABEL:;
}
/* method parser#ReduceAction268#action for (self: ReduceAction268, Parser) */
void parser__ReduceAction268__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AMinusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMinusExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7455);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7457);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AMinusExpr(&type_parser_nodes__AMinusExpr);
{
parser_prod__AMinusExpr__init_aminusexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AMinusExpr#init_aminusexpr on <var9:AMinusExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction268> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction268#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction268__action(val* self, val* p0) {
parser__ReduceAction268__action(self, p0); /* Direct call parser#ReduceAction268#action on <self:Object(ReduceAction268)>*/
RET_LABEL:;
}
/* method parser#ReduceAction270#action for (self: ReduceAction270, Parser) */
void parser__ReduceAction270__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AStarExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7476);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7478);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AStarExpr(&type_parser_nodes__AStarExpr);
{
parser_prod__AStarExpr__init_astarexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#AStarExpr#init_astarexpr on <var9:AStarExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction270> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction270#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction270__action(val* self, val* p0) {
parser__ReduceAction270__action(self, p0); /* Direct call parser#ReduceAction270#action on <self:Object(ReduceAction270)>*/
RET_LABEL:;
}
/* method parser#ReduceAction271#action for (self: ReduceAction271, Parser) */
void parser__ReduceAction271__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ASlashExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASlashExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7497);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7499);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ASlashExpr(&type_parser_nodes__ASlashExpr);
{
parser_prod__ASlashExpr__init_aslashexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#ASlashExpr#init_aslashexpr on <var9:ASlashExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction271> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction271#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction271__action(val* self, val* p0) {
parser__ReduceAction271__action(self, p0); /* Direct call parser#ReduceAction271#action on <self:Object(ReduceAction271)>*/
RET_LABEL:;
}
/* method parser#ReduceAction272#action for (self: ReduceAction272, Parser) */
void parser__ReduceAction272__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : APercentExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APercentExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7518);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7520);
show_backtrace(1);
}
var9 = NEW_parser_nodes__APercentExpr(&type_parser_nodes__APercentExpr);
{
parser_prod__APercentExpr__init_apercentexpr(var9, var_pexprnode2, var_pexprnode3); /* Direct call parser_prod#APercentExpr#init_apercentexpr on <var9:APercentExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction272> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction272#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction272__action(val* self, val* p0) {
parser__ReduceAction272__action(self, p0); /* Direct call parser#ReduceAction272#action on <self:Object(ReduceAction272)>*/
RET_LABEL:;
}
/* method parser#ReduceAction274#action for (self: ReduceAction274, Parser) */
void parser__ReduceAction274__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AUminusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUminusExpr */;
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
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable_parser_nodes__TMinus.color;
idtype = type_nullable_parser_nodes__TMinus.id;
if(var_tminusnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tminusnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tminusnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7538);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7540);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AUminusExpr(&type_parser_nodes__AUminusExpr);
{
parser_prod__AUminusExpr__init_auminusexpr(var8, var_tminusnode2, var_pexprnode3); /* Direct call parser_prod#AUminusExpr#init_auminusexpr on <var8:AUminusExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction274> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction274#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction274__action(val* self, val* p0) {
parser__ReduceAction274__action(self, p0); /* Direct call parser#ReduceAction274#action on <self:Object(ReduceAction274)>*/
RET_LABEL:;
}
/* method parser#ReduceAction275#action for (self: ReduceAction275, Parser) */
void parser__ReduceAction275__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwoncenode2 /* var tkwoncenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AOnceExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOnceExpr */;
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
var_tkwoncenode2 = var_nodearraylist1;
/* <var_tkwoncenode2:nullable Object> isa nullable TKwonce */
cltype = type_nullable_parser_nodes__TKwonce.color;
idtype = type_nullable_parser_nodes__TKwonce.id;
if(var_tkwoncenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwoncenode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwoncenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7558);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7560);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AOnceExpr(&type_parser_nodes__AOnceExpr);
{
parser_prod__AOnceExpr__init_aonceexpr(var8, var_tkwoncenode2, var_pexprnode3); /* Direct call parser_prod#AOnceExpr#init_aonceexpr on <var8:AOnceExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction275> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction275#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction275__action(val* self, val* p0) {
parser__ReduceAction275__action(self, p0); /* Direct call parser#ReduceAction275#action on <self:Object(ReduceAction275)>*/
RET_LABEL:;
}
/* method parser#ReduceAction277#action for (self: ReduceAction277, Parser) */
void parser__ReduceAction277__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : ANewExpr */;
val* var13 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable_parser_nodes__TKwnew.color;
idtype = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwnewnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwnewnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7579);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype7 = type_nullable_parser_nodes__AType.color;
idtype8 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_ptypenode3->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7581);
show_backtrace(1);
}
var_pexprsnode5 = var_nodearraylist4;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype10 = type_nullable_parser_nodes__AExprs.color;
idtype11 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprsnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprsnode5->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7583);
show_backtrace(1);
}
var12 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
var13 = NULL;
{
parser_prod__ANewExpr__init_anewexpr(var12, var_tkwnewnode2, var_ptypenode3, var13, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var12:ANewExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction277> */
{
var15 = parser_work__Parser__go_to(var_p, var14);
}
{
parser_work__Parser__push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction277#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction277__action(val* self, val* p0) {
parser__ReduceAction277__action(self, p0); /* Direct call parser#ReduceAction277#action on <self:Object(ReduceAction277)>*/
RET_LABEL:;
}
/* method parser#ReduceAction278#action for (self: ReduceAction278, Parser) */
void parser__ReduceAction278__action(val* self, val* p0) {
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
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7606);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable_parser_nodes__AExpr.color;
idtype10 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7608);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist6;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype12 = type_nullable_parser_nodes__TAttrid.color;
idtype13 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tattridnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tattridnode4->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7610);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
{
parser_prod__AIssetAttrExpr__init_aissetattrexpr(var14, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var14:AIssetAttrExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction278> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction278#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction278__action(val* self, val* p0) {
parser__ReduceAction278__action(self, p0); /* Direct call parser#ReduceAction278#action on <self:Object(ReduceAction278)>*/
RET_LABEL:;
}
/* method parser#ReduceAction279#action for (self: ReduceAction279, Parser) */
void parser__ReduceAction279__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode3 /* var pexprnode3: nullable AImplicitSelfExpr */;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7629);
show_backtrace(1);
}
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var5) on <var5:AImplicitSelfExpr> */
RET_LABEL6:(void)0;
}
}
var_pexprnode3 = var5;
var_tattridnode4 = var_nodearraylist3;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype8 = type_nullable_parser_nodes__TAttrid.color;
idtype9 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tattridnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode4->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7632);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
{
parser_prod__AIssetAttrExpr__init_aissetattrexpr(var10, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod#AIssetAttrExpr#init_aissetattrexpr on <var10:AIssetAttrExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction279> */
{
var12 = parser_work__Parser__go_to(var_p, var11);
}
{
parser_work__Parser__push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction279#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction279__action(val* self, val* p0) {
parser__ReduceAction279__action(self, p0); /* Direct call parser#ReduceAction279#action on <self:Object(ReduceAction279)>*/
RET_LABEL:;
}
/* method parser#ReduceAction280#action for (self: ReduceAction280, Parser) */
void parser__ReduceAction280__action(val* self, val* p0) {
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
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7653);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype8 = type_nullable_parser_nodes__TAttrid.color;
idtype9 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tattridnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7655);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
{
parser_prod__AAttrExpr__init_aattrexpr(var10, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var10:AAttrExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction280> */
{
var12 = parser_work__Parser__go_to(var_p, var11);
}
{
parser_work__Parser__push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction280#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction280__action(val* self, val* p0) {
parser__ReduceAction280__action(self, p0); /* Direct call parser#ReduceAction280#action on <self:Object(ReduceAction280)>*/
RET_LABEL:;
}
/* method parser#ReduceAction281#action for (self: ReduceAction281, Parser) */
void parser__ReduceAction281__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
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
var3 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
{
{ /* Inline parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr (var3) on <var3:AImplicitSelfExpr> */
RET_LABEL4:(void)0;
}
}
var_pexprnode2 = var3;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7673);
show_backtrace(1);
}
var6 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
{
parser_prod__AAttrExpr__init_aattrexpr(var6, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod#AAttrExpr#init_aattrexpr on <var6:AAttrExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction281> */
{
var8 = parser_work__Parser__go_to(var_p, var7);
}
{
parser_work__Parser__push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction281#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction281__action(val* self, val* p0) {
parser__ReduceAction281__action(self, p0); /* Direct call parser#ReduceAction281#action on <self:Object(ReduceAction281)>*/
RET_LABEL:;
}
/* method parser#ReduceAction287#action for (self: ReduceAction287, Parser) */
void parser__ReduceAction287__action(val* self, val* p0) {
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
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ABraExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraExpr */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7690);
show_backtrace(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype5 = type_nullable_parser_nodes__AExprs.color;
idtype6 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7692);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ABraExpr(&type_parser_nodes__ABraExpr);
{
parser_prod__ABraExpr__init_abraexpr(var7, var_pexprnode2, var_pexprsnode3); /* Direct call parser_prod#ABraExpr#init_abraexpr on <var7:ABraExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction287> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction287#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction287__action(val* self, val* p0) {
parser__ReduceAction287__action(self, p0); /* Direct call parser#ReduceAction287#action on <self:Object(ReduceAction287)>*/
RET_LABEL:;
}
/* method parser#ReduceAction288#action for (self: ReduceAction288, Parser) */
void parser__ReduceAction288__action(val* self, val* p0) {
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable_parser_nodes__TKwnew.color;
idtype = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwnewnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwnewnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7714);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable_parser_nodes__AType.color;
idtype11 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_ptypenode3->type->table_size) {
var9 = 0;
} else {
var9 = var_ptypenode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7716);
show_backtrace(1);
}
var_tidnode4 = var_nodearraylist6;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype13 = type_nullable_parser_nodes__TId.color;
idtype14 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tidnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tidnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7718);
show_backtrace(1);
}
var_pexprsnode5 = var_nodearraylist7;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype16 = type_nullable_parser_nodes__AExprs.color;
idtype17 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprsnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprsnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7720);
show_backtrace(1);
}
var18 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
{
parser_prod__ANewExpr__init_anewexpr(var18, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5); /* Direct call parser_prod#ANewExpr#init_anewexpr on <var18:ANewExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction288> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction288#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction288__action(val* self, val* p0) {
parser__ReduceAction288__action(self, p0); /* Direct call parser#ReduceAction288#action on <self:Object(ReduceAction288)>*/
RET_LABEL:;
}
/* method parser#ReduceAction289#action for (self: ReduceAction289, Parser) */
void parser__ReduceAction289__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ACrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACrangeExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var11 = 0;
} else {
var11 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7747);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode3->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7749);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode4->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7751);
show_backtrace(1);
}
var_tcbranode5 = var_nodearraylist9;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype19 = type_nullable_parser_nodes__TCbra.color;
idtype20 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tcbranode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tcbranode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7753);
show_backtrace(1);
}
var_pannotationsnode6 = var_nodearraylist10;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable_parser_nodes__AAnnotations.color;
idtype23 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7755);
show_backtrace(1);
}
var24 = NEW_parser_nodes__ACrangeExpr(&type_parser_nodes__ACrangeExpr);
{
parser_prod__ACrangeExpr__init_acrangeexpr(var24, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tcbranode5, var_pannotationsnode6); /* Direct call parser_prod#ACrangeExpr#init_acrangeexpr on <var24:ACrangeExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction289> */
{
var26 = parser_work__Parser__go_to(var_p, var25);
}
{
parser_work__Parser__push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction289#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction289__action(val* self, val* p0) {
parser__ReduceAction289__action(self, p0); /* Direct call parser#ReduceAction289#action on <self:Object(ReduceAction289)>*/
RET_LABEL:;
}
/* method parser#ReduceAction290#action for (self: ReduceAction290, Parser) */
void parser__ReduceAction290__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tobranode5 /* var tobranode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AOrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrangeExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var11 = 0;
} else {
var11 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7783);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode3->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7785);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode4->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7787);
show_backtrace(1);
}
var_tobranode5 = var_nodearraylist9;
/* <var_tobranode5:nullable Object> isa nullable TObra */
cltype19 = type_nullable_parser_nodes__TObra.color;
idtype20 = type_nullable_parser_nodes__TObra.id;
if(var_tobranode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tobranode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tobranode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7789);
show_backtrace(1);
}
var_pannotationsnode6 = var_nodearraylist10;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable_parser_nodes__AAnnotations.color;
idtype23 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7791);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AOrangeExpr(&type_parser_nodes__AOrangeExpr);
{
parser_prod__AOrangeExpr__init_aorangeexpr(var24, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tobranode5, var_pannotationsnode6); /* Direct call parser_prod#AOrangeExpr#init_aorangeexpr on <var24:AOrangeExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction290> */
{
var26 = parser_work__Parser__go_to(var_p, var25);
}
{
parser_work__Parser__push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction290#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction290__action(val* self, val* p0) {
parser__ReduceAction290__action(self, p0); /* Direct call parser#ReduceAction290#action on <self:Object(ReduceAction290)>*/
RET_LABEL:;
}
/* method parser#ReduceAction291#action for (self: ReduceAction291, Parser) */
void parser__ReduceAction291__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprsnode2 /* var pexprsnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AArrayExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AArrayExpr */;
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
var_pexprsnode2 = var_nodearraylist1;
/* <var_pexprsnode2:nullable Object> isa nullable AExprs */
cltype = type_nullable_parser_nodes__AExprs.color;
idtype = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprsnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprsnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7811);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7813);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AArrayExpr(&type_parser_nodes__AArrayExpr);
{
parser_prod__AArrayExpr__init_aarrayexpr(var7, var_pexprsnode2, var_pannotationsnode3); /* Direct call parser_prod#AArrayExpr#init_aarrayexpr on <var7:AArrayExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction291> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction291#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction291__action(val* self, val* p0) {
parser__ReduceAction291__action(self, p0); /* Direct call parser#ReduceAction291#action on <self:Object(ReduceAction291)>*/
RET_LABEL:;
}
/* method parser#ReduceAction292#action for (self: ReduceAction292, Parser) */
void parser__ReduceAction292__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwselfnode2 /* var tkwselfnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ASelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASelfExpr */;
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
var_tkwselfnode2 = var_nodearraylist1;
/* <var_tkwselfnode2:nullable Object> isa nullable TKwself */
cltype = type_nullable_parser_nodes__TKwself.color;
idtype = type_nullable_parser_nodes__TKwself.id;
if(var_tkwselfnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwselfnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwselfnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7830);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7832);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ASelfExpr(&type_parser_nodes__ASelfExpr);
{
parser_prod__ASelfExpr__init_aselfexpr(var7, var_tkwselfnode2, var_pannotationsnode3); /* Direct call parser_prod#ASelfExpr#init_aselfexpr on <var7:ASelfExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction292> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction292#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction292__action(val* self, val* p0) {
parser__ReduceAction292__action(self, p0); /* Direct call parser#ReduceAction292#action on <self:Object(ReduceAction292)>*/
RET_LABEL:;
}
/* method parser#ReduceAction293#action for (self: ReduceAction293, Parser) */
void parser__ReduceAction293__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwtruenode2 /* var tkwtruenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ATrueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ATrueExpr */;
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
var_tkwtruenode2 = var_nodearraylist1;
/* <var_tkwtruenode2:nullable Object> isa nullable TKwtrue */
cltype = type_nullable_parser_nodes__TKwtrue.color;
idtype = type_nullable_parser_nodes__TKwtrue.id;
if(var_tkwtruenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwtruenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwtruenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7849);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7851);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ATrueExpr(&type_parser_nodes__ATrueExpr);
{
parser_prod__ATrueExpr__init_atrueexpr(var7, var_tkwtruenode2, var_pannotationsnode3); /* Direct call parser_prod#ATrueExpr#init_atrueexpr on <var7:ATrueExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction293> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction293#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction293__action(val* self, val* p0) {
parser__ReduceAction293__action(self, p0); /* Direct call parser#ReduceAction293#action on <self:Object(ReduceAction293)>*/
RET_LABEL:;
}
/* method parser#ReduceAction294#action for (self: ReduceAction294, Parser) */
void parser__ReduceAction294__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwfalsenode2 /* var tkwfalsenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AFalseExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFalseExpr */;
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
var_tkwfalsenode2 = var_nodearraylist1;
/* <var_tkwfalsenode2:nullable Object> isa nullable TKwfalse */
cltype = type_nullable_parser_nodes__TKwfalse.color;
idtype = type_nullable_parser_nodes__TKwfalse.id;
if(var_tkwfalsenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwfalsenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwfalsenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7868);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7870);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AFalseExpr(&type_parser_nodes__AFalseExpr);
{
parser_prod__AFalseExpr__init_afalseexpr(var7, var_tkwfalsenode2, var_pannotationsnode3); /* Direct call parser_prod#AFalseExpr#init_afalseexpr on <var7:AFalseExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction294> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction294#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction294__action(val* self, val* p0) {
parser__ReduceAction294__action(self, p0); /* Direct call parser#ReduceAction294#action on <self:Object(ReduceAction294)>*/
RET_LABEL:;
}
/* method parser#ReduceAction295#action for (self: ReduceAction295, Parser) */
void parser__ReduceAction295__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnullnode2 /* var tkwnullnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ANullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANullExpr */;
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
var_tkwnullnode2 = var_nodearraylist1;
/* <var_tkwnullnode2:nullable Object> isa nullable TKwnull */
cltype = type_nullable_parser_nodes__TKwnull.color;
idtype = type_nullable_parser_nodes__TKwnull.id;
if(var_tkwnullnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwnullnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwnullnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7887);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7889);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ANullExpr(&type_parser_nodes__ANullExpr);
{
parser_prod__ANullExpr__init_anullexpr(var7, var_tkwnullnode2, var_pannotationsnode3); /* Direct call parser_prod#ANullExpr#init_anullexpr on <var7:ANullExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction295> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction295#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction295__action(val* self, val* p0) {
parser__ReduceAction295__action(self, p0); /* Direct call parser#ReduceAction295#action on <self:Object(ReduceAction295)>*/
RET_LABEL:;
}
/* method parser#ReduceAction296#action for (self: ReduceAction296, Parser) */
void parser__ReduceAction296__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnumbernode2 /* var tnumbernode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ADecIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADecIntExpr */;
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
var_tnumbernode2 = var_nodearraylist1;
/* <var_tnumbernode2:nullable Object> isa nullable TNumber */
cltype = type_nullable_parser_nodes__TNumber.color;
idtype = type_nullable_parser_nodes__TNumber.id;
if(var_tnumbernode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tnumbernode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tnumbernode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7906);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7908);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ADecIntExpr(&type_parser_nodes__ADecIntExpr);
{
parser_prod__ADecIntExpr__init_adecintexpr(var7, var_tnumbernode2, var_pannotationsnode3); /* Direct call parser_prod#ADecIntExpr#init_adecintexpr on <var7:ADecIntExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction296> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction296#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction296__action(val* self, val* p0) {
parser__ReduceAction296__action(self, p0); /* Direct call parser#ReduceAction296#action on <self:Object(ReduceAction296)>*/
RET_LABEL:;
}
/* method parser#ReduceAction297#action for (self: ReduceAction297, Parser) */
void parser__ReduceAction297__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_thexnumbernode2 /* var thexnumbernode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AHexIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AHexIntExpr */;
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
var_thexnumbernode2 = var_nodearraylist1;
/* <var_thexnumbernode2:nullable Object> isa nullable THexNumber */
cltype = type_nullable_parser_nodes__THexNumber.color;
idtype = type_nullable_parser_nodes__THexNumber.id;
if(var_thexnumbernode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_thexnumbernode2->type->table_size) {
var3 = 0;
} else {
var3 = var_thexnumbernode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7925);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7927);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AHexIntExpr(&type_parser_nodes__AHexIntExpr);
{
parser_prod__AHexIntExpr__init_ahexintexpr(var7, var_thexnumbernode2, var_pannotationsnode3); /* Direct call parser_prod#AHexIntExpr#init_ahexintexpr on <var7:AHexIntExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction297> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction297#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction297__action(val* self, val* p0) {
parser__ReduceAction297__action(self, p0); /* Direct call parser#ReduceAction297#action on <self:Object(ReduceAction297)>*/
RET_LABEL:;
}
/* method parser#ReduceAction298#action for (self: ReduceAction298, Parser) */
void parser__ReduceAction298__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tfloatnode2 /* var tfloatnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AFloatExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFloatExpr */;
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
var_tfloatnode2 = var_nodearraylist1;
/* <var_tfloatnode2:nullable Object> isa nullable TFloat */
cltype = type_nullable_parser_nodes__TFloat.color;
idtype = type_nullable_parser_nodes__TFloat.id;
if(var_tfloatnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tfloatnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tfloatnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7944);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7946);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AFloatExpr(&type_parser_nodes__AFloatExpr);
{
parser_prod__AFloatExpr__init_afloatexpr(var7, var_tfloatnode2, var_pannotationsnode3); /* Direct call parser_prod#AFloatExpr#init_afloatexpr on <var7:AFloatExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction298> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction298#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction298__action(val* self, val* p0) {
parser__ReduceAction298__action(self, p0); /* Direct call parser#ReduceAction298#action on <self:Object(ReduceAction298)>*/
RET_LABEL:;
}
/* method parser#ReduceAction299#action for (self: ReduceAction299, Parser) */
void parser__ReduceAction299__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcharnode2 /* var tcharnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ACharExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACharExpr */;
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
var_tcharnode2 = var_nodearraylist1;
/* <var_tcharnode2:nullable Object> isa nullable TChar */
cltype = type_nullable_parser_nodes__TChar.color;
idtype = type_nullable_parser_nodes__TChar.id;
if(var_tcharnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tcharnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tcharnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7963);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7965);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ACharExpr(&type_parser_nodes__ACharExpr);
{
parser_prod__ACharExpr__init_acharexpr(var7, var_tcharnode2, var_pannotationsnode3); /* Direct call parser_prod#ACharExpr#init_acharexpr on <var7:ACharExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction299> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction299#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction299__action(val* self, val* p0) {
parser__ReduceAction299__action(self, p0); /* Direct call parser#ReduceAction299#action on <self:Object(ReduceAction299)>*/
RET_LABEL:;
}
/* method parser#ReduceAction300#action for (self: ReduceAction300, Parser) */
void parser__ReduceAction300__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode2 /* var tstringnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStringExpr */;
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
var_tstringnode2 = var_nodearraylist1;
/* <var_tstringnode2:nullable Object> isa nullable TString */
cltype = type_nullable_parser_nodes__TString.color;
idtype = type_nullable_parser_nodes__TString.id;
if(var_tstringnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tstringnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tstringnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7982);
show_backtrace(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 7984);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AStringExpr(&type_parser_nodes__AStringExpr);
{
parser_prod__AStringExpr__init_astringexpr(var7, var_tstringnode2, var_pannotationsnode3); /* Direct call parser_prod#AStringExpr#init_astringexpr on <var7:AStringExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction300> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction300#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction300__action(val* self, val* p0) {
parser__ReduceAction300__action(self, p0); /* Direct call parser#ReduceAction300#action on <self:Object(ReduceAction300)>*/
RET_LABEL:;
}
/* method parser#ReduceAction302#action for (self: ReduceAction302, Parser) */
void parser__ReduceAction302__action(val* self, val* p0) {
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8005);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable_parser_nodes__AExpr.color;
idtype10 = type_nullable_parser_nodes__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8007);
show_backtrace(1);
}
var_tcparnode4 = var_nodearraylist5;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype12 = type_nullable_parser_nodes__TCpar.color;
idtype13 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8009);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist6;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype15 = type_nullable_parser_nodes__AAnnotations.color;
idtype16 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8011);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AParExpr(&type_parser_nodes__AParExpr);
{
parser_prod__AParExpr__init_aparexpr(var17, var_toparnode2, var_pexprnode3, var_tcparnode4, var_pannotationsnode5); /* Direct call parser_prod#AParExpr#init_aparexpr on <var17:AParExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction302> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction302#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction302__action(val* self, val* p0) {
parser__ReduceAction302__action(self, p0); /* Direct call parser#ReduceAction302#action on <self:Object(ReduceAction302)>*/
RET_LABEL:;
}
/* method parser#ReduceAction303#action for (self: ReduceAction303, Parser) */
void parser__ReduceAction303__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AAsCastExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsCastExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8038);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype13 = type_nullable_parser_nodes__TKwas.color;
idtype14 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwasnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwasnode3->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8040);
show_backtrace(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype16 = type_nullable_parser_nodes__TOpar.color;
idtype17 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_toparnode4->type->table_size) {
var15 = 0;
} else {
var15 = var_toparnode4->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8042);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist8;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype19 = type_nullable_parser_nodes__AType.color;
idtype20 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_ptypenode5->type->table_size) {
var18 = 0;
} else {
var18 = var_ptypenode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8044);
show_backtrace(1);
}
var_tcparnode6 = var_nodearraylist10;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype22 = type_nullable_parser_nodes__TCpar.color;
idtype23 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tcparnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tcparnode6->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8046);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AAsCastExpr(&type_parser_nodes__AAsCastExpr);
{
parser_prod__AAsCastExpr__init_aascastexpr(var24, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_ptypenode5, var_tcparnode6); /* Direct call parser_prod#AAsCastExpr#init_aascastexpr on <var24:AAsCastExpr>*/
}
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction303> */
{
var26 = parser_work__Parser__go_to(var_p, var25);
}
{
parser_work__Parser__push(var_p, var26, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction303#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction303__action(val* self, val* p0) {
parser__ReduceAction303__action(self, p0); /* Direct call parser#ReduceAction303#action on <self:Object(ReduceAction303)>*/
RET_LABEL:;
}
/* method parser#ReduceAction304#action for (self: ReduceAction304, Parser) */
void parser__ReduceAction304__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tkwnotnode5 /* var tkwnotnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tkwnullnode6 /* var tkwnullnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tcparnode7 /* var tcparnode7: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAsNotnullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsNotnullExpr */;
long var30 /* : Int */;
long var31 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8076);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype15 = type_nullable_parser_nodes__TKwas.color;
idtype16 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwasnode3->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwasnode3->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8078);
show_backtrace(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype18 = type_nullable_parser_nodes__TOpar.color;
idtype19 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_toparnode4->type->table_size) {
var17 = 0;
} else {
var17 = var_toparnode4->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8080);
show_backtrace(1);
}
var_tkwnotnode5 = var_nodearraylist8;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype21 = type_nullable_parser_nodes__TKwnot.color;
idtype22 = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tkwnotnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_tkwnotnode5->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8082);
show_backtrace(1);
}
var_tkwnullnode6 = var_nodearraylist10;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype24 = type_nullable_parser_nodes__TKwnull.color;
idtype25 = type_nullable_parser_nodes__TKwnull.id;
if(var_tkwnullnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tkwnullnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tkwnullnode6->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8084);
show_backtrace(1);
}
var_tcparnode7 = var_nodearraylist12;
/* <var_tcparnode7:nullable Object> isa nullable TCpar */
cltype27 = type_nullable_parser_nodes__TCpar.color;
idtype28 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode7 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tcparnode7->type->table_size) {
var26 = 0;
} else {
var26 = var_tcparnode7->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8086);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAsNotnullExpr(&type_parser_nodes__AAsNotnullExpr);
{
parser_prod__AAsNotnullExpr__init_aasnotnullexpr(var29, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_tkwnotnode5, var_tkwnullnode6, var_tcparnode7); /* Direct call parser_prod#AAsNotnullExpr#init_aasnotnullexpr on <var29:AAsNotnullExpr>*/
}
var_pexprnode1 = var29;
var_node_list = var_pexprnode1;
var30 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction304> */
{
var31 = parser_work__Parser__go_to(var_p, var30);
}
{
parser_work__Parser__push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction304#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction304__action(val* self, val* p0) {
parser__ReduceAction304__action(self, p0); /* Direct call parser#ReduceAction304#action on <self:Object(ReduceAction304)>*/
RET_LABEL:;
}
/* method parser#ReduceAction305#action for (self: ReduceAction305, Parser) */
void parser__ReduceAction305__action(val* self, val* p0) {
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
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwnotnode5 /* var tkwnotnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwnullnode6 /* var tkwnullnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAsNotnullExpr */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsNotnullExpr */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8113);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype11 = type_nullable_parser_nodes__TKwas.color;
idtype12 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwasnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwasnode3->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8115);
show_backtrace(1);
}
var_tkwnotnode5 = var_nodearraylist6;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype14 = type_nullable_parser_nodes__TKwnot.color;
idtype15 = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwnotnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwnotnode5->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8117);
show_backtrace(1);
}
var_tkwnullnode6 = var_nodearraylist8;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype17 = type_nullable_parser_nodes__TKwnull.color;
idtype18 = type_nullable_parser_nodes__TKwnull.id;
if(var_tkwnullnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnullnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnullnode6->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8119);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AAsNotnullExpr(&type_parser_nodes__AAsNotnullExpr);
var20 = NULL;
var21 = NULL;
{
parser_prod__AAsNotnullExpr__init_aasnotnullexpr(var19, var_pexprnode2, var_tkwasnode3, var20, var_tkwnotnode5, var_tkwnullnode6, var21); /* Direct call parser_prod#AAsNotnullExpr#init_aasnotnullexpr on <var19:AAsNotnullExpr>*/
}
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction305> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction305#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction305__action(val* self, val* p0) {
parser__ReduceAction305__action(self, p0); /* Direct call parser#ReduceAction305#action on <self:Object(ReduceAction305)>*/
RET_LABEL:;
}
/* method parser#ReduceAction306#action for (self: ReduceAction306, Parser) */
void parser__ReduceAction306__action(val* self, val* p0) {
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
val* var_tdotdotdotnode3 /* var tdotdotdotnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AVarargExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVarargExpr */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8140);
show_backtrace(1);
}
var_tdotdotdotnode3 = var_nodearraylist2;
/* <var_tdotdotdotnode3:nullable Object> isa nullable TDotdotdot */
cltype5 = type_nullable_parser_nodes__TDotdotdot.color;
idtype6 = type_nullable_parser_nodes__TDotdotdot.id;
if(var_tdotdotdotnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tdotdotdotnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tdotdotdotnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8142);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AVarargExpr(&type_parser_nodes__AVarargExpr);
{
parser_prod__AVarargExpr__init_avarargexpr(var7, var_pexprnode2, var_tdotdotdotnode3); /* Direct call parser_prod#AVarargExpr#init_avarargexpr on <var7:AVarargExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction306> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction306#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction306__action(val* self, val* p0) {
parser__ReduceAction306__action(self, p0); /* Direct call parser#ReduceAction306#action on <self:Object(ReduceAction306)>*/
RET_LABEL:;
}
/* method parser#ReduceAction307#action for (self: ReduceAction307, Parser) */
void parser__ReduceAction307__action(val* self, val* p0) {
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
short int var16 /* : Bool */;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var_listnode4 = var4;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8161);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8163);
show_backtrace(1);
}
{
var9 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode2);
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
var15 = ((short int (*)(val*, val*))(var_pexprnode3->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode3, var_other) /* == on <var_pexprnode3:nullable AExpr(AExpr)>*/;
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
array__Array__add(var_listnode4, var_pexprnode3); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype18 = type_nullable_parser_nodes__AAnnotations.color;
idtype19 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pannotationsnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pannotationsnode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8169);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
{
parser_prod__ASuperstringExpr__init_asuperstringexpr(var20, var_listnode4, var_pannotationsnode5); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var20:ASuperstringExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction307> */
{
var22 = parser_work__Parser__go_to(var_p, var21);
}
{
parser_work__Parser__push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction307#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction307__action(val* self, val* p0) {
parser__ReduceAction307__action(self, p0); /* Direct call parser#ReduceAction307#action on <self:Object(ReduceAction307)>*/
RET_LABEL:;
}
/* method parser#ReduceAction308#action for (self: ReduceAction308, Parser) */
void parser__ReduceAction308__action(val* self, val* p0) {
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
short int var21 /* : Bool */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var_listnode5 = var5;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8189);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8191);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8193);
show_backtrace(1);
}
{
var13 = parser_work__ReduceAction__concat(self, var_listnode5, var_listnode2);
}
var_listnode5 = var13;
{
var14 = parser_work__ReduceAction__concat(self, var_listnode5, var_listnode3);
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
var20 = ((short int (*)(val*, val*))(var_pexprnode4->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexprnode4, var_other) /* == on <var_pexprnode4:nullable AExpr(AExpr)>*/;
var19 = var20;
}
var21 = !var19;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
array__Array__add(var_listnode5, var_pexprnode4); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
var_pannotationsnode6 = var_nodearraylist4;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable_parser_nodes__AAnnotations.color;
idtype24 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pannotationsnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_pannotationsnode6->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8200);
show_backtrace(1);
}
var25 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
{
parser_prod__ASuperstringExpr__init_asuperstringexpr(var25, var_listnode5, var_pannotationsnode6); /* Direct call parser_prod#ASuperstringExpr#init_asuperstringexpr on <var25:ASuperstringExpr>*/
}
var_pexprnode1 = var25;
var_node_list = var_pexprnode1;
var26 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction308> */
{
var27 = parser_work__Parser__go_to(var_p, var26);
}
{
parser_work__Parser__push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction308#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction308__action(val* self, val* p0) {
parser__ReduceAction308__action(self, p0); /* Direct call parser#ReduceAction308#action on <self:Object(ReduceAction308)>*/
RET_LABEL:;
}
/* method parser#ReduceAction309#action for (self: ReduceAction309, Parser) */
void parser__ReduceAction309__action(val* self, val* p0) {
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
var8 = ((short int (*)(val*, val*))(var_pexprnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexprnode1, var6) /* != on <var_pexprnode1:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
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
var11 = ((short int (*)(val*, val*))(var_pexprnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexprnode2, var9) /* != on <var_pexprnode2:nullable Object>*/;
var10 = var11;
}
if (var10){
{
array__Array__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction309> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction309#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction309__action(val* self, val* p0) {
parser__ReduceAction309__action(self, p0); /* Direct call parser#ReduceAction309#action on <self:Object(ReduceAction309)>*/
RET_LABEL:;
}
/* method parser#ReduceAction310#action for (self: ReduceAction310, Parser) */
void parser__ReduceAction310__action(val* self, val* p0) {
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
var_listnode2 = var3;
var_pexprnode1 = var_nodearraylist1;
var4 = NULL;
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int (*)(val*, val*))(var_pexprnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexprnode1, var4) /* != on <var_pexprnode1:nullable Object>*/;
var5 = var6;
}
if (var5){
{
array__Array__add(var_listnode2, var_pexprnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var7 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction310> */
{
var8 = parser_work__Parser__go_to(var_p, var7);
}
{
parser_work__Parser__push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction310#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction310__action(val* self, val* p0) {
parser__ReduceAction310__action(self, p0); /* Direct call parser#ReduceAction310#action on <self:Object(ReduceAction310)>*/
RET_LABEL:;
}
/* method parser#ReduceAction311#action for (self: ReduceAction311, Parser) */
void parser__ReduceAction311__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tstartstringnode2 = var_nodearraylist1;
/* <var_tstartstringnode2:nullable Object> isa nullable TStartString */
cltype = type_nullable_parser_nodes__TStartString.color;
idtype = type_nullable_parser_nodes__TStartString.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8254);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStartStringExpr(&type_parser_nodes__AStartStringExpr);
{
parser_prod__AStartStringExpr__init_astartstringexpr(var3, var_tstartstringnode2); /* Direct call parser_prod#AStartStringExpr#init_astartstringexpr on <var3:AStartStringExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction311> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction311#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction311__action(val* self, val* p0) {
parser__ReduceAction311__action(self, p0); /* Direct call parser#ReduceAction311#action on <self:Object(ReduceAction311)>*/
RET_LABEL:;
}
/* method parser#ReduceAction314#action for (self: ReduceAction314, Parser) */
void parser__ReduceAction314__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tmidstringnode2 = var_nodearraylist1;
/* <var_tmidstringnode2:nullable Object> isa nullable TMidString */
cltype = type_nullable_parser_nodes__TMidString.color;
idtype = type_nullable_parser_nodes__TMidString.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8269);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AMidStringExpr(&type_parser_nodes__AMidStringExpr);
{
parser_prod__AMidStringExpr__init_amidstringexpr(var3, var_tmidstringnode2); /* Direct call parser_prod#AMidStringExpr#init_amidstringexpr on <var3:AMidStringExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction314> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction314#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction314__action(val* self, val* p0) {
parser__ReduceAction314__action(self, p0); /* Direct call parser#ReduceAction314#action on <self:Object(ReduceAction314)>*/
RET_LABEL:;
}
/* method parser#ReduceAction315#action for (self: ReduceAction315, Parser) */
void parser__ReduceAction315__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tendstringnode2 = var_nodearraylist1;
/* <var_tendstringnode2:nullable Object> isa nullable TEndString */
cltype = type_nullable_parser_nodes__TEndString.color;
idtype = type_nullable_parser_nodes__TEndString.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8284);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AEndStringExpr(&type_parser_nodes__AEndStringExpr);
{
parser_prod__AEndStringExpr__init_aendstringexpr(var3, var_tendstringnode2); /* Direct call parser_prod#AEndStringExpr#init_aendstringexpr on <var3:AEndStringExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction315> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction315#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction315__action(val* self, val* p0) {
parser__ReduceAction315__action(self, p0); /* Direct call parser#ReduceAction315#action on <self:Object(ReduceAction315)>*/
RET_LABEL:;
}
/* method parser#ReduceAction316#action for (self: ReduceAction316, Parser) */
void parser__ReduceAction316__action(val* self, val* p0) {
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
short int var14 /* : Bool */;
val* var15 /* : AAnnotations */;
val* var16 /* : null */;
val* var17 /* : null */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
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
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable_parser_nodes__TAt.color;
idtype = type_nullable_parser_nodes__TAt.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8301);
show_backtrace(1);
}
var_pannotationnode4 = var_nodearraylist2;
/* <var_pannotationnode4:nullable Object> isa nullable AAnnotation */
cltype6 = type_nullable_parser_nodes__AAnnotation.color;
idtype7 = type_nullable_parser_nodes__AAnnotation.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8303);
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
var13 = ((short int (*)(val*, val*))(var_pannotationnode4->class->vft[COLOR_kernel__Object___61d_61d]))(var_pannotationnode4, var_other) /* == on <var_pannotationnode4:nullable AAnnotation(AAnnotation)>*/;
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
array__Array__add(var_listnode5, var_pannotationnode4); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
var15 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var16 = NULL;
var17 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var15, var_tatnode2, var16, var_listnode5, var17); /* Direct call parser_prod#AAnnotations#init_aannotations on <var15:AAnnotations>*/
}
var_pannotationsnode1 = var15;
var_node_list = var_pannotationsnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction316> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction316#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction316__action(val* self, val* p0) {
parser__ReduceAction316__action(self, p0); /* Direct call parser#ReduceAction316#action on <self:Object(ReduceAction316)>*/
RET_LABEL:;
}
/* method parser#ReduceAction317#action for (self: ReduceAction317, Parser) */
void parser__ReduceAction317__action(val* self, val* p0) {
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
var_listnode5 = var7;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable_parser_nodes__TAt.color;
idtype = type_nullable_parser_nodes__TAt.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8330);
show_backtrace(1);
}
var_toparnode3 = var_nodearraylist2;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype10 = type_nullable_parser_nodes__TOpar.color;
idtype11 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8332);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype13 = type_array__Arraykernel__Object.color;
idtype14 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8334);
show_backtrace(1);
}
{
var15 = parser_work__ReduceAction__concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var15;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype17 = type_nullable_parser_nodes__TCpar.color;
idtype18 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8337);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
{
parser_prod__AAnnotations__init_aannotations(var19, var_tatnode2, var_toparnode3, var_listnode5, var_tcparnode6); /* Direct call parser_prod#AAnnotations#init_aannotations on <var19:AAnnotations>*/
}
var_pannotationsnode1 = var19;
var_node_list = var_pannotationsnode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction317> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction317#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction317__action(val* self, val* p0) {
parser__ReduceAction317__action(self, p0); /* Direct call parser#ReduceAction317#action on <self:Object(ReduceAction317)>*/
RET_LABEL:;
}
/* method parser#ReduceAction318#action for (self: ReduceAction318, Parser) */
void parser__ReduceAction318__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pannotationsnode1 = var_nodearraylist1;
var_node_list = var_pannotationsnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction318> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction318#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction318__action(val* self, val* p0) {
parser__ReduceAction318__action(self, p0); /* Direct call parser#ReduceAction318#action on <self:Object(ReduceAction318)>*/
RET_LABEL:;
}
/* method parser#ReduceAction320#action for (self: ReduceAction320, Parser) */
void parser__ReduceAction320__action(val* self, val* p0) {
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
var_listnode7 = var5;
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8370);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype8 = type_nullable_parser_nodes__AVisibility.color;
idtype9 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8372);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype11 = type_nullable_parser_nodes__AAtid.color;
idtype12 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8374);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist4;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype14 = type_nullable_parser_nodes__AAnnotations.color;
idtype15 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8376);
show_backtrace(1);
}
var16 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var17 = NULL;
var18 = NULL;
var19 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var16, var17, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var18, var_listnode7, var19, var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var16:AAnnotation>*/
}
var_pannotationnode1 = var16;
var_node_list = var_pannotationnode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction320> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction320#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction320__action(val* self, val* p0) {
parser__ReduceAction320__action(self, p0); /* Direct call parser#ReduceAction320#action on <self:Object(ReduceAction320)>*/
RET_LABEL:;
}
/* method parser#ReduceAction321#action for (self: ReduceAction321, Parser) */
void parser__ReduceAction321__action(val* self, val* p0) {
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
var_tkwredefnode3 = var_nodearraylist1;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8407);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8409);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist3;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype16 = type_nullable_parser_nodes__AAtid.color;
idtype17 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8411);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist4;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype19 = type_nullable_parser_nodes__TOpar.color;
idtype20 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8413);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype22 = type_array__Arraykernel__Object.color;
idtype23 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8415);
show_backtrace(1);
}
{
var24 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var24;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype26 = type_nullable_parser_nodes__TCpar.color;
idtype27 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8418);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype29 = type_nullable_parser_nodes__AAnnotations.color;
idtype30 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8420);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var32 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var31, var32, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var31:AAnnotation>*/
}
var_pannotationnode1 = var31;
var_node_list = var_pannotationnode1;
var33 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction321> */
{
var34 = parser_work__Parser__go_to(var_p, var33);
}
{
parser_work__Parser__push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction321#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction321__action(val* self, val* p0) {
parser__ReduceAction321__action(self, p0); /* Direct call parser#ReduceAction321#action on <self:Object(ReduceAction321)>*/
RET_LABEL:;
}
/* method parser#ReduceAction322#action for (self: ReduceAction322, Parser) */
void parser__ReduceAction322__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode5 = var2;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8443);
show_backtrace(1);
}
{
var4 = parser_work__ReduceAction__concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var4;
var5 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var6 = NULL;
var7 = NULL;
var8 = NULL;
{
parser_prod__AAnnotations__init_aannotations(var5, var6, var7, var_listnode5, var8); /* Direct call parser_prod#AAnnotations#init_aannotations on <var5:AAnnotations>*/
}
var_pannotationsnode1 = var5;
var_node_list = var_pannotationsnode1;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction322> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction322#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction322__action(val* self, val* p0) {
parser__ReduceAction322__action(self, p0); /* Direct call parser#ReduceAction322#action on <self:Object(ReduceAction322)>*/
RET_LABEL:;
}
/* method parser#ReduceAction323#action for (self: ReduceAction323, Parser) */
void parser__ReduceAction323__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_pannotationnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pannotationnode1, var3) /* != on <var_pannotationnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction323> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction323#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction323__action(val* self, val* p0) {
parser__ReduceAction323__action(self, p0); /* Direct call parser#ReduceAction323#action on <self:Object(ReduceAction323)>*/
RET_LABEL:;
}
/* method parser#ReduceAction324#action for (self: ReduceAction324, Parser) */
void parser__ReduceAction324__action(val* self, val* p0) {
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
var_pannotationnode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8480);
show_backtrace(1);
}
var5 = NULL;
if (var_pannotationnode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int (*)(val*, val*))(var_pannotationnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pannotationnode1, var5) /* != on <var_pannotationnode1:nullable Object>*/;
var6 = var7;
}
if (var6){
{
array__Array__add(var_listnode3, var_pannotationnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var8 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction324> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction324#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction324__action(val* self, val* p0) {
parser__ReduceAction324__action(self, p0); /* Direct call parser#ReduceAction324#action on <self:Object(ReduceAction324)>*/
RET_LABEL:;
}
/* method parser#ReduceAction326#action for (self: ReduceAction326, Parser) */
void parser__ReduceAction326__action(val* self, val* p0) {
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
var_listnode7 = var6;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8501);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable_parser_nodes__TKwredef.color;
idtype10 = type_nullable_parser_nodes__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8503);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8505);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable_parser_nodes__AAtid.color;
idtype16 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8507);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var18 = NULL;
var19 = NULL;
var20 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var17, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var18, var_listnode7, var19, var20); /* Direct call parser_prod#AAnnotation#init_aannotation on <var17:AAnnotation>*/
}
var_pannotationnode1 = var17;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction326> */
{
var22 = parser_work__Parser__go_to(var_p, var21);
}
{
parser_work__Parser__push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction326#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction326__action(val* self, val* p0) {
parser__ReduceAction326__action(self, p0); /* Direct call parser#ReduceAction326#action on <self:Object(ReduceAction326)>*/
RET_LABEL:;
}
/* method parser#ReduceAction327#action for (self: ReduceAction327, Parser) */
void parser__ReduceAction327__action(val* self, val* p0) {
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
var_listnode7 = var7;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8535);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8537);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8539);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype16 = type_nullable_parser_nodes__AAtid.color;
idtype17 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8541);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist5;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable_parser_nodes__AAnnotations.color;
idtype20 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8543);
show_backtrace(1);
}
var21 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var22 = NULL;
var23 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var22, var_listnode7, var23, var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var21:AAnnotation>*/
}
var_pannotationnode1 = var21;
var_node_list = var_pannotationnode1;
var24 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction327> */
{
var25 = parser_work__Parser__go_to(var_p, var24);
}
{
parser_work__Parser__push(var_p, var25, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction327#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction327__action(val* self, val* p0) {
parser__ReduceAction327__action(self, p0); /* Direct call parser#ReduceAction327#action on <self:Object(ReduceAction327)>*/
RET_LABEL:;
}
/* method parser#ReduceAction328#action for (self: ReduceAction328, Parser) */
void parser__ReduceAction328__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8574);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8576);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8578);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype19 = type_nullable_parser_nodes__AAtid.color;
idtype20 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8580);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype22 = type_nullable_parser_nodes__TOpar.color;
idtype23 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8582);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8584);
show_backtrace(1);
}
{
var27 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var27;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype29 = type_nullable_parser_nodes__TCpar.color;
idtype30 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8587);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var32 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var32); /* Direct call parser_prod#AAnnotation#init_aannotation on <var31:AAnnotation>*/
}
var_pannotationnode1 = var31;
var_node_list = var_pannotationnode1;
var33 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction328> */
{
var34 = parser_work__Parser__go_to(var_p, var33);
}
{
parser_work__Parser__push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction328#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction328__action(val* self, val* p0) {
parser__ReduceAction328__action(self, p0); /* Direct call parser#ReduceAction328#action on <self:Object(ReduceAction328)>*/
RET_LABEL:;
}
/* method parser#ReduceAction329#action for (self: ReduceAction329, Parser) */
void parser__ReduceAction329__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8619);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8621);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8623);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype20 = type_nullable_parser_nodes__AAtid.color;
idtype21 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8625);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype23 = type_nullable_parser_nodes__TOpar.color;
idtype24 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8627);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8629);
show_backtrace(1);
}
{
var28 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var28;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype30 = type_nullable_parser_nodes__TCpar.color;
idtype31 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8632);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype33 = type_nullable_parser_nodes__AAnnotations.color;
idtype34 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8634);
show_backtrace(1);
}
var35 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
{
parser_prod__AAnnotation__init_aannotation(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var35:AAnnotation>*/
}
var_pannotationnode1 = var35;
var_node_list = var_pannotationnode1;
var36 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction329> */
{
var37 = parser_work__Parser__go_to(var_p, var36);
}
{
parser_work__Parser__push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction329#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction329__action(val* self, val* p0) {
parser__ReduceAction329__action(self, p0); /* Direct call parser#ReduceAction329#action on <self:Object(ReduceAction329)>*/
RET_LABEL:;
}
/* method parser#ReduceAction330#action for (self: ReduceAction330, Parser) */
void parser__ReduceAction330__action(val* self, val* p0) {
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
var_listnode8 = var7;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8662);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8664);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8666);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype16 = type_nullable_parser_nodes__AAtid.color;
idtype17 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8668);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8670);
show_backtrace(1);
}
{
var21 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var21;
var22 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var23 = NULL;
var24 = NULL;
var25 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var22, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var23, var_listnode8, var24, var25); /* Direct call parser_prod#AAnnotation#init_aannotation on <var22:AAnnotation>*/
}
var_pannotationnode1 = var22;
var_node_list = var_pannotationnode1;
var26 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction330> */
{
var27 = parser_work__Parser__go_to(var_p, var26);
}
{
parser_work__Parser__push(var_p, var27, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction330#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction330__action(val* self, val* p0) {
parser__ReduceAction330__action(self, p0); /* Direct call parser#ReduceAction330#action on <self:Object(ReduceAction330)>*/
RET_LABEL:;
}
/* method parser#ReduceAction331#action for (self: ReduceAction331, Parser) */
void parser__ReduceAction331__action(val* self, val* p0) {
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
var_listnode7 = var4;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8696);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype7 = type_nullable_parser_nodes__AAtid.color;
idtype8 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8698);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var10 = NULL;
var11 = NULL;
var12 = NULL;
var13 = NULL;
var14 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var9, var_pdocnode2, var10, var11, var_patidnode5, var12, var_listnode7, var13, var14); /* Direct call parser_prod#AAnnotation#init_aannotation on <var9:AAnnotation>*/
}
var_pannotationnode1 = var9;
var_node_list = var_pannotationnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction331> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction331#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction331__action(val* self, val* p0) {
parser__ReduceAction331__action(self, p0); /* Direct call parser#ReduceAction331#action on <self:Object(ReduceAction331)>*/
RET_LABEL:;
}
/* method parser#ReduceAction332#action for (self: ReduceAction332, Parser) */
void parser__ReduceAction332__action(val* self, val* p0) {
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
var_listnode7 = var5;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8724);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype8 = type_nullable_parser_nodes__AAtid.color;
idtype9 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8726);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist3;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype11 = type_nullable_parser_nodes__AAnnotations.color;
idtype12 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8728);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var14 = NULL;
var15 = NULL;
var16 = NULL;
var17 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var13, var_pdocnode2, var14, var15, var_patidnode5, var16, var_listnode7, var17, var_pannotationsnode9); /* Direct call parser_prod#AAnnotation#init_aannotation on <var13:AAnnotation>*/
}
var_pannotationnode1 = var13;
var_node_list = var_pannotationnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction332> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction332#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction332__action(val* self, val* p0) {
parser__ReduceAction332__action(self, p0); /* Direct call parser#ReduceAction332#action on <self:Object(ReduceAction332)>*/
RET_LABEL:;
}
/* method parser#ReduceAction333#action for (self: ReduceAction333, Parser) */
void parser__ReduceAction333__action(val* self, val* p0) {
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
array__Array__init(var8); /* Direct call array#Array#init on <var8:Array[Object]>*/
}
var_listnode8 = var8;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8757);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype11 = type_nullable_parser_nodes__AAtid.color;
idtype12 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8759);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype14 = type_nullable_parser_nodes__TOpar.color;
idtype15 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8761);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype17 = type_array__Arraykernel__Object.color;
idtype18 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8763);
show_backtrace(1);
}
{
var19 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var19;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype21 = type_nullable_parser_nodes__TCpar.color;
idtype22 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8766);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var24 = NULL;
var25 = NULL;
var26 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var23, var_pdocnode2, var24, var25, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var26); /* Direct call parser_prod#AAnnotation#init_aannotation on <var23:AAnnotation>*/
}
var_pannotationnode1 = var23;
var_node_list = var_pannotationnode1;
var27 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction333> */
{
var28 = parser_work__Parser__go_to(var_p, var27);
}
{
parser_work__Parser__push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction333#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction333__action(val* self, val* p0) {
parser__ReduceAction333__action(self, p0); /* Direct call parser#ReduceAction333#action on <self:Object(ReduceAction333)>*/
RET_LABEL:;
}
/* method parser#ReduceAction334#action for (self: ReduceAction334, Parser) */
void parser__ReduceAction334__action(val* self, val* p0) {
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
array__Array__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8796);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype12 = type_nullable_parser_nodes__AAtid.color;
idtype13 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8798);
show_backtrace(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype15 = type_nullable_parser_nodes__TOpar.color;
idtype16 = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8800);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_array__Arraykernel__Object.color;
idtype19 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8802);
show_backtrace(1);
}
{
var20 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var20;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype22 = type_nullable_parser_nodes__TCpar.color;
idtype23 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8805);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable_parser_nodes__AAnnotations.color;
idtype26 = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8807);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var28 = NULL;
var29 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var27, var_pdocnode2, var28, var29, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod#AAnnotation#init_aannotation on <var27:AAnnotation>*/
}
var_pannotationnode1 = var27;
var_node_list = var_pannotationnode1;
var30 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction334> */
{
var31 = parser_work__Parser__go_to(var_p, var30);
}
{
parser_work__Parser__push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction334#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction334__action(val* self, val* p0) {
parser__ReduceAction334__action(self, p0); /* Direct call parser#ReduceAction334#action on <self:Object(ReduceAction334)>*/
RET_LABEL:;
}
/* method parser#ReduceAction335#action for (self: ReduceAction335, Parser) */
void parser__ReduceAction335__action(val* self, val* p0) {
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
var_listnode8 = var5;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8833);
show_backtrace(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype8 = type_nullable_parser_nodes__AAtid.color;
idtype9 = type_nullable_parser_nodes__AAtid.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8835);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8837);
show_backtrace(1);
}
{
var13 = parser_work__ReduceAction__concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var13;
var14 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var15 = NULL;
var16 = NULL;
var17 = NULL;
var18 = NULL;
var19 = NULL;
{
parser_prod__AAnnotation__init_aannotation(var14, var_pdocnode2, var15, var16, var_patidnode5, var17, var_listnode8, var18, var19); /* Direct call parser_prod#AAnnotation#init_aannotation on <var14:AAnnotation>*/
}
var_pannotationnode1 = var14;
var_node_list = var_pannotationnode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction335> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction335#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction335__action(val* self, val* p0) {
parser__ReduceAction335__action(self, p0); /* Direct call parser#ReduceAction335#action on <self:Object(ReduceAction335)>*/
RET_LABEL:;
}
/* method parser#ReduceAction336#action for (self: ReduceAction336, Parser) */
void parser__ReduceAction336__action(val* self, val* p0) {
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
var_pannotationnode1 = var_nodearraylist3;
var_node_list = var_pannotationnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction336> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction336#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction336__action(val* self, val* p0) {
parser__ReduceAction336__action(self, p0); /* Direct call parser#ReduceAction336#action on <self:Object(ReduceAction336)>*/
RET_LABEL:;
}
/* method parser#ReduceAction337#action for (self: ReduceAction337, Parser) */
void parser__ReduceAction337__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_patargnode1 /* var patargnode1: nullable Object */;
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
var_patargnode1 = var_nodearraylist1;
var3 = NULL;
if (var_patargnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int (*)(val*, val*))(var_patargnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_patargnode1, var3) /* != on <var_patargnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_patargnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction337> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction337#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction337__action(val* self, val* p0) {
parser__ReduceAction337__action(self, p0); /* Direct call parser#ReduceAction337#action on <self:Object(ReduceAction337)>*/
RET_LABEL:;
}
/* method parser#ReduceAction338#action for (self: ReduceAction338, Parser) */
void parser__ReduceAction338__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_patargnode1 /* var patargnode1: nullable Object */;
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
array__Array__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_patargnode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8891);
show_backtrace(1);
}
var5 = NULL;
if (var_patargnode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int (*)(val*, val*))(var_patargnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_patargnode1, var5) /* != on <var_patargnode1:nullable Object>*/;
var6 = var7;
}
if (var6){
{
array__Array__add(var_listnode3, var_patargnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var8 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction338> */
{
var10 = parser_work__Parser__go_to(var_p, var9);
}
{
parser_work__Parser__push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction338#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction338__action(val* self, val* p0) {
parser__ReduceAction338__action(self, p0); /* Direct call parser#ReduceAction338#action on <self:Object(ReduceAction338)>*/
RET_LABEL:;
}
/* method parser#ReduceAction339#action for (self: ReduceAction339, Parser) */
void parser__ReduceAction339__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_patargnode1 /* var patargnode1: nullable Object */;
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
var_patargnode1 = var_nodearraylist3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction339> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction339#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction339__action(val* self, val* p0) {
parser__ReduceAction339__action(self, p0); /* Direct call parser#ReduceAction339#action on <self:Object(ReduceAction339)>*/
RET_LABEL:;
}
/* method parser#ReduceAction340#action for (self: ReduceAction340, Parser) */
void parser__ReduceAction340__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ATypeAtArg */;
val* var_patargnode1 /* var patargnode1: nullable ATypeAtArg */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8920);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ATypeAtArg(&type_parser_nodes__ATypeAtArg);
{
parser_prod__ATypeAtArg__init_atypeatarg(var3, var_ptypenode2); /* Direct call parser_prod#ATypeAtArg#init_atypeatarg on <var3:ATypeAtArg>*/
}
var_patargnode1 = var3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction340> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction340#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction340__action(val* self, val* p0) {
parser__ReduceAction340__action(self, p0); /* Direct call parser#ReduceAction340#action on <self:Object(ReduceAction340)>*/
RET_LABEL:;
}
/* method parser#ReduceAction341#action for (self: ReduceAction341, Parser) */
void parser__ReduceAction341__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AExprAtArg */;
val* var_patargnode1 /* var patargnode1: nullable AExprAtArg */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8935);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AExprAtArg(&type_parser_nodes__AExprAtArg);
{
parser_prod__AExprAtArg__init_aexpratarg(var3, var_pexprnode2); /* Direct call parser_prod#AExprAtArg#init_aexpratarg on <var3:AExprAtArg>*/
}
var_patargnode1 = var3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction341> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction341#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction341__action(val* self, val* p0) {
parser__ReduceAction341__action(self, p0); /* Direct call parser#ReduceAction341#action on <self:Object(ReduceAction341)>*/
RET_LABEL:;
}
/* method parser#ReduceAction343#action for (self: ReduceAction343, Parser) */
void parser__ReduceAction343__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode2 /* var pannotationsnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AAtAtArg */;
val* var_patargnode1 /* var patargnode1: nullable AAtAtArg */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pannotationsnode2 = var_nodearraylist1;
/* <var_pannotationsnode2:nullable Object> isa nullable AAnnotations */
cltype = type_nullable_parser_nodes__AAnnotations.color;
idtype = type_nullable_parser_nodes__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8950);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AAtAtArg(&type_parser_nodes__AAtAtArg);
{
parser_prod__AAtAtArg__init_aatatarg(var3, var_pannotationsnode2); /* Direct call parser_prod#AAtAtArg#init_aatatarg on <var3:AAtAtArg>*/
}
var_patargnode1 = var3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction343> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction343#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction343__action(val* self, val* p0) {
parser__ReduceAction343__action(self, p0); /* Direct call parser#ReduceAction343#action on <self:Object(ReduceAction343)>*/
RET_LABEL:;
}
/* method parser#ReduceAction344#action for (self: ReduceAction344, Parser) */
void parser__ReduceAction344__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8965);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AIdAtid(&type_parser_nodes__AIdAtid);
{
parser_prod__AIdAtid__init_aidatid(var3, var_tidnode2); /* Direct call parser_prod#AIdAtid#init_aidatid on <var3:AIdAtid>*/
}
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction344> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction344#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction344__action(val* self, val* p0) {
parser__ReduceAction344__action(self, p0); /* Direct call parser#ReduceAction344#action on <self:Object(ReduceAction344)>*/
RET_LABEL:;
}
/* method parser#ReduceAction345#action for (self: ReduceAction345, Parser) */
void parser__ReduceAction345__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreadablenode2 /* var tkwreadablenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AKwreadableAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwreadableAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwreadablenode2 = var_nodearraylist1;
/* <var_tkwreadablenode2:nullable Object> isa nullable TKwreadable */
cltype = type_nullable_parser_nodes__TKwreadable.color;
idtype = type_nullable_parser_nodes__TKwreadable.id;
if(var_tkwreadablenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwreadablenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwreadablenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8980);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AKwreadableAtid(&type_parser_nodes__AKwreadableAtid);
{
parser_prod__AKwreadableAtid__init_akwreadableatid(var3, var_tkwreadablenode2); /* Direct call parser_prod#AKwreadableAtid#init_akwreadableatid on <var3:AKwreadableAtid>*/
}
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction345> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction345#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction345__action(val* self, val* p0) {
parser__ReduceAction345__action(self, p0); /* Direct call parser#ReduceAction345#action on <self:Object(ReduceAction345)>*/
RET_LABEL:;
}
/* method parser#ReduceAction346#action for (self: ReduceAction346, Parser) */
void parser__ReduceAction346__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwwritablenode2 /* var tkwwritablenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AKwwritableAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwwritableAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwwritablenode2 = var_nodearraylist1;
/* <var_tkwwritablenode2:nullable Object> isa nullable TKwwritable */
cltype = type_nullable_parser_nodes__TKwwritable.color;
idtype = type_nullable_parser_nodes__TKwwritable.id;
if(var_tkwwritablenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwwritablenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwwritablenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 8995);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AKwwritableAtid(&type_parser_nodes__AKwwritableAtid);
{
parser_prod__AKwwritableAtid__init_akwwritableatid(var3, var_tkwwritablenode2); /* Direct call parser_prod#AKwwritableAtid#init_akwwritableatid on <var3:AKwwritableAtid>*/
}
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction346> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction346#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction346__action(val* self, val* p0) {
parser__ReduceAction346__action(self, p0); /* Direct call parser#ReduceAction346#action on <self:Object(ReduceAction346)>*/
RET_LABEL:;
}
/* method parser#ReduceAction347#action for (self: ReduceAction347, Parser) */
void parser__ReduceAction347__action(val* self, val* p0) {
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9014);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9016);
show_backtrace(1);
}
{
var10 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype12 = type_nullable_parser_nodes__TCpar.color;
idtype13 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9019);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AParExprs(&type_parser_nodes__AParExprs);
{
parser_prod__AParExprs__init_aparexprs(var14, var_toparnode2, var_listnode4, var_tcparnode5); /* Direct call parser_prod#AParExprs#init_aparexprs on <var14:AParExprs>*/
}
var_pexprsnode1 = var14;
var_node_list = var_pexprsnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction347> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction347#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction347__action(val* self, val* p0) {
parser__ReduceAction347__action(self, p0); /* Direct call parser#ReduceAction347#action on <self:Object(ReduceAction347)>*/
RET_LABEL:;
}
/* method parser#ReduceAction348#action for (self: ReduceAction348, Parser) */
void parser__ReduceAction348__action(val* self, val* p0) {
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9039);
show_backtrace(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype7 = type_nullable_parser_nodes__TCpar.color;
idtype8 = type_nullable_parser_nodes__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9041);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AParExprs(&type_parser_nodes__AParExprs);
{
parser_prod__AParExprs__init_aparexprs(var9, var_toparnode2, var_listnode3, var_tcparnode4); /* Direct call parser_prod#AParExprs#init_aparexprs on <var9:AParExprs>*/
}
var_pexprsnode1 = var9;
var_node_list = var_pexprsnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction348> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction348#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction348__action(val* self, val* p0) {
parser__ReduceAction348__action(self, p0); /* Direct call parser#ReduceAction348#action on <self:Object(ReduceAction348)>*/
RET_LABEL:;
}
/* method parser#ReduceAction349#action for (self: ReduceAction349, Parser) */
void parser__ReduceAction349__action(val* self, val* p0) {
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
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var2 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var2, var_listnode2); /* Direct call parser_prod#AListExprs#init_alistexprs on <var2:AListExprs>*/
}
var_pexprsnode1 = var2;
var_node_list = var_pexprsnode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction349> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction349#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction349__action(val* self, val* p0) {
parser__ReduceAction349__action(self, p0); /* Direct call parser#ReduceAction349#action on <self:Object(ReduceAction349)>*/
RET_LABEL:;
}
/* method parser#ReduceAction351#action for (self: ReduceAction351, Parser) */
void parser__ReduceAction351__action(val* self, val* p0) {
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
val* var11 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9072);
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
var11 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
{
parser_prod__AListExprs__init_alistexprs(var11, var_listnode3); /* Direct call parser_prod#AListExprs#init_alistexprs on <var11:AListExprs>*/
}
var_pexprsnode1 = var11;
var_node_list = var_pexprsnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction351> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction351#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction351__action(val* self, val* p0) {
parser__ReduceAction351__action(self, p0); /* Direct call parser#ReduceAction351#action on <self:Object(ReduceAction351)>*/
RET_LABEL:;
}
/* method parser#ReduceAction354#action for (self: ReduceAction354, Parser) */
void parser__ReduceAction354__action(val* self, val* p0) {
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9094);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9096);
show_backtrace(1);
}
{
var10 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_tcbranode5 = var_nodearraylist4;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype12 = type_nullable_parser_nodes__TCbra.color;
idtype13 = type_nullable_parser_nodes__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9099);
show_backtrace(1);
}
var14 = NEW_parser_nodes__ABraExprs(&type_parser_nodes__ABraExprs);
{
parser_prod__ABraExprs__init_abraexprs(var14, var_tobranode2, var_listnode4, var_tcbranode5); /* Direct call parser_prod#ABraExprs#init_abraexprs on <var14:ABraExprs>*/
}
var_pexprsnode1 = var14;
var_node_list = var_pexprsnode1;
var15 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction354> */
{
var16 = parser_work__Parser__go_to(var_p, var15);
}
{
parser_work__Parser__push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction354#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction354__action(val* self, val* p0) {
parser__ReduceAction354__action(self, p0); /* Direct call parser#ReduceAction354#action on <self:Object(ReduceAction354)>*/
RET_LABEL:;
}
/* method parser#ReduceAction356#action for (self: ReduceAction356, Parser) */
void parser__ReduceAction356__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist3;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9120);
show_backtrace(1);
}
var6 = NULL;
if (var_pexprnode1 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pexprnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pexprnode1, var6) /* != on <var_pexprnode1:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pexprnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var9 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var9;
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction356> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction356#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction356__action(val* self, val* p0) {
parser__ReduceAction356__action(self, p0); /* Direct call parser#ReduceAction356#action on <self:Object(ReduceAction356)>*/
RET_LABEL:;
}
/* method parser#ReduceAction357#action for (self: ReduceAction357, Parser) */
void parser__ReduceAction357__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction357> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction357#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction357__action(val* self, val* p0) {
parser__ReduceAction357__action(self, p0); /* Direct call parser#ReduceAction357#action on <self:Object(ReduceAction357)>*/
RET_LABEL:;
}
/* method parser#ReduceAction358#action for (self: ReduceAction358, Parser) */
void parser__ReduceAction358__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
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
var5 = ((short int (*)(val*, val*))(var_tidnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_tidnode1, var3) /* != on <var_tidnode1:nullable Object>*/;
var4 = var5;
}
if (var4){
{
array__Array__add(var_listnode2, var_tidnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction358> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction358#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction358__action(val* self, val* p0) {
parser__ReduceAction358__action(self, p0); /* Direct call parser#ReduceAction358#action on <self:Object(ReduceAction358)>*/
RET_LABEL:;
}
/* method parser#ReduceAction359#action for (self: ReduceAction359, Parser) */
void parser__ReduceAction359__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var8 /* : Array[Object] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var_listnode3 = var6;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9170);
show_backtrace(1);
}
var_tidnode2 = var_nodearraylist5;
{
var8 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var8;
var9 = NULL;
if (var_tidnode2 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int (*)(val*, val*))(var_tidnode2->class->vft[COLOR_kernel__Object___33d_61d]))(var_tidnode2, var9) /* != on <var_tidnode2:nullable Object>*/;
var10 = var11;
}
if (var10){
{
array__Array__add(var_listnode3, var_tidnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction359> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction359#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction359__action(val* self, val* p0) {
parser__ReduceAction359__action(self, p0); /* Direct call parser#ReduceAction359#action on <self:Object(ReduceAction359)>*/
RET_LABEL:;
}
/* method parser#ReduceAction360#action for (self: ReduceAction360, Parser) */
void parser__ReduceAction360__action(val* self, val* p0) {
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
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_tidnode4 = var_nodearraylist1;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9188);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
var5 = NULL;
{
parser_prod__AModuleName__init_amodulename(var4, var5, var_listnode3, var_tidnode4); /* Direct call parser_prod#AModuleName#init_amodulename on <var4:AModuleName>*/
}
var_pmodulenamenode1 = var4;
var_node_list = var_pmodulenamenode1;
var6 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction360> */
{
var7 = parser_work__Parser__go_to(var_p, var6);
}
{
parser_work__Parser__push(var_p, var7, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction360#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction360__action(val* self, val* p0) {
parser__ReduceAction360__action(self, p0); /* Direct call parser#ReduceAction360#action on <self:Object(ReduceAction360)>*/
RET_LABEL:;
}
/* method parser#ReduceAction361#action for (self: ReduceAction361, Parser) */
void parser__ReduceAction361__action(val* self, val* p0) {
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
var_listnode4 = var3;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9207);
show_backtrace(1);
}
{
var5 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var5;
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype7 = type_nullable_parser_nodes__TId.color;
idtype8 = type_nullable_parser_nodes__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser.nit", 9210);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
var10 = NULL;
{
parser_prod__AModuleName__init_amodulename(var9, var10, var_listnode4, var_tidnode5); /* Direct call parser_prod#AModuleName#init_amodulename on <var9:AModuleName>*/
}
var_pmodulenamenode1 = var9;
var_node_list = var_pmodulenamenode1;
var11 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction361> */
{
var12 = parser_work__Parser__go_to(var_p, var11);
}
{
parser_work__Parser__push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction361#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction361__action(val* self, val* p0) {
parser__ReduceAction361__action(self, p0); /* Direct call parser#ReduceAction361#action on <self:Object(ReduceAction361)>*/
RET_LABEL:;
}
