#include "nit__parser.sep.0.h"
/* method parser#ReduceAction64#action for (self: ReduceAction64, Parser) */
void nit__parser___nit__parser__ReduceAction64___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_tkwdonode11 /* var tkwdonode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var39 /* : Int */;
long var40 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3128);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3130);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3132);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable__nit__TKwvar.color;
idtype19 = type_nullable__nit__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3134);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable__nit__TId.color;
idtype22 = type_nullable__nit__TId.id;
if(var_tidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3136);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable__nit__AType.color;
idtype25 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3138);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3140);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist8;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype30 = type_nullable__nit__TKwdo.color;
idtype31 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode11 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3142);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype33 = type_nullable__nit__AExpr.color;
idtype34 = type_nullable__nit__AExpr.id;
if(var_pexprnode12 == NULL) {
var32 = 1;
} else {
if(cltype33 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var32 = 0;
} else {
var32 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3144);
fatal_exit(1);
}
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nit__TKwend.color;
idtype37 = type_nullable__nit__TKwend.id;
if(var_tkwendnode13 == NULL) {
var35 = 1;
} else {
if(cltype36 >= (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->table_size) {
var35 = 0;
} else {
var35 = (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3146);
fatal_exit(1);
}
var38 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), var_pannotationsnode10, var_tkwdonode11, var_pexprnode12, var_tkwendnode13); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var38:AAttrPropdef>*/
}
var_ppropdefnode1 = var38;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction64> */
{
var40 = nit___nit__Parser___go_to(var_p, var39);
}
{
nit___nit__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction65#action for (self: ReduceAction65, Parser) */
void nit__parser___nit__parser__ReduceAction65___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinitnode6 /* var tkwinitnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3179);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3181);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3183);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype16 = type_nullable__nit__TKwinit.color;
idtype17 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3185);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nit__ASignature.color;
idtype20 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3187);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist6;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype22 = type_nullable__nit__TKwdo.color;
idtype23 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3189);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist7;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nit__AExpr.color;
idtype26 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3191);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist8;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype28 = type_nullable__nit__TKwend.color;
idtype29 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3193);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), ((val*)NULL), var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction65> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction66#action for (self: ReduceAction66, Parser) */
void nit__parser___nit__parser__ReduceAction66___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3229);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3231);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3233);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable__nit__TKwinit.color;
idtype18 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3235);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3237);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3239);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist7;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nit__TKwdo.color;
idtype27 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3241);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist8;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nit__AExpr.color;
idtype30 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3243);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist9;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nit__TKwend.color;
idtype33 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3245);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), var_pmethidnode8, var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction66> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction67#action for (self: ReduceAction67, Parser) */
void nit__parser___nit__parser__ReduceAction67___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3281);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3283);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3285);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable__nit__TKwinit.color;
idtype18 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3287);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nit__ASignature.color;
idtype21 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3289);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3291);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist7;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nit__TKwdo.color;
idtype27 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3293);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist8;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nit__AExpr.color;
idtype30 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3295);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist9;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nit__TKwend.color;
idtype33 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3297);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction67> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction68#action for (self: ReduceAction68, Parser) */
void nit__parser___nit__parser__ReduceAction68___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_tkwdonode13 /* var tkwdonode13: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexprnode14 /* var pexprnode14: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var39 /* : Int */;
long var40 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3334);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3336);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3338);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable__nit__TKwinit.color;
idtype19 = type_nullable__nit__TKwinit.id;
if(var_tkwinitnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tkwinitnode6&3)?type_info[((long)var_tkwinitnode6&3)]:var_tkwinitnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3340);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3342);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3344);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var26 = 0;
} else {
var26 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype27] == idtype28;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3346);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist8;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype30 = type_nullable__nit__TKwdo.color;
idtype31 = type_nullable__nit__TKwdo.id;
if(var_tkwdonode13 == NULL) {
var29 = 1;
} else {
if(cltype30 >= (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->table_size) {
var29 = 0;
} else {
var29 = (((long)var_tkwdonode13&3)?type_info[((long)var_tkwdonode13&3)]:var_tkwdonode13->type)->type_table[cltype30] == idtype31;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3348);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist9;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype33 = type_nullable__nit__AExpr.color;
idtype34 = type_nullable__nit__AExpr.id;
if(var_pexprnode14 == NULL) {
var32 = 1;
} else {
if(cltype33 >= (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->table_size) {
var32 = 0;
} else {
var32 = (((long)var_pexprnode14&3)?type_info[((long)var_pexprnode14&3)]:var_pexprnode14->type)->type_table[cltype33] == idtype34;
}
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3350);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist10;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nit__TKwend.color;
idtype37 = type_nullable__nit__TKwend.id;
if(var_tkwendnode15 == NULL) {
var35 = 1;
} else {
if(cltype36 >= (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->table_size) {
var35 = 0;
} else {
var35 = (((long)var_tkwendnode15&3)?type_info[((long)var_tkwendnode15&3)]:var_tkwendnode15->type)->type_table[cltype36] == idtype37;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3352);
fatal_exit(1);
}
var38 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var38:AMethPropdef>*/
}
var_ppropdefnode1 = var38;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction68> */
{
var40 = nit___nit__Parser___go_to(var_p, var39);
}
{
nit___nit__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction69#action for (self: ReduceAction69, Parser) */
void nit__parser___nit__parser__ReduceAction69___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwtypenode5 /* var tkwtypenode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : ATypePropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ATypePropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3386);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3388);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3390);
fatal_exit(1);
}
var_tkwtypenode5 = var_nodearraylist4;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype15 = type_nullable__nit__TKwtype.color;
idtype16 = type_nullable__nit__TKwtype.id;
if(var_tkwtypenode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwtypenode5&3)?type_info[((long)var_tkwtypenode5&3)]:var_tkwtypenode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwtypenode5&3)?type_info[((long)var_tkwtypenode5&3)]:var_tkwtypenode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3392);
fatal_exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype18 = type_nullable__nit__TClassid.color;
idtype19 = type_nullable__nit__TClassid.id;
if(var_tclassidnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3394);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype21 = type_nullable__nit__AType.color;
idtype22 = type_nullable__nit__AType.id;
if(var_ptypenode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3396);
fatal_exit(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3398);
fatal_exit(1);
}
var26 = NEW_nit__ATypePropdef(&type_nit__ATypePropdef);
{
nit__parser_prod___ATypePropdef___init_atypepropdef(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8); /* Direct call parser_prod#ATypePropdef#init_atypepropdef on <var26:ATypePropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction69> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction70#action for (self: ReduceAction70, Parser) */
void nit__parser___nit__parser__ReduceAction70___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwnewnode7 /* var tkwnewnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3425);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3427);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3429);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable__nit__TKwnew.color;
idtype16 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3431);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype18 = type_nullable__nit__ASignature.color;
idtype19 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3433);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist6;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype21 = type_nullable__nit__AExternCalls.color;
idtype22 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3435);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist7;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype24 = type_nullable__nit__AExternCodeBlock.color;
idtype25 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3437);
fatal_exit(1);
}
var26 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var26:AMethPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction70> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction71#action for (self: ReduceAction71, Parser) */
void nit__parser___nit__parser__ReduceAction71___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3472);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3474);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3476);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nit__TKwnew.color;
idtype17 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3478);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype19 = type_nullable__nit__AMethid.color;
idtype20 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3480);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype22 = type_nullable__nit__ASignature.color;
idtype23 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3482);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype25 = type_nullable__nit__AExternCalls.color;
idtype26 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3484);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable__nit__AExternCodeBlock.color;
idtype29 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3486);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction71> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction72#action for (self: ReduceAction72, Parser) */
void nit__parser___nit__parser__ReduceAction72___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3521);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3523);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3525);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nit__TKwnew.color;
idtype17 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3527);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nit__ASignature.color;
idtype20 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3529);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable__nit__AAnnotations.color;
idtype23 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3531);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype25 = type_nullable__nit__AExternCalls.color;
idtype26 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3533);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable__nit__AExternCodeBlock.color;
idtype29 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3535);
fatal_exit(1);
}
var30 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction72> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction73#action for (self: ReduceAction73, Parser) */
void nit__parser___nit__parser__ReduceAction73___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncallsnode11 /* var pexterncallsnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pexterncodeblocknode12 /* var pexterncodeblocknode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pdocnode2&3)?type_info[((long)var_pdocnode2&3)]:var_pdocnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3571);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nit__TKwredef.color;
idtype12 = type_nullable__nit__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwredefnode3&3)?type_info[((long)var_tkwredefnode3&3)]:var_tkwredefnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3573);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nit__AVisibility.color;
idtype15 = type_nullable__nit__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_pvisibilitynode4&3)?type_info[((long)var_pvisibilitynode4&3)]:var_pvisibilitynode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3575);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwnewnode7&3)?type_info[((long)var_tkwnewnode7&3)]:var_tkwnewnode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3577);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pmethidnode8&3)?type_info[((long)var_pmethidnode8&3)]:var_pmethidnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3579);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_psignaturenode9&3)?type_info[((long)var_psignaturenode9&3)]:var_psignaturenode9->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3581);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype26 = type_nullable__nit__AAnnotations.color;
idtype27 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_pannotationsnode10&3)?type_info[((long)var_pannotationsnode10&3)]:var_pannotationsnode10->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3583);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype29 = type_nullable__nit__AExternCalls.color;
idtype30 = type_nullable__nit__AExternCalls.id;
if(var_pexterncallsnode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexterncallsnode11&3)?type_info[((long)var_pexterncallsnode11&3)]:var_pexterncallsnode11->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3585);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype32 = type_nullable__nit__AExternCodeBlock.color;
idtype33 = type_nullable__nit__AExternCodeBlock.id;
if(var_pexterncodeblocknode12 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_pexterncodeblocknode12&3)?type_info[((long)var_pexterncodeblocknode12&3)]:var_pexterncodeblocknode12->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3587);
fatal_exit(1);
}
var34 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction73> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction74#action for (self: ReduceAction74, Parser) */
void nit__parser___nit__parser__ReduceAction74___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_ppropdefnode1 = var_nodearraylist1;
var_node_list = var_ppropdefnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction74> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction76#action for (self: ReduceAction76, Parser) */
void nit__parser___nit__parser__ReduceAction76___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tkwisnode2 /* var tkwisnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : Array[Object] */;
val* var8 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
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
var_listnode6 = var2;
var_tkwisnode2 = var_nodearraylist1;
/* <var_tkwisnode2:nullable Object> isa nullable TKwis */
cltype = type_nullable__nit__TKwis.color;
idtype = type_nullable__nit__TKwis.id;
if(var_tkwisnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwisnode2&3)?type_info[((long)var_tkwisnode2&3)]:var_tkwisnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwisnode2&3)?type_info[((long)var_tkwisnode2&3)]:var_tkwisnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3628);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype5 = type_standard__Array__standard__Object.color;
idtype6 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var4 = 0;
} else {
if(cltype5 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3630);
fatal_exit(1);
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var7;
var8 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
nit__parser_prod___AAnnotations___init_aannotations(var8, var_tkwisnode2, ((val*)NULL), ((val*)NULL), var_listnode6, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotations#init_aannotations on <var8:AAnnotations>*/
}
var_pannotationsnode1 = var8;
var_node_list = var_pannotationsnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction76> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction77#action for (self: ReduceAction77, Parser) */
void nit__parser___nit__parser__ReduceAction77___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tkwisnode2 /* var tkwisnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tkwendnode8 /* var tkwendnode8: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
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
var_listnode6 = var4;
var_tkwisnode2 = var_nodearraylist1;
/* <var_tkwisnode2:nullable Object> isa nullable TKwis */
cltype = type_nullable__nit__TKwis.color;
idtype = type_nullable__nit__TKwis.id;
if(var_tkwisnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwisnode2&3)?type_info[((long)var_tkwisnode2&3)]:var_tkwisnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwisnode2&3)?type_info[((long)var_tkwisnode2&3)]:var_tkwisnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3655);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype7 = type_standard__Array__standard__Object.color;
idtype8 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3657);
fatal_exit(1);
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var_tkwendnode8 = var_nodearraylist4;
/* <var_tkwendnode8:nullable Object> isa nullable TKwend */
cltype11 = type_nullable__nit__TKwend.color;
idtype12 = type_nullable__nit__TKwend.id;
if(var_tkwendnode8 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwendnode8&3)?type_info[((long)var_tkwendnode8&3)]:var_tkwendnode8->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwendnode8&3)?type_info[((long)var_tkwendnode8&3)]:var_tkwendnode8->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3660);
fatal_exit(1);
}
var13 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
nit__parser_prod___AAnnotations___init_aannotations(var13, var_tkwisnode2, ((val*)NULL), ((val*)NULL), var_listnode6, ((val*)NULL), var_tkwendnode8); /* Direct call parser_prod#AAnnotations#init_aannotations on <var13:AAnnotations>*/
}
var_pannotationsnode1 = var13;
var_node_list = var_pannotationsnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction77> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction80#action for (self: ReduceAction80, Parser) */
void nit__parser___nit__parser__ReduceAction80___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tkwisnode2 /* var tkwisnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var9 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
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
var3 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Object]>*/
}
var_listnode6 = var3;
var_tkwisnode2 = var_nodearraylist1;
/* <var_tkwisnode2:nullable Object> isa nullable TKwis */
cltype = type_nullable__nit__TKwis.color;
idtype = type_nullable__nit__TKwis.id;
if(var_tkwisnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwisnode2&3)?type_info[((long)var_tkwisnode2&3)]:var_tkwisnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwisnode2&3)?type_info[((long)var_tkwisnode2&3)]:var_tkwisnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3683);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype6 = type_standard__Array__standard__Object.color;
idtype7 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3685);
fatal_exit(1);
}
{
var8 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var8;
var9 = NEW_nit__AAnnotations(&type_nit__AAnnotations);
{
nit__parser_prod___AAnnotations___init_aannotations(var9, var_tkwisnode2, ((val*)NULL), ((val*)NULL), var_listnode6, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AAnnotations#init_aannotations on <var9:AAnnotations>*/
}
var_pannotationsnode1 = var9;
var_node_list = var_pannotationsnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction80> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction81#action for (self: ReduceAction81, Parser) */
void nit__parser___nit__parser__ReduceAction81___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : APublicVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_nit__APublicVisibility(&type_nit__APublicVisibility);
{
nit__parser_prod___APublicVisibility___init_apublicvisibility(var, ((val*)NULL)); /* Direct call parser_prod#APublicVisibility#init_apublicvisibility on <var:APublicVisibility>*/
}
var_pvisibilitynode1 = var;
var_node_list = var_pvisibilitynode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction81> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction82#action for (self: ReduceAction82, Parser) */
void nit__parser___nit__parser__ReduceAction82___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwpublicnode2 /* var tkwpublicnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APublicVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
long var4 /* : Int */;
long var5 /* : Int */;
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
var_tkwpublicnode2 = var_nodearraylist1;
/* <var_tkwpublicnode2:nullable Object> isa nullable TKwpublic */
cltype = type_nullable__nit__TKwpublic.color;
idtype = type_nullable__nit__TKwpublic.id;
if(var_tkwpublicnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwpublicnode2&3)?type_info[((long)var_tkwpublicnode2&3)]:var_tkwpublicnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwpublicnode2&3)?type_info[((long)var_tkwpublicnode2&3)]:var_tkwpublicnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3719);
fatal_exit(1);
}
var3 = NEW_nit__APublicVisibility(&type_nit__APublicVisibility);
{
nit__parser_prod___APublicVisibility___init_apublicvisibility(var3, var_tkwpublicnode2); /* Direct call parser_prod#APublicVisibility#init_apublicvisibility on <var3:APublicVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction82> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction83#action for (self: ReduceAction83, Parser) */
void nit__parser___nit__parser__ReduceAction83___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprivatenode2 /* var tkwprivatenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APrivateVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APrivateVisibility */;
long var4 /* : Int */;
long var5 /* : Int */;
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
var_tkwprivatenode2 = var_nodearraylist1;
/* <var_tkwprivatenode2:nullable Object> isa nullable TKwprivate */
cltype = type_nullable__nit__TKwprivate.color;
idtype = type_nullable__nit__TKwprivate.id;
if(var_tkwprivatenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwprivatenode2&3)?type_info[((long)var_tkwprivatenode2&3)]:var_tkwprivatenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwprivatenode2&3)?type_info[((long)var_tkwprivatenode2&3)]:var_tkwprivatenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3735);
fatal_exit(1);
}
var3 = NEW_nit__APrivateVisibility(&type_nit__APrivateVisibility);
{
nit__parser_prod___APrivateVisibility___init_aprivatevisibility(var3, var_tkwprivatenode2); /* Direct call parser_prod#APrivateVisibility#init_aprivatevisibility on <var3:APrivateVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction83> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction84#action for (self: ReduceAction84, Parser) */
void nit__parser___nit__parser__ReduceAction84___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprotectednode2 /* var tkwprotectednode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AProtectedVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AProtectedVisibility */;
long var4 /* : Int */;
long var5 /* : Int */;
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
var_tkwprotectednode2 = var_nodearraylist1;
/* <var_tkwprotectednode2:nullable Object> isa nullable TKwprotected */
cltype = type_nullable__nit__TKwprotected.color;
idtype = type_nullable__nit__TKwprotected.id;
if(var_tkwprotectednode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwprotectednode2&3)?type_info[((long)var_tkwprotectednode2&3)]:var_tkwprotectednode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwprotectednode2&3)?type_info[((long)var_tkwprotectednode2&3)]:var_tkwprotectednode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3751);
fatal_exit(1);
}
var3 = NEW_nit__AProtectedVisibility(&type_nit__AProtectedVisibility);
{
nit__parser_prod___AProtectedVisibility___init_aprotectedvisibility(var3, var_tkwprotectednode2); /* Direct call parser_prod#AProtectedVisibility#init_aprotectedvisibility on <var3:AProtectedVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction84> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction85#action for (self: ReduceAction85, Parser) */
void nit__parser___nit__parser__ReduceAction85___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwintrudenode2 /* var tkwintrudenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AIntrudeVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AIntrudeVisibility */;
long var4 /* : Int */;
long var5 /* : Int */;
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
var_tkwintrudenode2 = var_nodearraylist1;
/* <var_tkwintrudenode2:nullable Object> isa nullable TKwintrude */
cltype = type_nullable__nit__TKwintrude.color;
idtype = type_nullable__nit__TKwintrude.id;
if(var_tkwintrudenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwintrudenode2&3)?type_info[((long)var_tkwintrudenode2&3)]:var_tkwintrudenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwintrudenode2&3)?type_info[((long)var_tkwintrudenode2&3)]:var_tkwintrudenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3767);
fatal_exit(1);
}
var3 = NEW_nit__AIntrudeVisibility(&type_nit__AIntrudeVisibility);
{
nit__parser_prod___AIntrudeVisibility___init_aintrudevisibility(var3, var_tkwintrudenode2); /* Direct call parser_prod#AIntrudeVisibility#init_aintrudevisibility on <var3:AIntrudeVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction85> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction86#action for (self: ReduceAction86, Parser) */
void nit__parser___nit__parser__ReduceAction86___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tplusnode2 /* var tplusnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APlusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APlusMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable__nit__TPlus.color;
idtype = type_nullable__nit__TPlus.id;
if(var_tplusnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tplusnode2&3)?type_info[((long)var_tplusnode2&3)]:var_tplusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3782);
fatal_exit(1);
}
var2 = NEW_nit__APlusMethid(&type_nit__APlusMethid);
{
nit__parser_prod___APlusMethid___init_aplusmethid(var2, var_tplusnode2); /* Direct call parser_prod#APlusMethid#init_aplusmethid on <var2:APlusMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction86> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction87#action for (self: ReduceAction87, Parser) */
void nit__parser___nit__parser__ReduceAction87___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AMinusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AMinusMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable__nit__TMinus.color;
idtype = type_nullable__nit__TMinus.id;
if(var_tminusnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tminusnode2&3)?type_info[((long)var_tminusnode2&3)]:var_tminusnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3797);
fatal_exit(1);
}
var2 = NEW_nit__AMinusMethid(&type_nit__AMinusMethid);
{
nit__parser_prod___AMinusMethid___init_aminusmethid(var2, var_tminusnode2); /* Direct call parser_prod#AMinusMethid#init_aminusmethid on <var2:AMinusMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction87> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction88#action for (self: ReduceAction88, Parser) */
void nit__parser___nit__parser__ReduceAction88___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarnode2 /* var tstarnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarnode2 = var_nodearraylist1;
/* <var_tstarnode2:nullable Object> isa nullable TStar */
cltype = type_nullable__nit__TStar.color;
idtype = type_nullable__nit__TStar.id;
if(var_tstarnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstarnode2&3)?type_info[((long)var_tstarnode2&3)]:var_tstarnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstarnode2&3)?type_info[((long)var_tstarnode2&3)]:var_tstarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3812);
fatal_exit(1);
}
var2 = NEW_nit__AStarMethid(&type_nit__AStarMethid);
{
nit__parser_prod___AStarMethid___init_astarmethid(var2, var_tstarnode2); /* Direct call parser_prod#AStarMethid#init_astarmethid on <var2:AStarMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction88> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction89#action for (self: ReduceAction89, Parser) */
void nit__parser___nit__parser__ReduceAction89___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarstarnode2 /* var tstarstarnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarstarMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarstarMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarstarnode2 = var_nodearraylist1;
/* <var_tstarstarnode2:nullable Object> isa nullable TStarstar */
cltype = type_nullable__nit__TStarstar.color;
idtype = type_nullable__nit__TStarstar.id;
if(var_tstarstarnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstarstarnode2&3)?type_info[((long)var_tstarstarnode2&3)]:var_tstarstarnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstarstarnode2&3)?type_info[((long)var_tstarstarnode2&3)]:var_tstarstarnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3827);
fatal_exit(1);
}
var2 = NEW_nit__AStarstarMethid(&type_nit__AStarstarMethid);
{
nit__parser_prod___AStarstarMethid___init_astarstarmethid(var2, var_tstarstarnode2); /* Direct call parser_prod#AStarstarMethid#init_astarstarmethid on <var2:AStarstarMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction89> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction90#action for (self: ReduceAction90, Parser) */
void nit__parser___nit__parser__ReduceAction90___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tslashnode2 /* var tslashnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ASlashMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ASlashMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tslashnode2 = var_nodearraylist1;
/* <var_tslashnode2:nullable Object> isa nullable TSlash */
cltype = type_nullable__nit__TSlash.color;
idtype = type_nullable__nit__TSlash.id;
if(var_tslashnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tslashnode2&3)?type_info[((long)var_tslashnode2&3)]:var_tslashnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tslashnode2&3)?type_info[((long)var_tslashnode2&3)]:var_tslashnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3842);
fatal_exit(1);
}
var2 = NEW_nit__ASlashMethid(&type_nit__ASlashMethid);
{
nit__parser_prod___ASlashMethid___init_aslashmethid(var2, var_tslashnode2); /* Direct call parser_prod#ASlashMethid#init_aslashmethid on <var2:ASlashMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction90> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction91#action for (self: ReduceAction91, Parser) */
void nit__parser___nit__parser__ReduceAction91___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpercentnode2 /* var tpercentnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APercentMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APercentMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpercentnode2 = var_nodearraylist1;
/* <var_tpercentnode2:nullable Object> isa nullable TPercent */
cltype = type_nullable__nit__TPercent.color;
idtype = type_nullable__nit__TPercent.id;
if(var_tpercentnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tpercentnode2&3)?type_info[((long)var_tpercentnode2&3)]:var_tpercentnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tpercentnode2&3)?type_info[((long)var_tpercentnode2&3)]:var_tpercentnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3857);
fatal_exit(1);
}
var2 = NEW_nit__APercentMethid(&type_nit__APercentMethid);
{
nit__parser_prod___APercentMethid___init_apercentmethid(var2, var_tpercentnode2); /* Direct call parser_prod#APercentMethid#init_apercentmethid on <var2:APercentMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction91> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction92#action for (self: ReduceAction92, Parser) */
void nit__parser___nit__parser__ReduceAction92___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpipenode2 /* var tpipenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : APipeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APipeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpipenode2 = var_nodearraylist1;
/* <var_tpipenode2:nullable Object> isa nullable TPipe */
cltype = type_nullable__nit__TPipe.color;
idtype = type_nullable__nit__TPipe.id;
if(var_tpipenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tpipenode2&3)?type_info[((long)var_tpipenode2&3)]:var_tpipenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tpipenode2&3)?type_info[((long)var_tpipenode2&3)]:var_tpipenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3872);
fatal_exit(1);
}
var2 = NEW_nit__APipeMethid(&type_nit__APipeMethid);
{
nit__parser_prod___APipeMethid___init_apipemethid(var2, var_tpipenode2); /* Direct call parser_prod#APipeMethid#init_apipemethid on <var2:APipeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction92> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction93#action for (self: ReduceAction93, Parser) */
void nit__parser___nit__parser__ReduceAction93___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcaretnode2 /* var tcaretnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ACaretMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ACaretMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tcaretnode2 = var_nodearraylist1;
/* <var_tcaretnode2:nullable Object> isa nullable TCaret */
cltype = type_nullable__nit__TCaret.color;
idtype = type_nullable__nit__TCaret.id;
if(var_tcaretnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tcaretnode2&3)?type_info[((long)var_tcaretnode2&3)]:var_tcaretnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tcaretnode2&3)?type_info[((long)var_tcaretnode2&3)]:var_tcaretnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3887);
fatal_exit(1);
}
var2 = NEW_nit__ACaretMethid(&type_nit__ACaretMethid);
{
nit__parser_prod___ACaretMethid___init_acaretmethid(var2, var_tcaretnode2); /* Direct call parser_prod#ACaretMethid#init_acaretmethid on <var2:ACaretMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction93> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction94#action for (self: ReduceAction94, Parser) */
void nit__parser___nit__parser__ReduceAction94___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tampnode2 /* var tampnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AAmpMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AAmpMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tampnode2 = var_nodearraylist1;
/* <var_tampnode2:nullable Object> isa nullable TAmp */
cltype = type_nullable__nit__TAmp.color;
idtype = type_nullable__nit__TAmp.id;
if(var_tampnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tampnode2&3)?type_info[((long)var_tampnode2&3)]:var_tampnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tampnode2&3)?type_info[((long)var_tampnode2&3)]:var_tampnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3902);
fatal_exit(1);
}
var2 = NEW_nit__AAmpMethid(&type_nit__AAmpMethid);
{
nit__parser_prod___AAmpMethid___init_aampmethid(var2, var_tampnode2); /* Direct call parser_prod#AAmpMethid#init_aampmethid on <var2:AAmpMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction94> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction95#action for (self: ReduceAction95, Parser) */
void nit__parser___nit__parser__ReduceAction95___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ttildenode2 /* var ttildenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ATildeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ATildeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_ttildenode2 = var_nodearraylist1;
/* <var_ttildenode2:nullable Object> isa nullable TTilde */
cltype = type_nullable__nit__TTilde.color;
idtype = type_nullable__nit__TTilde.id;
if(var_ttildenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_ttildenode2&3)?type_info[((long)var_ttildenode2&3)]:var_ttildenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3917);
fatal_exit(1);
}
var2 = NEW_nit__ATildeMethid(&type_nit__ATildeMethid);
{
nit__parser_prod___ATildeMethid___init_atildemethid(var2, var_ttildenode2); /* Direct call parser_prod#ATildeMethid#init_atildemethid on <var2:ATildeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction95> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction96#action for (self: ReduceAction96, Parser) */
void nit__parser___nit__parser__ReduceAction96___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_teqnode2 /* var teqnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AEqMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AEqMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_teqnode2 = var_nodearraylist1;
/* <var_teqnode2:nullable Object> isa nullable TEq */
cltype = type_nullable__nit__TEq.color;
idtype = type_nullable__nit__TEq.id;
if(var_teqnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_teqnode2&3)?type_info[((long)var_teqnode2&3)]:var_teqnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_teqnode2&3)?type_info[((long)var_teqnode2&3)]:var_teqnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3932);
fatal_exit(1);
}
var2 = NEW_nit__AEqMethid(&type_nit__AEqMethid);
{
nit__parser_prod___AEqMethid___init_aeqmethid(var2, var_teqnode2); /* Direct call parser_prod#AEqMethid#init_aeqmethid on <var2:AEqMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction96> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction97#action for (self: ReduceAction97, Parser) */
void nit__parser___nit__parser__ReduceAction97___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnenode2 /* var tnenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ANeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ANeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tnenode2 = var_nodearraylist1;
/* <var_tnenode2:nullable Object> isa nullable TNe */
cltype = type_nullable__nit__TNe.color;
idtype = type_nullable__nit__TNe.id;
if(var_tnenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tnenode2&3)?type_info[((long)var_tnenode2&3)]:var_tnenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tnenode2&3)?type_info[((long)var_tnenode2&3)]:var_tnenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3947);
fatal_exit(1);
}
var2 = NEW_nit__ANeMethid(&type_nit__ANeMethid);
{
nit__parser_prod___ANeMethid___init_anemethid(var2, var_tnenode2); /* Direct call parser_prod#ANeMethid#init_anemethid on <var2:ANeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction97> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction98#action for (self: ReduceAction98, Parser) */
void nit__parser___nit__parser__ReduceAction98___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tlenode2 /* var tlenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tlenode2 = var_nodearraylist1;
/* <var_tlenode2:nullable Object> isa nullable TLe */
cltype = type_nullable__nit__TLe.color;
idtype = type_nullable__nit__TLe.id;
if(var_tlenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tlenode2&3)?type_info[((long)var_tlenode2&3)]:var_tlenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tlenode2&3)?type_info[((long)var_tlenode2&3)]:var_tlenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3962);
fatal_exit(1);
}
var2 = NEW_nit__ALeMethid(&type_nit__ALeMethid);
{
nit__parser_prod___ALeMethid___init_alemethid(var2, var_tlenode2); /* Direct call parser_prod#ALeMethid#init_alemethid on <var2:ALeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction98> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction99#action for (self: ReduceAction99, Parser) */
void nit__parser___nit__parser__ReduceAction99___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgenode2 /* var tgenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AGeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGeMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tgenode2 = var_nodearraylist1;
/* <var_tgenode2:nullable Object> isa nullable TGe */
cltype = type_nullable__nit__TGe.color;
idtype = type_nullable__nit__TGe.id;
if(var_tgenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tgenode2&3)?type_info[((long)var_tgenode2&3)]:var_tgenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tgenode2&3)?type_info[((long)var_tgenode2&3)]:var_tgenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3977);
fatal_exit(1);
}
var2 = NEW_nit__AGeMethid(&type_nit__AGeMethid);
{
nit__parser_prod___AGeMethid___init_agemethid(var2, var_tgenode2); /* Direct call parser_prod#AGeMethid#init_agemethid on <var2:AGeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction99> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction100#action for (self: ReduceAction100, Parser) */
void nit__parser___nit__parser__ReduceAction100___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tltnode2 /* var tltnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALtMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tltnode2 = var_nodearraylist1;
/* <var_tltnode2:nullable Object> isa nullable TLt */
cltype = type_nullable__nit__TLt.color;
idtype = type_nullable__nit__TLt.id;
if(var_tltnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tltnode2&3)?type_info[((long)var_tltnode2&3)]:var_tltnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tltnode2&3)?type_info[((long)var_tltnode2&3)]:var_tltnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3992);
fatal_exit(1);
}
var2 = NEW_nit__ALtMethid(&type_nit__ALtMethid);
{
nit__parser_prod___ALtMethid___init_altmethid(var2, var_tltnode2); /* Direct call parser_prod#ALtMethid#init_altmethid on <var2:ALtMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction100> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction101#action for (self: ReduceAction101, Parser) */
void nit__parser___nit__parser__ReduceAction101___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgtnode2 /* var tgtnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AGtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGtMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tgtnode2 = var_nodearraylist1;
/* <var_tgtnode2:nullable Object> isa nullable TGt */
cltype = type_nullable__nit__TGt.color;
idtype = type_nullable__nit__TGt.id;
if(var_tgtnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tgtnode2&3)?type_info[((long)var_tgtnode2&3)]:var_tgtnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tgtnode2&3)?type_info[((long)var_tgtnode2&3)]:var_tgtnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4007);
fatal_exit(1);
}
var2 = NEW_nit__AGtMethid(&type_nit__AGtMethid);
{
nit__parser_prod___AGtMethid___init_agtmethid(var2, var_tgtnode2); /* Direct call parser_prod#AGtMethid#init_agtmethid on <var2:AGtMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction101> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction102#action for (self: ReduceAction102, Parser) */
void nit__parser___nit__parser__ReduceAction102___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tllnode2 /* var tllnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALlMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALlMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tllnode2 = var_nodearraylist1;
/* <var_tllnode2:nullable Object> isa nullable TLl */
cltype = type_nullable__nit__TLl.color;
idtype = type_nullable__nit__TLl.id;
if(var_tllnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tllnode2&3)?type_info[((long)var_tllnode2&3)]:var_tllnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tllnode2&3)?type_info[((long)var_tllnode2&3)]:var_tllnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4022);
fatal_exit(1);
}
var2 = NEW_nit__ALlMethid(&type_nit__ALlMethid);
{
nit__parser_prod___ALlMethid___init_allmethid(var2, var_tllnode2); /* Direct call parser_prod#ALlMethid#init_allmethid on <var2:ALlMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction102> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction103#action for (self: ReduceAction103, Parser) */
void nit__parser___nit__parser__ReduceAction103___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tggnode2 /* var tggnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AGgMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGgMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tggnode2 = var_nodearraylist1;
/* <var_tggnode2:nullable Object> isa nullable TGg */
cltype = type_nullable__nit__TGg.color;
idtype = type_nullable__nit__TGg.id;
if(var_tggnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tggnode2&3)?type_info[((long)var_tggnode2&3)]:var_tggnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tggnode2&3)?type_info[((long)var_tggnode2&3)]:var_tggnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4037);
fatal_exit(1);
}
var2 = NEW_nit__AGgMethid(&type_nit__AGgMethid);
{
nit__parser_prod___AGgMethid___init_aggmethid(var2, var_tggnode2); /* Direct call parser_prod#AGgMethid#init_aggmethid on <var2:AGgMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction103> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction104#action for (self: ReduceAction104, Parser) */
void nit__parser___nit__parser__ReduceAction104___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tcbranode3 /* var tcbranode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABraMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraMethid */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4053);
fatal_exit(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype4 = type_nullable__nit__TCbra.color;
idtype5 = type_nullable__nit__TCbra.id;
if(var_tcbranode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4055);
fatal_exit(1);
}
var6 = NEW_nit__ABraMethid(&type_nit__ABraMethid);
{
nit__parser_prod___ABraMethid___init_abramethid(var6, var_tobranode2, var_tcbranode3); /* Direct call parser_prod#ABraMethid#init_abramethid on <var6:ABraMethid>*/
}
var_pmethidnode1 = var6;
var_node_list = var_pmethidnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction104> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction105#action for (self: ReduceAction105, Parser) */
void nit__parser___nit__parser__ReduceAction105___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarshipnode2 /* var tstarshipnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AStarshipMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarshipMethid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarshipnode2 = var_nodearraylist1;
/* <var_tstarshipnode2:nullable Object> isa nullable TStarship */
cltype = type_nullable__nit__TStarship.color;
idtype = type_nullable__nit__TStarship.id;
if(var_tstarshipnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tstarshipnode2&3)?type_info[((long)var_tstarshipnode2&3)]:var_tstarshipnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tstarshipnode2&3)?type_info[((long)var_tstarshipnode2&3)]:var_tstarshipnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4071);
fatal_exit(1);
}
var2 = NEW_nit__AStarshipMethid(&type_nit__AStarshipMethid);
{
nit__parser_prod___AStarshipMethid___init_astarshipmethid(var2, var_tstarshipnode2); /* Direct call parser_prod#AStarshipMethid#init_astarshipmethid on <var2:AStarshipMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction105> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction106#action for (self: ReduceAction106, Parser) */
void nit__parser___nit__parser__ReduceAction106___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode3 /* var tassignnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AAssignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AAssignMethid */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4087);
fatal_exit(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype4 = type_nullable__nit__TAssign.color;
idtype5 = type_nullable__nit__TAssign.id;
if(var_tassignnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tassignnode3&3)?type_info[((long)var_tassignnode3&3)]:var_tassignnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4089);
fatal_exit(1);
}
var6 = NEW_nit__AAssignMethid(&type_nit__AAssignMethid);
{
nit__parser_prod___AAssignMethid___init_aassignmethid(var6, var_tidnode2, var_tassignnode3); /* Direct call parser_prod#AAssignMethid#init_aassignmethid on <var6:AAssignMethid>*/
}
var_pmethidnode1 = var6;
var_node_list = var_pmethidnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction106> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction107#action for (self: ReduceAction107, Parser) */
void nit__parser___nit__parser__ReduceAction107___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
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
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ABraassignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraassignMethid */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
if(var_tobranode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tobranode2&3)?type_info[((long)var_tobranode2&3)]:var_tobranode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4107);
fatal_exit(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype5 = type_nullable__nit__TCbra.color;
idtype6 = type_nullable__nit__TCbra.id;
if(var_tcbranode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tcbranode3&3)?type_info[((long)var_tcbranode3&3)]:var_tcbranode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4109);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype8 = type_nullable__nit__TAssign.color;
idtype9 = type_nullable__nit__TAssign.id;
if(var_tassignnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tassignnode4&3)?type_info[((long)var_tassignnode4&3)]:var_tassignnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4111);
fatal_exit(1);
}
var10 = NEW_nit__ABraassignMethid(&type_nit__ABraassignMethid);
{
nit__parser_prod___ABraassignMethid___init_abraassignmethid(var10, var_tobranode2, var_tcbranode3, var_tassignnode4); /* Direct call parser_prod#ABraassignMethid#init_abraassignmethid on <var10:ABraassignMethid>*/
}
var_pmethidnode1 = var10;
var_node_list = var_pmethidnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction107> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction108#action for (self: ReduceAction108, Parser) */
void nit__parser___nit__parser__ReduceAction108___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AIdMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AIdMethid */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4128);
fatal_exit(1);
}
var2 = NEW_nit__AIdMethid(&type_nit__AIdMethid);
{
nit__parser_prod___AIdMethid___init_aidmethid(var2, var_tidnode2); /* Direct call parser_prod#AIdMethid#init_aidmethid on <var2:AIdMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction108> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction109#action for (self: ReduceAction109, Parser) */
void nit__parser___nit__parser__ReduceAction109___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var_listnode4 = var6;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4149);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_standard__Array__standard__Object.color;
idtype10 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4151);
fatal_exit(1);
}
{
var11 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype13 = type_nullable__nit__TCpar.color;
idtype14 = type_nullable__nit__TCpar.id;
if(var_tcparnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4154);
fatal_exit(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype16 = type_nullable__nit__AType.color;
idtype17 = type_nullable__nit__AType.id;
if(var_ptypenode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_ptypenode6&3)?type_info[((long)var_ptypenode6&3)]:var_ptypenode6->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4156);
fatal_exit(1);
}
var18 = NEW_nit__ASignature(&type_nit__ASignature);
{
nit__parser_prod___ASignature___init_asignature(var18, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6); /* Direct call parser_prod#ASignature#init_asignature on <var18:ASignature>*/
}
var_psignaturenode1 = var18;
var_node_list = var_psignaturenode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction109> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction110#action for (self: ReduceAction110, Parser) */
void nit__parser___nit__parser__ReduceAction110___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var14 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_listnode4 = var5;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
if(var_toparnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_toparnode2&3)?type_info[((long)var_toparnode2&3)]:var_toparnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4179);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_standard__Array__standard__Object.color;
idtype9 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4181);
fatal_exit(1);
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
if(cltype12 >= (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tcparnode5&3)?type_info[((long)var_tcparnode5&3)]:var_tcparnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4184);
fatal_exit(1);
}
var14 = NEW_nit__ASignature(&type_nit__ASignature);
{
nit__parser_prod___ASignature___init_asignature(var14, var_toparnode2, var_listnode4, var_tcparnode5, ((val*)NULL)); /* Direct call parser_prod#ASignature#init_asignature on <var14:ASignature>*/
}
var_psignaturenode1 = var14;
var_node_list = var_psignaturenode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction110> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction111#action for (self: ReduceAction111, Parser) */
void nit__parser___nit__parser__ReduceAction111___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var_listnode3 = var2;
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode5 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4204);
fatal_exit(1);
}
var4 = NEW_nit__ASignature(&type_nit__ASignature);
{
nit__parser_prod___ASignature___init_asignature(var4, ((val*)NULL), var_listnode3, ((val*)NULL), var_ptypenode5); /* Direct call parser_prod#ASignature#init_asignature on <var4:ASignature>*/
}
var_psignaturenode1 = var4;
var_node_list = var_psignaturenode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction111> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction112#action for (self: ReduceAction112, Parser) */
void nit__parser___nit__parser__ReduceAction112___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var2 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var3 /* : Int */;
long var4 /* : Int */;
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
var2 = NEW_nit__ASignature(&type_nit__ASignature);
{
nit__parser_prod___ASignature___init_asignature(var2, ((val*)NULL), var_listnode3, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#ASignature#init_asignature on <var2:ASignature>*/
}
var_psignaturenode1 = var2;
var_node_list = var_psignaturenode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction112> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction113#action for (self: ReduceAction113, Parser) */
void nit__parser___nit__parser__ReduceAction113___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
if (var_pparamnode1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var3 = var4;
}
if (var3){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pparamnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction113> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction114#action for (self: ReduceAction114, Parser) */
void nit__parser___nit__parser__ReduceAction114___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4259);
fatal_exit(1);
}
if (var_pparamnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pparamnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var7 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction114> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction116#action for (self: ReduceAction116, Parser) */
void nit__parser___nit__parser__ReduceAction116___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist3;
var_node_list = var_pparamnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction116> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction117#action for (self: ReduceAction117, Parser) */
void nit__parser___nit__parser__ReduceAction117___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4289);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nit__AAnnotations.color;
idtype5 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4291);
fatal_exit(1);
}
var6 = NEW_nit__AParam(&type_nit__AParam);
{
nit__parser_prod___AParam___init_aparam(var6, var_tidnode2, ((val*)NULL), ((val*)NULL), var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var6:AParam>*/
}
var_pparamnode1 = var6;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction117> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction118#action for (self: ReduceAction118, Parser) */
void nit__parser___nit__parser__ReduceAction118___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4310);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype4 = type_nullable__nit__AType.color;
idtype5 = type_nullable__nit__AType.id;
if(var_ptypenode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ptypenode3&3)?type_info[((long)var_ptypenode3&3)]:var_ptypenode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4312);
fatal_exit(1);
}
var6 = NEW_nit__AParam(&type_nit__AParam);
{
nit__parser_prod___AParam___init_aparam(var6, var_tidnode2, var_ptypenode3, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod#AParam#init_aparam on <var6:AParam>*/
}
var_pparamnode1 = var6;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction118> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction119#action for (self: ReduceAction119, Parser) */
void nit__parser___nit__parser__ReduceAction119___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
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
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4332);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nit__AType.color;
idtype6 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4334);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype8 = type_nullable__nit__AAnnotations.color;
idtype9 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4336);
fatal_exit(1);
}
var10 = NEW_nit__AParam(&type_nit__AParam);
{
nit__parser_prod___AParam___init_aparam(var10, var_tidnode2, var_ptypenode3, ((val*)NULL), var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var10:AParam>*/
}
var_pparamnode1 = var10;
var_node_list = var_pparamnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction119> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction120#action for (self: ReduceAction120, Parser) */
void nit__parser___nit__parser__ReduceAction120___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
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
val* var_tdotdotdotnode4 /* var tdotdotdotnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4356);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nit__AType.color;
idtype6 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4358);
fatal_exit(1);
}
var_tdotdotdotnode4 = var_nodearraylist3;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype8 = type_nullable__nit__TDotdotdot.color;
idtype9 = type_nullable__nit__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4360);
fatal_exit(1);
}
var10 = NEW_nit__AParam(&type_nit__AParam);
{
nit__parser_prod___AParam___init_aparam(var10, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, ((val*)NULL)); /* Direct call parser_prod#AParam#init_aparam on <var10:AParam>*/
}
var_pparamnode1 = var10;
var_node_list = var_pparamnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction120> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction121#action for (self: ReduceAction121, Parser) */
void nit__parser___nit__parser__ReduceAction121___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
if(var_tidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode2&3)?type_info[((long)var_tidnode2&3)]:var_tidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4381);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable__nit__AType.color;
idtype7 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4383);
fatal_exit(1);
}
var_tdotdotdotnode4 = var_nodearraylist4;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype9 = type_nullable__nit__TDotdotdot.color;
idtype10 = type_nullable__nit__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tdotdotdotnode4&3)?type_info[((long)var_tdotdotdotnode4&3)]:var_tdotdotdotnode4->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4385);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype12 = type_nullable__nit__AAnnotations.color;
idtype13 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_pannotationsnode5&3)?type_info[((long)var_pannotationsnode5&3)]:var_pannotationsnode5->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4387);
fatal_exit(1);
}
var14 = NEW_nit__AParam(&type_nit__AParam);
{
nit__parser_prod___AParam___init_aparam(var14, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var14:AParam>*/
}
var_pparamnode1 = var14;
var_node_list = var_pparamnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction121> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction122#action for (self: ReduceAction122, Parser) */
void nit__parser___nit__parser__ReduceAction122___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nit__TKwimport.color;
idtype = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4408);
fatal_exit(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype6 = type_nullable__nit__AExternCall.color;
idtype7 = type_nullable__nit__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4410);
fatal_exit(1);
}
if (var_pexterncallnode3 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexterncallnode3,((val*)NULL)) on <var_pexterncallnode3:nullable Object(nullable AExternCall)> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexterncallnode3, var_other); /* == on <var_pexterncallnode3:nullable AExternCall(AExternCall)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexterncallnode3); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
var13 = NEW_nit__AExternCalls(&type_nit__AExternCalls);
{
nit__parser_prod___AExternCalls___init_aexterncalls(var13, var_tkwimportnode2, var_listnode4); /* Direct call parser_prod#AExternCalls#init_aexterncalls on <var13:AExternCalls>*/
}
var_pexterncallsnode1 = var13;
var_node_list = var_pexterncallsnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction122> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction123#action for (self: ReduceAction123, Parser) */
void nit__parser___nit__parser__ReduceAction123___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Array[Object] */;
val* var18 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nit__TKwimport.color;
idtype = type_nullable__nit__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tkwimportnode2&3)?type_info[((long)var_tkwimportnode2&3)]:var_tkwimportnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4433);
fatal_exit(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype7 = type_nullable__nit__AExternCall.color;
idtype8 = type_nullable__nit__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_pexterncallnode3&3)?type_info[((long)var_pexterncallnode3&3)]:var_pexterncallnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4435);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype10 = type_standard__Array__standard__Object.color;
idtype11 = type_standard__Array__standard__Object.id;
if(var_listnode4 == NULL) {
var9 = 0;
} else {
if(cltype10 >= (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_listnode4&3)?type_info[((long)var_listnode4&3)]:var_listnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4437);
fatal_exit(1);
}
if (var_pexterncallnode3 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexterncallnode3,((val*)NULL)) on <var_pexterncallnode3:nullable Object(nullable AExternCall)> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexterncallnode3, var_other); /* == on <var_pexterncallnode3:nullable AExternCall(AExternCall)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode5, var_pexterncallnode3); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
{
var17 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var17;
var18 = NEW_nit__AExternCalls(&type_nit__AExternCalls);
{
nit__parser_prod___AExternCalls___init_aexterncalls(var18, var_tkwimportnode2, var_listnode5); /* Direct call parser_prod#AExternCalls#init_aexterncalls on <var18:AExternCalls>*/
}
var_pexterncallsnode1 = var18;
var_node_list = var_pexterncallsnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction123> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction125#action for (self: ReduceAction125, Parser) */
void nit__parser___nit__parser__ReduceAction125___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
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
var_pexterncallnode1 = var_nodearraylist3;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction125> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction126#action for (self: ReduceAction126, Parser) */
void nit__parser___nit__parser__ReduceAction126___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pexterncallnode1 = var_nodearraylist1;
var_node_list = var_pexterncallnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction126> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction128#action for (self: ReduceAction128, Parser) */
void nit__parser___nit__parser__ReduceAction128___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwsupernode2 /* var tkwsupernode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ASuperExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ASuperExternCall */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwsupernode2 = var_nodearraylist1;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable__nit__TKwsuper.color;
idtype = type_nullable__nit__TKwsuper.id;
if(var_tkwsupernode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwsupernode2&3)?type_info[((long)var_tkwsupernode2&3)]:var_tkwsupernode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwsupernode2&3)?type_info[((long)var_tkwsupernode2&3)]:var_tkwsupernode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4481);
fatal_exit(1);
}
var2 = NEW_nit__ASuperExternCall(&type_nit__ASuperExternCall);
{
nit__parser_prod___ASuperExternCall___init_asuperexterncall(var2, var_tkwsupernode2); /* Direct call parser_prod#ASuperExternCall#init_asuperexterncall on <var2:ASuperExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction128> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction129#action for (self: ReduceAction129, Parser) */
void nit__parser___nit__parser__ReduceAction129___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode2 /* var pmethidnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ALocalPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ALocalPropExternCall */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pmethidnode2 = var_nodearraylist1;
/* <var_pmethidnode2:nullable Object> isa nullable AMethid */
cltype = type_nullable__nit__AMethid.color;
idtype = type_nullable__nit__AMethid.id;
if(var_pmethidnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_pmethidnode2&3)?type_info[((long)var_pmethidnode2&3)]:var_pmethidnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_pmethidnode2&3)?type_info[((long)var_pmethidnode2&3)]:var_pmethidnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4496);
fatal_exit(1);
}
var2 = NEW_nit__ALocalPropExternCall(&type_nit__ALocalPropExternCall);
{
nit__parser_prod___ALocalPropExternCall___init_alocalpropexterncall(var2, var_pmethidnode2); /* Direct call parser_prod#ALocalPropExternCall#init_alocalpropexterncall on <var2:ALocalPropExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction129> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction130#action for (self: ReduceAction130, Parser) */
void nit__parser___nit__parser__ReduceAction130___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var_pmethidnode4 /* var pmethidnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AFullPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AFullPropExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4513);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype5 = type_nullable__nit__TDot.color;
idtype6 = type_nullable__nit__TDot.id;
if(var_tdotnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4515);
fatal_exit(1);
}
var_pmethidnode4 = var_nodearraylist3;
/* <var_pmethidnode4:nullable Object> isa nullable AMethid */
cltype8 = type_nullable__nit__AMethid.color;
idtype9 = type_nullable__nit__AMethid.id;
if(var_pmethidnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_pmethidnode4&3)?type_info[((long)var_pmethidnode4&3)]:var_pmethidnode4->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_pmethidnode4&3)?type_info[((long)var_pmethidnode4&3)]:var_pmethidnode4->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4517);
fatal_exit(1);
}
var10 = NEW_nit__AFullPropExternCall(&type_nit__AFullPropExternCall);
{
nit__parser_prod___AFullPropExternCall___init_afullpropexterncall(var10, var_ptypenode2, var_tdotnode3, var_pmethidnode4); /* Direct call parser_prod#AFullPropExternCall#init_afullpropexterncall on <var10:AFullPropExternCall>*/
}
var_pexterncallnode1 = var10;
var_node_list = var_pexterncallnode1;
var11 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction130> */
{
var12 = nit___nit__Parser___go_to(var_p, var11);
}
{
nit___nit__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction131#action for (self: ReduceAction131, Parser) */
void nit__parser___nit__parser__ReduceAction131___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AInitPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AInitPropExternCall */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4534);
fatal_exit(1);
}
var2 = NEW_nit__AInitPropExternCall(&type_nit__AInitPropExternCall);
{
nit__parser_prod___AInitPropExternCall___init_ainitpropexterncall(var2, var_ptypenode2); /* Direct call parser_prod#AInitPropExternCall#init_ainitpropexterncall on <var2:AInitPropExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction131> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction132#action for (self: ReduceAction132, Parser) */
void nit__parser___nit__parser__ReduceAction132___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4557);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype11 = type_nullable__nit__TDot.color;
idtype12 = type_nullable__nit__TDot.id;
if(var_tdotnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4559);
fatal_exit(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype14 = type_nullable__nit__TKwas.color;
idtype15 = type_nullable__nit__TKwas.id;
if(var_tkwasnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4561);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist7;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype17 = type_nullable__nit__AType.color;
idtype18 = type_nullable__nit__AType.id;
if(var_ptypenode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4563);
fatal_exit(1);
}
var19 = NEW_nit__ACastAsExternCall(&type_nit__ACastAsExternCall);
{
nit__parser_prod___ACastAsExternCall___init_acastasexterncall(var19, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* Direct call parser_prod#ACastAsExternCall#init_acastasexterncall on <var19:ACastAsExternCall>*/
}
var_pexterncallnode1 = var19;
var_node_list = var_pexterncallnode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction132> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction133#action for (self: ReduceAction133, Parser) */
void nit__parser___nit__parser__ReduceAction133___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4585);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype7 = type_nullable__nit__TDot.color;
idtype8 = type_nullable__nit__TDot.id;
if(var_tdotnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tdotnode3&3)?type_info[((long)var_tdotnode3&3)]:var_tdotnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4587);
fatal_exit(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype10 = type_nullable__nit__TKwas.color;
idtype11 = type_nullable__nit__TKwas.id;
if(var_tkwasnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwasnode4&3)?type_info[((long)var_tkwasnode4&3)]:var_tkwasnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4589);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist5;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype13 = type_nullable__nit__AType.color;
idtype14 = type_nullable__nit__AType.id;
if(var_ptypenode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_ptypenode5&3)?type_info[((long)var_ptypenode5&3)]:var_ptypenode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4591);
fatal_exit(1);
}
var15 = NEW_nit__ACastAsExternCall(&type_nit__ACastAsExternCall);
{
nit__parser_prod___ACastAsExternCall___init_acastasexterncall(var15, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* Direct call parser_prod#ACastAsExternCall#init_acastasexterncall on <var15:ACastAsExternCall>*/
}
var_pexterncallnode1 = var15;
var_node_list = var_pexterncallnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction133> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction134#action for (self: ReduceAction134, Parser) */
void nit__parser___nit__parser__ReduceAction134___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4617);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype11 = type_nullable__nit__TKwas.color;
idtype12 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4619);
fatal_exit(1);
}
var_tkwnullablenode4 = var_nodearraylist7;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype14 = type_nullable__nit__TKwnullable.color;
idtype15 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4621);
fatal_exit(1);
}
var16 = NEW_nit__AAsNullableExternCall(&type_nit__AAsNullableExternCall);
{
nit__parser_prod___AAsNullableExternCall___init_aasnullableexterncall(var16, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* Direct call parser_prod#AAsNullableExternCall#init_aasnullableexterncall on <var16:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var16;
var_node_list = var_pexterncallnode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction134> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction135#action for (self: ReduceAction135, Parser) */
void nit__parser___nit__parser__ReduceAction135___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var5 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4642);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype7 = type_nullable__nit__TKwas.color;
idtype8 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4644);
fatal_exit(1);
}
var_tkwnullablenode4 = var_nodearraylist5;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype10 = type_nullable__nit__TKwnullable.color;
idtype11 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwnullablenode4&3)?type_info[((long)var_tkwnullablenode4&3)]:var_tkwnullablenode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4646);
fatal_exit(1);
}
var12 = NEW_nit__AAsNullableExternCall(&type_nit__AAsNullableExternCall);
{
nit__parser_prod___AAsNullableExternCall___init_aasnullableexterncall(var12, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* Direct call parser_prod#AAsNullableExternCall#init_aasnullableexterncall on <var12:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var12;
var_node_list = var_pexterncallnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction135> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction136#action for (self: ReduceAction136, Parser) */
void nit__parser___nit__parser__ReduceAction136___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist11 = var;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var11 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4673);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype13 = type_nullable__nit__TKwas.color;
idtype14 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4675);
fatal_exit(1);
}
var_tkwnotnode4 = var_nodearraylist7;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype16 = type_nullable__nit__TKwnot.color;
idtype17 = type_nullable__nit__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4677);
fatal_exit(1);
}
var_tkwnullablenode5 = var_nodearraylist9;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype19 = type_nullable__nit__TKwnullable.color;
idtype20 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4679);
fatal_exit(1);
}
var21 = NEW_nit__AAsNotNullableExternCall(&type_nit__AAsNotNullableExternCall);
{
nit__parser_prod___AAsNotNullableExternCall___init_aasnotnullableexterncall(var21, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* Direct call parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall on <var21:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var21;
var_node_list = var_pexterncallnode1;
var22 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction136> */
{
var23 = nit___nit__Parser___go_to(var_p, var22);
}
{
nit___nit__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction137#action for (self: ReduceAction137, Parser) */
void nit__parser___nit__parser__ReduceAction137___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
if(var_ptypenode2 == NULL) {
var7 = 1;
} else {
if(cltype >= (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_ptypenode2&3)?type_info[((long)var_ptypenode2&3)]:var_ptypenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4703);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype9 = type_nullable__nit__TKwas.color;
idtype10 = type_nullable__nit__TKwas.id;
if(var_tkwasnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tkwasnode3&3)?type_info[((long)var_tkwasnode3&3)]:var_tkwasnode3->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4705);
fatal_exit(1);
}
var_tkwnotnode4 = var_nodearraylist5;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype12 = type_nullable__nit__TKwnot.color;
idtype13 = type_nullable__nit__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tkwnotnode4&3)?type_info[((long)var_tkwnotnode4&3)]:var_tkwnotnode4->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4707);
fatal_exit(1);
}
var_tkwnullablenode5 = var_nodearraylist7;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype15 = type_nullable__nit__TKwnullable.color;
idtype16 = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tkwnullablenode5&3)?type_info[((long)var_tkwnullablenode5&3)]:var_tkwnullablenode5->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4709);
fatal_exit(1);
}
var17 = NEW_nit__AAsNotNullableExternCall(&type_nit__AAsNotNullableExternCall);
{
nit__parser_prod___AAsNotNullableExternCall___init_aasnotnullableexterncall(var17, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* Direct call parser_prod#AAsNotNullableExternCall#init_aasnotnullableexterncall on <var17:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var17;
var_node_list = var_pexterncallnode1;
var18 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction137> */
{
var19 = nit___nit__Parser___go_to(var_p, var18);
}
{
nit___nit__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction139#action for (self: ReduceAction139, Parser) */
void nit__parser___nit__parser__ReduceAction139___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode1 /* var tstringnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstringnode1 = var_nodearraylist1;
var_node_list = var_tstringnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction139> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction140#action for (self: ReduceAction140, Parser) */
void nit__parser___nit__parser__ReduceAction140___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwinnode2 /* var tkwinnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tstringnode3 /* var tstringnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AInLanguage */;
val* var_pinlanguagenode1 /* var pinlanguagenode1: nullable AInLanguage */;
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
var_tkwinnode2 = var_nodearraylist1;
/* <var_tkwinnode2:nullable Object> isa nullable TKwin */
cltype = type_nullable__nit__TKwin.color;
idtype = type_nullable__nit__TKwin.id;
if(var_tkwinnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwinnode2&3)?type_info[((long)var_tkwinnode2&3)]:var_tkwinnode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwinnode2&3)?type_info[((long)var_tkwinnode2&3)]:var_tkwinnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4741);
fatal_exit(1);
}
var_tstringnode3 = var_nodearraylist3;
/* <var_tstringnode3:nullable Object> isa nullable TString */
cltype6 = type_nullable__nit__TString.color;
idtype7 = type_nullable__nit__TString.id;
if(var_tstringnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tstringnode3&3)?type_info[((long)var_tstringnode3&3)]:var_tstringnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tstringnode3&3)?type_info[((long)var_tstringnode3&3)]:var_tstringnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4743);
fatal_exit(1);
}
var8 = NEW_nit__AInLanguage(&type_nit__AInLanguage);
{
nit__parser_prod___AInLanguage___init_ainlanguage(var8, var_tkwinnode2, var_tstringnode3); /* Direct call parser_prod#AInLanguage#init_ainlanguage on <var8:AInLanguage>*/
}
var_pinlanguagenode1 = var8;
var_node_list = var_pinlanguagenode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction140> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction141#action for (self: ReduceAction141, Parser) */
void nit__parser___nit__parser__ReduceAction141___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AExternCodeBlock */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_texterncodesegmentnode3 = var_nodearraylist1;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype = type_nullable__nit__TExternCodeSegment.color;
idtype = type_nullable__nit__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4759);
fatal_exit(1);
}
var2 = NEW_nit__AExternCodeBlock(&type_nit__AExternCodeBlock);
{
nit__parser_prod___AExternCodeBlock___init_aexterncodeblock(var2, ((val*)NULL), var_texterncodesegmentnode3); /* Direct call parser_prod#AExternCodeBlock#init_aexterncodeblock on <var2:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var2;
var_node_list = var_pexterncodeblocknode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction141> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction142#action for (self: ReduceAction142, Parser) */
void nit__parser___nit__parser__ReduceAction142___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pinlanguagenode2 /* var pinlanguagenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AExternCodeBlock */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
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
var_pinlanguagenode2 = var_nodearraylist1;
/* <var_pinlanguagenode2:nullable Object> isa nullable AInLanguage */
cltype = type_nullable__nit__AInLanguage.color;
idtype = type_nullable__nit__AInLanguage.id;
if(var_pinlanguagenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_pinlanguagenode2&3)?type_info[((long)var_pinlanguagenode2&3)]:var_pinlanguagenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_pinlanguagenode2&3)?type_info[((long)var_pinlanguagenode2&3)]:var_pinlanguagenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4776);
fatal_exit(1);
}
var_texterncodesegmentnode3 = var_nodearraylist2;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype4 = type_nullable__nit__TExternCodeSegment.color;
idtype5 = type_nullable__nit__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_texterncodesegmentnode3&3)?type_info[((long)var_texterncodesegmentnode3&3)]:var_texterncodesegmentnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4778);
fatal_exit(1);
}
var6 = NEW_nit__AExternCodeBlock(&type_nit__AExternCodeBlock);
{
nit__parser_prod___AExternCodeBlock___init_aexterncodeblock(var6, var_pinlanguagenode2, var_texterncodesegmentnode3); /* Direct call parser_prod#AExternCodeBlock#init_aexterncodeblock on <var6:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var6;
var_node_list = var_pexterncodeblocknode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction142> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction143#action for (self: ReduceAction143, Parser) */
void nit__parser___nit__parser__ReduceAction143___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pexterncodeblocknode1 = var_nodearraylist1;
var_node_list = var_pexterncodeblocknode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction143> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction145#action for (self: ReduceAction145, Parser) */
void nit__parser___nit__parser__ReduceAction145___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
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
var_pexterncodeblocknode1 = var_nodearraylist2;
var_node_list = var_pexterncodeblocknode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction145> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction146#action for (self: ReduceAction146, Parser) */
void nit__parser___nit__parser__ReduceAction146___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var_listnode5 = var2;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4819);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist2;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable__nit__AAnnotations.color;
idtype6 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4821);
fatal_exit(1);
}
var7 = NEW_nit__AType(&type_nit__AType);
{
nit__parser_prod___AType___init_atype(var7, ((val*)NULL), var_tclassidnode3, ((val*)NULL), var_listnode5, ((val*)NULL), var_pannotationsnode7); /* Direct call parser_prod#AType#init_atype on <var7:AType>*/
}
var_ptypenode1 = var7;
var_node_list = var_ptypenode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction146> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction147#action for (self: ReduceAction147, Parser) */
void nit__parser___nit__parser__ReduceAction147___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var_listnode5 = var3;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable__nit__TKwnullable.color;
idtype = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4844);
fatal_exit(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nit__TClassid.color;
idtype7 = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4846);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nit__AAnnotations.color;
idtype10 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pannotationsnode7&3)?type_info[((long)var_pannotationsnode7&3)]:var_pannotationsnode7->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4848);
fatal_exit(1);
}
var11 = NEW_nit__AType(&type_nit__AType);
{
nit__parser_prod___AType___init_atype(var11, var_tkwnullablenode2, var_tclassidnode3, ((val*)NULL), var_listnode5, ((val*)NULL), var_pannotationsnode7); /* Direct call parser_prod#AType#init_atype on <var11:AType>*/
}
var_ptypenode1 = var11;
var_node_list = var_ptypenode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction147> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction148#action for (self: ReduceAction148, Parser) */
void nit__parser___nit__parser__ReduceAction148___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tobranode4 /* var tobranode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_tcbranode7 /* var tcbranode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var_listnode6 = var7;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nit__TClassid.color;
idtype = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4875);
fatal_exit(1);
}
var_tobranode4 = var_nodearraylist2;
/* <var_tobranode4:nullable Object> isa nullable TObra */
cltype10 = type_nullable__nit__TObra.color;
idtype11 = type_nullable__nit__TObra.id;
if(var_tobranode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tobranode4&3)?type_info[((long)var_tobranode4&3)]:var_tobranode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tobranode4&3)?type_info[((long)var_tobranode4&3)]:var_tobranode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4877);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype13 = type_standard__Array__standard__Object.color;
idtype14 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var12 = 0;
} else {
if(cltype13 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4879);
fatal_exit(1);
}
{
var15 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var15;
var_tcbranode7 = var_nodearraylist6;
/* <var_tcbranode7:nullable Object> isa nullable TCbra */
cltype17 = type_nullable__nit__TCbra.color;
idtype18 = type_nullable__nit__TCbra.id;
if(var_tcbranode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tcbranode7&3)?type_info[((long)var_tcbranode7&3)]:var_tcbranode7->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tcbranode7&3)?type_info[((long)var_tcbranode7&3)]:var_tcbranode7->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4882);
fatal_exit(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable__nit__AAnnotations.color;
idtype21 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4884);
fatal_exit(1);
}
var22 = NEW_nit__AType(&type_nit__AType);
{
nit__parser_prod___AType___init_atype(var22, ((val*)NULL), var_tclassidnode3, var_tobranode4, var_listnode6, var_tcbranode7, var_pannotationsnode8); /* Direct call parser_prod#AType#init_atype on <var22:AType>*/
}
var_ptypenode1 = var22;
var_node_list = var_ptypenode1;
var23 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction148> */
{
var24 = nit___nit__Parser___go_to(var_p, var23);
}
{
nit___nit__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction149#action for (self: ReduceAction149, Parser) */
void nit__parser___nit__parser__ReduceAction149___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tobranode4 /* var tobranode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var_tcbranode7 /* var tcbranode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var27 /* : Int */;
long var28 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist8 = var;
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
var_listnode6 = var8;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable__nit__TKwnullable.color;
idtype = type_nullable__nit__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tkwnullablenode2&3)?type_info[((long)var_tkwnullablenode2&3)]:var_tkwnullablenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4912);
fatal_exit(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype11 = type_nullable__nit__TClassid.color;
idtype12 = type_nullable__nit__TClassid.id;
if(var_tclassidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4914);
fatal_exit(1);
}
var_tobranode4 = var_nodearraylist3;
/* <var_tobranode4:nullable Object> isa nullable TObra */
cltype14 = type_nullable__nit__TObra.color;
idtype15 = type_nullable__nit__TObra.id;
if(var_tobranode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= (((long)var_tobranode4&3)?type_info[((long)var_tobranode4&3)]:var_tobranode4->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)var_tobranode4&3)?type_info[((long)var_tobranode4&3)]:var_tobranode4->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4916);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist5;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype17 = type_standard__Array__standard__Object.color;
idtype18 = type_standard__Array__standard__Object.id;
if(var_listnode5 == NULL) {
var16 = 0;
} else {
if(cltype17 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4918);
fatal_exit(1);
}
{
var19 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var19;
var_tcbranode7 = var_nodearraylist7;
/* <var_tcbranode7:nullable Object> isa nullable TCbra */
cltype21 = type_nullable__nit__TCbra.color;
idtype22 = type_nullable__nit__TCbra.id;
if(var_tcbranode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= (((long)var_tcbranode7&3)?type_info[((long)var_tcbranode7&3)]:var_tcbranode7->type)->table_size) {
var20 = 0;
} else {
var20 = (((long)var_tcbranode7&3)?type_info[((long)var_tcbranode7&3)]:var_tcbranode7->type)->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4921);
fatal_exit(1);
}
var_pannotationsnode8 = var_nodearraylist8;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->table_size) {
var23 = 0;
} else {
var23 = (((long)var_pannotationsnode8&3)?type_info[((long)var_pannotationsnode8&3)]:var_pannotationsnode8->type)->type_table[cltype24] == idtype25;
}
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4923);
fatal_exit(1);
}
var26 = NEW_nit__AType(&type_nit__AType);
{
nit__parser_prod___AType___init_atype(var26, var_tkwnullablenode2, var_tclassidnode3, var_tobranode4, var_listnode6, var_tcbranode7, var_pannotationsnode8); /* Direct call parser_prod#AType#init_atype on <var26:AType>*/
}
var_ptypenode1 = var26;
var_node_list = var_ptypenode1;
var27 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction149> */
{
var28 = nit___nit__Parser___go_to(var_p, var27);
}
{
nit___nit__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction150#action for (self: ReduceAction150, Parser) */
void nit__parser___nit__parser__ReduceAction150___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist1;
if (var_ptypenode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode1&3)?class_info[((long)var_ptypenode1&3)]:var_ptypenode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ptypenode1, ((val*)NULL)); /* != on <var_ptypenode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_ptypenode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction150> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction151#action for (self: ReduceAction151, Parser) */
void nit__parser___nit__parser__ReduceAction151___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4961);
fatal_exit(1);
}
if (var_ptypenode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode1&3)?class_info[((long)var_ptypenode1&3)]:var_ptypenode1->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_ptypenode1, ((val*)NULL)); /* != on <var_ptypenode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_ptypenode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction151> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction152#action for (self: ReduceAction152, Parser) */
void nit__parser___nit__parser__ReduceAction152___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist3;
var_node_list = var_ptypenode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction152> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction156#action for (self: ReduceAction156, Parser) */
void nit__parser___nit__parser__ReduceAction156___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist2;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction156> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction157#action for (self: ReduceAction157, Parser) */
void nit__parser___nit__parser__ReduceAction157___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
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
var_tkwendnode3 = var_nodearraylist2;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable__nit__TKwend.color;
idtype = type_nullable__nit__TKwend.id;
if(var_tkwendnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5004);
fatal_exit(1);
}
var4 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var4, var_listnode2, var_tkwendnode3); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var4:ABlockExpr>*/
}
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction157> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction158#action for (self: ReduceAction158, Parser) */
void nit__parser___nit__parser__ReduceAction158___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tkwendnode3 /* var tkwendnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_tkwendnode3 = var_nodearraylist1;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable__nit__TKwend.color;
idtype = type_nullable__nit__TKwend.id;
if(var_tkwendnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwendnode3&3)?type_info[((long)var_tkwendnode3&3)]:var_tkwendnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5021);
fatal_exit(1);
}
var3 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var3, var_listnode2, var_tkwendnode3); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var3:ABlockExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction158> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction159#action for (self: ReduceAction159, Parser) */
void nit__parser___nit__parser__ReduceAction159___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var1 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction159> */
{
var2 = nit___nit__Parser___go_to(var_p, var1);
}
{
nit___nit__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction160#action for (self: ReduceAction160, Parser) */
void nit__parser___nit__parser__ReduceAction160___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var8 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5049);
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
var8 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var8, var_listnode3, ((val*)NULL)); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var8:ABlockExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction160> */
{
var10 = nit___nit__Parser___go_to(var_p, var9);
}
{
nit___nit__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction161#action for (self: ReduceAction161, Parser) */
void nit__parser___nit__parser__ReduceAction161___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : Array[Object] */;
val* var13 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5070);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype5 = type_standard__Array__standard__Object.color;
idtype6 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var4 = 0;
} else {
if(cltype5 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5072);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var13 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var13, var_listnode4, ((val*)NULL)); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var13:ABlockExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction161> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction162#action for (self: ReduceAction162, Parser) */
void nit__parser___nit__parser__ReduceAction162___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5094);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
var9 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var9, var_listnode3, ((val*)NULL)); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var9:ABlockExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction162> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction163#action for (self: ReduceAction163, Parser) */
void nit__parser___nit__parser__ReduceAction163___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Array[Object] */;
val* var14 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5116);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype6 = type_standard__Array__standard__Object.color;
idtype7 = type_standard__Array__standard__Object.id;
if(var_listnode3 == NULL) {
var5 = 0;
} else {
if(cltype6 >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5118);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexprnode2); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
{
var13 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var13;
var14 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var14, var_listnode4, ((val*)NULL)); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var14:ABlockExpr>*/
}
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction163> */
{
var16 = nit___nit__Parser___go_to(var_p, var15);
}
{
nit___nit__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction164#action for (self: ReduceAction164, Parser) */
void nit__parser___nit__parser__ReduceAction164___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5141);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
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
var_tkwendnode4 = var_nodearraylist3;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype11 = type_nullable__nit__TKwend.color;
idtype12 = type_nullable__nit__TKwend.id;
if(var_tkwendnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tkwendnode4&3)?type_info[((long)var_tkwendnode4&3)]:var_tkwendnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5146);
fatal_exit(1);
}
var13 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var13, var_listnode3, var_tkwendnode4); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var13:ABlockExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction164> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction165#action for (self: ReduceAction165, Parser) */
void nit__parser___nit__parser__ReduceAction165___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[Object] */;
val* var_tkwendnode5 /* var tkwendnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5166);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5168);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable AExpr(AExpr)>*/
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
var_tkwendnode5 = var_nodearraylist4;
/* <var_tkwendnode5:nullable Object> isa nullable TKwend */
cltype16 = type_nullable__nit__TKwend.color;
idtype17 = type_nullable__nit__TKwend.id;
if(var_tkwendnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwendnode5&3)?type_info[((long)var_tkwendnode5&3)]:var_tkwendnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwendnode5&3)?type_info[((long)var_tkwendnode5&3)]:var_tkwendnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5174);
fatal_exit(1);
}
var18 = NEW_nit__ABlockExpr(&type_nit__ABlockExpr);
{
nit__parser_prod___ABlockExpr___init_ablockexpr(var18, var_listnode4, var_tkwendnode5); /* Direct call parser_prod#ABlockExpr#init_ablockexpr on <var18:ABlockExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction165> */
{
var20 = nit___nit__Parser___go_to(var_p, var19);
}
{
nit___nit__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction169#action for (self: ReduceAction169, Parser) */
void nit__parser___nit__parser__ReduceAction169___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AReturnExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable__nit__TKwreturn.color;
idtype = type_nullable__nit__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5190);
fatal_exit(1);
}
var2 = NEW_nit__AReturnExpr(&type_nit__AReturnExpr);
{
nit__parser_prod___AReturnExpr___init_areturnexpr(var2, var_tkwreturnnode2, ((val*)NULL)); /* Direct call parser_prod#AReturnExpr#init_areturnexpr on <var2:AReturnExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction169> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction170#action for (self: ReduceAction170, Parser) */
void nit__parser___nit__parser__ReduceAction170___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AReturnExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
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
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable__nit__TKwreturn.color;
idtype = type_nullable__nit__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwreturnnode2&3)?type_info[((long)var_tkwreturnnode2&3)]:var_tkwreturnnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5207);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype4 = type_nullable__nit__AExpr.color;
idtype5 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5209);
fatal_exit(1);
}
var6 = NEW_nit__AReturnExpr(&type_nit__AReturnExpr);
{
nit__parser_prod___AReturnExpr___init_areturnexpr(var6, var_tkwreturnnode2, var_pexprnode3); /* Direct call parser_prod#AReturnExpr#init_areturnexpr on <var6:AReturnExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction170> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction171#action for (self: ReduceAction171, Parser) */
void nit__parser___nit__parser__ReduceAction171___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ABreakExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable__nit__TKwbreak.color;
idtype = type_nullable__nit__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5225);
fatal_exit(1);
}
var2 = NEW_nit__ABreakExpr(&type_nit__ABreakExpr);
{
nit__parser_prod___ABreakExpr___init_abreakexpr(var2, var_tkwbreaknode2, ((val*)NULL)); /* Direct call parser_prod#ABreakExpr#init_abreakexpr on <var2:ABreakExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction171> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction172#action for (self: ReduceAction172, Parser) */
void nit__parser___nit__parser__ReduceAction172___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : ABreakExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
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
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable__nit__TKwbreak.color;
idtype = type_nullable__nit__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwbreaknode2&3)?type_info[((long)var_tkwbreaknode2&3)]:var_tkwbreaknode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5242);
fatal_exit(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype4 = type_nullable__nit__ALabel.color;
idtype5 = type_nullable__nit__ALabel.id;
if(var_plabelnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5244);
fatal_exit(1);
}
var6 = NEW_nit__ABreakExpr(&type_nit__ABreakExpr);
{
nit__parser_prod___ABreakExpr___init_abreakexpr(var6, var_tkwbreaknode2, var_plabelnode3); /* Direct call parser_prod#ABreakExpr#init_abreakexpr on <var6:ABreakExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction172> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction173#action for (self: ReduceAction173, Parser) */
void nit__parser___nit__parser__ReduceAction173___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabortnode2 /* var tkwabortnode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AAbortExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAbortExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwabortnode2 = var_nodearraylist1;
/* <var_tkwabortnode2:nullable Object> isa nullable TKwabort */
cltype = type_nullable__nit__TKwabort.color;
idtype = type_nullable__nit__TKwabort.id;
if(var_tkwabortnode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwabortnode2&3)?type_info[((long)var_tkwabortnode2&3)]:var_tkwabortnode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwabortnode2&3)?type_info[((long)var_tkwabortnode2&3)]:var_tkwabortnode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5260);
fatal_exit(1);
}
var2 = NEW_nit__AAbortExpr(&type_nit__AAbortExpr);
{
nit__parser_prod___AAbortExpr___init_aabortexpr(var2, var_tkwabortnode2); /* Direct call parser_prod#AAbortExpr#init_aabortexpr on <var2:AAbortExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction173> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction174#action for (self: ReduceAction174, Parser) */
void nit__parser___nit__parser__ReduceAction174___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AContinueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable__nit__TKwcontinue.color;
idtype = type_nullable__nit__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5275);
fatal_exit(1);
}
var2 = NEW_nit__AContinueExpr(&type_nit__AContinueExpr);
{
nit__parser_prod___AContinueExpr___init_acontinueexpr(var2, var_tkwcontinuenode2, ((val*)NULL)); /* Direct call parser_prod#AContinueExpr#init_acontinueexpr on <var2:AContinueExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction174> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction175#action for (self: ReduceAction175, Parser) */
void nit__parser___nit__parser__ReduceAction175___nit__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AContinueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
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
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable__nit__TKwcontinue.color;
idtype = type_nullable__nit__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_tkwcontinuenode2&3)?type_info[((long)var_tkwcontinuenode2&3)]:var_tkwcontinuenode2->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5292);
fatal_exit(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype4 = type_nullable__nit__ALabel.color;
idtype5 = type_nullable__nit__ALabel.id;
if(var_plabelnode3 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_plabelnode3&3)?type_info[((long)var_plabelnode3&3)]:var_plabelnode3->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5294);
fatal_exit(1);
}
var6 = NEW_nit__AContinueExpr(&type_nit__AContinueExpr);
{
nit__parser_prod___AContinueExpr___init_acontinueexpr(var6, var_tkwcontinuenode2, var_plabelnode3); /* Direct call parser_prod#AContinueExpr#init_acontinueexpr on <var6:AContinueExpr>*/
}
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction175> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction183#action for (self: ReduceAction183, Parser) */
void nit__parser___nit__parser__ReduceAction183___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5314);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable__nit__TId.color;
idtype8 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5316);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable__nit__AExprs.color;
idtype11 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5318);
fatal_exit(1);
}
var12 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var12, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var12:ACallExpr>*/
}
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction183> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction184#action for (self: ReduceAction184, Parser) */
void nit__parser___nit__parser__ReduceAction184___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nit__AExpr.color;
idtype = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5340);
fatal_exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable__nit__TId.color;
idtype9 = type_nullable__nit__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_tidnode3&3)?type_info[((long)var_tidnode3&3)]:var_tidnode3->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5342);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable__nit__AExprs.color;
idtype12 = type_nullable__nit__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pexprsnode4&3)?type_info[((long)var_pexprsnode4&3)]:var_pexprsnode4->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 5344);
fatal_exit(1);
}
var13 = NEW_nit__ACallExpr(&type_nit__ACallExpr);
{
nit__parser_prod___ACallExpr___init_acallexpr(var13, var_pexprnode2, var_tidnode3, var_pexprsnode4); /* Direct call parser_prod#ACallExpr#init_acallexpr on <var13:ACallExpr>*/
}
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction184> */
{
var15 = nit___nit__Parser___go_to(var_p, var14);
}
{
nit___nit__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
