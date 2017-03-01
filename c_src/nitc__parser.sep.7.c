#include "nitc__parser.sep.0.h"
/* method parser$ReduceAction421$action for (self: ReduceAction421, Parser) */
void nitc__parser___nitc__parser__ReduceAction421___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var9 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array$Array$init on <var9:Array[Object]>*/
}
var_listnode8 = var9;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11017);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11019);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11021);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype18 = type_nullable__nitc__AAtid.color;
idtype19 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11023);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype21 = type_nullable__nitc__TOpar.color;
idtype22 = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11025);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype24 = type_core__Array__core__Object.color;
idtype25 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11027);
fatal_exit(1);
}
{
var26 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var26;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype28 = type_nullable__nitc__TCpar.color;
idtype29 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11030);
fatal_exit(1);
}
var30 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* Direct call parser_prod$AAnnotation$init_aannotation on <var30:AAnnotation>*/
}
var_pannotationnode1 = var30;
var_node_list = var_pannotationnode1;
var31 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction421> */
{
var32 = nitc___nitc__Parser___go_to(var_p, var31);
}
{
nitc___nitc__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction422$action for (self: ReduceAction422, Parser) */
void nitc__parser___nitc__parser__ReduceAction422___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var10 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var10); /* Direct call array$Array$init on <var10:Array[Object]>*/
}
var_listnode8 = var10;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11062);
fatal_exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nitc__TKwredef.color;
idtype14 = type_nullable__nitc__TKwredef.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11064);
fatal_exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nitc__AVisibility.color;
idtype17 = type_nullable__nitc__AVisibility.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11066);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype19 = type_nullable__nitc__AAtid.color;
idtype20 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11068);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist5;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype22 = type_nullable__nitc__TOpar.color;
idtype23 = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11070);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_core__Array__core__Object.color;
idtype26 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11072);
fatal_exit(1);
}
{
var27 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var27;
var_tcparnode9 = var_nodearraylist8;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype29 = type_nullable__nitc__TCpar.color;
idtype30 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11075);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist9;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype32 = type_nullable__nitc__AAnnotations.color;
idtype33 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11077);
fatal_exit(1);
}
var34 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod$AAnnotation$init_aannotation on <var34:AAnnotation>*/
}
var_pannotationnode1 = var34;
var_node_list = var_pannotationnode1;
var35 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction422> */
{
var36 = nitc___nitc__Parser___go_to(var_p, var35);
}
{
nitc___nitc__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction423$action for (self: ReduceAction423, Parser) */
void nitc__parser___nitc__parser__ReduceAction423___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode8 = var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11105);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11107);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11109);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist4;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype15 = type_nullable__nitc__AAtid.color;
idtype16 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11111);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_core__Array__core__Object.color;
idtype19 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11113);
fatal_exit(1);
}
{
var20 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var20;
var21 = NEW_nitc__AAnnotation(&type_nitc__AAnnotation);
{
nitc__parser_prod___AAnnotation___init_aannotation(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AAnnotation$init_aannotation on <var21:AAnnotation>*/
}
var_pannotationnode1 = var21;
var_node_list = var_pannotationnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction423> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction424$action for (self: ReduceAction424, Parser) */
void nitc__parser___nitc__parser__ReduceAction424___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode7 = var2;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11138);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype5 = type_nullable__nitc__AAtid.color;
idtype6 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11140);
fatal_exit(1);
}
var7 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var7, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AAnnotPropdef$init_aannotpropdef on <var7:AAnnotPropdef>*/
}
var_ppropdefnode1 = var7;
var_node_list = var_ppropdefnode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction424> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction425$action for (self: ReduceAction425, Parser) */
void nitc__parser___nitc__parser__ReduceAction425___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode7 = var3;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11165);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype6 = type_nullable__nitc__AAtid.color;
idtype7 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11167);
fatal_exit(1);
}
var_pannotationsnode9 = var_nodearraylist3;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nitc__AAnnotations.color;
idtype10 = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11169);
fatal_exit(1);
}
var11 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var11, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode7, ((val*)NULL), var_pannotationsnode9); /* Direct call parser_prod$AAnnotPropdef$init_aannotpropdef on <var11:AAnnotPropdef>*/
}
var_ppropdefnode1 = var11;
var_node_list = var_ppropdefnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction425> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction426$action for (self: ReduceAction426, Parser) */
void nitc__parser___nitc__parser__ReduceAction426___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode8 = var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11197);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype9 = type_nullable__nitc__AAtid.color;
idtype10 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11199);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype12 = type_nullable__nitc__TOpar.color;
idtype13 = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11201);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_core__Array__core__Object.color;
idtype16 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11203);
fatal_exit(1);
}
{
var17 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var17;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype19 = type_nullable__nitc__TCpar.color;
idtype20 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11206);
fatal_exit(1);
}
var21 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var21, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, ((val*)NULL)); /* Direct call parser_prod$AAnnotPropdef$init_aannotpropdef on <var21:AAnnotPropdef>*/
}
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var22 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction426> */
{
var23 = nitc___nitc__Parser___go_to(var_p, var22);
}
{
nitc___nitc__Parser___push(var_p, var23, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction427$action for (self: ReduceAction427, Parser) */
void nitc__parser___nitc__parser__ReduceAction427___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode8 = var7;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11235);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype10 = type_nullable__nitc__AAtid.color;
idtype11 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11237);
fatal_exit(1);
}
var_toparnode6 = var_nodearraylist3;
/* <var_toparnode6:nullable Object> isa nullable TOpar */
cltype13 = type_nullable__nitc__TOpar.color;
idtype14 = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11239);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist5;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype16 = type_core__Array__core__Object.color;
idtype17 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11241);
fatal_exit(1);
}
{
var18 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var18;
var_tcparnode9 = var_nodearraylist6;
/* <var_tcparnode9:nullable Object> isa nullable TCpar */
cltype20 = type_nullable__nitc__TCpar.color;
idtype21 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11244);
fatal_exit(1);
}
var_pannotationsnode10 = var_nodearraylist7;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11246);
fatal_exit(1);
}
var25 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var25, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, var_toparnode6, var_listnode8, var_tcparnode9, var_pannotationsnode10); /* Direct call parser_prod$AAnnotPropdef$init_aannotpropdef on <var25:AAnnotPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction427> */
{
var27 = nitc___nitc__Parser___go_to(var_p, var26);
}
{
nitc___nitc__Parser___push(var_p, var27, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction428$action for (self: ReduceAction428, Parser) */
void nitc__parser___nitc__parser__ReduceAction428___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode8 = var3;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nitc__ADoc.color;
idtype = type_nullable__nitc__ADoc.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11271);
fatal_exit(1);
}
var_patidnode5 = var_nodearraylist2;
/* <var_patidnode5:nullable Object> isa nullable AAtid */
cltype6 = type_nullable__nitc__AAtid.color;
idtype7 = type_nullable__nitc__AAtid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11273);
fatal_exit(1);
}
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype9 = type_core__Array__core__Object.color;
idtype10 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11275);
fatal_exit(1);
}
{
var11 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode8, var_listnode7);
}
var_listnode8 = var11;
var12 = NEW_nitc__AAnnotPropdef(&type_nitc__AAnnotPropdef);
{
nitc__parser_prod___AAnnotPropdef___init_aannotpropdef(var12, var_pdocnode2, ((val*)NULL), ((val*)NULL), var_patidnode5, ((val*)NULL), var_listnode8, ((val*)NULL), ((val*)NULL)); /* Direct call parser_prod$AAnnotPropdef$init_aannotpropdef on <var12:AAnnotPropdef>*/
}
var_ppropdefnode1 = var12;
var_node_list = var_ppropdefnode1;
var13 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction428> */
{
var14 = nitc___nitc__Parser___go_to(var_p, var13);
}
{
nitc___nitc__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction432$action for (self: ReduceAction432, Parser) */
void nitc__parser___nitc__parser__ReduceAction432___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11298);
fatal_exit(1);
}
var2 = NEW_nitc__ATypeExpr(&type_nitc__ATypeExpr);
{
nitc__parser_prod___ATypeExpr___init_atypeexpr(var2, var_ptypenode2); /* Direct call parser_prod$ATypeExpr$init_atypeexpr on <var2:ATypeExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction432> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction435$action for (self: ReduceAction435, Parser) */
void nitc__parser___nitc__parser__ReduceAction435___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11316);
fatal_exit(1);
}
var_pmethidnode3 = var_nodearraylist4;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype6 = type_nullable__nitc__AMethid.color;
idtype7 = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11318);
fatal_exit(1);
}
var8 = NEW_nitc__AMethidExpr(&type_nitc__AMethidExpr);
{
nitc__parser_prod___AMethidExpr___init_amethidexpr(var8, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod$AMethidExpr$init_amethidexpr on <var8:AMethidExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction435> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction436$action for (self: ReduceAction436, Parser) */
void nitc__parser___nitc__parser__ReduceAction436___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var1); /* Direct call parser_prod$AImplicitSelfExpr$init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/
}
var_pexprnode2 = var1;
var_pmethidnode3 = var_nodearraylist1;
/* <var_pmethidnode3:nullable Object> isa nullable AMethid */
cltype = type_nullable__nitc__AMethid.color;
idtype = type_nullable__nitc__AMethid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11335);
fatal_exit(1);
}
var3 = NEW_nitc__AMethidExpr(&type_nitc__AMethidExpr);
{
nitc__parser_prod___AMethidExpr___init_amethidexpr(var3, var_pexprnode2, var_pmethidnode3); /* Direct call parser_prod$AMethidExpr$init_amethidexpr on <var3:AMethidExpr>*/
}
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction436> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction437$action for (self: ReduceAction437, Parser) */
void nitc__parser___nitc__parser__ReduceAction437___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pannotationsnode2 = var_nodearraylist1;
/* <var_pannotationsnode2:nullable Object> isa nullable AAnnotations */
cltype = type_nullable__nitc__AAnnotations.color;
idtype = type_nullable__nitc__AAnnotations.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11351);
fatal_exit(1);
}
var2 = NEW_nitc__AAtExpr(&type_nitc__AAtExpr);
{
nitc__parser_prod___AAtExpr___init_aatexpr(var2, var_pannotationsnode2); /* Direct call parser_prod$AAtExpr$init_aatexpr on <var2:AAtExpr>*/
}
var_pexprnode1 = var2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction437> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction438$action for (self: ReduceAction438, Parser) */
void nitc__parser___nitc__parser__ReduceAction438___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11366);
fatal_exit(1);
}
var2 = NEW_nitc__AIdAtid(&type_nitc__AIdAtid);
{
nitc__parser_prod___AIdAtid___init_aidatid(var2, var_tidnode2); /* Direct call parser_prod$AIdAtid$init_aidatid on <var2:AIdAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction438> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction439$action for (self: ReduceAction439, Parser) */
void nitc__parser___nitc__parser__ReduceAction439___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwexternnode2 = var_nodearraylist1;
/* <var_tkwexternnode2:nullable Object> isa nullable TKwextern */
cltype = type_nullable__nitc__TKwextern.color;
idtype = type_nullable__nitc__TKwextern.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11381);
fatal_exit(1);
}
var2 = NEW_nitc__AKwexternAtid(&type_nitc__AKwexternAtid);
{
nitc__parser_prod___AKwexternAtid___init_akwexternatid(var2, var_tkwexternnode2); /* Direct call parser_prod$AKwexternAtid$init_akwexternatid on <var2:AKwexternAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction439> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction440$action for (self: ReduceAction440, Parser) */
void nitc__parser___nitc__parser__ReduceAction440___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwabstractnode2 = var_nodearraylist1;
/* <var_tkwabstractnode2:nullable Object> isa nullable TKwabstract */
cltype = type_nullable__nitc__TKwabstract.color;
idtype = type_nullable__nitc__TKwabstract.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11396);
fatal_exit(1);
}
var2 = NEW_nitc__AKwabstractAtid(&type_nitc__AKwabstractAtid);
{
nitc__parser_prod___AKwabstractAtid___init_akwabstractatid(var2, var_tkwabstractnode2); /* Direct call parser_prod$AKwabstractAtid$init_akwabstractatid on <var2:AKwabstractAtid>*/
}
var_patidnode1 = var2;
var_node_list = var_patidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction440> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction441$action for (self: ReduceAction441, Parser) */
void nitc__parser___nitc__parser__ReduceAction441___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode4 = var4;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11415);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11417);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype11 = type_nullable__nitc__TCpar.color;
idtype12 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11420);
fatal_exit(1);
}
var13 = NEW_nitc__AParExprs(&type_nitc__AParExprs);
{
nitc__parser_prod___AParExprs___init_aparexprs(var13, var_toparnode2, var_listnode4, var_tcparnode5); /* Direct call parser_prod$AParExprs$init_aparexprs on <var13:AParExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction441> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction442$action for (self: ReduceAction442, Parser) */
void nitc__parser___nitc__parser__ReduceAction442___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nitc__TOpar.color;
idtype = type_nullable__nitc__TOpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11440);
fatal_exit(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype6 = type_nullable__nitc__TCpar.color;
idtype7 = type_nullable__nitc__TCpar.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11442);
fatal_exit(1);
}
var8 = NEW_nitc__AParExprs(&type_nitc__AParExprs);
{
nitc__parser_prod___AParExprs___init_aparexprs(var8, var_toparnode2, var_listnode3, var_tcparnode4); /* Direct call parser_prod$AParExprs$init_aparexprs on <var8:AParExprs>*/
}
var_pexprsnode1 = var8;
var_node_list = var_pexprsnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction442> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction444$action for (self: ReduceAction444, Parser) */
void nitc__parser___nitc__parser__ReduceAction444___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11460);
fatal_exit(1);
}
if (var_pexprnode2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_pexprnode2,((val*)NULL)) on <var_pexprnode2:nullable Object(nullable AExpr)> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_pexprnode2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pexprnode2, var_other); /* == on <var_pexprnode2:nullable Object(AExpr)>*/
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var8 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var8, var_listnode3); /* Direct call parser_prod$AListExprs$init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode1 = var8;
var_node_list = var_pexprsnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction444> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction446$action for (self: ReduceAction446, Parser) */
void nitc__parser___nitc__parser__ReduceAction446___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[Object]>*/
}
var_listnode2 = var;
var1 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var1, var_listnode2); /* Direct call parser_prod$AListExprs$init_alistexprs on <var1:AListExprs>*/
}
var_pexprsnode1 = var1;
var_node_list = var_pexprsnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction446> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction447$action for (self: ReduceAction447, Parser) */
void nitc__parser___nitc__parser__ReduceAction447___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode4 = var4;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nitc__TObra.color;
idtype = type_nullable__nitc__TObra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11495);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11497);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tcbranode5 = var_nodearraylist4;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype11 = type_nullable__nitc__TCbra.color;
idtype12 = type_nullable__nitc__TCbra.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11500);
fatal_exit(1);
}
var13 = NEW_nitc__ABraExprs(&type_nitc__ABraExprs);
{
nitc__parser_prod___ABraExprs___init_abraexprs(var13, var_tobranode2, var_listnode4, var_tcbranode5); /* Direct call parser_prod$ABraExprs$init_abraexprs on <var13:ABraExprs>*/
}
var_pexprsnode1 = var13;
var_node_list = var_pexprsnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction447> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction449$action for (self: ReduceAction449, Parser) */
void nitc__parser___nitc__parser__ReduceAction449___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11521);
fatal_exit(1);
}
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode1&3)?class_info[((long)var_pexprnode1&3)]:var_pexprnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode1, ((val*)NULL)); /* != on <var_pexprnode1:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode1); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction449> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction450$action for (self: ReduceAction450, Parser) */
void nitc__parser___nitc__parser__ReduceAction450___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction450> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction451$action for (self: ReduceAction451, Parser) */
void nitc__parser___nitc__parser__ReduceAction451___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode2 = var5;
var_listnode1 = var_nodearraylist3;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11556);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var7;
var_node_list = var_listnode2;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction451> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction452$action for (self: ReduceAction452, Parser) */
void nitc__parser___nitc__parser__ReduceAction452___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11570);
fatal_exit(1);
}
{
var3 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode2, var_listnode1);
}
var_listnode2 = var3;
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction452> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction453$action for (self: ReduceAction453, Parser) */
void nitc__parser___nitc__parser__ReduceAction453___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tidnode1 = var_nodearraylist1;
if (var_tidnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tidnode1&3)?class_info[((long)var_tidnode1&3)]:var_tidnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tidnode1, ((val*)NULL)); /* != on <var_tidnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_tidnode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction453> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction454$action for (self: ReduceAction454, Parser) */
void nitc__parser___nitc__parser__ReduceAction454___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode3 = var4;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11602);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist4;
{
var6 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var6;
if (var_tidnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var7 = var8;
}
if (var7){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction454> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction455$action for (self: ReduceAction455, Parser) */
void nitc__parser___nitc__parser__ReduceAction455___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_tidnode4 = var_nodearraylist1;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype = type_nullable__nitc__TId.color;
idtype = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11620);
fatal_exit(1);
}
var3 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var3, ((val*)NULL), var_listnode3, var_tidnode4); /* Direct call parser_prod$AModuleName$init_amodulename on <var3:AModuleName>*/
}
var_pmodulenamenode1 = var3;
var_node_list = var_pmodulenamenode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction455> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction456$action for (self: ReduceAction456, Parser) */
void nitc__parser___nitc__parser__ReduceAction456___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode4 = var2;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11639);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var4;
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype6 = type_nullable__nitc__TId.color;
idtype7 = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11642);
fatal_exit(1);
}
var8 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var8, ((val*)NULL), var_listnode4, var_tidnode5); /* Direct call parser_prod$AModuleName$init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction456> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction457$action for (self: ReduceAction457, Parser) */
void nitc__parser___nitc__parser__ReduceAction457___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nitc__TQuad.color;
idtype = type_nullable__nitc__TQuad.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11662);
fatal_exit(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype6 = type_nullable__nitc__TId.color;
idtype7 = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11664);
fatal_exit(1);
}
var8 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var8, var_tquadnode2, var_listnode3, var_tidnode4); /* Direct call parser_prod$AModuleName$init_amodulename on <var8:AModuleName>*/
}
var_pmodulenamenode1 = var8;
var_node_list = var_pmodulenamenode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction457> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction458$action for (self: ReduceAction458, Parser) */
void nitc__parser___nitc__parser__ReduceAction458___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode4 = var4;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable__nitc__TQuad.color;
idtype = type_nullable__nitc__TQuad.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11685);
fatal_exit(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_core__Array__core__Object.color;
idtype8 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11687);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var9;
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11690);
fatal_exit(1);
}
var13 = NEW_nitc__AModuleName(&type_nitc__AModuleName);
{
nitc__parser_prod___AModuleName___init_amodulename(var13, var_tquadnode2, var_listnode4, var_tidnode5); /* Direct call parser_prod$AModuleName$init_amodulename on <var13:AModuleName>*/
}
var_pmodulenamenode1 = var13;
var_node_list = var_pmodulenamenode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction458> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction459$action for (self: ReduceAction459, Parser) */
void nitc__parser___nitc__parser__ReduceAction459___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11708);
fatal_exit(1);
}
var3 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var3, var_listnode2, var_tclassidnode3); /* Direct call parser_prod$AQualified$init_aqualified on <var3:AQualified>*/
}
var_pqualifiednode1 = var3;
var_node_list = var_pqualifiednode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction459> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction460$action for (self: ReduceAction460, Parser) */
void nitc__parser___nitc__parser__ReduceAction460___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode2 = var_nodearraylist1;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11726);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var_tclassidnode4 = var_nodearraylist2;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nitc__TClassid.color;
idtype7 = type_nullable__nitc__TClassid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11729);
fatal_exit(1);
}
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode3, var_tclassidnode4); /* Direct call parser_prod$AQualified$init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode1 = var8;
var_node_list = var_pqualifiednode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction460> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction461$action for (self: ReduceAction461, Parser) */
void nitc__parser___nitc__parser__ReduceAction461___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11746);
fatal_exit(1);
}
{
var3 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var3;
var4 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var4, var_listnode3, ((val*)NULL)); /* Direct call parser_prod$AQualified$init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode1 = var4;
var_node_list = var_pqualifiednode1;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction461> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction463$action for (self: ReduceAction463, Parser) */
void nitc__parser___nitc__parser__ReduceAction463___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode3 == NULL) {
var1 = 1;
} else {
if(cltype >= (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_tclassidnode3&3)?type_info[((long)var_tclassidnode3&3)]:var_tclassidnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11763);
fatal_exit(1);
}
var2 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var2, ((val*)NULL), var_tclassidnode3); /* Direct call parser_prod$AQclassid$init_aqclassid on <var2:AQclassid>*/
}
var_pqclassidnode1 = var2;
var_node_list = var_pqclassidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction463> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction464$action for (self: ReduceAction464, Parser) */
void nitc__parser___nitc__parser__ReduceAction464___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tclassidnode4 /* var tclassidnode4: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tclassidnode5 /* var tclassidnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
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
var_listnode3 = var2;
var_tclassidnode4 = var_nodearraylist1;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype = type_nullable__nitc__TClassid.color;
idtype = type_nullable__nitc__TClassid.id;
if(var_tclassidnode4 == NULL) {
var3 = 1;
} else {
if(cltype >= (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tclassidnode4&3)?type_info[((long)var_tclassidnode4&3)]:var_tclassidnode4->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11781);
fatal_exit(1);
}
var4 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var4, var_listnode3, var_tclassidnode4); /* Direct call parser_prod$AQualified$init_aqualified on <var4:AQualified>*/
}
var_pqualifiednode2 = var4;
var_tclassidnode5 = var_nodearraylist2;
/* <var_tclassidnode5:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nitc__TClassid.color;
idtype7 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11787);
fatal_exit(1);
}
var8 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var8, var_pqualifiednode2, var_tclassidnode5); /* Direct call parser_prod$AQclassid$init_aqclassid on <var8:AQclassid>*/
}
var_pqclassidnode1 = var8;
var_node_list = var_pqclassidnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction464> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction465$action for (self: ReduceAction465, Parser) */
void nitc__parser___nitc__parser__ReduceAction465___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var_tclassidnode5 /* var tclassidnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
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
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
if(var_listnode3 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_listnode3&3)?type_info[((long)var_listnode3&3)]:var_listnode3->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11806);
fatal_exit(1);
}
{
var5 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var5;
var_tclassidnode5 = var_nodearraylist2;
/* <var_tclassidnode5:nullable Object> isa nullable TClassid */
cltype7 = type_nullable__nitc__TClassid.color;
idtype8 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode5 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tclassidnode5&3)?type_info[((long)var_tclassidnode5&3)]:var_tclassidnode5->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11809);
fatal_exit(1);
}
var9 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var9, var_listnode4, var_tclassidnode5); /* Direct call parser_prod$AQualified$init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode2 = var9;
var_tclassidnode6 = var_nodearraylist3;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype11 = type_nullable__nitc__TClassid.color;
idtype12 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11815);
fatal_exit(1);
}
var13 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var13, var_pqualifiednode2, var_tclassidnode6); /* Direct call parser_prod$AQclassid$init_aqclassid on <var13:AQclassid>*/
}
var_pqclassidnode1 = var13;
var_node_list = var_pqclassidnode1;
var14 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction465> */
{
var15 = nitc___nitc__Parser___go_to(var_p, var14);
}
{
nitc___nitc__Parser___push(var_p, var15, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction466$action for (self: ReduceAction466, Parser) */
void nitc__parser___nitc__parser__ReduceAction466___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQclassid */;
val* var_pqclassidnode1 /* var pqclassidnode1: nullable AQclassid */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var_listnode4 = var2;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11833);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var4;
var5 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var5, var_listnode4, ((val*)NULL)); /* Direct call parser_prod$AQualified$init_aqualified on <var5:AQualified>*/
}
var_pqualifiednode2 = var5;
var_tclassidnode6 = var_nodearraylist2;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype7 = type_nullable__nitc__TClassid.color;
idtype8 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11840);
fatal_exit(1);
}
var9 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
nitc__parser_prod___AQclassid___init_aqclassid(var9, var_pqualifiednode2, var_tclassidnode6); /* Direct call parser_prod$AQclassid$init_aqclassid on <var9:AQclassid>*/
}
var_pqclassidnode1 = var9;
var_node_list = var_pqclassidnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction466> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction467$action for (self: ReduceAction467, Parser) */
void nitc__parser___nitc__parser__ReduceAction467___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pmethidnode1 = var_nodearraylist1;
var_node_list = var_pmethidnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction467> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction468$action for (self: ReduceAction468, Parser) */
void nitc__parser___nitc__parser__ReduceAction468___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pmethidnode1 = var_nodearraylist2;
var_node_list = var_pmethidnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction468> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction469$action for (self: ReduceAction469, Parser) */
void nitc__parser___nitc__parser__ReduceAction469___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pmethidnode1 = var_nodearraylist3;
var_node_list = var_pmethidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction469> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction471$action for (self: ReduceAction471, Parser) */
void nitc__parser___nitc__parser__ReduceAction471___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction471> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction472$action for (self: ReduceAction472, Parser) */
void nitc__parser___nitc__parser__ReduceAction472___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction472> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction474$action for (self: ReduceAction474, Parser) */
void nitc__parser___nitc__parser__ReduceAction474___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_tkwendnode1 = var_nodearraylist1;
var_node_list = var_tkwendnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction474> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction475$action for (self: ReduceAction475, Parser) */
void nitc__parser___nitc__parser__ReduceAction475___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
{
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction475> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction478$action for (self: ReduceAction478, Parser) */
void nitc__parser___nitc__parser__ReduceAction478___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode3 = var1;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11939);
fatal_exit(1);
}
{
var3 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var3;
var4 = NEW_nitc__ADoc(&type_nitc__ADoc);
{
nitc__parser_prod___ADoc___init_adoc(var4, var_listnode3); /* Direct call parser_prod$ADoc$init_adoc on <var4:ADoc>*/
}
var_pdocnode1 = var4;
var_node_list = var_pdocnode1;
var5 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction478> */
{
var6 = nitc___nitc__Parser___go_to(var_p, var5);
}
{
nitc___nitc__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction479$action for (self: ReduceAction479, Parser) */
void nitc__parser___nitc__parser__ReduceAction479___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 11957);
fatal_exit(1);
}
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var4;
var5 = NEW_nitc__ADoc(&type_nitc__ADoc);
{
nitc__parser_prod___ADoc___init_adoc(var5, var_listnode3); /* Direct call parser_prod$ADoc$init_adoc on <var5:ADoc>*/
}
var_pdocnode1 = var5;
var_node_list = var_pdocnode1;
var6 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction479> */
{
var7 = nitc___nitc__Parser___go_to(var_p, var6);
}
{
nitc___nitc__Parser___push(var_p, var7, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction482$action for (self: ReduceAction482, Parser) */
void nitc__parser___nitc__parser__ReduceAction482___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_node_list = ((val*)NULL);
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction482> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction484$action for (self: ReduceAction484, Parser) */
void nitc__parser___nitc__parser__ReduceAction484___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_node_list = ((val*)NULL);
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction484> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction485$action for (self: ReduceAction485, Parser) */
void nitc__parser___nitc__parser__ReduceAction485___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pdocnode1 = var_nodearraylist2;
var_node_list = var_pdocnode1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction485> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction486$action for (self: ReduceAction486, Parser) */
void nitc__parser___nitc__parser__ReduceAction486___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode1 = var_nodearraylist3;
var_node_list = var_pdocnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction486> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction488$action for (self: ReduceAction488, Parser) */
void nitc__parser___nitc__parser__ReduceAction488___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode1 = var_nodearraylist4;
var_node_list = var_pdocnode1;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction488> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction490$action for (self: ReduceAction490, Parser) */
void nitc__parser___nitc__parser__ReduceAction490___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var_pdocnode1 = var_nodearraylist1;
var_node_list = var_pdocnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction490> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction491$action for (self: ReduceAction491, Parser) */
void nitc__parser___nitc__parser__ReduceAction491___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction491> */
{
var1 = nitc___nitc__Parser___go_to(var_p, var);
}
{
nitc___nitc__Parser___push(var_p, var1, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction494$action for (self: ReduceAction494, Parser) */
void nitc__parser___nitc__parser__ReduceAction494___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction494> */
{
var3 = nitc___nitc__Parser___go_to(var_p, var2);
}
{
nitc___nitc__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction856$action for (self: ReduceAction856, Parser) */
void nitc__parser___nitc__parser__ReduceAction856___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable__nitc__TKwisset.color;
idtype = type_nullable__nitc__TKwisset.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12067);
fatal_exit(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable__nitc__AExpr.color;
idtype7 = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12069);
fatal_exit(1);
}
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable__nitc__TAttrid.color;
idtype10 = type_nullable__nitc__TAttrid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12071);
fatal_exit(1);
}
var11 = NEW_nitc__AIssetAttrExpr(&type_nitc__AIssetAttrExpr);
{
nitc__parser_prod___AIssetAttrExpr___init_aissetattrexpr(var11, var_tkwissetnode2, var_pexprnode3, var_tattridnode4); /* Direct call parser_prod$AIssetAttrExpr$init_aissetattrexpr on <var11:AIssetAttrExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction856> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction858$action for (self: ReduceAction858, Parser) */
void nitc__parser___nitc__parser__ReduceAction858___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12090);
fatal_exit(1);
}
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype5 = type_nullable__nitc__TAttrid.color;
idtype6 = type_nullable__nitc__TAttrid.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12092);
fatal_exit(1);
}
var7 = NEW_nitc__AAttrExpr(&type_nitc__AAttrExpr);
{
nitc__parser_prod___AAttrExpr___init_aattrexpr(var7, var_pexprnode2, var_tattridnode3); /* Direct call parser_prod$AAttrExpr$init_aattrexpr on <var7:AAttrExpr>*/
}
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction858> */
{
var9 = nitc___nitc__Parser___go_to(var_p, var8);
}
{
nitc___nitc__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction859$action for (self: ReduceAction859, Parser) */
void nitc__parser___nitc__parser__ReduceAction859___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12110);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype5 = type_nullable__nitc__TId.color;
idtype6 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12112);
fatal_exit(1);
}
var7 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var7, ((val*)NULL), var_tidnode5); /* Direct call parser_prod$AQid$init_aqid on <var7:AQid>*/
}
var_pqidnode3 = var7;
var_pexprsnode6 = var_nodearraylist3;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype9 = type_nullable__nitc__AExprs.color;
idtype10 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_pexprsnode6&3)?type_info[((long)var_pexprsnode6&3)]:var_pexprsnode6->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12118);
fatal_exit(1);
}
var11 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var11, var_pexprnode2, var_pqidnode3, var_pexprsnode6); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var11:ACallExpr>*/
}
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction859> */
{
var13 = nitc___nitc__Parser___go_to(var_p, var12);
}
{
nitc___nitc__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction860$action for (self: ReduceAction860, Parser) */
void nitc__parser___nitc__parser__ReduceAction860___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
val* var6 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var7 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var8 /* : AListExprs */;
val* var_pexprsnode6 /* var pexprsnode6: nullable AListExprs */;
val* var9 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12136);
fatal_exit(1);
}
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype4 = type_nullable__nitc__TId.color;
idtype5 = type_nullable__nitc__TId.id;
if(var_tidnode5 == NULL) {
var3 = 1;
} else {
if(cltype4 >= (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_tidnode5&3)?type_info[((long)var_tidnode5&3)]:var_tidnode5->type)->type_table[cltype4] == idtype5;
}
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12138);
fatal_exit(1);
}
var6 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var6, ((val*)NULL), var_tidnode5); /* Direct call parser_prod$AQid$init_aqid on <var6:AQid>*/
}
var_pqidnode3 = var6;
var7 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[Object]>*/
}
var_listnode7 = var7;
var8 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var8, var_listnode7); /* Direct call parser_prod$AListExprs$init_alistexprs on <var8:AListExprs>*/
}
var_pexprsnode6 = var8;
var9 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var9, var_pexprnode2, var_pqidnode3, var_pexprsnode6); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var9:ACallExpr>*/
}
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction860> */
{
var11 = nitc___nitc__Parser___go_to(var_p, var10);
}
{
nitc___nitc__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction861$action for (self: ReduceAction861, Parser) */
void nitc__parser___nitc__parser__ReduceAction861___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode8 /* var pexprsnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12166);
fatal_exit(1);
}
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[Object]>*/
}
var_listnode5 = var5;
var_tclassidnode6 = var_nodearraylist2;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype7 = type_nullable__nitc__TClassid.color;
idtype8 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var6 = 1;
} else {
if(cltype7 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var6 = 0;
} else {
var6 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12169);
fatal_exit(1);
}
var9 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var9, var_listnode5, var_tclassidnode6); /* Direct call parser_prod$AQualified$init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode4 = var9;
var_tidnode7 = var_nodearraylist3;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12175);
fatal_exit(1);
}
var13 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var13, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod$AQid$init_aqid on <var13:AQid>*/
}
var_pqidnode3 = var13;
var_pexprsnode8 = var_nodearraylist4;
/* <var_pexprsnode8:nullable Object> isa nullable AExprs */
cltype15 = type_nullable__nitc__AExprs.color;
idtype16 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_pexprsnode8&3)?type_info[((long)var_pexprsnode8&3)]:var_pexprsnode8->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12181);
fatal_exit(1);
}
var17 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var17, var_pexprnode2, var_pqidnode3, var_pexprsnode8); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var17:ACallExpr>*/
}
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction861> */
{
var19 = nitc___nitc__Parser___go_to(var_p, var18);
}
{
nitc___nitc__Parser___push(var_p, var19, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction862$action for (self: ReduceAction862, Parser) */
void nitc__parser___nitc__parser__ReduceAction862___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode7 /* var tidnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var13 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var14 /* : AListExprs */;
val* var_pexprsnode8 /* var pexprsnode8: nullable AListExprs */;
val* var15 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12200);
fatal_exit(1);
}
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[Object]>*/
}
var_listnode5 = var4;
var_tclassidnode6 = var_nodearraylist2;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype6 = type_nullable__nitc__TClassid.color;
idtype7 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode6 == NULL) {
var5 = 1;
} else {
if(cltype6 >= (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->table_size) {
var5 = 0;
} else {
var5 = (((long)var_tclassidnode6&3)?type_info[((long)var_tclassidnode6&3)]:var_tclassidnode6->type)->type_table[cltype6] == idtype7;
}
}
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12203);
fatal_exit(1);
}
var8 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var8, var_listnode5, var_tclassidnode6); /* Direct call parser_prod$AQualified$init_aqualified on <var8:AQualified>*/
}
var_pqualifiednode4 = var8;
var_tidnode7 = var_nodearraylist3;
/* <var_tidnode7:nullable Object> isa nullable TId */
cltype10 = type_nullable__nitc__TId.color;
idtype11 = type_nullable__nitc__TId.id;
if(var_tidnode7 == NULL) {
var9 = 1;
} else {
if(cltype10 >= (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_tidnode7&3)?type_info[((long)var_tidnode7&3)]:var_tidnode7->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12209);
fatal_exit(1);
}
var12 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var12, var_pqualifiednode4, var_tidnode7); /* Direct call parser_prod$AQid$init_aqid on <var12:AQid>*/
}
var_pqidnode3 = var12;
var13 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var13); /* Direct call array$Array$init on <var13:Array[Object]>*/
}
var_listnode9 = var13;
var14 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var14, var_listnode9); /* Direct call parser_prod$AListExprs$init_alistexprs on <var14:AListExprs>*/
}
var_pexprsnode8 = var14;
var15 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var15, var_pexprnode2, var_pqidnode3, var_pexprsnode8); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var15:ACallExpr>*/
}
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction862> */
{
var17 = nitc___nitc__Parser___go_to(var_p, var16);
}
{
nitc___nitc__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction863$action for (self: ReduceAction863, Parser) */
void nitc__parser___nitc__parser__ReduceAction863___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12238);
fatal_exit(1);
}
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[Object]>*/
}
var_listnode6 = var6;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype8 = type_core__Array__core__Object.color;
idtype9 = type_core__Array__core__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_listnode5&3)?type_info[((long)var_listnode5&3)]:var_listnode5->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12241);
fatal_exit(1);
}
{
var10 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var10;
var_tclassidnode7 = var_nodearraylist3;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype12 = type_nullable__nitc__TClassid.color;
idtype13 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12244);
fatal_exit(1);
}
var14 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var14, var_listnode6, var_tclassidnode7); /* Direct call parser_prod$AQualified$init_aqualified on <var14:AQualified>*/
}
var_pqualifiednode4 = var14;
var_tidnode8 = var_nodearraylist4;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype16 = type_nullable__nitc__TId.color;
idtype17 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12250);
fatal_exit(1);
}
var18 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var18, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod$AQid$init_aqid on <var18:AQid>*/
}
var_pqidnode3 = var18;
var_pexprsnode9 = var_nodearraylist5;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype20 = type_nullable__nitc__AExprs.color;
idtype21 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var19 = 0;
} else {
var19 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype20] == idtype21;
}
}
if (unlikely(!var19)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12256);
fatal_exit(1);
}
var22 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var22, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var22:ACallExpr>*/
}
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction863> */
{
var24 = nitc___nitc__Parser___go_to(var_p, var23);
}
{
nitc___nitc__Parser___push(var_p, var24, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction864$action for (self: ReduceAction864, Parser) */
void nitc__parser___nitc__parser__ReduceAction864___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var_tclassidnode7 /* var tclassidnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var18 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var19 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var20 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12276);
fatal_exit(1);
}
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_listnode5 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12279);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var_tclassidnode7 = var_nodearraylist3;
/* <var_tclassidnode7:nullable Object> isa nullable TClassid */
cltype11 = type_nullable__nitc__TClassid.color;
idtype12 = type_nullable__nitc__TClassid.id;
if(var_tclassidnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tclassidnode7&3)?type_info[((long)var_tclassidnode7&3)]:var_tclassidnode7->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12282);
fatal_exit(1);
}
var13 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var13, var_listnode6, var_tclassidnode7); /* Direct call parser_prod$AQualified$init_aqualified on <var13:AQualified>*/
}
var_pqualifiednode4 = var13;
var_tidnode8 = var_nodearraylist4;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype15 = type_nullable__nitc__TId.color;
idtype16 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12288);
fatal_exit(1);
}
var17 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var17, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod$AQid$init_aqid on <var17:AQid>*/
}
var_pqidnode3 = var17;
var18 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var18); /* Direct call array$Array$init on <var18:Array[Object]>*/
}
var_listnode10 = var18;
var19 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var19, var_listnode10); /* Direct call parser_prod$AListExprs$init_alistexprs on <var19:AListExprs>*/
}
var_pexprsnode9 = var19;
var20 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var20, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var20:ACallExpr>*/
}
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction864> */
{
var22 = nitc___nitc__Parser___go_to(var_p, var21);
}
{
nitc___nitc__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction865$action for (self: ReduceAction865, Parser) */
void nitc__parser___nitc__parser__ReduceAction865___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var10 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var_pexprsnode9 /* var pexprsnode9: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12316);
fatal_exit(1);
}
var5 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[Object]>*/
}
var_listnode6 = var5;
var_listnode5 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12319);
fatal_exit(1);
}
{
var9 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var9;
var10 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var10, var_listnode6, ((val*)NULL)); /* Direct call parser_prod$AQualified$init_aqualified on <var10:AQualified>*/
}
var_pqualifiednode4 = var10;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype12 = type_nullable__nitc__TId.color;
idtype13 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var11 = 1;
} else {
if(cltype12 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var11 = 0;
} else {
var11 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12326);
fatal_exit(1);
}
var14 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var14, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod$AQid$init_aqid on <var14:AQid>*/
}
var_pqidnode3 = var14;
var_pexprsnode9 = var_nodearraylist4;
/* <var_pexprsnode9:nullable Object> isa nullable AExprs */
cltype16 = type_nullable__nitc__AExprs.color;
idtype17 = type_nullable__nitc__AExprs.id;
if(var_pexprsnode9 == NULL) {
var15 = 1;
} else {
if(cltype16 >= (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var_pexprsnode9&3)?type_info[((long)var_pexprsnode9&3)]:var_pexprsnode9->type)->type_table[cltype16] == idtype17;
}
}
if (unlikely(!var15)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12332);
fatal_exit(1);
}
var18 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var18, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var18:ACallExpr>*/
}
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction865> */
{
var20 = nitc___nitc__Parser___go_to(var_p, var19);
}
{
nitc___nitc__Parser___push(var_p, var20, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction866$action for (self: ReduceAction866, Parser) */
void nitc__parser___nitc__parser__ReduceAction866___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var9 /* : AQualified */;
val* var_pqualifiednode4 /* var pqualifiednode4: nullable AQualified */;
val* var_tidnode8 /* var tidnode8: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AQid */;
val* var_pqidnode3 /* var pqidnode3: nullable AQid */;
val* var14 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var15 /* : AListExprs */;
val* var_pexprsnode9 /* var pexprsnode9: nullable AListExprs */;
val* var16 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12351);
fatal_exit(1);
}
var4 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[Object]>*/
}
var_listnode6 = var4;
var_listnode5 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12354);
fatal_exit(1);
}
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode6, var_listnode5);
}
var_listnode6 = var8;
var9 = NEW_nitc__AQualified(&type_nitc__AQualified);
{
nitc__parser_prod___AQualified___init_aqualified(var9, var_listnode6, ((val*)NULL)); /* Direct call parser_prod$AQualified$init_aqualified on <var9:AQualified>*/
}
var_pqualifiednode4 = var9;
var_tidnode8 = var_nodearraylist3;
/* <var_tidnode8:nullable Object> isa nullable TId */
cltype11 = type_nullable__nitc__TId.color;
idtype12 = type_nullable__nitc__TId.id;
if(var_tidnode8 == NULL) {
var10 = 1;
} else {
if(cltype11 >= (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->table_size) {
var10 = 0;
} else {
var10 = (((long)var_tidnode8&3)?type_info[((long)var_tidnode8&3)]:var_tidnode8->type)->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12361);
fatal_exit(1);
}
var13 = NEW_nitc__AQid(&type_nitc__AQid);
{
nitc__parser_prod___AQid___init_aqid(var13, var_pqualifiednode4, var_tidnode8); /* Direct call parser_prod$AQid$init_aqid on <var13:AQid>*/
}
var_pqidnode3 = var13;
var14 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var14); /* Direct call array$Array$init on <var14:Array[Object]>*/
}
var_listnode10 = var14;
var15 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var15, var_listnode10); /* Direct call parser_prod$AListExprs$init_alistexprs on <var15:AListExprs>*/
}
var_pexprsnode9 = var15;
var16 = NEW_nitc__ACallExpr(&type_nitc__ACallExpr);
{
nitc__parser_prod___ACallExpr___init_acallexpr(var16, var_pexprnode2, var_pqidnode3, var_pexprsnode9); /* Direct call parser_prod$ACallExpr$init_acallexpr on <var16:ACallExpr>*/
}
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction866> */
{
var18 = nitc___nitc__Parser___go_to(var_p, var17);
}
{
nitc___nitc__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction869$action for (self: ReduceAction869, Parser) */
void nitc__parser___nitc__parser__ReduceAction869___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12388);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype5 = type_nullable__nitc__TKwinit.color;
idtype6 = type_nullable__nitc__TKwinit.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12390);
fatal_exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable__nitc__AExprs.color;
idtype9 = type_nullable__nitc__AExprs.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12392);
fatal_exit(1);
}
var10 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod$AInitExpr$init_ainitexpr on <var10:AInitExpr>*/
}
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction869> */
{
var12 = nitc___nitc__Parser___go_to(var_p, var11);
}
{
nitc___nitc__Parser___push(var_p, var12, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction870$action for (self: ReduceAction870, Parser) */
void nitc__parser___nitc__parser__ReduceAction870___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist2 = var;
{
var1 = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable__nitc__AExpr.color;
idtype = type_nullable__nitc__AExpr.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12410);
fatal_exit(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype4 = type_nullable__nitc__TKwinit.color;
idtype5 = type_nullable__nitc__TKwinit.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12412);
fatal_exit(1);
}
var6 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[Object]>*/
}
var_listnode5 = var6;
var7 = NEW_nitc__AListExprs(&type_nitc__AListExprs);
{
nitc__parser_prod___AListExprs___init_alistexprs(var7, var_listnode5); /* Direct call parser_prod$AListExprs$init_alistexprs on <var7:AListExprs>*/
}
var_pexprsnode4 = var7;
var8 = NEW_nitc__AInitExpr(&type_nitc__AInitExpr);
{
nitc__parser_prod___AInitExpr___init_ainitexpr(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4); /* Direct call parser_prod$AInitExpr$init_ainitexpr on <var8:AInitExpr>*/
}
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction870> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction894$action for (self: ReduceAction894, Parser) */
void nitc__parser___nitc__parser__ReduceAction894___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction894> */
{
var4 = nitc___nitc__Parser___go_to(var_p, var3);
}
{
nitc___nitc__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction895$action for (self: ReduceAction895, Parser) */
void nitc__parser___nitc__parser__ReduceAction895___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var_node_list /* var node_list: nullable Object */;
val* var /* : AImplicitSelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImplicitSelfExpr */;
long var1 /* : Int */;
long var2 /* : Int */;
var_p = p0;
var_node_list = ((val*)NULL);
var = NEW_nitc__AImplicitSelfExpr(&type_nitc__AImplicitSelfExpr);
{
nitc__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(var); /* Direct call parser_prod$AImplicitSelfExpr$init_aimplicitselfexpr on <var:AImplicitSelfExpr>*/
}
var_pexprnode1 = var;
var_node_list = var_pexprnode1;
var1 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction895> */
{
var2 = nitc___nitc__Parser___go_to(var_p, var1);
}
{
nitc___nitc__Parser___push(var_p, var2, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1063$action for (self: ReduceAction1063, Parser) */
void nitc__parser___nitc__parser__ReduceAction1063___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pimportnode1 = var_nodearraylist1;
if (var_pimportnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode1&3)?class_info[((long)var_pimportnode1&3)]:var_pimportnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pimportnode1, ((val*)NULL)); /* != on <var_pimportnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pimportnode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1063> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1064$action for (self: ReduceAction1064, Parser) */
void nitc__parser___nitc__parser__ReduceAction1064___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12473);
fatal_exit(1);
}
var_pimportnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pimportnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pimportnode2&3)?class_info[((long)var_pimportnode2&3)]:var_pimportnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pimportnode2, ((val*)NULL)); /* != on <var_pimportnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pimportnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1064> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1065$action for (self: ReduceAction1065, Parser) */
void nitc__parser___nitc__parser__ReduceAction1065___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pexterncodeblocknode1 = var_nodearraylist1;
if (var_pexterncodeblocknode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode1&3)?class_info[((long)var_pexterncodeblocknode1&3)]:var_pexterncodeblocknode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncodeblocknode1, ((val*)NULL)); /* != on <var_pexterncodeblocknode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncodeblocknode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1065> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1066$action for (self: ReduceAction1066, Parser) */
void nitc__parser___nitc__parser__ReduceAction1066___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12507);
fatal_exit(1);
}
var_pexterncodeblocknode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexterncodeblocknode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncodeblocknode2&3)?class_info[((long)var_pexterncodeblocknode2&3)]:var_pexterncodeblocknode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncodeblocknode2, ((val*)NULL)); /* != on <var_pexterncodeblocknode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncodeblocknode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1066> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1067$action for (self: ReduceAction1067, Parser) */
void nitc__parser___nitc__parser__ReduceAction1067___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pclassdefnode1 = var_nodearraylist1;
if (var_pclassdefnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode1&3)?class_info[((long)var_pclassdefnode1&3)]:var_pclassdefnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pclassdefnode1, ((val*)NULL)); /* != on <var_pclassdefnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pclassdefnode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1067> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1068$action for (self: ReduceAction1068, Parser) */
void nitc__parser___nitc__parser__ReduceAction1068___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12541);
fatal_exit(1);
}
var_pclassdefnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pclassdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pclassdefnode2&3)?class_info[((long)var_pclassdefnode2&3)]:var_pclassdefnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pclassdefnode2, ((val*)NULL)); /* != on <var_pclassdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pclassdefnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1068> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1070$action for (self: ReduceAction1070, Parser) */
void nitc__parser___nitc__parser__ReduceAction1070___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12560);
fatal_exit(1);
}
var_pformaldefnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pformaldefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pformaldefnode2&3)?class_info[((long)var_pformaldefnode2&3)]:var_pformaldefnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pformaldefnode2, ((val*)NULL)); /* != on <var_pformaldefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pformaldefnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1070> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1072$action for (self: ReduceAction1072, Parser) */
void nitc__parser___nitc__parser__ReduceAction1072___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12579);
fatal_exit(1);
}
var_ppropdefnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_ppropdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ppropdefnode2&3)?class_info[((long)var_ppropdefnode2&3)]:var_ppropdefnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_ppropdefnode2, ((val*)NULL)); /* != on <var_ppropdefnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_ppropdefnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1072> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1074$action for (self: ReduceAction1074, Parser) */
void nitc__parser___nitc__parser__ReduceAction1074___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12598);
fatal_exit(1);
}
var_pannotationnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pannotationnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pannotationnode2&3)?class_info[((long)var_pannotationnode2&3)]:var_pannotationnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pannotationnode2, ((val*)NULL)); /* != on <var_pannotationnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pannotationnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1074> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1075$action for (self: ReduceAction1075, Parser) */
void nitc__parser___nitc__parser__ReduceAction1075___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pparamnode1 = var_nodearraylist1;
if (var_pparamnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode1&3)?class_info[((long)var_pparamnode1&3)]:var_pparamnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pparamnode1, ((val*)NULL)); /* != on <var_pparamnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pparamnode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1075> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1076$action for (self: ReduceAction1076, Parser) */
void nitc__parser___nitc__parser__ReduceAction1076___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12632);
fatal_exit(1);
}
var_pparamnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pparamnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pparamnode2&3)?class_info[((long)var_pparamnode2&3)]:var_pparamnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pparamnode2, ((val*)NULL)); /* != on <var_pparamnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pparamnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1076> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1077$action for (self: ReduceAction1077, Parser) */
void nitc__parser___nitc__parser__ReduceAction1077___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_pexterncallnode1 = var_nodearraylist1;
if (var_pexterncallnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode1&3)?class_info[((long)var_pexterncallnode1&3)]:var_pexterncallnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncallnode1, ((val*)NULL)); /* != on <var_pexterncallnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_pexterncallnode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1077> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1078$action for (self: ReduceAction1078, Parser) */
void nitc__parser___nitc__parser__ReduceAction1078___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12666);
fatal_exit(1);
}
var_pexterncallnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexterncallnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexterncallnode2&3)?class_info[((long)var_pexterncallnode2&3)]:var_pexterncallnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexterncallnode2, ((val*)NULL)); /* != on <var_pexterncallnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexterncallnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1078> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1080$action for (self: ReduceAction1080, Parser) */
void nitc__parser___nitc__parser__ReduceAction1080___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12685);
fatal_exit(1);
}
var_ptypenode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_ptypenode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_ptypenode2&3)?class_info[((long)var_ptypenode2&3)]:var_ptypenode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_ptypenode2, ((val*)NULL)); /* != on <var_ptypenode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_ptypenode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1080> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1082$action for (self: ReduceAction1082, Parser) */
void nitc__parser___nitc__parser__ReduceAction1082___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12704);
fatal_exit(1);
}
var_pexprnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_pexprnode2&3)?class_info[((long)var_pexprnode2&3)]:var_pexprnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_pexprnode2, ((val*)NULL)); /* != on <var_pexprnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_pexprnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1082> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1088$action for (self: ReduceAction1088, Parser) */
void nitc__parser___nitc__parser__ReduceAction1088___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12723);
fatal_exit(1);
}
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype5 = type_core__Array__core__Object.color;
idtype6 = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12725);
fatal_exit(1);
}
{
var7 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var7;
{
var8 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1088> */
{
var10 = nitc___nitc__Parser___go_to(var_p, var9);
}
{
nitc___nitc__Parser___push(var_p, var10, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1096$action for (self: ReduceAction1096, Parser) */
void nitc__parser___nitc__parser__ReduceAction1096___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12741);
fatal_exit(1);
}
var_tidnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_tidnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tidnode2&3)?class_info[((long)var_tidnode2&3)]:var_tidnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tidnode2, ((val*)NULL)); /* != on <var_tidnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_tidnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1096> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1097$action for (self: ReduceAction1097, Parser) */
void nitc__parser___nitc__parser__ReduceAction1097___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var = nitc___nitc__Parser___pop(var_p);
}
var_nodearraylist1 = var;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_listnode2 = var1;
var_tcommentnode1 = var_nodearraylist1;
if (var_tcommentnode1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode1&3)?class_info[((long)var_tcommentnode1&3)]:var_tcommentnode1->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tcommentnode1, ((val*)NULL)); /* != on <var_tcommentnode1:nullable Object>*/
var2 = var3;
}
if (var2){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode2, var_tcommentnode1); /* Direct call array$Array$add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var4 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1097> */
{
var5 = nitc___nitc__Parser___go_to(var_p, var4);
}
{
nitc___nitc__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser$ReduceAction1098$action for (self: ReduceAction1098, Parser) */
void nitc__parser___nitc__parser__ReduceAction1098___nitc__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_core__Array__core__Object.color;
idtype = type_core__Array__core__Object.id;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser, 12775);
fatal_exit(1);
}
var_tcommentnode2 = var_nodearraylist2;
{
var4 = nitc__parser_work___nitc__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode1);
}
var_listnode3 = var4;
if (var_tcommentnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_tcommentnode2&3)?class_info[((long)var_tcommentnode2&3)]:var_tcommentnode2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_tcommentnode2, ((val*)NULL)); /* != on <var_tcommentnode2:nullable Object>*/
var5 = var6;
}
if (var5){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_listnode3, var_tcommentnode2); /* Direct call array$Array$add on <var_listnode3:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode3;
var7 = self->attrs[COLOR_nitc__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction1098> */
{
var8 = nitc___nitc__Parser___go_to(var_p, var7);
}
{
nitc___nitc__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work$Parser$push on <var_p:Parser>*/
}
RET_LABEL:;
}
