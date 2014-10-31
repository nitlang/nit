#include "parser.sep.0.h"
/* method parser#ReduceAction63#action for (self: ReduceAction63, Parser) */
void parser__ReduceAction63__action(val* self, val* p0) {
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3190);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3192);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3194);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode7->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3196);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable_parser_nodes__AMethid.color;
idtype22 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pmethidnode8->type->table_size) {
var20 = 0;
} else {
var20 = var_pmethidnode8->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3198);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable_parser_nodes__ASignature.color;
idtype25 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_psignaturenode9->type->table_size) {
var23 = 0;
} else {
var23 = var_psignaturenode9->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3200);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode13 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode13->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode13->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3202);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var31, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var32, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction63> */
{
var36 = parser_work__Parser__go_to(var_p, var35);
}
{
parser_work__Parser__push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3236);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3238);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3240);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode7->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3242);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable_parser_nodes__ASignature.color;
idtype22 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_psignaturenode9->type->table_size) {
var20 = 0;
} else {
var20 = var_psignaturenode9->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3244);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable_parser_nodes__AAnnotations.color;
idtype25 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pannotationsnode10->type->table_size) {
var23 = 0;
} else {
var23 = var_pannotationsnode10->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3246);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode13 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode13->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode13->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3248);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var31, var_tkwnewnode7, var32, var_psignaturenode9, var_pannotationsnode10, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction64> */
{
var36 = parser_work__Parser__go_to(var_p, var35);
}
{
parser_work__Parser__push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AMethPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var38 /* : Int */;
long var39 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3283);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3285);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3287);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype19 = type_nullable_parser_nodes__TKwnew.color;
idtype20 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwnewnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwnewnode7->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3289);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype22 = type_nullable_parser_nodes__AMethid.color;
idtype23 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pmethidnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_pmethidnode8->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3291);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype25 = type_nullable_parser_nodes__ASignature.color;
idtype26 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_psignaturenode9->type->table_size) {
var24 = 0;
} else {
var24 = var_psignaturenode9->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3293);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode10->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode10->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3295);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode13 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode13->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode13->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3297);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
var37 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var34, var35, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var36, var37, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var33:AMethPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var38 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction65> */
{
var39 = parser_work__Parser__go_to(var_p, var38);
}
{
parser_work__Parser__push(var_p, var39, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
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
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AMethPropdef */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var36 /* : Int */;
long var37 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3330);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3332);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3334);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3336);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable_parser_nodes__AMethid.color;
idtype21 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmethidnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_pmethidnode8->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3338);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable_parser_nodes__ASignature.color;
idtype24 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_psignaturenode9->type->table_size) {
var22 = 0;
} else {
var22 = var_psignaturenode9->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3340);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable_parser_nodes__AExternCalls.color;
idtype27 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexterncallsnode11->type->table_size) {
var25 = 0;
} else {
var25 = var_pexterncallsnode11->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3342);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype30 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexterncodeblocknode12->type->table_size) {
var28 = 0;
} else {
var28 = var_pexterncodeblocknode12->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3344);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
var35 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var32, var33, var_pmethidnode8, var_psignaturenode9, var34, var_pexterncallsnode11, var_pexterncodeblocknode12, var35); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var31:AMethPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction66> */
{
var37 = parser_work__Parser__go_to(var_p, var36);
}
{
parser_work__Parser__push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
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
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AMethPropdef */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var39 /* : Int */;
long var40 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3378);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3380);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3382);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3384);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable_parser_nodes__AMethid.color;
idtype22 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pmethidnode8->type->table_size) {
var20 = 0;
} else {
var20 = var_pmethidnode8->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3386);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable_parser_nodes__ASignature.color;
idtype25 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_psignaturenode9->type->table_size) {
var23 = 0;
} else {
var23 = var_psignaturenode9->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3388);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable_parser_nodes__AAnnotations.color;
idtype28 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pannotationsnode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pannotationsnode10->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3390);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype30 = type_nullable_parser_nodes__AExternCalls.color;
idtype31 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncallsnode11->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncallsnode11->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3392);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode12->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode12->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3394);
show_backtrace(1);
}
var35 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var36 = NULL;
var37 = NULL;
var38 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var36, var37, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, var38); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var35:AMethPropdef>*/
}
var_ppropdefnode1 = var35;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction67> */
{
var40 = parser_work__Parser__go_to(var_p, var39);
}
{
parser_work__Parser__push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAttrPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3426);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3428);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3430);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype16 = type_nullable_parser_nodes__TKwvar.color;
idtype17 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwvarnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwvarnode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3432);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype19 = type_nullable_parser_nodes__TId.color;
idtype20 = type_nullable_parser_nodes__TId.id;
if(var_tidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tidnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_tidnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3434);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable_parser_nodes__AType.color;
idtype23 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_ptypenode7->type->table_size) {
var21 = 0;
} else {
var21 = var_ptypenode7->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3436);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable_parser_nodes__AAnnotations.color;
idtype26 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pannotationsnode9->type->table_size) {
var24 = 0;
} else {
var24 = var_pannotationsnode9->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3438);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var28, var_pannotationsnode9, var29); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var27:AAttrPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction68> */
{
var31 = parser_work__Parser__go_to(var_p, var30);
}
{
parser_work__Parser__push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction68#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction68__action(val* self, val* p0) {
parser__ReduceAction68__action(self, p0); /* Direct call parser#ReduceAction68#action on <self:Object(ReduceAction68)>*/
RET_LABEL:;
}
/* method parser#ReduceAction69#action for (self: ReduceAction69, Parser) */
void parser__ReduceAction69__action(val* self, val* p0) {
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
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexprnode8 /* var pexprnode8: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3470);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3472);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3474);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable_parser_nodes__TKwvar.color;
idtype20 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwvarnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwvarnode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3476);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype22 = type_nullable_parser_nodes__TId.color;
idtype23 = type_nullable_parser_nodes__TId.id;
if(var_tidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tidnode6->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3478);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype25 = type_nullable_parser_nodes__AType.color;
idtype26 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_ptypenode7->type->table_size) {
var24 = 0;
} else {
var24 = var_ptypenode7->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3480);
show_backtrace(1);
}
var_pexprnode8 = var_nodearraylist9;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype28 = type_nullable_parser_nodes__AExpr.color;
idtype29 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode8 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pexprnode8->type->table_size) {
var27 = 0;
} else {
var27 = var_pexprnode8->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3482);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist10;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype31 = type_nullable_parser_nodes__AAnnotations.color;
idtype32 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pannotationsnode9->type->table_size) {
var30 = 0;
} else {
var30 = var_pannotationsnode9->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3484);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var_pexprnode8, var_pannotationsnode9, var34); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var33:AAttrPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction69> */
{
var36 = parser_work__Parser__go_to(var_p, var35);
}
{
parser_work__Parser__push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction69#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction69__action(val* self, val* p0) {
parser__ReduceAction69__action(self, p0); /* Direct call parser#ReduceAction69#action on <self:Object(ReduceAction69)>*/
RET_LABEL:;
}
/* method parser#ReduceAction70#action for (self: ReduceAction70, Parser) */
void parser__ReduceAction70__action(val* self, val* p0) {
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
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AAttrPropdef */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3514);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3516);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3518);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable_parser_nodes__TKwvar.color;
idtype18 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwvarnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwvarnode5->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3520);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable_parser_nodes__TId.color;
idtype21 = type_nullable_parser_nodes__TId.id;
if(var_tidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_tidnode6->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3522);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable_parser_nodes__AType.color;
idtype24 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_ptypenode7->type->table_size) {
var22 = 0;
} else {
var22 = var_ptypenode7->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3524);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype26 = type_nullable_parser_nodes__AExpr.color;
idtype27 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexprnode10->type->table_size) {
var25 = 0;
} else {
var25 = var_pexprnode10->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3526);
show_backtrace(1);
}
var28 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var29 = NULL;
var30 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var29, var30, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var28:AAttrPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction70> */
{
var32 = parser_work__Parser__go_to(var_p, var31);
}
{
parser_work__Parser__push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction70#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction70__action(val* self, val* p0) {
parser__ReduceAction70__action(self, p0); /* Direct call parser#ReduceAction70#action on <self:Object(ReduceAction70)>*/
RET_LABEL:;
}
/* method parser#ReduceAction71#action for (self: ReduceAction71, Parser) */
void parser__ReduceAction71__action(val* self, val* p0) {
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
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AAttrPropdef */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3557);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3559);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3561);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3563);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable_parser_nodes__TId.color;
idtype22 = type_nullable_parser_nodes__TId.id;
if(var_tidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tidnode6->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3565);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable_parser_nodes__AType.color;
idtype25 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_ptypenode7->type->table_size) {
var23 = 0;
} else {
var23 = var_ptypenode7->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3567);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable_parser_nodes__AAnnotations.color;
idtype28 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pannotationsnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pannotationsnode9->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3569);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist9;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype30 = type_nullable_parser_nodes__AExpr.color;
idtype31 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode10 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexprnode10->type->table_size) {
var29 = 0;
} else {
var29 = var_pexprnode10->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3571);
show_backtrace(1);
}
var32 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var33 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var33, var_pannotationsnode9, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var32:AAttrPropdef>*/
}
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction71> */
{
var35 = parser_work__Parser__go_to(var_p, var34);
}
{
parser_work__Parser__push(var_p, var35, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction71#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction71__action(val* self, val* p0) {
parser__ReduceAction71__action(self, p0); /* Direct call parser#ReduceAction71#action on <self:Object(ReduceAction71)>*/
RET_LABEL:;
}
/* method parser#ReduceAction72#action for (self: ReduceAction72, Parser) */
void parser__ReduceAction72__action(val* self, val* p0) {
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
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3602);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3604);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3606);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3608);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable_parser_nodes__TId.color;
idtype22 = type_nullable_parser_nodes__TId.id;
if(var_tidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tidnode6->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3610);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable_parser_nodes__AType.color;
idtype25 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_ptypenode7->type->table_size) {
var23 = 0;
} else {
var23 = var_ptypenode7->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3612);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode10->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3614);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var30, var31, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var29:AAttrPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction72> */
{
var33 = parser_work__Parser__go_to(var_p, var32);
}
{
parser_work__Parser__push(var_p, var33, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction72#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction72__action(val* self, val* p0) {
parser__ReduceAction72__action(self, p0); /* Direct call parser#ReduceAction72#action on <self:Object(ReduceAction72)>*/
RET_LABEL:;
}
/* method parser#ReduceAction73#action for (self: ReduceAction73, Parser) */
void parser__ReduceAction73__action(val* self, val* p0) {
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
val* var_tkwvarnode5 /* var tkwvarnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tidnode6 /* var tidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode10 /* var pexprnode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3646);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3648);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3650);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable_parser_nodes__TKwvar.color;
idtype20 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwvarnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwvarnode5->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3652);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype22 = type_nullable_parser_nodes__TId.color;
idtype23 = type_nullable_parser_nodes__TId.id;
if(var_tidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tidnode6->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3654);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype25 = type_nullable_parser_nodes__AType.color;
idtype26 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_ptypenode7->type->table_size) {
var24 = 0;
} else {
var24 = var_ptypenode7->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3656);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode9 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode9->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode9->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3658);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist9;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode10 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode10->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode10->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3660);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
{
parser_prod__AAttrPropdef__init_aattrpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var34, var_pannotationsnode9, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var33:AAttrPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction73> */
{
var36 = parser_work__Parser__go_to(var_p, var35);
}
{
parser_work__Parser__push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction73#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction73__action(val* self, val* p0) {
parser__ReduceAction73__action(self, p0); /* Direct call parser#ReduceAction73#action on <self:Object(ReduceAction73)>*/
RET_LABEL:;
}
/* method parser#ReduceAction74#action for (self: ReduceAction74, Parser) */
void parser__ReduceAction74__action(val* self, val* p0) {
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
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AMethPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3690);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3692);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3694);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable_parser_nodes__TKwinit.color;
idtype18 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwinitnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwinitnode6->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3696);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable_parser_nodes__ASignature.color;
idtype21 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_psignaturenode9->type->table_size) {
var19 = 0;
} else {
var19 = var_psignaturenode9->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3698);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist7;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode13 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode13->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode13->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3700);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var26, var_tkwinitnode6, var27, var28, var_psignaturenode9, var29, var30, var31, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var25:AMethPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction74> */
{
var33 = parser_work__Parser__go_to(var_p, var32);
}
{
parser_work__Parser__push(var_p, var33, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction74#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction74__action(val* self, val* p0) {
parser__ReduceAction74__action(self, p0); /* Direct call parser#ReduceAction74#action on <self:Object(ReduceAction74)>*/
RET_LABEL:;
}
/* method parser#ReduceAction75#action for (self: ReduceAction75, Parser) */
void parser__ReduceAction75__action(val* self, val* p0) {
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
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3734);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3736);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3738);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable_parser_nodes__TKwinit.color;
idtype19 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwinitnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwinitnode6->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3740);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable_parser_nodes__AMethid.color;
idtype22 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pmethidnode8->type->table_size) {
var20 = 0;
} else {
var20 = var_pmethidnode8->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3742);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable_parser_nodes__ASignature.color;
idtype25 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_psignaturenode9->type->table_size) {
var23 = 0;
} else {
var23 = var_psignaturenode9->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3744);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode13 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode13->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode13->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3746);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var_tkwinitnode6, var31, var_pmethidnode8, var_psignaturenode9, var32, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction75> */
{
var36 = parser_work__Parser__go_to(var_p, var35);
}
{
parser_work__Parser__push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction75#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction75__action(val* self, val* p0) {
parser__ReduceAction75__action(self, p0); /* Direct call parser#ReduceAction75#action on <self:Object(ReduceAction75)>*/
RET_LABEL:;
}
/* method parser#ReduceAction76#action for (self: ReduceAction76, Parser) */
void parser__ReduceAction76__action(val* self, val* p0) {
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
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3780);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3782);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3784);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable_parser_nodes__TKwinit.color;
idtype19 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwinitnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwinitnode6->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3786);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable_parser_nodes__ASignature.color;
idtype22 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_psignaturenode9->type->table_size) {
var20 = 0;
} else {
var20 = var_psignaturenode9->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3788);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable_parser_nodes__AAnnotations.color;
idtype25 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pannotationsnode10->type->table_size) {
var23 = 0;
} else {
var23 = var_pannotationsnode10->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3790);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode13 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode13->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode13->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3792);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var_tkwinitnode6, var31, var32, var_psignaturenode9, var_pannotationsnode10, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction76> */
{
var36 = parser_work__Parser__go_to(var_p, var35);
}
{
parser_work__Parser__push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction76#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction76__action(val* self, val* p0) {
parser__ReduceAction76__action(self, p0); /* Direct call parser#ReduceAction76#action on <self:Object(ReduceAction76)>*/
RET_LABEL:;
}
/* method parser#ReduceAction77#action for (self: ReduceAction77, Parser) */
void parser__ReduceAction77__action(val* self, val* p0) {
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
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode13 /* var pexprnode13: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AMethPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var38 /* : Int */;
long var39 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3827);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3829);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3831);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype19 = type_nullable_parser_nodes__TKwinit.color;
idtype20 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwinitnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwinitnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3833);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype22 = type_nullable_parser_nodes__AMethid.color;
idtype23 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pmethidnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_pmethidnode8->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3835);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype25 = type_nullable_parser_nodes__ASignature.color;
idtype26 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_psignaturenode9->type->table_size) {
var24 = 0;
} else {
var24 = var_psignaturenode9->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3837);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode10->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode10->type->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3839);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode13 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode13->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode13->type->type_table[cltype31] == idtype32;
}
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3841);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
var37 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var34, var_tkwinitnode6, var35, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var36, var37, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var33:AMethPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var38 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction77> */
{
var39 = parser_work__Parser__go_to(var_p, var38);
}
{
parser_work__Parser__push(var_p, var39, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction77#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction77__action(val* self, val* p0) {
parser__ReduceAction77__action(self, p0); /* Direct call parser#ReduceAction77#action on <self:Object(ReduceAction77)>*/
RET_LABEL:;
}
/* method parser#ReduceAction78#action for (self: ReduceAction78, Parser) */
void parser__ReduceAction78__action(val* self, val* p0) {
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
val* var_tkwtypenode5 /* var tkwtypenode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ATypePropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ATypePropdef */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3873);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3875);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3877);
show_backtrace(1);
}
var_tkwtypenode5 = var_nodearraylist4;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype16 = type_nullable_parser_nodes__TKwtype.color;
idtype17 = type_nullable_parser_nodes__TKwtype.id;
if(var_tkwtypenode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwtypenode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwtypenode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3879);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype19 = type_nullable_parser_nodes__TClassid.color;
idtype20 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tclassidnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_tclassidnode6->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3881);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable_parser_nodes__AType.color;
idtype23 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_ptypenode7->type->table_size) {
var21 = 0;
} else {
var21 = var_ptypenode7->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3883);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3885);
show_backtrace(1);
}
var27 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
{
parser_prod__ATypePropdef__init_atypepropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8); /* Direct call parser_prod#ATypePropdef#init_atypepropdef on <var27:ATypePropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction78> */
{
var29 = parser_work__Parser__go_to(var_p, var28);
}
{
parser_work__Parser__push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction78#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction78__action(val* self, val* p0) {
parser__ReduceAction78__action(self, p0); /* Direct call parser#ReduceAction78#action on <self:Object(ReduceAction78)>*/
RET_LABEL:;
}
/* method parser#ReduceAction79#action for (self: ReduceAction79, Parser) */
void parser__ReduceAction79__action(val* self, val* p0) {
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AMethPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3912);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3914);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3916);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable_parser_nodes__TKwnew.color;
idtype17 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnewnode7->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnewnode7->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3918);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable_parser_nodes__ASignature.color;
idtype20 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_psignaturenode9->type->table_size) {
var18 = 0;
} else {
var18 = var_psignaturenode9->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3920);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist6;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype22 = type_nullable_parser_nodes__AExternCalls.color;
idtype23 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pexterncallsnode11->type->table_size) {
var21 = 0;
} else {
var21 = var_pexterncallsnode11->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3922);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist7;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype25 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype26 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pexterncodeblocknode12->type->table_size) {
var24 = 0;
} else {
var24 = var_pexterncodeblocknode12->type->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3924);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
var32 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var28, var29, var_tkwnewnode7, var30, var_psignaturenode9, var31, var_pexterncallsnode11, var_pexterncodeblocknode12, var32); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var27:AMethPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction79> */
{
var34 = parser_work__Parser__go_to(var_p, var33);
}
{
parser_work__Parser__push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction79#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction79__action(val* self, val* p0) {
parser__ReduceAction79__action(self, p0); /* Direct call parser#ReduceAction79#action on <self:Object(ReduceAction79)>*/
RET_LABEL:;
}
/* method parser#ReduceAction80#action for (self: ReduceAction80, Parser) */
void parser__ReduceAction80__action(val* self, val* p0) {
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AMethPropdef */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var36 /* : Int */;
long var37 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3957);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3959);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3961);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable_parser_nodes__TKwnew.color;
idtype18 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnewnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnewnode7->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3963);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable_parser_nodes__AMethid.color;
idtype21 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmethidnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_pmethidnode8->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3965);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable_parser_nodes__ASignature.color;
idtype24 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_psignaturenode9->type->table_size) {
var22 = 0;
} else {
var22 = var_psignaturenode9->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3967);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable_parser_nodes__AExternCalls.color;
idtype27 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexterncallsnode11->type->table_size) {
var25 = 0;
} else {
var25 = var_pexterncallsnode11->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3969);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype30 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexterncodeblocknode12->type->table_size) {
var28 = 0;
} else {
var28 = var_pexterncodeblocknode12->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 3971);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
var35 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var32, var33, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var34, var_pexterncallsnode11, var_pexterncodeblocknode12, var35); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var31:AMethPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction80> */
{
var37 = parser_work__Parser__go_to(var_p, var36);
}
{
parser_work__Parser__push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction80#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction80__action(val* self, val* p0) {
parser__ReduceAction80__action(self, p0); /* Direct call parser#ReduceAction80#action on <self:Object(ReduceAction80)>*/
RET_LABEL:;
}
/* method parser#ReduceAction81#action for (self: ReduceAction81, Parser) */
void parser__ReduceAction81__action(val* self, val* p0) {
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AMethPropdef */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var36 /* : Int */;
long var37 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4004);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4006);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4008);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable_parser_nodes__TKwnew.color;
idtype18 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnewnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnewnode7->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4010);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable_parser_nodes__ASignature.color;
idtype21 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_psignaturenode9->type->table_size) {
var19 = 0;
} else {
var19 = var_psignaturenode9->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4012);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable_parser_nodes__AAnnotations.color;
idtype24 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pannotationsnode10->type->table_size) {
var22 = 0;
} else {
var22 = var_pannotationsnode10->type->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4014);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable_parser_nodes__AExternCalls.color;
idtype27 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexterncallsnode11->type->table_size) {
var25 = 0;
} else {
var25 = var_pexterncallsnode11->type->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4016);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype30 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexterncodeblocknode12->type->table_size) {
var28 = 0;
} else {
var28 = var_pexterncodeblocknode12->type->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4018);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
var35 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var32, var33, var_tkwnewnode7, var34, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, var35); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var31:AMethPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction81> */
{
var37 = parser_work__Parser__go_to(var_p, var36);
}
{
parser_work__Parser__push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction81#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction81__action(val* self, val* p0) {
parser__ReduceAction81__action(self, p0); /* Direct call parser#ReduceAction81#action on <self:Object(ReduceAction81)>*/
RET_LABEL:;
}
/* method parser#ReduceAction82#action for (self: ReduceAction82, Parser) */
void parser__ReduceAction82__action(val* self, val* p0) {
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AMethPropdef */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var39 /* : Int */;
long var40 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4052);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4054);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4056);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode7->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4058);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable_parser_nodes__AMethid.color;
idtype22 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pmethidnode8->type->table_size) {
var20 = 0;
} else {
var20 = var_pmethidnode8->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4060);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable_parser_nodes__ASignature.color;
idtype25 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_psignaturenode9->type->table_size) {
var23 = 0;
} else {
var23 = var_psignaturenode9->type->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4062);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable_parser_nodes__AAnnotations.color;
idtype28 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pannotationsnode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pannotationsnode10->type->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4064);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype30 = type_nullable_parser_nodes__AExternCalls.color;
idtype31 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncallsnode11->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncallsnode11->type->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4066);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode12->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode12->type->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4068);
show_backtrace(1);
}
var35 = NEW_parser_nodes__AMethPropdef(&type_parser_nodes__AMethPropdef);
var36 = NULL;
var37 = NULL;
var38 = NULL;
{
parser_prod__AMethPropdef__init_amethpropdef(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var36, var37, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, var38); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var35:AMethPropdef>*/
}
var_ppropdefnode1 = var35;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction82> */
{
var40 = parser_work__Parser__go_to(var_p, var39);
}
{
parser_work__Parser__push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction82#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction82__action(val* self, val* p0) {
parser__ReduceAction82__action(self, p0); /* Direct call parser#ReduceAction82#action on <self:Object(ReduceAction82)>*/
RET_LABEL:;
}
/* method parser#ReduceAction83#action for (self: ReduceAction83, Parser) */
void parser__ReduceAction83__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist2;
var_node_list = var_pannotationsnode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction83> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction83#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction83__action(val* self, val* p0) {
parser__ReduceAction83__action(self, p0); /* Direct call parser#ReduceAction83#action on <self:Object(ReduceAction83)>*/
RET_LABEL:;
}
/* method parser#ReduceAction84#action for (self: ReduceAction84, Parser) */
void parser__ReduceAction84__action(val* self, val* p0) {
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
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction84> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction84#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction84__action(val* self, val* p0) {
parser__ReduceAction84__action(self, p0); /* Direct call parser#ReduceAction84#action on <self:Object(ReduceAction84)>*/
RET_LABEL:;
}
/* method parser#ReduceAction87#action for (self: ReduceAction87, Parser) */
void parser__ReduceAction87__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction87> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction87#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction87__action(val* self, val* p0) {
parser__ReduceAction87__action(self, p0); /* Direct call parser#ReduceAction87#action on <self:Object(ReduceAction87)>*/
RET_LABEL:;
}
/* method parser#ReduceAction88#action for (self: ReduceAction88, Parser) */
void parser__ReduceAction88__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : APublicVisibility */;
val* var2 /* : null */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NEW_parser_nodes__APublicVisibility(&type_parser_nodes__APublicVisibility);
var2 = NULL;
{
parser_prod__APublicVisibility__init_apublicvisibility(var1, var2); /* Direct call parser_prod#APublicVisibility#init_apublicvisibility on <var1:APublicVisibility>*/
}
var_pvisibilitynode1 = var1;
var_node_list = var_pvisibilitynode1;
var3 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction88> */
{
var4 = parser_work__Parser__go_to(var_p, var3);
}
{
parser_work__Parser__push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction88#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction88__action(val* self, val* p0) {
parser__ReduceAction88__action(self, p0); /* Direct call parser#ReduceAction88#action on <self:Object(ReduceAction88)>*/
RET_LABEL:;
}
/* method parser#ReduceAction89#action for (self: ReduceAction89, Parser) */
void parser__ReduceAction89__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwpublicnode2 /* var tkwpublicnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : APublicVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_tkwpublicnode2 = var_nodearraylist1;
/* <var_tkwpublicnode2:nullable Object> isa nullable TKwpublic */
cltype = type_nullable_parser_nodes__TKwpublic.color;
idtype = type_nullable_parser_nodes__TKwpublic.id;
if(var_tkwpublicnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwpublicnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwpublicnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4146);
show_backtrace(1);
}
var4 = NEW_parser_nodes__APublicVisibility(&type_parser_nodes__APublicVisibility);
{
parser_prod__APublicVisibility__init_apublicvisibility(var4, var_tkwpublicnode2); /* Direct call parser_prod#APublicVisibility#init_apublicvisibility on <var4:APublicVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction89> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction89#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction89__action(val* self, val* p0) {
parser__ReduceAction89__action(self, p0); /* Direct call parser#ReduceAction89#action on <self:Object(ReduceAction89)>*/
RET_LABEL:;
}
/* method parser#ReduceAction90#action for (self: ReduceAction90, Parser) */
void parser__ReduceAction90__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprivatenode2 /* var tkwprivatenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : APrivateVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APrivateVisibility */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_tkwprivatenode2 = var_nodearraylist1;
/* <var_tkwprivatenode2:nullable Object> isa nullable TKwprivate */
cltype = type_nullable_parser_nodes__TKwprivate.color;
idtype = type_nullable_parser_nodes__TKwprivate.id;
if(var_tkwprivatenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwprivatenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwprivatenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4162);
show_backtrace(1);
}
var4 = NEW_parser_nodes__APrivateVisibility(&type_parser_nodes__APrivateVisibility);
{
parser_prod__APrivateVisibility__init_aprivatevisibility(var4, var_tkwprivatenode2); /* Direct call parser_prod#APrivateVisibility#init_aprivatevisibility on <var4:APrivateVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction90> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction90#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction90__action(val* self, val* p0) {
parser__ReduceAction90__action(self, p0); /* Direct call parser#ReduceAction90#action on <self:Object(ReduceAction90)>*/
RET_LABEL:;
}
/* method parser#ReduceAction91#action for (self: ReduceAction91, Parser) */
void parser__ReduceAction91__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprotectednode2 /* var tkwprotectednode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AProtectedVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AProtectedVisibility */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_tkwprotectednode2 = var_nodearraylist1;
/* <var_tkwprotectednode2:nullable Object> isa nullable TKwprotected */
cltype = type_nullable_parser_nodes__TKwprotected.color;
idtype = type_nullable_parser_nodes__TKwprotected.id;
if(var_tkwprotectednode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwprotectednode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwprotectednode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4178);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AProtectedVisibility(&type_parser_nodes__AProtectedVisibility);
{
parser_prod__AProtectedVisibility__init_aprotectedvisibility(var4, var_tkwprotectednode2); /* Direct call parser_prod#AProtectedVisibility#init_aprotectedvisibility on <var4:AProtectedVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction91> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction91#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction91__action(val* self, val* p0) {
parser__ReduceAction91__action(self, p0); /* Direct call parser#ReduceAction91#action on <self:Object(ReduceAction91)>*/
RET_LABEL:;
}
/* method parser#ReduceAction92#action for (self: ReduceAction92, Parser) */
void parser__ReduceAction92__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwintrudenode2 /* var tkwintrudenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AIntrudeVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AIntrudeVisibility */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_tkwintrudenode2 = var_nodearraylist1;
/* <var_tkwintrudenode2:nullable Object> isa nullable TKwintrude */
cltype = type_nullable_parser_nodes__TKwintrude.color;
idtype = type_nullable_parser_nodes__TKwintrude.id;
if(var_tkwintrudenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwintrudenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwintrudenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4194);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AIntrudeVisibility(&type_parser_nodes__AIntrudeVisibility);
{
parser_prod__AIntrudeVisibility__init_aintrudevisibility(var4, var_tkwintrudenode2); /* Direct call parser_prod#AIntrudeVisibility#init_aintrudevisibility on <var4:AIntrudeVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction92> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction92#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction92__action(val* self, val* p0) {
parser__ReduceAction92__action(self, p0); /* Direct call parser#ReduceAction92#action on <self:Object(ReduceAction92)>*/
RET_LABEL:;
}
/* method parser#ReduceAction93#action for (self: ReduceAction93, Parser) */
void parser__ReduceAction93__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tplusnode2 /* var tplusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APlusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APlusMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable_parser_nodes__TPlus.color;
idtype = type_nullable_parser_nodes__TPlus.id;
if(var_tplusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tplusnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tplusnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4209);
show_backtrace(1);
}
var3 = NEW_parser_nodes__APlusMethid(&type_parser_nodes__APlusMethid);
{
parser_prod__APlusMethid__init_aplusmethid(var3, var_tplusnode2); /* Direct call parser_prod#APlusMethid#init_aplusmethid on <var3:APlusMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction93> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction93#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction93__action(val* self, val* p0) {
parser__ReduceAction93__action(self, p0); /* Direct call parser#ReduceAction93#action on <self:Object(ReduceAction93)>*/
RET_LABEL:;
}
/* method parser#ReduceAction94#action for (self: ReduceAction94, Parser) */
void parser__ReduceAction94__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMinusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AMinusMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable_parser_nodes__TMinus.color;
idtype = type_nullable_parser_nodes__TMinus.id;
if(var_tminusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tminusnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tminusnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4224);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AMinusMethid(&type_parser_nodes__AMinusMethid);
{
parser_prod__AMinusMethid__init_aminusmethid(var3, var_tminusnode2); /* Direct call parser_prod#AMinusMethid#init_aminusmethid on <var3:AMinusMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction94> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction94#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction94__action(val* self, val* p0) {
parser__ReduceAction94__action(self, p0); /* Direct call parser#ReduceAction94#action on <self:Object(ReduceAction94)>*/
RET_LABEL:;
}
/* method parser#ReduceAction95#action for (self: ReduceAction95, Parser) */
void parser__ReduceAction95__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarnode2 /* var tstarnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStarMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tstarnode2 = var_nodearraylist1;
/* <var_tstarnode2:nullable Object> isa nullable TStar */
cltype = type_nullable_parser_nodes__TStar.color;
idtype = type_nullable_parser_nodes__TStar.id;
if(var_tstarnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstarnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstarnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4239);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStarMethid(&type_parser_nodes__AStarMethid);
{
parser_prod__AStarMethid__init_astarmethid(var3, var_tstarnode2); /* Direct call parser_prod#AStarMethid#init_astarmethid on <var3:AStarMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction95> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction95#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction95__action(val* self, val* p0) {
parser__ReduceAction95__action(self, p0); /* Direct call parser#ReduceAction95#action on <self:Object(ReduceAction95)>*/
RET_LABEL:;
}
/* method parser#ReduceAction96#action for (self: ReduceAction96, Parser) */
void parser__ReduceAction96__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarstarnode2 /* var tstarstarnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStarstarMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarstarMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tstarstarnode2 = var_nodearraylist1;
/* <var_tstarstarnode2:nullable Object> isa nullable TStarstar */
cltype = type_nullable_parser_nodes__TStarstar.color;
idtype = type_nullable_parser_nodes__TStarstar.id;
if(var_tstarstarnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstarstarnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstarstarnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4254);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStarstarMethid(&type_parser_nodes__AStarstarMethid);
{
parser_prod__AStarstarMethid__init_astarstarmethid(var3, var_tstarstarnode2); /* Direct call parser_prod#AStarstarMethid#init_astarstarmethid on <var3:AStarstarMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction96> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction96#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction96__action(val* self, val* p0) {
parser__ReduceAction96__action(self, p0); /* Direct call parser#ReduceAction96#action on <self:Object(ReduceAction96)>*/
RET_LABEL:;
}
/* method parser#ReduceAction97#action for (self: ReduceAction97, Parser) */
void parser__ReduceAction97__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tslashnode2 /* var tslashnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ASlashMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ASlashMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tslashnode2 = var_nodearraylist1;
/* <var_tslashnode2:nullable Object> isa nullable TSlash */
cltype = type_nullable_parser_nodes__TSlash.color;
idtype = type_nullable_parser_nodes__TSlash.id;
if(var_tslashnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tslashnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tslashnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4269);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ASlashMethid(&type_parser_nodes__ASlashMethid);
{
parser_prod__ASlashMethid__init_aslashmethid(var3, var_tslashnode2); /* Direct call parser_prod#ASlashMethid#init_aslashmethid on <var3:ASlashMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction97> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction97#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction97__action(val* self, val* p0) {
parser__ReduceAction97__action(self, p0); /* Direct call parser#ReduceAction97#action on <self:Object(ReduceAction97)>*/
RET_LABEL:;
}
/* method parser#ReduceAction98#action for (self: ReduceAction98, Parser) */
void parser__ReduceAction98__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpercentnode2 /* var tpercentnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APercentMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APercentMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tpercentnode2 = var_nodearraylist1;
/* <var_tpercentnode2:nullable Object> isa nullable TPercent */
cltype = type_nullable_parser_nodes__TPercent.color;
idtype = type_nullable_parser_nodes__TPercent.id;
if(var_tpercentnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tpercentnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tpercentnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4284);
show_backtrace(1);
}
var3 = NEW_parser_nodes__APercentMethid(&type_parser_nodes__APercentMethid);
{
parser_prod__APercentMethid__init_apercentmethid(var3, var_tpercentnode2); /* Direct call parser_prod#APercentMethid#init_apercentmethid on <var3:APercentMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction98> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction98#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction98__action(val* self, val* p0) {
parser__ReduceAction98__action(self, p0); /* Direct call parser#ReduceAction98#action on <self:Object(ReduceAction98)>*/
RET_LABEL:;
}
/* method parser#ReduceAction99#action for (self: ReduceAction99, Parser) */
void parser__ReduceAction99__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_teqnode2 /* var teqnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AEqMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AEqMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_teqnode2 = var_nodearraylist1;
/* <var_teqnode2:nullable Object> isa nullable TEq */
cltype = type_nullable_parser_nodes__TEq.color;
idtype = type_nullable_parser_nodes__TEq.id;
if(var_teqnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_teqnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_teqnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4299);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AEqMethid(&type_parser_nodes__AEqMethid);
{
parser_prod__AEqMethid__init_aeqmethid(var3, var_teqnode2); /* Direct call parser_prod#AEqMethid#init_aeqmethid on <var3:AEqMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction99> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction99#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction99__action(val* self, val* p0) {
parser__ReduceAction99__action(self, p0); /* Direct call parser#ReduceAction99#action on <self:Object(ReduceAction99)>*/
RET_LABEL:;
}
/* method parser#ReduceAction100#action for (self: ReduceAction100, Parser) */
void parser__ReduceAction100__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnenode2 /* var tnenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ANeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ANeMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tnenode2 = var_nodearraylist1;
/* <var_tnenode2:nullable Object> isa nullable TNe */
cltype = type_nullable_parser_nodes__TNe.color;
idtype = type_nullable_parser_nodes__TNe.id;
if(var_tnenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tnenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tnenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4314);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ANeMethid(&type_parser_nodes__ANeMethid);
{
parser_prod__ANeMethid__init_anemethid(var3, var_tnenode2); /* Direct call parser_prod#ANeMethid#init_anemethid on <var3:ANeMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction100> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction100#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction100__action(val* self, val* p0) {
parser__ReduceAction100__action(self, p0); /* Direct call parser#ReduceAction100#action on <self:Object(ReduceAction100)>*/
RET_LABEL:;
}
/* method parser#ReduceAction101#action for (self: ReduceAction101, Parser) */
void parser__ReduceAction101__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tlenode2 /* var tlenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALeMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tlenode2 = var_nodearraylist1;
/* <var_tlenode2:nullable Object> isa nullable TLe */
cltype = type_nullable_parser_nodes__TLe.color;
idtype = type_nullable_parser_nodes__TLe.id;
if(var_tlenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tlenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tlenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4329);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALeMethid(&type_parser_nodes__ALeMethid);
{
parser_prod__ALeMethid__init_alemethid(var3, var_tlenode2); /* Direct call parser_prod#ALeMethid#init_alemethid on <var3:ALeMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction101> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction101#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction101__action(val* self, val* p0) {
parser__ReduceAction101__action(self, p0); /* Direct call parser#ReduceAction101#action on <self:Object(ReduceAction101)>*/
RET_LABEL:;
}
/* method parser#ReduceAction102#action for (self: ReduceAction102, Parser) */
void parser__ReduceAction102__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgenode2 /* var tgenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AGeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGeMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tgenode2 = var_nodearraylist1;
/* <var_tgenode2:nullable Object> isa nullable TGe */
cltype = type_nullable_parser_nodes__TGe.color;
idtype = type_nullable_parser_nodes__TGe.id;
if(var_tgenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tgenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tgenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4344);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AGeMethid(&type_parser_nodes__AGeMethid);
{
parser_prod__AGeMethid__init_agemethid(var3, var_tgenode2); /* Direct call parser_prod#AGeMethid#init_agemethid on <var3:AGeMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction102> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction102#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction102__action(val* self, val* p0) {
parser__ReduceAction102__action(self, p0); /* Direct call parser#ReduceAction102#action on <self:Object(ReduceAction102)>*/
RET_LABEL:;
}
/* method parser#ReduceAction103#action for (self: ReduceAction103, Parser) */
void parser__ReduceAction103__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tltnode2 /* var tltnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALtMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tltnode2 = var_nodearraylist1;
/* <var_tltnode2:nullable Object> isa nullable TLt */
cltype = type_nullable_parser_nodes__TLt.color;
idtype = type_nullable_parser_nodes__TLt.id;
if(var_tltnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tltnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tltnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4359);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALtMethid(&type_parser_nodes__ALtMethid);
{
parser_prod__ALtMethid__init_altmethid(var3, var_tltnode2); /* Direct call parser_prod#ALtMethid#init_altmethid on <var3:ALtMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction103> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction103#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction103__action(val* self, val* p0) {
parser__ReduceAction103__action(self, p0); /* Direct call parser#ReduceAction103#action on <self:Object(ReduceAction103)>*/
RET_LABEL:;
}
/* method parser#ReduceAction104#action for (self: ReduceAction104, Parser) */
void parser__ReduceAction104__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgtnode2 /* var tgtnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AGtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGtMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tgtnode2 = var_nodearraylist1;
/* <var_tgtnode2:nullable Object> isa nullable TGt */
cltype = type_nullable_parser_nodes__TGt.color;
idtype = type_nullable_parser_nodes__TGt.id;
if(var_tgtnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tgtnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tgtnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4374);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AGtMethid(&type_parser_nodes__AGtMethid);
{
parser_prod__AGtMethid__init_agtmethid(var3, var_tgtnode2); /* Direct call parser_prod#AGtMethid#init_agtmethid on <var3:AGtMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction104> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction104#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction104__action(val* self, val* p0) {
parser__ReduceAction104__action(self, p0); /* Direct call parser#ReduceAction104#action on <self:Object(ReduceAction104)>*/
RET_LABEL:;
}
/* method parser#ReduceAction105#action for (self: ReduceAction105, Parser) */
void parser__ReduceAction105__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tllnode2 /* var tllnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALlMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALlMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tllnode2 = var_nodearraylist1;
/* <var_tllnode2:nullable Object> isa nullable TLl */
cltype = type_nullable_parser_nodes__TLl.color;
idtype = type_nullable_parser_nodes__TLl.id;
if(var_tllnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tllnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tllnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4389);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALlMethid(&type_parser_nodes__ALlMethid);
{
parser_prod__ALlMethid__init_allmethid(var3, var_tllnode2); /* Direct call parser_prod#ALlMethid#init_allmethid on <var3:ALlMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction105> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction105#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction105__action(val* self, val* p0) {
parser__ReduceAction105__action(self, p0); /* Direct call parser#ReduceAction105#action on <self:Object(ReduceAction105)>*/
RET_LABEL:;
}
/* method parser#ReduceAction106#action for (self: ReduceAction106, Parser) */
void parser__ReduceAction106__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tggnode2 /* var tggnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AGgMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGgMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tggnode2 = var_nodearraylist1;
/* <var_tggnode2:nullable Object> isa nullable TGg */
cltype = type_nullable_parser_nodes__TGg.color;
idtype = type_nullable_parser_nodes__TGg.id;
if(var_tggnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tggnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tggnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4404);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AGgMethid(&type_parser_nodes__AGgMethid);
{
parser_prod__AGgMethid__init_aggmethid(var3, var_tggnode2); /* Direct call parser_prod#AGgMethid#init_aggmethid on <var3:AGgMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction106> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction106#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction106__action(val* self, val* p0) {
parser__ReduceAction106__action(self, p0); /* Direct call parser#ReduceAction106#action on <self:Object(ReduceAction106)>*/
RET_LABEL:;
}
/* method parser#ReduceAction107#action for (self: ReduceAction107, Parser) */
void parser__ReduceAction107__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tcbranode3 /* var tcbranode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ABraMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraMethid */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4420);
show_backtrace(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype5 = type_nullable_parser_nodes__TCbra.color;
idtype6 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tcbranode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tcbranode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4422);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ABraMethid(&type_parser_nodes__ABraMethid);
{
parser_prod__ABraMethid__init_abramethid(var7, var_tobranode2, var_tcbranode3); /* Direct call parser_prod#ABraMethid#init_abramethid on <var7:ABraMethid>*/
}
var_pmethidnode1 = var7;
var_node_list = var_pmethidnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction107> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction107#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction107__action(val* self, val* p0) {
parser__ReduceAction107__action(self, p0); /* Direct call parser#ReduceAction107#action on <self:Object(ReduceAction107)>*/
RET_LABEL:;
}
/* method parser#ReduceAction108#action for (self: ReduceAction108, Parser) */
void parser__ReduceAction108__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarshipnode2 /* var tstarshipnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStarshipMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarshipMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tstarshipnode2 = var_nodearraylist1;
/* <var_tstarshipnode2:nullable Object> isa nullable TStarship */
cltype = type_nullable_parser_nodes__TStarship.color;
idtype = type_nullable_parser_nodes__TStarship.id;
if(var_tstarshipnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstarshipnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstarshipnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4438);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStarshipMethid(&type_parser_nodes__AStarshipMethid);
{
parser_prod__AStarshipMethid__init_astarshipmethid(var3, var_tstarshipnode2); /* Direct call parser_prod#AStarshipMethid#init_astarshipmethid on <var3:AStarshipMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction108> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction108#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction108__action(val* self, val* p0) {
parser__ReduceAction108__action(self, p0); /* Direct call parser#ReduceAction108#action on <self:Object(ReduceAction108)>*/
RET_LABEL:;
}
/* method parser#ReduceAction109#action for (self: ReduceAction109, Parser) */
void parser__ReduceAction109__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
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
val* var7 /* : AAssignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AAssignMethid */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4454);
show_backtrace(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype5 = type_nullable_parser_nodes__TAssign.color;
idtype6 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tassignnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tassignnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4456);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AAssignMethid(&type_parser_nodes__AAssignMethid);
{
parser_prod__AAssignMethid__init_aassignmethid(var7, var_tidnode2, var_tassignnode3); /* Direct call parser_prod#AAssignMethid#init_aassignmethid on <var7:AAssignMethid>*/
}
var_pmethidnode1 = var7;
var_node_list = var_pmethidnode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction109> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction109#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction109__action(val* self, val* p0) {
parser__ReduceAction109__action(self, p0); /* Direct call parser#ReduceAction109#action on <self:Object(ReduceAction109)>*/
RET_LABEL:;
}
/* method parser#ReduceAction110#action for (self: ReduceAction110, Parser) */
void parser__ReduceAction110__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tcbranode3 /* var tcbranode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ABraassignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraassignMethid */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4474);
show_backtrace(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype6 = type_nullable_parser_nodes__TCbra.color;
idtype7 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tcbranode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tcbranode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4476);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4478);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ABraassignMethid(&type_parser_nodes__ABraassignMethid);
{
parser_prod__ABraassignMethid__init_abraassignmethid(var11, var_tobranode2, var_tcbranode3, var_tassignnode4); /* Direct call parser_prod#ABraassignMethid#init_abraassignmethid on <var11:ABraassignMethid>*/
}
var_pmethidnode1 = var11;
var_node_list = var_pmethidnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction110> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction110#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction110__action(val* self, val* p0) {
parser__ReduceAction110__action(self, p0); /* Direct call parser#ReduceAction110#action on <self:Object(ReduceAction110)>*/
RET_LABEL:;
}
/* method parser#ReduceAction111#action for (self: ReduceAction111, Parser) */
void parser__ReduceAction111__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AIdMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AIdMethid */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4495);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AIdMethid(&type_parser_nodes__AIdMethid);
{
parser_prod__AIdMethid__init_aidmethid(var3, var_tidnode2); /* Direct call parser_prod#AIdMethid#init_aidmethid on <var3:AIdMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction111> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction111#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction111__action(val* self, val* p0) {
parser__ReduceAction111__action(self, p0); /* Direct call parser#ReduceAction111#action on <self:Object(ReduceAction111)>*/
RET_LABEL:;
}
/* method parser#ReduceAction112#action for (self: ReduceAction112, Parser) */
void parser__ReduceAction112__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[Object]>*/;
}
var_listnode4 = var7;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4516);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4518);
show_backtrace(1);
}
{
var12 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype14 = type_nullable_parser_nodes__TCpar.color;
idtype15 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tcparnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tcparnode5->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4521);
show_backtrace(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype17 = type_nullable_parser_nodes__AType.color;
idtype18 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_ptypenode6->type->table_size) {
var16 = 0;
} else {
var16 = var_ptypenode6->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4523);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
{
parser_prod__ASignature__init_asignature(var19, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6); /* Direct call parser_prod#ASignature#init_asignature on <var19:ASignature>*/
}
var_psignaturenode1 = var19;
var_node_list = var_psignaturenode1;
var20 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction112> */
{
var21 = parser_work__Parser__go_to(var_p, var20);
}
{
parser_work__Parser__push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction112#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction112__action(val* self, val* p0) {
parser__ReduceAction112__action(self, p0); /* Direct call parser#ReduceAction112#action on <self:Object(ReduceAction112)>*/
RET_LABEL:;
}
/* method parser#ReduceAction113#action for (self: ReduceAction113, Parser) */
void parser__ReduceAction113__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ASignature */;
val* var16 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Array[Object]>*/;
}
var_listnode4 = var6;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4546);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4548);
show_backtrace(1);
}
{
var11 = parser_work__ReduceAction__concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype13 = type_nullable_parser_nodes__TCpar.color;
idtype14 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tcparnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tcparnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4551);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var16 = NULL;
{
parser_prod__ASignature__init_asignature(var15, var_toparnode2, var_listnode4, var_tcparnode5, var16); /* Direct call parser_prod#ASignature#init_asignature on <var15:ASignature>*/
}
var_psignaturenode1 = var15;
var_node_list = var_psignaturenode1;
var17 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction113> */
{
var18 = parser_work__Parser__go_to(var_p, var17);
}
{
parser_work__Parser__push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction113#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction113__action(val* self, val* p0) {
parser__ReduceAction113__action(self, p0); /* Direct call parser#ReduceAction113#action on <self:Object(ReduceAction113)>*/
RET_LABEL:;
}
/* method parser#ReduceAction114#action for (self: ReduceAction114, Parser) */
void parser__ReduceAction114__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : ASignature */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Array[Object]>*/;
}
var_listnode3 = var3;
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var4 = 1;
} else {
if(cltype >= var_ptypenode5->type->table_size) {
var4 = 0;
} else {
var4 = var_ptypenode5->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4571);
show_backtrace(1);
}
var5 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var6 = NULL;
var7 = NULL;
{
parser_prod__ASignature__init_asignature(var5, var6, var_listnode3, var7, var_ptypenode5); /* Direct call parser_prod#ASignature#init_asignature on <var5:ASignature>*/
}
var_psignaturenode1 = var5;
var_node_list = var_psignaturenode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction114> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction114#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction114__action(val* self, val* p0) {
parser__ReduceAction114__action(self, p0); /* Direct call parser#ReduceAction114#action on <self:Object(ReduceAction114)>*/
RET_LABEL:;
}
/* method parser#ReduceAction115#action for (self: ReduceAction115, Parser) */
void parser__ReduceAction115__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : ASignature */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:Array[Object]>*/;
}
var_listnode3 = var2;
var3 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var4 = NULL;
var5 = NULL;
var6 = NULL;
{
parser_prod__ASignature__init_asignature(var3, var4, var_listnode3, var5, var6); /* Direct call parser_prod#ASignature#init_asignature on <var3:ASignature>*/
}
var_psignaturenode1 = var3;
var_node_list = var_psignaturenode1;
var7 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction115> */
{
var8 = parser_work__Parser__go_to(var_p, var7);
}
{
parser_work__Parser__push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction115#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction115__action(val* self, val* p0) {
parser__ReduceAction115__action(self, p0); /* Direct call parser#ReduceAction115#action on <self:Object(ReduceAction115)>*/
RET_LABEL:;
}
/* method parser#ReduceAction116#action for (self: ReduceAction116, Parser) */
void parser__ReduceAction116__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Array[Object]>*/;
}
var_listnode2 = var3;
var_pparamnode1 = var_nodearraylist1;
var4 = NULL;
if (var_pparamnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int (*)(val*, val*))(var_pparamnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pparamnode1, var4) /* != on <var_pparamnode1:nullable Object>*/;
var5 = var6;
}
if (var5){
{
array__Array__add(var_listnode2, var_pparamnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var7 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction116> */
{
var8 = parser_work__Parser__go_to(var_p, var7);
}
{
parser_work__Parser__push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction116#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction116__action(val* self, val* p0) {
parser__ReduceAction116__action(self, p0); /* Direct call parser#ReduceAction116#action on <self:Object(ReduceAction116)>*/
RET_LABEL:;
}
/* method parser#ReduceAction117#action for (self: ReduceAction117, Parser) */
void parser__ReduceAction117__action(val* self, val* p0) {
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
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[Object]>*/;
}
var_listnode3 = var4;
var_pparamnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4626);
show_backtrace(1);
}
var6 = NULL;
if (var_pparamnode1 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_pparamnode1->class->vft[COLOR_kernel__Object___33d_61d]))(var_pparamnode1, var6) /* != on <var_pparamnode1:nullable Object>*/;
var7 = var8;
}
if (var7){
{
array__Array__add(var_listnode3, var_pparamnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var9 = parser_work__ReduceAction__concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var9;
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction117> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction117#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction117__action(val* self, val* p0) {
parser__ReduceAction117__action(self, p0); /* Direct call parser#ReduceAction117#action on <self:Object(ReduceAction117)>*/
RET_LABEL:;
}
/* method parser#ReduceAction119#action for (self: ReduceAction119, Parser) */
void parser__ReduceAction119__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist3;
var_node_list = var_pparamnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction119> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction119#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction119__action(val* self, val* p0) {
parser__ReduceAction119__action(self, p0); /* Direct call parser#ReduceAction119#action on <self:Object(ReduceAction119)>*/
RET_LABEL:;
}
/* method parser#ReduceAction120#action for (self: ReduceAction120, Parser) */
void parser__ReduceAction120__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AParam */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4656);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode5->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode5->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4658);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var8 = NULL;
var9 = NULL;
{
parser_prod__AParam__init_aparam(var7, var_tidnode2, var8, var9, var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var7:AParam>*/
}
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction120> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction120#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction120__action(val* self, val* p0) {
parser__ReduceAction120__action(self, p0); /* Direct call parser#ReduceAction120#action on <self:Object(ReduceAction120)>*/
RET_LABEL:;
}
/* method parser#ReduceAction121#action for (self: ReduceAction121, Parser) */
void parser__ReduceAction121__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AParam */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4677);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4679);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var8 = NULL;
var9 = NULL;
{
parser_prod__AParam__init_aparam(var7, var_tidnode2, var_ptypenode3, var8, var9); /* Direct call parser_prod#AParam#init_aparam on <var7:AParam>*/
}
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction121> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction121#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction121__action(val* self, val* p0) {
parser__ReduceAction121__action(self, p0); /* Direct call parser#ReduceAction121#action on <self:Object(ReduceAction121)>*/
RET_LABEL:;
}
/* method parser#ReduceAction122#action for (self: ReduceAction122, Parser) */
void parser__ReduceAction122__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AParam */;
val* var12 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4699);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4701);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable_parser_nodes__AAnnotations.color;
idtype10 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pannotationsnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_pannotationsnode5->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4703);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var12 = NULL;
{
parser_prod__AParam__init_aparam(var11, var_tidnode2, var_ptypenode3, var12, var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var11:AParam>*/
}
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction122> */
{
var14 = parser_work__Parser__go_to(var_p, var13);
}
{
parser_work__Parser__push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction122#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction122__action(val* self, val* p0) {
parser__ReduceAction122__action(self, p0); /* Direct call parser#ReduceAction122#action on <self:Object(ReduceAction122)>*/
RET_LABEL:;
}
/* method parser#ReduceAction123#action for (self: ReduceAction123, Parser) */
void parser__ReduceAction123__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tdotdotdotnode4 /* var tdotdotdotnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AParam */;
val* var12 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4723);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4725);
show_backtrace(1);
}
var_tdotdotdotnode4 = var_nodearraylist3;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype9 = type_nullable_parser_nodes__TDotdotdot.color;
idtype10 = type_nullable_parser_nodes__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tdotdotdotnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tdotdotdotnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4727);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var12 = NULL;
{
parser_prod__AParam__init_aparam(var11, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var12); /* Direct call parser_prod#AParam#init_aparam on <var11:AParam>*/
}
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction123> */
{
var14 = parser_work__Parser__go_to(var_p, var13);
}
{
parser_work__Parser__push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction123#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction123__action(val* self, val* p0) {
parser__ReduceAction123__action(self, p0); /* Direct call parser#ReduceAction123#action on <self:Object(ReduceAction123)>*/
RET_LABEL:;
}
/* method parser#ReduceAction124#action for (self: ReduceAction124, Parser) */
void parser__ReduceAction124__action(val* self, val* p0) {
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
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tdotdotdotnode4 /* var tdotdotdotnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4748);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4750);
show_backtrace(1);
}
var_tdotdotdotnode4 = var_nodearraylist4;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype10 = type_nullable_parser_nodes__TDotdotdot.color;
idtype11 = type_nullable_parser_nodes__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tdotdotdotnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tdotdotdotnode4->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4752);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable_parser_nodes__AAnnotations.color;
idtype14 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pannotationsnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_pannotationsnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4754);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
{
parser_prod__AParam__init_aparam(var15, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var15:AParam>*/
}
var_pparamnode1 = var15;
var_node_list = var_pparamnode1;
var16 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction124> */
{
var17 = parser_work__Parser__go_to(var_p, var16);
}
{
parser_work__Parser__push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction124#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction124__action(val* self, val* p0) {
parser__ReduceAction124__action(self, p0); /* Direct call parser#ReduceAction124#action on <self:Object(ReduceAction124)>*/
RET_LABEL:;
}
/* method parser#ReduceAction125#action for (self: ReduceAction125, Parser) */
void parser__ReduceAction125__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
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
val* var16 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
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
var_listnode4 = var4;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable_parser_nodes__TKwimport.color;
idtype = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwimportnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwimportnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4775);
show_backtrace(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype7 = type_nullable_parser_nodes__AExternCall.color;
idtype8 = type_nullable_parser_nodes__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexterncallnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexterncallnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4777);
show_backtrace(1);
}
var9 = NULL;
if (var_pexterncallnode3 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexterncallnode3,var9) on <var_pexterncallnode3:nullable Object(nullable AExternCall)> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_pexterncallnode3->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexterncallnode3, var_other) /* == on <var_pexterncallnode3:nullable AExternCall(AExternCall)>*/;
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
array__Array__add(var_listnode4, var_pexterncallnode3); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
var16 = NEW_parser_nodes__AExternCalls(&type_parser_nodes__AExternCalls);
{
parser_prod__AExternCalls__init_aexterncalls(var16, var_tkwimportnode2, var_listnode4); /* Direct call parser_prod#AExternCalls#init_aexterncalls on <var16:AExternCalls>*/
}
var_pexterncallsnode1 = var16;
var_node_list = var_pexterncallsnode1;
var17 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction125> */
{
var18 = parser_work__Parser__go_to(var_p, var17);
}
{
parser_work__Parser__push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction125#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction125__action(val* self, val* p0) {
parser__ReduceAction125__action(self, p0); /* Direct call parser#ReduceAction125#action on <self:Object(ReduceAction125)>*/
RET_LABEL:;
}
/* method parser#ReduceAction126#action for (self: ReduceAction126, Parser) */
void parser__ReduceAction126__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : Array[Object] */;
val* var21 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
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
var_listnode5 = var5;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable_parser_nodes__TKwimport.color;
idtype = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwimportnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwimportnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4800);
show_backtrace(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype8 = type_nullable_parser_nodes__AExternCall.color;
idtype9 = type_nullable_parser_nodes__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexterncallnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_pexterncallnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4802);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4804);
show_backtrace(1);
}
var13 = NULL;
if (var_pexterncallnode3 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexterncallnode3,var13) on <var_pexterncallnode3:nullable Object(nullable AExternCall)> */
var_other = var13;
{
var18 = ((short int (*)(val*, val*))(var_pexterncallnode3->class->vft[COLOR_kernel__Object___61d_61d]))(var_pexterncallnode3, var_other) /* == on <var_pexterncallnode3:nullable AExternCall(AExternCall)>*/;
var17 = var18;
}
var19 = !var17;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
array__Array__add(var_listnode5, var_pexterncallnode3); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
{
var20 = parser_work__ReduceAction__concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var20;
var21 = NEW_parser_nodes__AExternCalls(&type_parser_nodes__AExternCalls);
{
parser_prod__AExternCalls__init_aexterncalls(var21, var_tkwimportnode2, var_listnode5); /* Direct call parser_prod#AExternCalls#init_aexterncalls on <var21:AExternCalls>*/
}
var_pexterncallsnode1 = var21;
var_node_list = var_pexterncallsnode1;
var22 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction126> */
{
var23 = parser_work__Parser__go_to(var_p, var22);
}
{
parser_work__Parser__push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction126#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction126__action(val* self, val* p0) {
parser__ReduceAction126__action(self, p0); /* Direct call parser#ReduceAction126#action on <self:Object(ReduceAction126)>*/
RET_LABEL:;
}
/* method parser#ReduceAction128#action for (self: ReduceAction128, Parser) */
void parser__ReduceAction128__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
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
var_pexterncallnode1 = var_nodearraylist3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction128> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction128#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction128__action(val* self, val* p0) {
parser__ReduceAction128__action(self, p0); /* Direct call parser#ReduceAction128#action on <self:Object(ReduceAction128)>*/
RET_LABEL:;
}
/* method parser#ReduceAction129#action for (self: ReduceAction129, Parser) */
void parser__ReduceAction129__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pexterncallnode1 = var_nodearraylist1;
var_node_list = var_pexterncallnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction129> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction129#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction129__action(val* self, val* p0) {
parser__ReduceAction129__action(self, p0); /* Direct call parser#ReduceAction129#action on <self:Object(ReduceAction129)>*/
RET_LABEL:;
}
/* method parser#ReduceAction131#action for (self: ReduceAction131, Parser) */
void parser__ReduceAction131__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwsupernode2 /* var tkwsupernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ASuperExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ASuperExternCall */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwsupernode2 = var_nodearraylist1;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable_parser_nodes__TKwsuper.color;
idtype = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwsupernode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwsupernode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4848);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ASuperExternCall(&type_parser_nodes__ASuperExternCall);
{
parser_prod__ASuperExternCall__init_asuperexterncall(var3, var_tkwsupernode2); /* Direct call parser_prod#ASuperExternCall#init_asuperexterncall on <var3:ASuperExternCall>*/
}
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction131> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction131#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction131__action(val* self, val* p0) {
parser__ReduceAction131__action(self, p0); /* Direct call parser#ReduceAction131#action on <self:Object(ReduceAction131)>*/
RET_LABEL:;
}
/* method parser#ReduceAction132#action for (self: ReduceAction132, Parser) */
void parser__ReduceAction132__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode2 /* var pmethidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALocalPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ALocalPropExternCall */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pmethidnode2 = var_nodearraylist1;
/* <var_pmethidnode2:nullable Object> isa nullable AMethid */
cltype = type_nullable_parser_nodes__AMethid.color;
idtype = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pmethidnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_pmethidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4863);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALocalPropExternCall(&type_parser_nodes__ALocalPropExternCall);
{
parser_prod__ALocalPropExternCall__init_alocalpropexterncall(var3, var_pmethidnode2); /* Direct call parser_prod#ALocalPropExternCall#init_alocalpropexterncall on <var3:ALocalPropExternCall>*/
}
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction132> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction132#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction132__action(val* self, val* p0) {
parser__ReduceAction132__action(self, p0); /* Direct call parser#ReduceAction132#action on <self:Object(ReduceAction132)>*/
RET_LABEL:;
}
/* method parser#ReduceAction133#action for (self: ReduceAction133, Parser) */
void parser__ReduceAction133__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pmethidnode4 /* var pmethidnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AFullPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AFullPropExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var4 = 0;
} else {
var4 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4880);
show_backtrace(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype6 = type_nullable_parser_nodes__TDot.color;
idtype7 = type_nullable_parser_nodes__TDot.id;
if(var_tdotnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tdotnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tdotnode3->type->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4882);
show_backtrace(1);
}
var_pmethidnode4 = var_nodearraylist3;
/* <var_pmethidnode4:nullable Object> isa nullable AMethid */
cltype9 = type_nullable_parser_nodes__AMethid.color;
idtype10 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pmethidnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pmethidnode4->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4884);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AFullPropExternCall(&type_parser_nodes__AFullPropExternCall);
{
parser_prod__AFullPropExternCall__init_afullpropexterncall(var11, var_ptypenode2, var_tdotnode3, var_pmethidnode4); /* Direct call parser_prod#AFullPropExternCall#init_afullpropexterncall on <var11:AFullPropExternCall>*/
}
var_pexterncallnode1 = var11;
var_node_list = var_pexterncallnode1;
var12 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction133> */
{
var13 = parser_work__Parser__go_to(var_p, var12);
}
{
parser_work__Parser__push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction133#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction133__action(val* self, val* p0) {
parser__ReduceAction133__action(self, p0); /* Direct call parser#ReduceAction133#action on <self:Object(ReduceAction133)>*/
RET_LABEL:;
}
/* method parser#ReduceAction134#action for (self: ReduceAction134, Parser) */
void parser__ReduceAction134__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AInitPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AInitPropExternCall */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4901);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AInitPropExternCall(&type_parser_nodes__AInitPropExternCall);
{
parser_prod__AInitPropExternCall__init_ainitpropexterncall(var3, var_ptypenode2); /* Direct call parser_prod#AInitPropExternCall#init_ainitpropexterncall on <var3:AInitPropExternCall>*/
}
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction134> */
{
var5 = parser_work__Parser__go_to(var_p, var4);
}
{
parser_work__Parser__push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction134#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction134__action(val* self, val* p0) {
parser__ReduceAction134__action(self, p0); /* Direct call parser#ReduceAction134#action on <self:Object(ReduceAction134)>*/
RET_LABEL:;
}
/* method parser#ReduceAction135#action for (self: ReduceAction135, Parser) */
void parser__ReduceAction135__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var10 = 0;
} else {
var10 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4924);
show_backtrace(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype12 = type_nullable_parser_nodes__TDot.color;
idtype13 = type_nullable_parser_nodes__TDot.id;
if(var_tdotnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tdotnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tdotnode3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4926);
show_backtrace(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype15 = type_nullable_parser_nodes__TKwas.color;
idtype16 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwasnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwasnode4->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4928);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist7;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype18 = type_nullable_parser_nodes__AType.color;
idtype19 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_ptypenode5->type->table_size) {
var17 = 0;
} else {
var17 = var_ptypenode5->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4930);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ACastAsExternCall(&type_parser_nodes__ACastAsExternCall);
{
parser_prod__ACastAsExternCall__init_acastasexterncall(var20, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* Direct call parser_prod#ACastAsExternCall#init_acastasexterncall on <var20:ACastAsExternCall>*/
}
var_pexterncallnode1 = var20;
var_node_list = var_pexterncallnode1;
var21 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction135> */
{
var22 = parser_work__Parser__go_to(var_p, var21);
}
{
parser_work__Parser__push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction135#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction135__action(val* self, val* p0) {
parser__ReduceAction135__action(self, p0); /* Direct call parser#ReduceAction135#action on <self:Object(ReduceAction135)>*/
RET_LABEL:;
}
/* method parser#ReduceAction136#action for (self: ReduceAction136, Parser) */
void parser__ReduceAction136__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4952);
show_backtrace(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype8 = type_nullable_parser_nodes__TDot.color;
idtype9 = type_nullable_parser_nodes__TDot.id;
if(var_tdotnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tdotnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tdotnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4954);
show_backtrace(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype11 = type_nullable_parser_nodes__TKwas.color;
idtype12 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwasnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwasnode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4956);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist5;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4958);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ACastAsExternCall(&type_parser_nodes__ACastAsExternCall);
{
parser_prod__ACastAsExternCall__init_acastasexterncall(var16, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* Direct call parser_prod#ACastAsExternCall#init_acastasexterncall on <var16:ACastAsExternCall>*/
}
var_pexterncallnode1 = var16;
var_node_list = var_pexterncallnode1;
var17 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction136> */
{
var18 = parser_work__Parser__go_to(var_p, var17);
}
{
parser_work__Parser__push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction136#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction136__action(val* self, val* p0) {
parser__ReduceAction136__action(self, p0); /* Direct call parser#ReduceAction136#action on <self:Object(ReduceAction136)>*/
RET_LABEL:;
}
/* method parser#ReduceAction137#action for (self: ReduceAction137, Parser) */
void parser__ReduceAction137__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var10 = 0;
} else {
var10 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4984);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype12 = type_nullable_parser_nodes__TKwas.color;
idtype13 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwasnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwasnode3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4986);
show_backtrace(1);
}
var_tkwnullablenode4 = var_nodearraylist7;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype15 = type_nullable_parser_nodes__TKwnullable.color;
idtype16 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnullablenode4->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnullablenode4->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 4988);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AAsNullableExternCall(&type_parser_nodes__AAsNullableExternCall);
{
parser_prod__AAsNullableExternCall__init_aasnullableexterncall(var17, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* Direct call parser_prod#AAsNullableExternCall#init_aasnullableexterncall on <var17:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var17;
var_node_list = var_pexterncallnode1;
var18 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction137> */
{
var19 = parser_work__Parser__go_to(var_p, var18);
}
{
parser_work__Parser__push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction137#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction137__action(val* self, val* p0) {
parser__ReduceAction137__action(self, p0); /* Direct call parser#ReduceAction137#action on <self:Object(ReduceAction137)>*/
RET_LABEL:;
}
/* method parser#ReduceAction138#action for (self: ReduceAction138, Parser) */
void parser__ReduceAction138__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5009);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype8 = type_nullable_parser_nodes__TKwas.color;
idtype9 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwasnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwasnode3->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5011);
show_backtrace(1);
}
var_tkwnullablenode4 = var_nodearraylist5;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype11 = type_nullable_parser_nodes__TKwnullable.color;
idtype12 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwnullablenode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwnullablenode4->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5013);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AAsNullableExternCall(&type_parser_nodes__AAsNullableExternCall);
{
parser_prod__AAsNullableExternCall__init_aasnullableexterncall(var13, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* Direct call parser_prod#AAsNullableExternCall#init_aasnullableexterncall on <var13:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var13;
var_node_list = var_pexterncallnode1;
var14 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction138> */
{
var15 = parser_work__Parser__go_to(var_p, var14);
}
{
parser_work__Parser__push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction138#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction138__action(val* self, val* p0) {
parser__ReduceAction138__action(self, p0); /* Direct call parser#ReduceAction138#action on <self:Object(ReduceAction138)>*/
RET_LABEL:;
}
/* method parser#ReduceAction139#action for (self: ReduceAction139, Parser) */
void parser__ReduceAction139__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var12 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var12 = 0;
} else {
var12 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5040);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype14 = type_nullable_parser_nodes__TKwas.color;
idtype15 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwasnode3->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwasnode3->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5042);
show_backtrace(1);
}
var_tkwnotnode4 = var_nodearraylist7;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype17 = type_nullable_parser_nodes__TKwnot.color;
idtype18 = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnotnode4->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnotnode4->type->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5044);
show_backtrace(1);
}
var_tkwnullablenode5 = var_nodearraylist9;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype20 = type_nullable_parser_nodes__TKwnullable.color;
idtype21 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwnullablenode5->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwnullablenode5->type->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5046);
show_backtrace(1);
}
var22 = NEW_parser_nodes__AAsNotNullableExternCall(&type_parser_nodes__AAsNotNullableExternCall);
{
parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(var22, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* Direct call parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall on <var22:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var22;
var_node_list = var_pexterncallnode1;
var23 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction139> */
{
var24 = parser_work__Parser__go_to(var_p, var23);
}
{
parser_work__Parser__push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction139#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction139__action(val* self, val* p0) {
parser__ReduceAction139__action(self, p0); /* Direct call parser#ReduceAction139#action on <self:Object(ReduceAction139)>*/
RET_LABEL:;
}
/* method parser#ReduceAction140#action for (self: ReduceAction140, Parser) */
void parser__ReduceAction140__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var8 = 0;
} else {
var8 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5070);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype10 = type_nullable_parser_nodes__TKwas.color;
idtype11 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwasnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwasnode3->type->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5072);
show_backtrace(1);
}
var_tkwnotnode4 = var_nodearraylist5;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype13 = type_nullable_parser_nodes__TKwnot.color;
idtype14 = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwnotnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwnotnode4->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5074);
show_backtrace(1);
}
var_tkwnullablenode5 = var_nodearraylist7;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype16 = type_nullable_parser_nodes__TKwnullable.color;
idtype17 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnullablenode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnullablenode5->type->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5076);
show_backtrace(1);
}
var18 = NEW_parser_nodes__AAsNotNullableExternCall(&type_parser_nodes__AAsNotNullableExternCall);
{
parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall(var18, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* Direct call parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall on <var18:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var18;
var_node_list = var_pexterncallnode1;
var19 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction140> */
{
var20 = parser_work__Parser__go_to(var_p, var19);
}
{
parser_work__Parser__push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction140#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction140__action(val* self, val* p0) {
parser__ReduceAction140__action(self, p0); /* Direct call parser#ReduceAction140#action on <self:Object(ReduceAction140)>*/
RET_LABEL:;
}
/* method parser#ReduceAction142#action for (self: ReduceAction142, Parser) */
void parser__ReduceAction142__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode1 /* var tstringnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_tstringnode1 = var_nodearraylist1;
var_node_list = var_tstringnode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction142> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction142#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction142__action(val* self, val* p0) {
parser__ReduceAction142__action(self, p0); /* Direct call parser#ReduceAction142#action on <self:Object(ReduceAction142)>*/
RET_LABEL:;
}
/* method parser#ReduceAction143#action for (self: ReduceAction143, Parser) */
void parser__ReduceAction143__action(val* self, val* p0) {
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
val* var_tkwinnode2 /* var tkwinnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tstringnode3 /* var tstringnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AInLanguage */;
val* var_pinlanguagenode1 /* var pinlanguagenode1: nullable AInLanguage */;
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
var_tkwinnode2 = var_nodearraylist1;
/* <var_tkwinnode2:nullable Object> isa nullable TKwin */
cltype = type_nullable_parser_nodes__TKwin.color;
idtype = type_nullable_parser_nodes__TKwin.id;
if(var_tkwinnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwinnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwinnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5108);
show_backtrace(1);
}
var_tstringnode3 = var_nodearraylist3;
/* <var_tstringnode3:nullable Object> isa nullable TString */
cltype7 = type_nullable_parser_nodes__TString.color;
idtype8 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tstringnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tstringnode3->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5110);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AInLanguage(&type_parser_nodes__AInLanguage);
{
parser_prod__AInLanguage__init_ainlanguage(var9, var_tkwinnode2, var_tstringnode3); /* Direct call parser_prod#AInLanguage#init_ainlanguage on <var9:AInLanguage>*/
}
var_pinlanguagenode1 = var9;
var_node_list = var_pinlanguagenode1;
var10 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction143> */
{
var11 = parser_work__Parser__go_to(var_p, var10);
}
{
parser_work__Parser__push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction143#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction143__action(val* self, val* p0) {
parser__ReduceAction143__action(self, p0); /* Direct call parser#ReduceAction143#action on <self:Object(ReduceAction143)>*/
RET_LABEL:;
}
/* method parser#ReduceAction144#action for (self: ReduceAction144, Parser) */
void parser__ReduceAction144__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AExternCodeBlock */;
val* var4 /* : null */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_texterncodesegmentnode3 = var_nodearraylist1;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype = type_nullable_parser_nodes__TExternCodeSegment.color;
idtype = type_nullable_parser_nodes__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= var_texterncodesegmentnode3->type->table_size) {
var2 = 0;
} else {
var2 = var_texterncodesegmentnode3->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5126);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AExternCodeBlock(&type_parser_nodes__AExternCodeBlock);
var4 = NULL;
{
parser_prod__AExternCodeBlock__init_aexterncodeblock(var3, var4, var_texterncodesegmentnode3); /* Direct call parser_prod#AExternCodeBlock#init_aexterncodeblock on <var3:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var3;
var_node_list = var_pexterncodeblocknode1;
var5 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction144> */
{
var6 = parser_work__Parser__go_to(var_p, var5);
}
{
parser_work__Parser__push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction144#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction144__action(val* self, val* p0) {
parser__ReduceAction144__action(self, p0); /* Direct call parser#ReduceAction144#action on <self:Object(ReduceAction144)>*/
RET_LABEL:;
}
/* method parser#ReduceAction145#action for (self: ReduceAction145, Parser) */
void parser__ReduceAction145__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pinlanguagenode2 /* var pinlanguagenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AExternCodeBlock */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
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
var_pinlanguagenode2 = var_nodearraylist1;
/* <var_pinlanguagenode2:nullable Object> isa nullable AInLanguage */
cltype = type_nullable_parser_nodes__AInLanguage.color;
idtype = type_nullable_parser_nodes__AInLanguage.id;
if(var_pinlanguagenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pinlanguagenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pinlanguagenode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5143);
show_backtrace(1);
}
var_texterncodesegmentnode3 = var_nodearraylist2;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype5 = type_nullable_parser_nodes__TExternCodeSegment.color;
idtype6 = type_nullable_parser_nodes__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_texterncodesegmentnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_texterncodesegmentnode3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "parser/parser.nit", 5145);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AExternCodeBlock(&type_parser_nodes__AExternCodeBlock);
{
parser_prod__AExternCodeBlock__init_aexterncodeblock(var7, var_pinlanguagenode2, var_texterncodesegmentnode3); /* Direct call parser_prod#AExternCodeBlock#init_aexterncodeblock on <var7:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var7;
var_node_list = var_pexterncodeblocknode1;
var8 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction145> */
{
var9 = parser_work__Parser__go_to(var_p, var8);
}
{
parser_work__Parser__push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction145#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction145__action(val* self, val* p0) {
parser__ReduceAction145__action(self, p0); /* Direct call parser#ReduceAction145#action on <self:Object(ReduceAction145)>*/
RET_LABEL:;
}
/* method parser#ReduceAction146#action for (self: ReduceAction146, Parser) */
void parser__ReduceAction146__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
{
var1 = parser_work__Parser__pop(var_p);
}
var_nodearraylist1 = var1;
var_pexterncodeblocknode1 = var_nodearraylist1;
var_node_list = var_pexterncodeblocknode1;
var2 = self->attrs[COLOR_parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction146> */
{
var3 = parser_work__Parser__go_to(var_p, var2);
}
{
parser_work__Parser__push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction146#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction146__action(val* self, val* p0) {
parser__ReduceAction146__action(self, p0); /* Direct call parser#ReduceAction146#action on <self:Object(ReduceAction146)>*/
RET_LABEL:;
}
