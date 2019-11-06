#include "nitc__parser.sep.0.h"
/* method parser$ReduceAction61$action for (self: ReduceAction61, Parser) */
void nitc__parser___nitc__parser__ReduceAction61___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwdonode11 /* var tkwdonode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2964);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nitc__TKwredef.color;
idtype11 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2966);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nitc__AVisibility.color;
idtype14 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2968);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype16 = type_nullable__nitc__TKwvar.color;
idtype17 = type_nullable__nitc__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2970);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype19 = type_nullable__nitc__TId.color;
idtype20 = type_nullable__nitc__TId.id;
if(var_tidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2972);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable__nitc__AType.color;
idtype23 = type_nullable__nitc__AType.id;
if(var_ptypenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2974);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist7;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype25 = type_nullable__nitc__TKwdo.color;
idtype26 = type_nullable__nitc__TKwdo.id;
if(var_tkwdonode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->table_size) {
var24 = 0;
} else {
var24 = (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->type_table[cltype25] == idtype26;
}
}
if (unlikely(!var24)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2976);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype28 = type_nullable__nitc__AExpr.color;
idtype29 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype28] == idtype29;
}
}
if (unlikely(!var27)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 2978);
fatal_exit(1);
}
var30 = NEW_nitc__AAttrPropdef(&type_nitc__AAttrPropdef);
{
nitc__parser_prod___AAttrPropdef___init_aattrpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode11, var_pexprnode12, ((val*)NULL)); /* Direct call parser_prod$AAttrPropdef$init_aattrpropdef on <var30:AAttrPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction61> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction62$action for (self: ReduceAction62, Parser) */
void nitc__parser___nitc__parser__ReduceAction62___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tkwdonode11 /* var tkwdonode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3012);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nitc__TKwredef.color;
idtype12 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3014);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nitc__AVisibility.color;
idtype15 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3016);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable__nitc__TKwvar.color;
idtype18 = type_nullable__nitc__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3018);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable__nitc__TId.color;
idtype21 = type_nullable__nitc__TId.id;
if(var_tidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3020);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable__nitc__AType.color;
idtype24 = type_nullable__nitc__AType.id;
if(var_ptypenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3022);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype26 = type_nullable__nitc__AAnnotations.color;
idtype27 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3024);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist8;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype29 = type_nullable__nitc__TKwdo.color;
idtype30 = type_nullable__nitc__TKwdo.id;
if(var_tkwdonode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3026);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype32 = type_nullable__nitc__AExpr.color;
idtype33 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3028);
fatal_exit(1);
}
var34 = NEW_nitc__AAttrPropdef(&type_nitc__AAttrPropdef);
{
nitc__parser_prod___AAttrPropdef___init_aattrpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), var_pannotationsnode10, var_tkwdonode11, var_pexprnode12, ((val*)NULL)); /* Direct call parser_prod$AAttrPropdef$init_aattrpropdef on <var34:AAttrPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction62> */
{
var36 = nitc___nitc__Parser___go_to(var_p, var35);
}
{
nitc___nitc__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction63$action for (self: ReduceAction63, Parser) */
void nitc__parser___nitc__parser__ReduceAction63___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tkwdonode11 /* var tkwdonode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AAttrPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3062);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nitc__TKwredef.color;
idtype12 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3064);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nitc__AVisibility.color;
idtype15 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3066);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable__nitc__TKwvar.color;
idtype18 = type_nullable__nitc__TKwvar.id;
if(var_tkwvarnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_tkwvarnode5&3)?type_info[((long)var_tkwvarnode5&3)]:var_tkwvarnode5->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3068);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable__nitc__TId.color;
idtype21 = type_nullable__nitc__TId.id;
if(var_tidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_tidnode6&3)?type_info[((long)var_tidnode6&3)]:var_tidnode6->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3070);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable__nitc__AType.color;
idtype24 = type_nullable__nitc__AType.id;
if(var_ptypenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var_ptypenode7&3)?type_info[((long)var_ptypenode7&3)]:var_ptypenode7->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3072);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist7;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nitc__TKwdo.color;
idtype27 = type_nullable__nitc__TKwdo.id;
if(var_tkwdonode11 == NULL) {
var25 = 1;
} else {
if(cltype26 >= (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->table_size) {
var25 = 0;
} else {
var25 = (((long)var_tkwdonode11&3)?type_info[((long)var_tkwdonode11&3)]:var_tkwdonode11->type)->type_table[cltype26] == idtype27;
}
}
if (unlikely(!var25)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3074);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nitc__AExpr.color;
idtype30 = type_nullable__nitc__AExpr.id;
if(var_pexprnode12 == NULL) {
var28 = 1;
} else {
if(cltype29 >= (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->table_size) {
var28 = 0;
} else {
var28 = (((long)var_pexprnode12&3)?type_info[((long)var_pexprnode12&3)]:var_pexprnode12->type)->type_table[cltype29] == idtype30;
}
}
if (unlikely(!var28)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3076);
fatal_exit(1);
}
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nitc__TKwend.color;
idtype33 = type_nullable__nitc__TKwend.id;
if(var_tkwendnode13 == NULL) {
var31 = 1;
} else {
if(cltype32 >= (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_tkwendnode13&3)?type_info[((long)var_tkwendnode13&3)]:var_tkwendnode13->type)->type_table[cltype32] == idtype33;
}
}
if (unlikely(!var31)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3078);
fatal_exit(1);
}
var34 = NEW_nitc__AAttrPropdef(&type_nitc__AAttrPropdef);
{
nitc__parser_prod___AAttrPropdef___init_aattrpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode11, var_pexprnode12, var_tkwendnode13); /* Direct call parser_prod$AAttrPropdef$init_aattrpropdef on <var34:AAttrPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction63> */
{
var36 = nitc___nitc__Parser___go_to(var_p, var35);
}
{
nitc___nitc__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction64$action for (self: ReduceAction64, Parser) */
void nitc__parser___nitc__parser__ReduceAction64___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3113);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nitc__TKwredef.color;
idtype13 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3115);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nitc__AVisibility.color;
idtype16 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3117);
fatal_exit(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable__nitc__TKwvar.color;
idtype19 = type_nullable__nitc__TKwvar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3119);
fatal_exit(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable__nitc__TId.color;
idtype22 = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3121);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable__nitc__AType.color;
idtype25 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3123);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nitc__AAnnotations.color;
idtype28 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3125);
fatal_exit(1);
}
var_tkwdonode11 = var_nodearraylist8;
/* <var_tkwdonode11:nullable Object> isa nullable TKwdo */
cltype30 = type_nullable__nitc__TKwdo.color;
idtype31 = type_nullable__nitc__TKwdo.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3127);
fatal_exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype33 = type_nullable__nitc__AExpr.color;
idtype34 = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3129);
fatal_exit(1);
}
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nitc__TKwend.color;
idtype37 = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3131);
fatal_exit(1);
}
var38 = NEW_nitc__AAttrPropdef(&type_nitc__AAttrPropdef);
{
nitc__parser_prod___AAttrPropdef___init_aattrpropdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, ((val*)NULL), ((val*)NULL), var_pannotationsnode10, var_tkwdonode11, var_pexprnode12, var_tkwendnode13); /* Direct call parser_prod$AAttrPropdef$init_aattrpropdef on <var38:AAttrPropdef>*/
}
var_ppropdefnode1 = var38;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction64> */
{
var40 = nitc___nitc__Parser___go_to(var_p, var39);
}
{
nitc___nitc__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction65$action for (self: ReduceAction65, Parser) */
void nitc__parser___nitc__parser__ReduceAction65___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3164);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nitc__TKwredef.color;
idtype11 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3166);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nitc__AVisibility.color;
idtype14 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3168);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype16 = type_nullable__nitc__TKwinit.color;
idtype17 = type_nullable__nitc__TKwinit.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3170);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nitc__ASignature.color;
idtype20 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3172);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist6;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype22 = type_nullable__nitc__TKwdo.color;
idtype23 = type_nullable__nitc__TKwdo.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3174);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist7;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype25 = type_nullable__nitc__AExpr.color;
idtype26 = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3176);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist8;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype28 = type_nullable__nitc__TKwend.color;
idtype29 = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3178);
fatal_exit(1);
}
var30 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), ((val*)NULL), var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction65> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction66$action for (self: ReduceAction66, Parser) */
void nitc__parser___nitc__parser__ReduceAction66___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3214);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nitc__TKwredef.color;
idtype12 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3216);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nitc__AVisibility.color;
idtype15 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3218);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable__nitc__TKwinit.color;
idtype18 = type_nullable__nitc__TKwinit.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3220);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nitc__AMethid.color;
idtype21 = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3222);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nitc__ASignature.color;
idtype24 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3224);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist7;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nitc__TKwdo.color;
idtype27 = type_nullable__nitc__TKwdo.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3226);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist8;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nitc__AExpr.color;
idtype30 = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3228);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist9;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nitc__TKwend.color;
idtype33 = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3230);
fatal_exit(1);
}
var34 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), var_pmethidnode8, var_psignaturenode9, ((val*)NULL), ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction66> */
{
var36 = nitc___nitc__Parser___go_to(var_p, var35);
}
{
nitc___nitc__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction67$action for (self: ReduceAction67, Parser) */
void nitc__parser___nitc__parser__ReduceAction67___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3266);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nitc__TKwredef.color;
idtype12 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3268);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nitc__AVisibility.color;
idtype15 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3270);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable__nitc__TKwinit.color;
idtype18 = type_nullable__nitc__TKwinit.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3272);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nitc__ASignature.color;
idtype21 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3274);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nitc__AAnnotations.color;
idtype24 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3276);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist7;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable__nitc__TKwdo.color;
idtype27 = type_nullable__nitc__TKwdo.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3278);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist8;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype29 = type_nullable__nitc__AExpr.color;
idtype30 = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3280);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist9;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype32 = type_nullable__nitc__TKwend.color;
idtype33 = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3282);
fatal_exit(1);
}
var34 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction67> */
{
var36 = nitc___nitc__Parser___go_to(var_p, var35);
}
{
nitc___nitc__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction68$action for (self: ReduceAction68, Parser) */
void nitc__parser___nitc__parser__ReduceAction68___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var9;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3319);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nitc__TKwredef.color;
idtype13 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3321);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nitc__AVisibility.color;
idtype16 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3323);
fatal_exit(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable__nitc__TKwinit.color;
idtype19 = type_nullable__nitc__TKwinit.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3325);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nitc__AMethid.color;
idtype22 = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3327);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nitc__ASignature.color;
idtype25 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3329);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nitc__AAnnotations.color;
idtype28 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3331);
fatal_exit(1);
}
var_tkwdonode13 = var_nodearraylist8;
/* <var_tkwdonode13:nullable Object> isa nullable TKwdo */
cltype30 = type_nullable__nitc__TKwdo.color;
idtype31 = type_nullable__nitc__TKwdo.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3333);
fatal_exit(1);
}
var_pexprnode14 = var_nodearraylist9;
/* <var_pexprnode14:nullable Object> isa nullable AExpr */
cltype33 = type_nullable__nitc__AExpr.color;
idtype34 = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3335);
fatal_exit(1);
}
var_tkwendnode15 = var_nodearraylist10;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype36 = type_nullable__nitc__TKwend.color;
idtype37 = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3337);
fatal_exit(1);
}
var38 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), var_tkwinitnode6, ((val*)NULL), var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, ((val*)NULL), ((val*)NULL), var_tkwdonode13, var_pexprnode14, var_tkwendnode15); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var38:AMethPropdef>*/
}
var_ppropdefnode1 = var38;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction68> */
{
var40 = nitc___nitc__Parser___go_to(var_p, var39);
}
{
nitc___nitc__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction69$action for (self: ReduceAction69, Parser) */
void nitc__parser___nitc__parser__ReduceAction69___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pqclassidnode6 /* var pqclassidnode6: nullable Object */;
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3371);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nitc__TKwredef.color;
idtype10 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3373);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nitc__AVisibility.color;
idtype13 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3375);
fatal_exit(1);
}
var_tkwtypenode5 = var_nodearraylist4;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype15 = type_nullable__nitc__TKwtype.color;
idtype16 = type_nullable__nitc__TKwtype.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3377);
fatal_exit(1);
}
var_pqclassidnode6 = var_nodearraylist5;
/* <var_pqclassidnode6:nullable Object> isa nullable AQclassid */
cltype18 = type_nullable__nitc__AQclassid.color;
idtype19 = type_nullable__nitc__AQclassid.id;
if(var_pqclassidnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= (((long)var_pqclassidnode6&3)?type_info[((long)var_pqclassidnode6&3)]:var_pqclassidnode6->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var_pqclassidnode6&3)?type_info[((long)var_pqclassidnode6&3)]:var_pqclassidnode6->type)->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3379);
fatal_exit(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype21 = type_nullable__nitc__AType.color;
idtype22 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3381);
fatal_exit(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nitc__AAnnotations.color;
idtype25 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3383);
fatal_exit(1);
}
var26 = NEW_nitc__ATypePropdef(&type_nitc__ATypePropdef);
{
nitc__parser_prod___ATypePropdef___init_atypepropdef(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_pqclassidnode6, var_ptypenode7, var_pannotationsnode8); /* Direct call parser_prod$ATypePropdef$init_atypepropdef on <var26:ATypePropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction69> */
{
var28 = nitc___nitc__Parser___go_to(var_p, var27);
}
{
nitc___nitc__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction70$action for (self: ReduceAction70, Parser) */
void nitc__parser___nitc__parser__ReduceAction70___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3410);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nitc__TKwredef.color;
idtype10 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3412);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nitc__AVisibility.color;
idtype13 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3414);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable__nitc__TKwnew.color;
idtype16 = type_nullable__nitc__TKwnew.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3416);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype18 = type_nullable__nitc__ASignature.color;
idtype19 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3418);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist6;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype21 = type_nullable__nitc__AExternCalls.color;
idtype22 = type_nullable__nitc__AExternCalls.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3420);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist7;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype24 = type_nullable__nitc__AExternCodeBlock.color;
idtype25 = type_nullable__nitc__AExternCodeBlock.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3422);
fatal_exit(1);
}
var26 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var26, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var26:AMethPropdef>*/
}
var_ppropdefnode1 = var26;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction70> */
{
var28 = nitc___nitc__Parser___go_to(var_p, var27);
}
{
nitc___nitc__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction71$action for (self: ReduceAction71, Parser) */
void nitc__parser___nitc__parser__ReduceAction71___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3457);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nitc__TKwredef.color;
idtype11 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3459);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nitc__AVisibility.color;
idtype14 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3461);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nitc__TKwnew.color;
idtype17 = type_nullable__nitc__TKwnew.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3463);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype19 = type_nullable__nitc__AMethid.color;
idtype20 = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3465);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype22 = type_nullable__nitc__ASignature.color;
idtype23 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3467);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype25 = type_nullable__nitc__AExternCalls.color;
idtype26 = type_nullable__nitc__AExternCalls.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3469);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable__nitc__AExternCodeBlock.color;
idtype29 = type_nullable__nitc__AExternCodeBlock.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3471);
fatal_exit(1);
}
var30 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, ((val*)NULL), var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction71> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction72$action for (self: ReduceAction72, Parser) */
void nitc__parser___nitc__parser__ReduceAction72___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3506);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nitc__TKwredef.color;
idtype11 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3508);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nitc__AVisibility.color;
idtype14 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3510);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nitc__TKwnew.color;
idtype17 = type_nullable__nitc__TKwnew.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3512);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nitc__ASignature.color;
idtype20 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3514);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable__nitc__AAnnotations.color;
idtype23 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3516);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype25 = type_nullable__nitc__AExternCalls.color;
idtype26 = type_nullable__nitc__AExternCalls.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3518);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable__nitc__AExternCodeBlock.color;
idtype29 = type_nullable__nitc__AExternCodeBlock.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3520);
fatal_exit(1);
}
var30 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, ((val*)NULL), var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var30:AMethPropdef>*/
}
var_ppropdefnode1 = var30;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction72> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction73$action for (self: ReduceAction73, Parser) */
void nitc__parser___nitc__parser__ReduceAction73___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3556);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable__nitc__TKwredef.color;
idtype12 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3558);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable__nitc__AVisibility.color;
idtype15 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3560);
fatal_exit(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nitc__TKwnew.color;
idtype18 = type_nullable__nitc__TKwnew.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3562);
fatal_exit(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nitc__AMethid.color;
idtype21 = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3564);
fatal_exit(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nitc__ASignature.color;
idtype24 = type_nullable__nitc__ASignature.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3566);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype26 = type_nullable__nitc__AAnnotations.color;
idtype27 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3568);
fatal_exit(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype29 = type_nullable__nitc__AExternCalls.color;
idtype30 = type_nullable__nitc__AExternCalls.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3570);
fatal_exit(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype32 = type_nullable__nitc__AExternCodeBlock.color;
idtype33 = type_nullable__nitc__AExternCodeBlock.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3572);
fatal_exit(1);
}
var34 = NEW_nitc__AMethPropdef(&type_nitc__AMethPropdef);
{
nitc__parser_prod___AMethPropdef___init_amethpropdef(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, ((val*)NULL), ((val*)NULL), var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, ((val*)NULL), ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AMethPropdef$init_amethpropdef on <var34:AMethPropdef>*/
}
var_ppropdefnode1 = var34;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction73> */
{
var36 = nitc___nitc__Parser___go_to(var_p, var35);
}
{
nitc___nitc__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction74$action for (self: ReduceAction74, Parser) */
void nitc__parser___nitc__parser__ReduceAction74___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_ppropdefnode1 = var_nodearraylist1;
var_node_list = var_ppropdefnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction74> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction76$action for (self: ReduceAction76, Parser) */
void nitc__parser___nitc__parser__ReduceAction76___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[Object]>*/
}
var_listnode6 = var2;
var_tkwisnode2 = var_nodearraylist1;
/* <var_tkwisnode2:nullable Object> isa nullable TKwis */
cltype = type_nullable__nitc__TKwis.color;
idtype = type_nullable__nitc__TKwis.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3613);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype5 = type_core__Array__core__Object.color;
idtype6 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3615);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var7;
var8 = NEW_nitc__AAnnotations(&type_nitc__AAnnotations);
{
nitc__parser_prod___AAnnotations___init_aannotations(var8, var_tkwisnode2, ((val*)NULL), ((val*)NULL), var_listnode6, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AAnnotations$init_aannotations on <var8:AAnnotations>*/
}
var_pannotationsnode1 = var8;
var_node_list = var_pannotationsnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction76> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction77$action for (self: ReduceAction77, Parser) */
void nitc__parser___nitc__parser__ReduceAction77___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var_tkwisnode2 = var_nodearraylist1;
/* <var_tkwisnode2:nullable Object> isa nullable TKwis */
cltype = type_nullable__nitc__TKwis.color;
idtype = type_nullable__nitc__TKwis.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3640);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist3;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3642);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var_tkwendnode8 = var_nodearraylist4;
/* <var_tkwendnode8:nullable Object> isa nullable TKwend */
cltype11 = type_nullable__nitc__TKwend.color;
idtype12 = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3645);
fatal_exit(1);
}
var13 = NEW_nitc__AAnnotations(&type_nitc__AAnnotations);
{
nitc__parser_prod___AAnnotations___init_aannotations(var13, var_tkwisnode2, ((val*)NULL), ((val*)NULL), var_listnode6, ((val*)NULL), var_tkwendnode8); /* Direct call parser_prod$AAnnotations$init_aannotations on <var13:AAnnotations>*/
}
var_pannotationsnode1 = var13;
var_node_list = var_pannotationsnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction77> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction80$action for (self: ReduceAction80, Parser) */
void nitc__parser___nitc__parser__ReduceAction80___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[Object]>*/
}
var_listnode6 = var3;
var_tkwisnode2 = var_nodearraylist1;
/* <var_tkwisnode2:nullable Object> isa nullable TKwis */
cltype = type_nullable__nitc__TKwis.color;
idtype = type_nullable__nitc__TKwis.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3668);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist3;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3670);
fatal_exit(1);
}
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var8;
var9 = NEW_nitc__AAnnotations(&type_nitc__AAnnotations);
{
nitc__parser_prod___AAnnotations___init_aannotations(var9, var_tkwisnode2, ((val*)NULL), ((val*)NULL), var_listnode6, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AAnnotations$init_aannotations on <var9:AAnnotations>*/
}
var_pannotationsnode1 = var9;
var_node_list = var_pannotationsnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction80> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction81$action for (self: ReduceAction81, Parser) */
void nitc__parser___nitc__parser__ReduceAction81___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : APublicVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_nitc__APublicVisibility(&type_nitc__APublicVisibility);
{
nitc__parser_prod___APublicVisibility___init_apublicvisibility(var, ((val*)NULL)); /* Direct call parser_prod$APublicVisibility$init_apublicvisibility on <var:APublicVisibility>*/
}
var_pvisibilitynode1 = var;
var_node_list = var_pvisibilitynode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction81> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction82$action for (self: ReduceAction82, Parser) */
void nitc__parser___nitc__parser__ReduceAction82___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwpublicnode2 = var_nodearraylist1;
/* <var_tkwpublicnode2:nullable Object> isa nullable TKwpublic */
cltype = type_nullable__nitc__TKwpublic.color;
idtype = type_nullable__nitc__TKwpublic.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3704);
fatal_exit(1);
}
var3 = NEW_nitc__APublicVisibility(&type_nitc__APublicVisibility);
{
nitc__parser_prod___APublicVisibility___init_apublicvisibility(var3, var_tkwpublicnode2); /* Direct call parser_prod$APublicVisibility$init_apublicvisibility on <var3:APublicVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction82> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction83$action for (self: ReduceAction83, Parser) */
void nitc__parser___nitc__parser__ReduceAction83___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwprivatenode2 = var_nodearraylist1;
/* <var_tkwprivatenode2:nullable Object> isa nullable TKwprivate */
cltype = type_nullable__nitc__TKwprivate.color;
idtype = type_nullable__nitc__TKwprivate.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3720);
fatal_exit(1);
}
var3 = NEW_nitc__APrivateVisibility(&type_nitc__APrivateVisibility);
{
nitc__parser_prod___APrivateVisibility___init_aprivatevisibility(var3, var_tkwprivatenode2); /* Direct call parser_prod$APrivateVisibility$init_aprivatevisibility on <var3:APrivateVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction83> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction84$action for (self: ReduceAction84, Parser) */
void nitc__parser___nitc__parser__ReduceAction84___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwprotectednode2 = var_nodearraylist1;
/* <var_tkwprotectednode2:nullable Object> isa nullable TKwprotected */
cltype = type_nullable__nitc__TKwprotected.color;
idtype = type_nullable__nitc__TKwprotected.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3736);
fatal_exit(1);
}
var3 = NEW_nitc__AProtectedVisibility(&type_nitc__AProtectedVisibility);
{
nitc__parser_prod___AProtectedVisibility___init_aprotectedvisibility(var3, var_tkwprotectednode2); /* Direct call parser_prod$AProtectedVisibility$init_aprotectedvisibility on <var3:AProtectedVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction84> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction85$action for (self: ReduceAction85, Parser) */
void nitc__parser___nitc__parser__ReduceAction85___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwintrudenode2 = var_nodearraylist1;
/* <var_tkwintrudenode2:nullable Object> isa nullable TKwintrude */
cltype = type_nullable__nitc__TKwintrude.color;
idtype = type_nullable__nitc__TKwintrude.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3752);
fatal_exit(1);
}
var3 = NEW_nitc__AIntrudeVisibility(&type_nitc__AIntrudeVisibility);
{
nitc__parser_prod___AIntrudeVisibility___init_aintrudevisibility(var3, var_tkwintrudenode2); /* Direct call parser_prod$AIntrudeVisibility$init_aintrudevisibility on <var3:AIntrudeVisibility>*/
}
var_pvisibilitynode1 = var3;
var_node_list = var_pvisibilitynode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction85> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction86$action for (self: ReduceAction86, Parser) */
void nitc__parser___nitc__parser__ReduceAction86___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable__nitc__TPlus.color;
idtype = type_nullable__nitc__TPlus.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3767);
fatal_exit(1);
}
var2 = NEW_nitc__APlusMethid(&type_nitc__APlusMethid);
{
nitc__parser_prod___APlusMethid___init_aplusmethid(var2, var_tplusnode2); /* Direct call parser_prod$APlusMethid$init_aplusmethid on <var2:APlusMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction86> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction87$action for (self: ReduceAction87, Parser) */
void nitc__parser___nitc__parser__ReduceAction87___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable__nitc__TMinus.color;
idtype = type_nullable__nitc__TMinus.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3782);
fatal_exit(1);
}
var2 = NEW_nitc__AMinusMethid(&type_nitc__AMinusMethid);
{
nitc__parser_prod___AMinusMethid___init_aminusmethid(var2, var_tminusnode2); /* Direct call parser_prod$AMinusMethid$init_aminusmethid on <var2:AMinusMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction87> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction88$action for (self: ReduceAction88, Parser) */
void nitc__parser___nitc__parser__ReduceAction88___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarnode2 = var_nodearraylist1;
/* <var_tstarnode2:nullable Object> isa nullable TStar */
cltype = type_nullable__nitc__TStar.color;
idtype = type_nullable__nitc__TStar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3797);
fatal_exit(1);
}
var2 = NEW_nitc__AStarMethid(&type_nitc__AStarMethid);
{
nitc__parser_prod___AStarMethid___init_astarmethid(var2, var_tstarnode2); /* Direct call parser_prod$AStarMethid$init_astarmethid on <var2:AStarMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction88> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction89$action for (self: ReduceAction89, Parser) */
void nitc__parser___nitc__parser__ReduceAction89___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarstarnode2 = var_nodearraylist1;
/* <var_tstarstarnode2:nullable Object> isa nullable TStarstar */
cltype = type_nullable__nitc__TStarstar.color;
idtype = type_nullable__nitc__TStarstar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3812);
fatal_exit(1);
}
var2 = NEW_nitc__AStarstarMethid(&type_nitc__AStarstarMethid);
{
nitc__parser_prod___AStarstarMethid___init_astarstarmethid(var2, var_tstarstarnode2); /* Direct call parser_prod$AStarstarMethid$init_astarstarmethid on <var2:AStarstarMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction89> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction90$action for (self: ReduceAction90, Parser) */
void nitc__parser___nitc__parser__ReduceAction90___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tslashnode2 = var_nodearraylist1;
/* <var_tslashnode2:nullable Object> isa nullable TSlash */
cltype = type_nullable__nitc__TSlash.color;
idtype = type_nullable__nitc__TSlash.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3827);
fatal_exit(1);
}
var2 = NEW_nitc__ASlashMethid(&type_nitc__ASlashMethid);
{
nitc__parser_prod___ASlashMethid___init_aslashmethid(var2, var_tslashnode2); /* Direct call parser_prod$ASlashMethid$init_aslashmethid on <var2:ASlashMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction90> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction91$action for (self: ReduceAction91, Parser) */
void nitc__parser___nitc__parser__ReduceAction91___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpercentnode2 = var_nodearraylist1;
/* <var_tpercentnode2:nullable Object> isa nullable TPercent */
cltype = type_nullable__nitc__TPercent.color;
idtype = type_nullable__nitc__TPercent.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3842);
fatal_exit(1);
}
var2 = NEW_nitc__APercentMethid(&type_nitc__APercentMethid);
{
nitc__parser_prod___APercentMethid___init_apercentmethid(var2, var_tpercentnode2); /* Direct call parser_prod$APercentMethid$init_apercentmethid on <var2:APercentMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction91> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction92$action for (self: ReduceAction92, Parser) */
void nitc__parser___nitc__parser__ReduceAction92___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tpipenode2 = var_nodearraylist1;
/* <var_tpipenode2:nullable Object> isa nullable TPipe */
cltype = type_nullable__nitc__TPipe.color;
idtype = type_nullable__nitc__TPipe.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3857);
fatal_exit(1);
}
var2 = NEW_nitc__APipeMethid(&type_nitc__APipeMethid);
{
nitc__parser_prod___APipeMethid___init_apipemethid(var2, var_tpipenode2); /* Direct call parser_prod$APipeMethid$init_apipemethid on <var2:APipeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction92> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction93$action for (self: ReduceAction93, Parser) */
void nitc__parser___nitc__parser__ReduceAction93___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tcaretnode2 = var_nodearraylist1;
/* <var_tcaretnode2:nullable Object> isa nullable TCaret */
cltype = type_nullable__nitc__TCaret.color;
idtype = type_nullable__nitc__TCaret.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3872);
fatal_exit(1);
}
var2 = NEW_nitc__ACaretMethid(&type_nitc__ACaretMethid);
{
nitc__parser_prod___ACaretMethid___init_acaretmethid(var2, var_tcaretnode2); /* Direct call parser_prod$ACaretMethid$init_acaretmethid on <var2:ACaretMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction93> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction94$action for (self: ReduceAction94, Parser) */
void nitc__parser___nitc__parser__ReduceAction94___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tampnode2 = var_nodearraylist1;
/* <var_tampnode2:nullable Object> isa nullable TAmp */
cltype = type_nullable__nitc__TAmp.color;
idtype = type_nullable__nitc__TAmp.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3887);
fatal_exit(1);
}
var2 = NEW_nitc__AAmpMethid(&type_nitc__AAmpMethid);
{
nitc__parser_prod___AAmpMethid___init_aampmethid(var2, var_tampnode2); /* Direct call parser_prod$AAmpMethid$init_aampmethid on <var2:AAmpMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction94> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction95$action for (self: ReduceAction95, Parser) */
void nitc__parser___nitc__parser__ReduceAction95___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_ttildenode2 = var_nodearraylist1;
/* <var_ttildenode2:nullable Object> isa nullable TTilde */
cltype = type_nullable__nitc__TTilde.color;
idtype = type_nullable__nitc__TTilde.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3902);
fatal_exit(1);
}
var2 = NEW_nitc__ATildeMethid(&type_nitc__ATildeMethid);
{
nitc__parser_prod___ATildeMethid___init_atildemethid(var2, var_ttildenode2); /* Direct call parser_prod$ATildeMethid$init_atildemethid on <var2:ATildeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction95> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction96$action for (self: ReduceAction96, Parser) */
void nitc__parser___nitc__parser__ReduceAction96___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_teqnode2 = var_nodearraylist1;
/* <var_teqnode2:nullable Object> isa nullable TEq */
cltype = type_nullable__nitc__TEq.color;
idtype = type_nullable__nitc__TEq.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3917);
fatal_exit(1);
}
var2 = NEW_nitc__AEqMethid(&type_nitc__AEqMethid);
{
nitc__parser_prod___AEqMethid___init_aeqmethid(var2, var_teqnode2); /* Direct call parser_prod$AEqMethid$init_aeqmethid on <var2:AEqMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction96> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction97$action for (self: ReduceAction97, Parser) */
void nitc__parser___nitc__parser__ReduceAction97___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tnenode2 = var_nodearraylist1;
/* <var_tnenode2:nullable Object> isa nullable TNe */
cltype = type_nullable__nitc__TNe.color;
idtype = type_nullable__nitc__TNe.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3932);
fatal_exit(1);
}
var2 = NEW_nitc__ANeMethid(&type_nitc__ANeMethid);
{
nitc__parser_prod___ANeMethid___init_anemethid(var2, var_tnenode2); /* Direct call parser_prod$ANeMethid$init_anemethid on <var2:ANeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction97> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction98$action for (self: ReduceAction98, Parser) */
void nitc__parser___nitc__parser__ReduceAction98___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tlenode2 = var_nodearraylist1;
/* <var_tlenode2:nullable Object> isa nullable TLe */
cltype = type_nullable__nitc__TLe.color;
idtype = type_nullable__nitc__TLe.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3947);
fatal_exit(1);
}
var2 = NEW_nitc__ALeMethid(&type_nitc__ALeMethid);
{
nitc__parser_prod___ALeMethid___init_alemethid(var2, var_tlenode2); /* Direct call parser_prod$ALeMethid$init_alemethid on <var2:ALeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction98> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction99$action for (self: ReduceAction99, Parser) */
void nitc__parser___nitc__parser__ReduceAction99___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tgenode2 = var_nodearraylist1;
/* <var_tgenode2:nullable Object> isa nullable TGe */
cltype = type_nullable__nitc__TGe.color;
idtype = type_nullable__nitc__TGe.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3962);
fatal_exit(1);
}
var2 = NEW_nitc__AGeMethid(&type_nitc__AGeMethid);
{
nitc__parser_prod___AGeMethid___init_agemethid(var2, var_tgenode2); /* Direct call parser_prod$AGeMethid$init_agemethid on <var2:AGeMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction99> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction100$action for (self: ReduceAction100, Parser) */
void nitc__parser___nitc__parser__ReduceAction100___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tltnode2 = var_nodearraylist1;
/* <var_tltnode2:nullable Object> isa nullable TLt */
cltype = type_nullable__nitc__TLt.color;
idtype = type_nullable__nitc__TLt.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3977);
fatal_exit(1);
}
var2 = NEW_nitc__ALtMethid(&type_nitc__ALtMethid);
{
nitc__parser_prod___ALtMethid___init_altmethid(var2, var_tltnode2); /* Direct call parser_prod$ALtMethid$init_altmethid on <var2:ALtMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction100> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction101$action for (self: ReduceAction101, Parser) */
void nitc__parser___nitc__parser__ReduceAction101___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tgtnode2 = var_nodearraylist1;
/* <var_tgtnode2:nullable Object> isa nullable TGt */
cltype = type_nullable__nitc__TGt.color;
idtype = type_nullable__nitc__TGt.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 3992);
fatal_exit(1);
}
var2 = NEW_nitc__AGtMethid(&type_nitc__AGtMethid);
{
nitc__parser_prod___AGtMethid___init_agtmethid(var2, var_tgtnode2); /* Direct call parser_prod$AGtMethid$init_agtmethid on <var2:AGtMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction101> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction102$action for (self: ReduceAction102, Parser) */
void nitc__parser___nitc__parser__ReduceAction102___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tllnode2 = var_nodearraylist1;
/* <var_tllnode2:nullable Object> isa nullable TLl */
cltype = type_nullable__nitc__TLl.color;
idtype = type_nullable__nitc__TLl.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4007);
fatal_exit(1);
}
var2 = NEW_nitc__ALlMethid(&type_nitc__ALlMethid);
{
nitc__parser_prod___ALlMethid___init_allmethid(var2, var_tllnode2); /* Direct call parser_prod$ALlMethid$init_allmethid on <var2:ALlMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction102> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction103$action for (self: ReduceAction103, Parser) */
void nitc__parser___nitc__parser__ReduceAction103___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tggnode2 = var_nodearraylist1;
/* <var_tggnode2:nullable Object> isa nullable TGg */
cltype = type_nullable__nitc__TGg.color;
idtype = type_nullable__nitc__TGg.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4022);
fatal_exit(1);
}
var2 = NEW_nitc__AGgMethid(&type_nitc__AGgMethid);
{
nitc__parser_prod___AGgMethid___init_aggmethid(var2, var_tggnode2); /* Direct call parser_prod$AGgMethid$init_aggmethid on <var2:AGgMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction103> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction104$action for (self: ReduceAction104, Parser) */
void nitc__parser___nitc__parser__ReduceAction104___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nitc__TObra.color;
idtype = type_nullable__nitc__TObra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4038);
fatal_exit(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype4 = type_nullable__nitc__TCbra.color;
idtype5 = type_nullable__nitc__TCbra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4040);
fatal_exit(1);
}
var6 = NEW_nitc__ABraMethid(&type_nitc__ABraMethid);
{
nitc__parser_prod___ABraMethid___init_abramethid(var6, var_tobranode2, var_tcbranode3); /* Direct call parser_prod$ABraMethid$init_abramethid on <var6:ABraMethid>*/
}
var_pmethidnode1 = var6;
var_node_list = var_pmethidnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction104> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction105$action for (self: ReduceAction105, Parser) */
void nitc__parser___nitc__parser__ReduceAction105___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstarshipnode2 = var_nodearraylist1;
/* <var_tstarshipnode2:nullable Object> isa nullable TStarship */
cltype = type_nullable__nitc__TStarship.color;
idtype = type_nullable__nitc__TStarship.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4056);
fatal_exit(1);
}
var2 = NEW_nitc__AStarshipMethid(&type_nitc__AStarshipMethid);
{
nitc__parser_prod___AStarshipMethid___init_astarshipmethid(var2, var_tstarshipnode2); /* Direct call parser_prod$AStarshipMethid$init_astarshipmethid on <var2:AStarshipMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction105> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction106$action for (self: ReduceAction106, Parser) */
void nitc__parser___nitc__parser__ReduceAction106___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4072);
fatal_exit(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype4 = type_nullable__nitc__TAssign.color;
idtype5 = type_nullable__nitc__TAssign.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4074);
fatal_exit(1);
}
var6 = NEW_nitc__AAssignMethid(&type_nitc__AAssignMethid);
{
nitc__parser_prod___AAssignMethid___init_aassignmethid(var6, var_tidnode2, var_tassignnode3); /* Direct call parser_prod$AAssignMethid$init_aassignmethid on <var6:AAssignMethid>*/
}
var_pmethidnode1 = var6;
var_node_list = var_pmethidnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction106> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction107$action for (self: ReduceAction107, Parser) */
void nitc__parser___nitc__parser__ReduceAction107___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nitc__TObra.color;
idtype = type_nullable__nitc__TObra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4092);
fatal_exit(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype5 = type_nullable__nitc__TCbra.color;
idtype6 = type_nullable__nitc__TCbra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4094);
fatal_exit(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype8 = type_nullable__nitc__TAssign.color;
idtype9 = type_nullable__nitc__TAssign.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4096);
fatal_exit(1);
}
var10 = NEW_nitc__ABraassignMethid(&type_nitc__ABraassignMethid);
{
nitc__parser_prod___ABraassignMethid___init_abraassignmethid(var10, var_tobranode2, var_tcbranode3, var_tassignnode4); /* Direct call parser_prod$ABraassignMethid$init_abraassignmethid on <var10:ABraassignMethid>*/
}
var_pmethidnode1 = var10;
var_node_list = var_pmethidnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction107> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction108$action for (self: ReduceAction108, Parser) */
void nitc__parser___nitc__parser__ReduceAction108___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4113);
fatal_exit(1);
}
var2 = NEW_nitc__AIdMethid(&type_nitc__AIdMethid);
{
nitc__parser_prod___AIdMethid___init_aidmethid(var2, var_tidnode2); /* Direct call parser_prod$AIdMethid$init_aidmethid on <var2:AIdMethid>*/
}
var_pmethidnode1 = var2;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction108> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction109$action for (self: ReduceAction109, Parser) */
void nitc__parser___nitc__parser__ReduceAction109___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var5;
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[Object]>*/
}
var_listnode4 = var6;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4134);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_core__Array__core__Object.color;
idtype10 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4136);
fatal_exit(1);
}
{
var11 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var11;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype13 = type_nullable__nitc__TCpar.color;
idtype14 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4139);
fatal_exit(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype16 = type_nullable__nitc__AType.color;
idtype17 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4141);
fatal_exit(1);
}
var18 = NEW_nitc__ASignature(&type_nitc__ASignature);
{
nitc__parser_prod___ASignature___init_asignature(var18, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6); /* Direct call parser_prod$ASignature$init_asignature on <var18:ASignature>*/
}
var_psignaturenode1 = var18;
var_node_list = var_psignaturenode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction109> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction110$action for (self: ReduceAction110, Parser) */
void nitc__parser___nitc__parser__ReduceAction110___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[Object]>*/
}
var_listnode4 = var5;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4164);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_core__Array__core__Object.color;
idtype9 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4166);
fatal_exit(1);
}
{
var10 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var10;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype12 = type_nullable__nitc__TCpar.color;
idtype13 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4169);
fatal_exit(1);
}
var14 = NEW_nitc__ASignature(&type_nitc__ASignature);
{
nitc__parser_prod___ASignature___init_asignature(var14, var_toparnode2, var_listnode4, var_tcparnode5, ((val*)NULL)); /* Direct call parser_prod$ASignature$init_asignature on <var14:ASignature>*/
}
var_psignaturenode1 = var14;
var_node_list = var_psignaturenode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction110> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction111$action for (self: ReduceAction111, Parser) */
void nitc__parser___nitc__parser__ReduceAction111___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4189);
fatal_exit(1);
}
var4 = NEW_nitc__ASignature(&type_nitc__ASignature);
{
nitc__parser_prod___ASignature___init_asignature(var4, ((val*)NULL), var_listnode3, ((val*)NULL), var_ptypenode5); /* Direct call parser_prod$ASignature$init_asignature on <var4:ASignature>*/
}
var_psignaturenode1 = var4;
var_node_list = var_psignaturenode1;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction111> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction112$action for (self: ReduceAction112, Parser) */
void nitc__parser___nitc__parser__ReduceAction112___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var2 = NEW_nitc__ASignature(&type_nitc__ASignature);
{
nitc__parser_prod___ASignature___init_asignature(var2, ((val*)NULL), var_listnode3, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$ASignature$init_asignature on <var2:ASignature>*/
}
var_psignaturenode1 = var2;
var_node_list = var_psignaturenode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction112> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction113$action for (self: ReduceAction113, Parser) */
void nitc__parser___nitc__parser__ReduceAction113___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_pparamnode1 = var_nodearraylist1;
if (var_pparamnode1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var3 = var4;
}
if (var3){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pparamnode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction113> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction114$action for (self: ReduceAction114, Parser) */
void nitc__parser___nitc__parser__ReduceAction114___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[Object]>*/
}
var_listnode3 = var3;
var_pparamnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4244);
fatal_exit(1);
}
if (var_pparamnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pparamnode1); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction114> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction116$action for (self: ReduceAction116, Parser) */
void nitc__parser___nitc__parser__ReduceAction116___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pparamnode1 = var_nodearraylist3;
var_node_list = var_pparamnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction116> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction117$action for (self: ReduceAction117, Parser) */
void nitc__parser___nitc__parser__ReduceAction117___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4274);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype4 = type_nullable__nitc__AAnnotations.color;
idtype5 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4276);
fatal_exit(1);
}
var6 = NEW_nitc__AParam(&type_nitc__AParam);
{
nitc__parser_prod___AParam___init_aparam(var6, var_tidnode2, ((val*)NULL), ((val*)NULL), var_pannotationsnode5); /* Direct call parser_prod$AParam$init_aparam on <var6:AParam>*/
}
var_pparamnode1 = var6;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction117> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction118$action for (self: ReduceAction118, Parser) */
void nitc__parser___nitc__parser__ReduceAction118___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4295);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype4 = type_nullable__nitc__AType.color;
idtype5 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4297);
fatal_exit(1);
}
var6 = NEW_nitc__AParam(&type_nitc__AParam);
{
nitc__parser_prod___AParam___init_aparam(var6, var_tidnode2, var_ptypenode3, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AParam$init_aparam on <var6:AParam>*/
}
var_pparamnode1 = var6;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction118> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction119$action for (self: ReduceAction119, Parser) */
void nitc__parser___nitc__parser__ReduceAction119___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4317);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nitc__AType.color;
idtype6 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4319);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype8 = type_nullable__nitc__AAnnotations.color;
idtype9 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4321);
fatal_exit(1);
}
var10 = NEW_nitc__AParam(&type_nitc__AParam);
{
nitc__parser_prod___AParam___init_aparam(var10, var_tidnode2, var_ptypenode3, ((val*)NULL), var_pannotationsnode5); /* Direct call parser_prod$AParam$init_aparam on <var10:AParam>*/
}
var_pparamnode1 = var10;
var_node_list = var_pparamnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction119> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction120$action for (self: ReduceAction120, Parser) */
void nitc__parser___nitc__parser__ReduceAction120___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4341);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable__nitc__AType.color;
idtype6 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4343);
fatal_exit(1);
}
var_tdotdotdotnode4 = var_nodearraylist3;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype8 = type_nullable__nitc__TDotdotdot.color;
idtype9 = type_nullable__nitc__TDotdotdot.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4345);
fatal_exit(1);
}
var10 = NEW_nitc__AParam(&type_nitc__AParam);
{
nitc__parser_prod___AParam___init_aparam(var10, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, ((val*)NULL)); /* Direct call parser_prod$AParam$init_aparam on <var10:AParam>*/
}
var_pparamnode1 = var10;
var_node_list = var_pparamnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction120> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction121$action for (self: ReduceAction121, Parser) */
void nitc__parser___nitc__parser__ReduceAction121___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4366);
fatal_exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable__nitc__AType.color;
idtype7 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4368);
fatal_exit(1);
}
var_tdotdotdotnode4 = var_nodearraylist4;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype9 = type_nullable__nitc__TDotdotdot.color;
idtype10 = type_nullable__nitc__TDotdotdot.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4370);
fatal_exit(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype12 = type_nullable__nitc__AAnnotations.color;
idtype13 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4372);
fatal_exit(1);
}
var14 = NEW_nitc__AParam(&type_nitc__AParam);
{
nitc__parser_prod___AParam___init_aparam(var14, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var_pannotationsnode5); /* Direct call parser_prod$AParam$init_aparam on <var14:AParam>*/
}
var_pparamnode1 = var14;
var_node_list = var_pparamnode1;
var15 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction121> */
{
var16 = nitc___nitc__Parser___go_to(var_p, var15);
}
{
nitc___nitc__Parser___push(var_p, var16, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction122$action for (self: ReduceAction122, Parser) */
void nitc__parser___nitc__parser__ReduceAction122___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[Object]>*/
}
var_listnode4 = var3;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nitc__TKwimport.color;
idtype = type_nullable__nitc__TKwimport.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4393);
fatal_exit(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype6 = type_nullable__nitc__AExternCall.color;
idtype7 = type_nullable__nitc__AExternCall.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4395);
fatal_exit(1);
}
if (var_pexterncallnode3 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_pexterncallnode3,((val*)NULL)) on <var_pexterncallnode3:nullable Object(nullable AExternCall)> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexterncallnode3, var_other); /* == on <var_pexterncallnode3:nullable Object(AExternCall)>*/
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode4, var_pexterncallnode3); /* Direct call array$Array$add on <var_listnode4:Array[Object]>*/
}
} else {
}
var13 = NEW_nitc__AExternCalls(&type_nitc__AExternCalls);
{
nitc__parser_prod___AExternCalls___init_aexterncalls(var13, var_tkwimportnode2, var_listnode4); /* Direct call parser_prod$AExternCalls$init_aexterncalls on <var13:AExternCalls>*/
}
var_pexterncallsnode1 = var13;
var_node_list = var_pexterncallsnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction122> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction123$action for (self: ReduceAction123, Parser) */
void nitc__parser___nitc__parser__ReduceAction123___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nitc__TKwimport.color;
idtype = type_nullable__nitc__TKwimport.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4418);
fatal_exit(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype7 = type_nullable__nitc__AExternCall.color;
idtype8 = type_nullable__nitc__AExternCall.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4420);
fatal_exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype10 = type_core__Array__core__Object.color;
idtype11 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4422);
fatal_exit(1);
}
if (var_pexterncallnode3 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_pexterncallnode3,((val*)NULL)) on <var_pexterncallnode3:nullable Object(nullable AExternCall)> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexterncallnode3, var_other); /* == on <var_pexterncallnode3:nullable Object(AExternCall)>*/
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode5, var_pexterncallnode3); /* Direct call array$Array$add on <var_listnode5:Array[Object]>*/
}
} else {
}
{
var17 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var17;
var18 = NEW_nitc__AExternCalls(&type_nitc__AExternCalls);
{
nitc__parser_prod___AExternCalls___init_aexterncalls(var18, var_tkwimportnode2, var_listnode5); /* Direct call parser_prod$AExternCalls$init_aexterncalls on <var18:AExternCalls>*/
}
var_pexterncallsnode1 = var18;
var_node_list = var_pexterncallsnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction123> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction125$action for (self: ReduceAction125, Parser) */
void nitc__parser___nitc__parser__ReduceAction125___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexterncallnode1 = var_nodearraylist3;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction125> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction126$action for (self: ReduceAction126, Parser) */
void nitc__parser___nitc__parser__ReduceAction126___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pexterncallnode1 = var_nodearraylist1;
var_node_list = var_pexterncallnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction126> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction128$action for (self: ReduceAction128, Parser) */
void nitc__parser___nitc__parser__ReduceAction128___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwsupernode2 = var_nodearraylist1;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable__nitc__TKwsuper.color;
idtype = type_nullable__nitc__TKwsuper.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4466);
fatal_exit(1);
}
var2 = NEW_nitc__ASuperExternCall(&type_nitc__ASuperExternCall);
{
nitc__parser_prod___ASuperExternCall___init_asuperexterncall(var2, var_tkwsupernode2); /* Direct call parser_prod$ASuperExternCall$init_asuperexterncall on <var2:ASuperExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction128> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction129$action for (self: ReduceAction129, Parser) */
void nitc__parser___nitc__parser__ReduceAction129___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pmethidnode2 = var_nodearraylist1;
/* <var_pmethidnode2:nullable Object> isa nullable AMethid */
cltype = type_nullable__nitc__AMethid.color;
idtype = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4481);
fatal_exit(1);
}
var2 = NEW_nitc__ALocalPropExternCall(&type_nitc__ALocalPropExternCall);
{
nitc__parser_prod___ALocalPropExternCall___init_alocalpropexterncall(var2, var_pmethidnode2); /* Direct call parser_prod$ALocalPropExternCall$init_alocalpropexterncall on <var2:ALocalPropExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction129> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction130$action for (self: ReduceAction130, Parser) */
void nitc__parser___nitc__parser__ReduceAction130___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4498);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype5 = type_nullable__nitc__TDot.color;
idtype6 = type_nullable__nitc__TDot.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4500);
fatal_exit(1);
}
var_pmethidnode4 = var_nodearraylist3;
/* <var_pmethidnode4:nullable Object> isa nullable AMethid */
cltype8 = type_nullable__nitc__AMethid.color;
idtype9 = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4502);
fatal_exit(1);
}
var10 = NEW_nitc__AFullPropExternCall(&type_nitc__AFullPropExternCall);
{
nitc__parser_prod___AFullPropExternCall___init_afullpropexterncall(var10, var_ptypenode2, var_tdotnode3, var_pmethidnode4); /* Direct call parser_prod$AFullPropExternCall$init_afullpropexterncall on <var10:AFullPropExternCall>*/
}
var_pexterncallnode1 = var10;
var_node_list = var_pexterncallnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction130> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction131$action for (self: ReduceAction131, Parser) */
void nitc__parser___nitc__parser__ReduceAction131___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4519);
fatal_exit(1);
}
var2 = NEW_nitc__AInitPropExternCall(&type_nitc__AInitPropExternCall);
{
nitc__parser_prod___AInitPropExternCall___init_ainitpropexterncall(var2, var_ptypenode2); /* Direct call parser_prod$AInitPropExternCall$init_ainitpropexterncall on <var2:AInitPropExternCall>*/
}
var_pexterncallnode1 = var2;
var_node_list = var_pexterncallnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction131> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction132$action for (self: ReduceAction132, Parser) */
void nitc__parser___nitc__parser__ReduceAction132___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4542);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype11 = type_nullable__nitc__TDot.color;
idtype12 = type_nullable__nitc__TDot.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4544);
fatal_exit(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype14 = type_nullable__nitc__TKwas.color;
idtype15 = type_nullable__nitc__TKwas.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4546);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist7;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype17 = type_nullable__nitc__AType.color;
idtype18 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4548);
fatal_exit(1);
}
var19 = NEW_nitc__ACastAsExternCall(&type_nitc__ACastAsExternCall);
{
nitc__parser_prod___ACastAsExternCall___init_acastasexterncall(var19, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* Direct call parser_prod$ACastAsExternCall$init_acastasexterncall on <var19:ACastAsExternCall>*/
}
var_pexterncallnode1 = var19;
var_node_list = var_pexterncallnode1;
var20 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction132> */
{
var21 = nitc___nitc__Parser___go_to(var_p, var20);
}
{
nitc___nitc__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction133$action for (self: ReduceAction133, Parser) */
void nitc__parser___nitc__parser__ReduceAction133___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4570);
fatal_exit(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype7 = type_nullable__nitc__TDot.color;
idtype8 = type_nullable__nitc__TDot.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4572);
fatal_exit(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype10 = type_nullable__nitc__TKwas.color;
idtype11 = type_nullable__nitc__TKwas.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4574);
fatal_exit(1);
}
var_ptypenode5 = var_nodearraylist5;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype13 = type_nullable__nitc__AType.color;
idtype14 = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4576);
fatal_exit(1);
}
var15 = NEW_nitc__ACastAsExternCall(&type_nitc__ACastAsExternCall);
{
nitc__parser_prod___ACastAsExternCall___init_acastasexterncall(var15, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* Direct call parser_prod$ACastAsExternCall$init_acastasexterncall on <var15:ACastAsExternCall>*/
}
var_pexterncallnode1 = var15;
var_node_list = var_pexterncallnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction133> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction134$action for (self: ReduceAction134, Parser) */
void nitc__parser___nitc__parser__ReduceAction134___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var8;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4602);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype11 = type_nullable__nitc__TKwas.color;
idtype12 = type_nullable__nitc__TKwas.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4604);
fatal_exit(1);
}
var_tkwnullablenode4 = var_nodearraylist7;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype14 = type_nullable__nitc__TKwnullable.color;
idtype15 = type_nullable__nitc__TKwnullable.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4606);
fatal_exit(1);
}
var16 = NEW_nitc__AAsNullableExternCall(&type_nitc__AAsNullableExternCall);
{
nitc__parser_prod___AAsNullableExternCall___init_aasnullableexterncall(var16, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* Direct call parser_prod$AAsNullableExternCall$init_aasnullableexterncall on <var16:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var16;
var_node_list = var_pexterncallnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction134> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction135$action for (self: ReduceAction135, Parser) */
void nitc__parser___nitc__parser__ReduceAction135___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4627);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype7 = type_nullable__nitc__TKwas.color;
idtype8 = type_nullable__nitc__TKwas.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4629);
fatal_exit(1);
}
var_tkwnullablenode4 = var_nodearraylist5;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype10 = type_nullable__nitc__TKwnullable.color;
idtype11 = type_nullable__nitc__TKwnullable.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4631);
fatal_exit(1);
}
var12 = NEW_nitc__AAsNullableExternCall(&type_nitc__AAsNullableExternCall);
{
nitc__parser_prod___AAsNullableExternCall___init_aasnullableexterncall(var12, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4); /* Direct call parser_prod$AAsNullableExternCall$init_aasnullableexterncall on <var12:AAsNullableExternCall>*/
}
var_pexterncallnode1 = var12;
var_node_list = var_pexterncallnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction135> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction136$action for (self: ReduceAction136, Parser) */
void nitc__parser___nitc__parser__ReduceAction136___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist11 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist10 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist9 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var7;
{
var8 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var8;
{
var9 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var9;
{
var10 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var10;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4658);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype13 = type_nullable__nitc__TKwas.color;
idtype14 = type_nullable__nitc__TKwas.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4660);
fatal_exit(1);
}
var_tkwnotnode4 = var_nodearraylist7;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype16 = type_nullable__nitc__TKwnot.color;
idtype17 = type_nullable__nitc__TKwnot.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4662);
fatal_exit(1);
}
var_tkwnullablenode5 = var_nodearraylist9;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype19 = type_nullable__nitc__TKwnullable.color;
idtype20 = type_nullable__nitc__TKwnullable.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4664);
fatal_exit(1);
}
var21 = NEW_nitc__AAsNotNullableExternCall(&type_nitc__AAsNotNullableExternCall);
{
nitc__parser_prod___AAsNotNullableExternCall___init_aasnotnullableexterncall(var21, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* Direct call parser_prod$AAsNotNullableExternCall$init_aasnotnullableexterncall on <var21:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var21;
var_node_list = var_pexterncallnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction136> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction137$action for (self: ReduceAction137, Parser) */
void nitc__parser___nitc__parser__ReduceAction137___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nitc__AType.color;
idtype = type_nullable__nitc__AType.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4688);
fatal_exit(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype9 = type_nullable__nitc__TKwas.color;
idtype10 = type_nullable__nitc__TKwas.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4690);
fatal_exit(1);
}
var_tkwnotnode4 = var_nodearraylist5;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype12 = type_nullable__nitc__TKwnot.color;
idtype13 = type_nullable__nitc__TKwnot.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4692);
fatal_exit(1);
}
var_tkwnullablenode5 = var_nodearraylist7;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype15 = type_nullable__nitc__TKwnullable.color;
idtype16 = type_nullable__nitc__TKwnullable.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4694);
fatal_exit(1);
}
var17 = NEW_nitc__AAsNotNullableExternCall(&type_nitc__AAsNotNullableExternCall);
{
nitc__parser_prod___AAsNotNullableExternCall___init_aasnotnullableexterncall(var17, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5); /* Direct call parser_prod$AAsNotNullableExternCall$init_aasnotnullableexterncall on <var17:AAsNotNullableExternCall>*/
}
var_pexterncallnode1 = var17;
var_node_list = var_pexterncallnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction137> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction139$action for (self: ReduceAction139, Parser) */
void nitc__parser___nitc__parser__ReduceAction139___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tstringnode1 = var_nodearraylist1;
var_node_list = var_tstringnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction139> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction140$action for (self: ReduceAction140, Parser) */
void nitc__parser___nitc__parser__ReduceAction140___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwinnode2 = var_nodearraylist1;
/* <var_tkwinnode2:nullable Object> isa nullable TKwin */
cltype = type_nullable__nitc__TKwin.color;
idtype = type_nullable__nitc__TKwin.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4726);
fatal_exit(1);
}
var_tstringnode3 = var_nodearraylist3;
/* <var_tstringnode3:nullable Object> isa nullable TString */
cltype6 = type_nullable__nitc__TString.color;
idtype7 = type_nullable__nitc__TString.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4728);
fatal_exit(1);
}
var8 = NEW_nitc__AInLanguage(&type_nitc__AInLanguage);
{
nitc__parser_prod___AInLanguage___init_ainlanguage(var8, var_tkwinnode2, var_tstringnode3); /* Direct call parser_prod$AInLanguage$init_ainlanguage on <var8:AInLanguage>*/
}
var_pinlanguagenode1 = var8;
var_node_list = var_pinlanguagenode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction140> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction141$action for (self: ReduceAction141, Parser) */
void nitc__parser___nitc__parser__ReduceAction141___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_texterncodesegmentnode3 = var_nodearraylist1;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype = type_nullable__nitc__TExternCodeSegment.color;
idtype = type_nullable__nitc__TExternCodeSegment.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4744);
fatal_exit(1);
}
var2 = NEW_nitc__AExternCodeBlock(&type_nitc__AExternCodeBlock);
{
nitc__parser_prod___AExternCodeBlock___init_aexterncodeblock(var2, ((val*)NULL), var_texterncodesegmentnode3); /* Direct call parser_prod$AExternCodeBlock$init_aexterncodeblock on <var2:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var2;
var_node_list = var_pexterncodeblocknode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction141> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction142$action for (self: ReduceAction142, Parser) */
void nitc__parser___nitc__parser__ReduceAction142___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pinlanguagenode2 = var_nodearraylist1;
/* <var_pinlanguagenode2:nullable Object> isa nullable AInLanguage */
cltype = type_nullable__nitc__AInLanguage.color;
idtype = type_nullable__nitc__AInLanguage.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4761);
fatal_exit(1);
}
var_texterncodesegmentnode3 = var_nodearraylist2;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype4 = type_nullable__nitc__TExternCodeSegment.color;
idtype5 = type_nullable__nitc__TExternCodeSegment.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4763);
fatal_exit(1);
}
var6 = NEW_nitc__AExternCodeBlock(&type_nitc__AExternCodeBlock);
{
nitc__parser_prod___AExternCodeBlock___init_aexterncodeblock(var6, var_pinlanguagenode2, var_texterncodesegmentnode3); /* Direct call parser_prod$AExternCodeBlock$init_aexterncodeblock on <var6:AExternCodeBlock>*/
}
var_pexterncodeblocknode1 = var6;
var_node_list = var_pexterncodeblocknode1;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction142> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction143$action for (self: ReduceAction143, Parser) */
void nitc__parser___nitc__parser__ReduceAction143___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pexterncodeblocknode1 = var_nodearraylist1;
var_node_list = var_pexterncodeblocknode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction143> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction145$action for (self: ReduceAction145, Parser) */
void nitc__parser___nitc__parser__ReduceAction145___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexterncodeblocknode1 = var_nodearraylist2;
var_node_list = var_pexterncodeblocknode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction145> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction146$action for (self: ReduceAction146, Parser) */
void nitc__parser___nitc__parser__ReduceAction146___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_pqclassidnode3 /* var pqclassidnode3: nullable Object */;
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[Object]>*/
}
var_listnode5 = var2;
var_pqclassidnode3 = var_nodearraylist1;
/* <var_pqclassidnode3:nullable Object> isa nullable AQclassid */
cltype = type_nullable__nitc__AQclassid.color;
idtype = type_nullable__nitc__AQclassid.id;
if(var_pqclassidnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4804);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist2;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable__nitc__AAnnotations.color;
idtype6 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4806);
fatal_exit(1);
}
var7 = NEW_nitc__AType(&type_nitc__AType);
{
nitc__parser_prod___AType___init_atype(var7, ((val*)NULL), var_pqclassidnode3, ((val*)NULL), var_listnode5, ((val*)NULL), var_pannotationsnode7); /* Direct call parser_prod$AType$init_atype on <var7:AType>*/
}
var_ptypenode1 = var7;
var_node_list = var_ptypenode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction146> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction147$action for (self: ReduceAction147, Parser) */
void nitc__parser___nitc__parser__ReduceAction147___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pqclassidnode3 /* var pqclassidnode3: nullable Object */;
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
var3 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[Object]>*/
}
var_listnode5 = var3;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable__nitc__TKwnullable.color;
idtype = type_nullable__nitc__TKwnullable.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4829);
fatal_exit(1);
}
var_pqclassidnode3 = var_nodearraylist2;
/* <var_pqclassidnode3:nullable Object> isa nullable AQclassid */
cltype6 = type_nullable__nitc__AQclassid.color;
idtype7 = type_nullable__nitc__AQclassid.id;
if(var_pqclassidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4831);
fatal_exit(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nitc__AAnnotations.color;
idtype10 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4833);
fatal_exit(1);
}
var11 = NEW_nitc__AType(&type_nitc__AType);
{
nitc__parser_prod___AType___init_atype(var11, var_tkwnullablenode2, var_pqclassidnode3, ((val*)NULL), var_listnode5, ((val*)NULL), var_pannotationsnode7); /* Direct call parser_prod$AType$init_atype on <var11:AType>*/
}
var_ptypenode1 = var11;
var_node_list = var_ptypenode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction147> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction148$action for (self: ReduceAction148, Parser) */
void nitc__parser___nitc__parser__ReduceAction148___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pqclassidnode3 /* var pqclassidnode3: nullable Object */;
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var6;
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[Object]>*/
}
var_listnode6 = var7;
var_pqclassidnode3 = var_nodearraylist1;
/* <var_pqclassidnode3:nullable Object> isa nullable AQclassid */
cltype = type_nullable__nitc__AQclassid.color;
idtype = type_nullable__nitc__AQclassid.id;
if(var_pqclassidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4860);
fatal_exit(1);
}
var_tobranode4 = var_nodearraylist2;
/* <var_tobranode4:nullable Object> isa nullable TObra */
cltype10 = type_nullable__nitc__TObra.color;
idtype11 = type_nullable__nitc__TObra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4862);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist4;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype13 = type_core__Array__core__Object.color;
idtype14 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4864);
fatal_exit(1);
}
{
var15 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var15;
var_tcbranode7 = var_nodearraylist6;
/* <var_tcbranode7:nullable Object> isa nullable TCbra */
cltype17 = type_nullable__nitc__TCbra.color;
idtype18 = type_nullable__nitc__TCbra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4867);
fatal_exit(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable__nitc__AAnnotations.color;
idtype21 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4869);
fatal_exit(1);
}
var22 = NEW_nitc__AType(&type_nitc__AType);
{
nitc__parser_prod___AType___init_atype(var22, ((val*)NULL), var_pqclassidnode3, var_tobranode4, var_listnode6, var_tcbranode7, var_pannotationsnode8); /* Direct call parser_prod$AType$init_atype on <var22:AType>*/
}
var_ptypenode1 = var22;
var_node_list = var_ptypenode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction148> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction149$action for (self: ReduceAction149, Parser) */
void nitc__parser___nitc__parser__ReduceAction149___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pqclassidnode3 /* var pqclassidnode3: nullable Object */;
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist8 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist7 = var1;
{
var2 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist6 = var2;
{
var3 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist5 = var3;
{
var4 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist4 = var4;
{
var5 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist3 = var5;
{
var6 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var6;
{
var7 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var7;
var8 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array$Array$init on <var8:Array[Object]>*/
}
var_listnode6 = var8;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable__nitc__TKwnullable.color;
idtype = type_nullable__nitc__TKwnullable.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4897);
fatal_exit(1);
}
var_pqclassidnode3 = var_nodearraylist2;
/* <var_pqclassidnode3:nullable Object> isa nullable AQclassid */
cltype11 = type_nullable__nitc__AQclassid.color;
idtype12 = type_nullable__nitc__AQclassid.id;
if(var_pqclassidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_pqclassidnode3&3)?type_info[((long)var_pqclassidnode3&3)]:var_pqclassidnode3->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4899);
fatal_exit(1);
}
var_tobranode4 = var_nodearraylist3;
/* <var_tobranode4:nullable Object> isa nullable TObra */
cltype14 = type_nullable__nitc__TObra.color;
idtype15 = type_nullable__nitc__TObra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4901);
fatal_exit(1);
}
var_listnode5 = var_nodearraylist5;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype17 = type_core__Array__core__Object.color;
idtype18 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4903);
fatal_exit(1);
}
{
var19 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var19;
var_tcbranode7 = var_nodearraylist7;
/* <var_tcbranode7:nullable Object> isa nullable TCbra */
cltype21 = type_nullable__nitc__TCbra.color;
idtype22 = type_nullable__nitc__TCbra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4906);
fatal_exit(1);
}
var_pannotationsnode8 = var_nodearraylist8;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nitc__AAnnotations.color;
idtype25 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4908);
fatal_exit(1);
}
var26 = NEW_nitc__AType(&type_nitc__AType);
{
nitc__parser_prod___AType___init_atype(var26, var_tkwnullablenode2, var_pqclassidnode3, var_tobranode4, var_listnode6, var_tcbranode7, var_pannotationsnode8); /* Direct call parser_prod$AType$init_atype on <var26:AType>*/
}
var_ptypenode1 = var26;
var_node_list = var_ptypenode1;
var27 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction149> */
{
var28 = nitc___nitc__Parser___go_to(var_p, var27);
}
{
nitc___nitc__Parser___push(var_p, var28, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction150$action for (self: ReduceAction150, Parser) */
void nitc__parser___nitc__parser__ReduceAction150___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_ptypenode1 = var_nodearraylist1;
if (var_ptypenode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode1&3)?class_info[((long)var_ptypenode1&3)]:var_ptypenode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_ptypenode1, ((val*)NULL)); /* != on <var_ptypenode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_ptypenode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction150> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction151$action for (self: ReduceAction151, Parser) */
void nitc__parser___nitc__parser__ReduceAction151___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var_ptypenode1 = var_nodearraylist1;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4946);
fatal_exit(1);
}
if (var_ptypenode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode1&3)?class_info[((long)var_ptypenode1&3)]:var_ptypenode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_ptypenode1, ((val*)NULL)); /* != on <var_ptypenode1:nullable Object>*/
var4 = var5;
}
if (var4){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_ptypenode1); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var6 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var6;
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction151> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction152$action for (self: ReduceAction152, Parser) */
void nitc__parser___nitc__parser__ReduceAction152___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_ptypenode1 = var_nodearraylist3;
var_node_list = var_ptypenode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction152> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction156$action for (self: ReduceAction156, Parser) */
void nitc__parser___nitc__parser__ReduceAction156___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode1 = var_nodearraylist2;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction156> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction157$action for (self: ReduceAction157, Parser) */
void nitc__parser___nitc__parser__ReduceAction157___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[Object]>*/
}
var_listnode2 = var2;
var_tkwendnode3 = var_nodearraylist2;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable__nitc__TKwend.color;
idtype = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 4989);
fatal_exit(1);
}
var4 = NEW_nitc__ABlockExpr(&type_nitc__ABlockExpr);
{
nitc__parser_prod___ABlockExpr___init_ablockexpr(var4, var_listnode2, var_tkwendnode3); /* Direct call parser_prod$ABlockExpr$init_ablockexpr on <var4:ABlockExpr>*/
}
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction157> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction158$action for (self: ReduceAction158, Parser) */
void nitc__parser___nitc__parser__ReduceAction158___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tkwendnode3 = var_nodearraylist1;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable__nitc__TKwend.color;
idtype = type_nullable__nitc__TKwend.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 5006);
fatal_exit(1);
}
var3 = NEW_nitc__ABlockExpr(&type_nitc__ABlockExpr);
{
nitc__parser_prod___ABlockExpr___init_ablockexpr(var3, var_listnode2, var_tkwendnode3); /* Direct call parser_prod$ABlockExpr$init_ablockexpr on <var3:ABlockExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction158> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction159$action for (self: ReduceAction159, Parser) */
void nitc__parser___nitc__parser__ReduceAction159___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction159> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
