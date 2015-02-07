#include "nit__parser.sep.0.h"
/* method parser#ReduceAction57#action for (self: ReduceAction57, Parser) */
void nit__parser___nit__parser__ReduceAction57___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2931);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2933);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2935);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable__nit__TKwmeth.color;
idtype19 = type_nullable__nit__TKwmeth.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2937);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2939);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2941);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2943);
show_backtrace(1);
}
var29 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var30, var31, var_pmethidnode8, var_psignaturenode9, var32, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction57> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction58#action for (self: ReduceAction58, Parser) */
void nit__parser___nit__parser__ReduceAction58___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2978);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2980);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2982);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype19 = type_nullable__nit__TKwmeth.color;
idtype20 = type_nullable__nit__TKwmeth.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2984);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype22 = type_nullable__nit__AMethid.color;
idtype23 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2986);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype25 = type_nullable__nit__ASignature.color;
idtype26 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2988);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable__nit__AAnnotations.color;
idtype29 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2990);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype31 = type_nullable__nit__AExpr.color;
idtype32 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 2992);
show_backtrace(1);
}
var33 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
var37 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var34, var35, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var36, var37, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var33:AMethPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var38 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction58> */
{
var39 = nit___nit__Parser___go_to(var_p, var38);
}
{
nit___nit__Parser___push(var_p, var39, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction59#action for (self: ReduceAction59, Parser) */
void nit__parser___nit__parser__ReduceAction59___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
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
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3024);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3026);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3028);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype16 = type_nullable__nit__TKwmeth.color;
idtype17 = type_nullable__nit__TKwmeth.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3030);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype19 = type_nullable__nit__AMethid.color;
idtype20 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pmethidnode8->type->table_size) {
var18 = 0;
} else {
var18 = var_pmethidnode8->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3032);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype22 = type_nullable__nit__ASignature.color;
idtype23 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_psignaturenode9->type->table_size) {
var21 = 0;
} else {
var21 = var_psignaturenode9->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3034);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3036);
show_backtrace(1);
}
var27 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
var32 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var28, var29, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var30, var31, var32); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var27:AMethPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction59> */
{
var34 = nit___nit__Parser___go_to(var_p, var33);
}
{
nit___nit__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction60#action for (self: ReduceAction60, Parser) */
void nit__parser___nit__parser__ReduceAction60___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AMethPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMethPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3067);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable__nit__TKwredef.color;
idtype10 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3069);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable__nit__AVisibility.color;
idtype13 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3071);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable__nit__TKwnew.color;
idtype16 = type_nullable__nit__TKwnew.id;
if(var_tkwnewnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnewnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnewnode7->type->type_table[cltype15] == idtype16;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3073);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype18 = type_nullable__nit__ASignature.color;
idtype19 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_psignaturenode9->type->table_size) {
var17 = 0;
} else {
var17 = var_psignaturenode9->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3075);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable__nit__AAnnotations.color;
idtype22 = type_nullable__nit__AAnnotations.id;
if(var_pannotationsnode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pannotationsnode10->type->table_size) {
var20 = 0;
} else {
var20 = var_pannotationsnode10->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3077);
show_backtrace(1);
}
var23 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var23, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var24, var25, var_tkwnewnode7, var26, var_psignaturenode9, var_pannotationsnode10, var27, var28, var29); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var23:AMethPropdef>*/
}
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction60> */
{
var31 = nit___nit__Parser___go_to(var_p, var30);
}
{
nit___nit__Parser___push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction61#action for (self: ReduceAction61, Parser) */
void nit__parser___nit__parser__ReduceAction61___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var_pmethidnode8 /* var pmethidnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode9 /* var psignaturenode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode10 /* var pannotationsnode10: nullable Object */;
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
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3109);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3111);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3113);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nit__TKwnew.color;
idtype17 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3115);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype19 = type_nullable__nit__AMethid.color;
idtype20 = type_nullable__nit__AMethid.id;
if(var_pmethidnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pmethidnode8->type->table_size) {
var18 = 0;
} else {
var18 = var_pmethidnode8->type->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3117);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype22 = type_nullable__nit__ASignature.color;
idtype23 = type_nullable__nit__ASignature.id;
if(var_psignaturenode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_psignaturenode9->type->table_size) {
var21 = 0;
} else {
var21 = var_psignaturenode9->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3119);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3121);
show_backtrace(1);
}
var27 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
var32 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var28, var29, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var30, var31, var32); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var27:AMethPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction61> */
{
var34 = nit___nit__Parser___go_to(var_p, var33);
}
{
nit___nit__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction62#action for (self: ReduceAction62, Parser) */
void nit__parser___nit__parser__ReduceAction62___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3154);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3156);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3158);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3160);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nit__ASignature.color;
idtype21 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3162);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist7;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nit__AExpr.color;
idtype24 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3164);
show_backtrace(1);
}
var25 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var26, var27, var_tkwnewnode7, var28, var_psignaturenode9, var29, var30, var31, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var25:AMethPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction62> */
{
var33 = nit___nit__Parser___go_to(var_p, var32);
}
{
nit___nit__Parser___push(var_p, var33, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction63#action for (self: ReduceAction63, Parser) */
void nit__parser___nit__parser__ReduceAction63___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3198);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3200);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3202);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable__nit__TKwnew.color;
idtype19 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3204);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3206);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3208);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3210);
show_backtrace(1);
}
var29 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var31, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var32, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction63> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction64#action for (self: ReduceAction64, Parser) */
void nit__parser___nit__parser__ReduceAction64___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3244);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3246);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3248);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable__nit__TKwnew.color;
idtype19 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3250);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable__nit__ASignature.color;
idtype22 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3252);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3254);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3256);
show_backtrace(1);
}
var29 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var31, var_tkwnewnode7, var32, var_psignaturenode9, var_pannotationsnode10, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction64> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction65#action for (self: ReduceAction65, Parser) */
void nit__parser___nit__parser__ReduceAction65___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3291);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3293);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3295);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype19 = type_nullable__nit__TKwnew.color;
idtype20 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3297);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype22 = type_nullable__nit__AMethid.color;
idtype23 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3299);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype25 = type_nullable__nit__ASignature.color;
idtype26 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3301);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable__nit__AAnnotations.color;
idtype29 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3303);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype31 = type_nullable__nit__AExpr.color;
idtype32 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3305);
show_backtrace(1);
}
var33 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
var37 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var34, var35, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var36, var37, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var33:AMethPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var38 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction65> */
{
var39 = nit___nit__Parser___go_to(var_p, var38);
}
{
nit___nit__Parser___push(var_p, var39, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction66#action for (self: ReduceAction66, Parser) */
void nit__parser___nit__parser__ReduceAction66___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3338);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3340);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3342);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable__nit__TKwmeth.color;
idtype18 = type_nullable__nit__TKwmeth.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3344);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3346);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3348);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable__nit__AExternCalls.color;
idtype27 = type_nullable__nit__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3350);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable__nit__AExternCodeBlock.color;
idtype30 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3352);
show_backtrace(1);
}
var31 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
var35 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var32, var33, var_pmethidnode8, var_psignaturenode9, var34, var_pexterncallsnode11, var_pexterncodeblocknode12, var35); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var31:AMethPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction66> */
{
var37 = nit___nit__Parser___go_to(var_p, var36);
}
{
nit___nit__Parser___push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction67#action for (self: ReduceAction67, Parser) */
void nit__parser___nit__parser__ReduceAction67___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3386);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3388);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3390);
show_backtrace(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable__nit__TKwmeth.color;
idtype19 = type_nullable__nit__TKwmeth.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3392);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3394);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3396);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3398);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype30 = type_nullable__nit__AExternCalls.color;
idtype31 = type_nullable__nit__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3400);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable__nit__AExternCodeBlock.color;
idtype34 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3402);
show_backtrace(1);
}
var35 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var36 = NULL;
var37 = NULL;
var38 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var36, var37, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, var38); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var35:AMethPropdef>*/
}
var_ppropdefnode1 = var35;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction67> */
{
var40 = nit___nit__Parser___go_to(var_p, var39);
}
{
nit___nit__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction68#action for (self: ReduceAction68, Parser) */
void nit__parser___nit__parser__ReduceAction68___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3434);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3436);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3438);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype16 = type_nullable__nit__TKwvar.color;
idtype17 = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3440);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype19 = type_nullable__nit__TId.color;
idtype20 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3442);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable__nit__AType.color;
idtype23 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3444);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3446);
show_backtrace(1);
}
var27 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
var28 = NULL;
var29 = NULL;
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var28, var_pannotationsnode9, var29); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var27:AAttrPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction68> */
{
var31 = nit___nit__Parser___go_to(var_p, var30);
}
{
nit___nit__Parser___push(var_p, var31, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction69#action for (self: ReduceAction69, Parser) */
void nit__parser___nit__parser__ReduceAction69___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3478);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3480);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3482);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable__nit__TKwvar.color;
idtype20 = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3484);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype22 = type_nullable__nit__TId.color;
idtype23 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3486);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype25 = type_nullable__nit__AType.color;
idtype26 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3488);
show_backtrace(1);
}
var_pexprnode8 = var_nodearraylist9;
/* <var_pexprnode8:nullable Object> isa nullable AExpr */
cltype28 = type_nullable__nit__AExpr.color;
idtype29 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3490);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist10;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype31 = type_nullable__nit__AAnnotations.color;
idtype32 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3492);
show_backtrace(1);
}
var33 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
var34 = NULL;
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var_pexprnode8, var_pannotationsnode9, var34); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var33:AAttrPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction69> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction70#action for (self: ReduceAction70, Parser) */
void nit__parser___nit__parser__ReduceAction70___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3522);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3524);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3526);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable__nit__TKwvar.color;
idtype18 = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3528);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype20 = type_nullable__nit__TId.color;
idtype21 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3530);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype23 = type_nullable__nit__AType.color;
idtype24 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3532);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype26 = type_nullable__nit__AExpr.color;
idtype27 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3534);
show_backtrace(1);
}
var28 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
var29 = NULL;
var30 = NULL;
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var29, var30, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var28:AAttrPropdef>*/
}
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction70> */
{
var32 = nit___nit__Parser___go_to(var_p, var31);
}
{
nit___nit__Parser___push(var_p, var32, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction71#action for (self: ReduceAction71, Parser) */
void nit__parser___nit__parser__ReduceAction71___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3565);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3567);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3569);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable__nit__TKwvar.color;
idtype19 = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3571);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable__nit__TId.color;
idtype22 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3573);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable__nit__AType.color;
idtype25 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3575);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3577);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist9;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype30 = type_nullable__nit__AExpr.color;
idtype31 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3579);
show_backtrace(1);
}
var32 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
var33 = NULL;
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var33, var_pannotationsnode9, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var32:AAttrPropdef>*/
}
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction71> */
{
var35 = nit___nit__Parser___go_to(var_p, var34);
}
{
nit___nit__Parser___push(var_p, var35, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction72#action for (self: ReduceAction72, Parser) */
void nit__parser___nit__parser__ReduceAction72___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3610);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3612);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3614);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable__nit__TKwvar.color;
idtype19 = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3616);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype21 = type_nullable__nit__TId.color;
idtype22 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3618);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype24 = type_nullable__nit__AType.color;
idtype25 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3620);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist8;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3622);
show_backtrace(1);
}
var29 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
var30 = NULL;
var31 = NULL;
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var30, var31, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var29:AAttrPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction72> */
{
var33 = nit___nit__Parser___go_to(var_p, var32);
}
{
nit___nit__Parser___push(var_p, var33, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction73#action for (self: ReduceAction73, Parser) */
void nit__parser___nit__parser__ReduceAction73___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3654);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3656);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3658);
show_backtrace(1);
}
var_tkwvarnode5 = var_nodearraylist4;
/* <var_tkwvarnode5:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable__nit__TKwvar.color;
idtype20 = type_nullable__nit__TKwvar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3660);
show_backtrace(1);
}
var_tidnode6 = var_nodearraylist5;
/* <var_tidnode6:nullable Object> isa nullable TId */
cltype22 = type_nullable__nit__TId.color;
idtype23 = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3662);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype25 = type_nullable__nit__AType.color;
idtype26 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3664);
show_backtrace(1);
}
var_pannotationsnode9 = var_nodearraylist7;
/* <var_pannotationsnode9:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable__nit__AAnnotations.color;
idtype29 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3666);
show_backtrace(1);
}
var_pexprnode10 = var_nodearraylist9;
/* <var_pexprnode10:nullable Object> isa nullable AExpr */
cltype31 = type_nullable__nit__AExpr.color;
idtype32 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3668);
show_backtrace(1);
}
var33 = NEW_nit__AAttrPropdef(&type_nit__AAttrPropdef);
var34 = NULL;
{
nit__parser_prod___AAttrPropdef___init_aattrpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwvarnode5, var_tidnode6, var_ptypenode7, var34, var_pannotationsnode9, var_pexprnode10); /* Direct call parser_prod#AAttrPropdef#init_aattrpropdef on <var33:AAttrPropdef>*/
}
var_ppropdefnode1 = var33;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3698);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3700);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3702);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable__nit__TKwinit.color;
idtype18 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3704);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nit__ASignature.color;
idtype21 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3706);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist7;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype23 = type_nullable__nit__AExpr.color;
idtype24 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3708);
show_backtrace(1);
}
var25 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var26, var_tkwinitnode6, var27, var28, var_psignaturenode9, var29, var30, var31, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var25:AMethPropdef>*/
}
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction74> */
{
var33 = nit___nit__Parser___go_to(var_p, var32);
}
{
nit___nit__Parser___push(var_p, var33, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction75#action for (self: ReduceAction75, Parser) */
void nit__parser___nit__parser__ReduceAction75___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3742);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3744);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3746);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable__nit__TKwinit.color;
idtype19 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3748);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3750);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3752);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3754);
show_backtrace(1);
}
var29 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var_tkwinitnode6, var31, var_pmethidnode8, var_psignaturenode9, var32, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction75> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction76#action for (self: ReduceAction76, Parser) */
void nit__parser___nit__parser__ReduceAction76___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3788);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3790);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3792);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable__nit__TKwinit.color;
idtype19 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3794);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype21 = type_nullable__nit__ASignature.color;
idtype22 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3796);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable__nit__AAnnotations.color;
idtype25 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3798);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist8;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype27 = type_nullable__nit__AExpr.color;
idtype28 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3800);
show_backtrace(1);
}
var29 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
var34 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var30, var_tkwinitnode6, var31, var32, var_psignaturenode9, var_pannotationsnode10, var33, var34, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var29:AMethPropdef>*/
}
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction76> */
{
var36 = nit___nit__Parser___go_to(var_p, var35);
}
{
nit___nit__Parser___push(var_p, var36, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction77#action for (self: ReduceAction77, Parser) */
void nit__parser___nit__parser__ReduceAction77___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable__nit__ADoc.color;
idtype = type_nullable__nit__ADoc.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3835);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable__nit__TKwredef.color;
idtype14 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3837);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable__nit__AVisibility.color;
idtype17 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3839);
show_backtrace(1);
}
var_tkwinitnode6 = var_nodearraylist4;
/* <var_tkwinitnode6:nullable Object> isa nullable TKwinit */
cltype19 = type_nullable__nit__TKwinit.color;
idtype20 = type_nullable__nit__TKwinit.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3841);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype22 = type_nullable__nit__AMethid.color;
idtype23 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3843);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype25 = type_nullable__nit__ASignature.color;
idtype26 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3845);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable__nit__AAnnotations.color;
idtype29 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3847);
show_backtrace(1);
}
var_pexprnode13 = var_nodearraylist9;
/* <var_pexprnode13:nullable Object> isa nullable AExpr */
cltype31 = type_nullable__nit__AExpr.color;
idtype32 = type_nullable__nit__AExpr.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3849);
show_backtrace(1);
}
var33 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
var37 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var34, var_tkwinitnode6, var35, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var36, var37, var_pexprnode13); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var33:AMethPropdef>*/
}
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var38 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction77> */
{
var39 = nit___nit__Parser___go_to(var_p, var38);
}
{
nit___nit__Parser___push(var_p, var39, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction78#action for (self: ReduceAction78, Parser) */
void nit__parser___nit__parser__ReduceAction78___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3881);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3883);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3885);
show_backtrace(1);
}
var_tkwtypenode5 = var_nodearraylist4;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype16 = type_nullable__nit__TKwtype.color;
idtype17 = type_nullable__nit__TKwtype.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3887);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype19 = type_nullable__nit__TClassid.color;
idtype20 = type_nullable__nit__TClassid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3889);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable__nit__AType.color;
idtype23 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3891);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable__nit__AAnnotations.color;
idtype26 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3893);
show_backtrace(1);
}
var27 = NEW_nit__ATypePropdef(&type_nit__ATypePropdef);
{
nit__parser_prod___ATypePropdef___init_atypepropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8); /* Direct call parser_prod#ATypePropdef#init_atypepropdef on <var27:ATypePropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction78> */
{
var29 = nit___nit__Parser___go_to(var_p, var28);
}
{
nit___nit__Parser___push(var_p, var29, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction79#action for (self: ReduceAction79, Parser) */
void nit__parser___nit__parser__ReduceAction79___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3920);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable__nit__TKwredef.color;
idtype11 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3922);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable__nit__AVisibility.color;
idtype14 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3924);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable__nit__TKwnew.color;
idtype17 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3926);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype19 = type_nullable__nit__ASignature.color;
idtype20 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3928);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist6;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype22 = type_nullable__nit__AExternCalls.color;
idtype23 = type_nullable__nit__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3930);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist7;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype25 = type_nullable__nit__AExternCodeBlock.color;
idtype26 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3932);
show_backtrace(1);
}
var27 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
var32 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var28, var29, var_tkwnewnode7, var30, var_psignaturenode9, var31, var_pexterncallsnode11, var_pexterncodeblocknode12, var32); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var27:AMethPropdef>*/
}
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction79> */
{
var34 = nit___nit__Parser___go_to(var_p, var33);
}
{
nit___nit__Parser___push(var_p, var34, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction80#action for (self: ReduceAction80, Parser) */
void nit__parser___nit__parser__ReduceAction80___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3965);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3967);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3969);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3971);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype20 = type_nullable__nit__AMethid.color;
idtype21 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3973);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype23 = type_nullable__nit__ASignature.color;
idtype24 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3975);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable__nit__AExternCalls.color;
idtype27 = type_nullable__nit__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3977);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable__nit__AExternCodeBlock.color;
idtype30 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 3979);
show_backtrace(1);
}
var31 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
var35 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var32, var33, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var34, var_pexterncallsnode11, var_pexterncodeblocknode12, var35); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var31:AMethPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction80> */
{
var37 = nit___nit__Parser___go_to(var_p, var36);
}
{
nit___nit__Parser___push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction81#action for (self: ReduceAction81, Parser) */
void nit__parser___nit__parser__ReduceAction81___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4012);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4014);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4016);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable__nit__TKwnew.color;
idtype18 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4018);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist5;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype20 = type_nullable__nit__ASignature.color;
idtype21 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4020);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist6;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable__nit__AAnnotations.color;
idtype24 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4022);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist7;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable__nit__AExternCalls.color;
idtype27 = type_nullable__nit__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4024);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist8;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable__nit__AExternCodeBlock.color;
idtype30 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4026);
show_backtrace(1);
}
var31 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
var35 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var32, var33, var_tkwnewnode7, var34, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, var35); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var31:AMethPropdef>*/
}
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction81> */
{
var37 = nit___nit__Parser___go_to(var_p, var36);
}
{
nit___nit__Parser___push(var_p, var37, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction82#action for (self: ReduceAction82, Parser) */
void nit__parser___nit__parser__ReduceAction82___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4060);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable__nit__TKwredef.color;
idtype13 = type_nullable__nit__TKwredef.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4062);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable__nit__AVisibility.color;
idtype16 = type_nullable__nit__AVisibility.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4064);
show_backtrace(1);
}
var_tkwnewnode7 = var_nodearraylist4;
/* <var_tkwnewnode7:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable__nit__TKwnew.color;
idtype19 = type_nullable__nit__TKwnew.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4066);
show_backtrace(1);
}
var_pmethidnode8 = var_nodearraylist5;
/* <var_pmethidnode8:nullable Object> isa nullable AMethid */
cltype21 = type_nullable__nit__AMethid.color;
idtype22 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4068);
show_backtrace(1);
}
var_psignaturenode9 = var_nodearraylist6;
/* <var_psignaturenode9:nullable Object> isa nullable ASignature */
cltype24 = type_nullable__nit__ASignature.color;
idtype25 = type_nullable__nit__ASignature.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4070);
show_backtrace(1);
}
var_pannotationsnode10 = var_nodearraylist7;
/* <var_pannotationsnode10:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable__nit__AAnnotations.color;
idtype28 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4072);
show_backtrace(1);
}
var_pexterncallsnode11 = var_nodearraylist8;
/* <var_pexterncallsnode11:nullable Object> isa nullable AExternCalls */
cltype30 = type_nullable__nit__AExternCalls.color;
idtype31 = type_nullable__nit__AExternCalls.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4074);
show_backtrace(1);
}
var_pexterncodeblocknode12 = var_nodearraylist9;
/* <var_pexterncodeblocknode12:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable__nit__AExternCodeBlock.color;
idtype34 = type_nullable__nit__AExternCodeBlock.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4076);
show_backtrace(1);
}
var35 = NEW_nit__AMethPropdef(&type_nit__AMethPropdef);
var36 = NULL;
var37 = NULL;
var38 = NULL;
{
nit__parser_prod___AMethPropdef___init_amethpropdef(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var36, var37, var_tkwnewnode7, var_pmethidnode8, var_psignaturenode9, var_pannotationsnode10, var_pexterncallsnode11, var_pexterncodeblocknode12, var38); /* Direct call parser_prod#AMethPropdef#init_amethpropdef on <var35:AMethPropdef>*/
}
var_ppropdefnode1 = var35;
var_node_list = var_ppropdefnode1;
var39 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction82> */
{
var40 = nit___nit__Parser___go_to(var_p, var39);
}
{
nit___nit__Parser___push(var_p, var40, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction83#action for (self: ReduceAction83, Parser) */
void nit__parser___nit__parser__ReduceAction83___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_pannotationsnode1 = var_nodearraylist2;
var_node_list = var_pannotationsnode1;
var3 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction83> */
{
var4 = nit___nit__Parser___go_to(var_p, var3);
}
{
nit___nit__Parser___push(var_p, var4, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction84#action for (self: ReduceAction84, Parser) */
void nit__parser___nit__parser__ReduceAction84___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction84> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction87#action for (self: ReduceAction87, Parser) */
void nit__parser___nit__parser__ReduceAction87___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction87> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction88#action for (self: ReduceAction88, Parser) */
void nit__parser___nit__parser__ReduceAction88___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = NEW_nit__APublicVisibility(&type_nit__APublicVisibility);
var2 = NULL;
{
nit__parser_prod___APublicVisibility___init_apublicvisibility(var1, var2); /* Direct call parser_prod#APublicVisibility#init_apublicvisibility on <var1:APublicVisibility>*/
}
var_pvisibilitynode1 = var1;
var_node_list = var_pvisibilitynode1;
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwpublicnode2 = var_nodearraylist1;
/* <var_tkwpublicnode2:nullable Object> isa nullable TKwpublic */
cltype = type_nullable__nit__TKwpublic.color;
idtype = type_nullable__nit__TKwpublic.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4154);
show_backtrace(1);
}
var4 = NEW_nit__APublicVisibility(&type_nit__APublicVisibility);
{
nit__parser_prod___APublicVisibility___init_apublicvisibility(var4, var_tkwpublicnode2); /* Direct call parser_prod#APublicVisibility#init_apublicvisibility on <var4:APublicVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction89> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction90#action for (self: ReduceAction90, Parser) */
void nit__parser___nit__parser__ReduceAction90___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwprivatenode2 = var_nodearraylist1;
/* <var_tkwprivatenode2:nullable Object> isa nullable TKwprivate */
cltype = type_nullable__nit__TKwprivate.color;
idtype = type_nullable__nit__TKwprivate.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4170);
show_backtrace(1);
}
var4 = NEW_nit__APrivateVisibility(&type_nit__APrivateVisibility);
{
nit__parser_prod___APrivateVisibility___init_aprivatevisibility(var4, var_tkwprivatenode2); /* Direct call parser_prod#APrivateVisibility#init_aprivatevisibility on <var4:APrivateVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction90> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction91#action for (self: ReduceAction91, Parser) */
void nit__parser___nit__parser__ReduceAction91___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwprotectednode2 = var_nodearraylist1;
/* <var_tkwprotectednode2:nullable Object> isa nullable TKwprotected */
cltype = type_nullable__nit__TKwprotected.color;
idtype = type_nullable__nit__TKwprotected.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4186);
show_backtrace(1);
}
var4 = NEW_nit__AProtectedVisibility(&type_nit__AProtectedVisibility);
{
nit__parser_prod___AProtectedVisibility___init_aprotectedvisibility(var4, var_tkwprotectednode2); /* Direct call parser_prod#AProtectedVisibility#init_aprotectedvisibility on <var4:AProtectedVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction91> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction92#action for (self: ReduceAction92, Parser) */
void nit__parser___nit__parser__ReduceAction92___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist2 = var1;
{
var2 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var2;
var_tkwintrudenode2 = var_nodearraylist1;
/* <var_tkwintrudenode2:nullable Object> isa nullable TKwintrude */
cltype = type_nullable__nit__TKwintrude.color;
idtype = type_nullable__nit__TKwintrude.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4202);
show_backtrace(1);
}
var4 = NEW_nit__AIntrudeVisibility(&type_nit__AIntrudeVisibility);
{
nit__parser_prod___AIntrudeVisibility___init_aintrudevisibility(var4, var_tkwintrudenode2); /* Direct call parser_prod#AIntrudeVisibility#init_aintrudevisibility on <var4:AIntrudeVisibility>*/
}
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction92> */
{
var6 = nit___nit__Parser___go_to(var_p, var5);
}
{
nit___nit__Parser___push(var_p, var6, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction93#action for (self: ReduceAction93, Parser) */
void nit__parser___nit__parser__ReduceAction93___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable__nit__TPlus.color;
idtype = type_nullable__nit__TPlus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4217);
show_backtrace(1);
}
var3 = NEW_nit__APlusMethid(&type_nit__APlusMethid);
{
nit__parser_prod___APlusMethid___init_aplusmethid(var3, var_tplusnode2); /* Direct call parser_prod#APlusMethid#init_aplusmethid on <var3:APlusMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction93> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction94#action for (self: ReduceAction94, Parser) */
void nit__parser___nit__parser__ReduceAction94___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable__nit__TMinus.color;
idtype = type_nullable__nit__TMinus.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4232);
show_backtrace(1);
}
var3 = NEW_nit__AMinusMethid(&type_nit__AMinusMethid);
{
nit__parser_prod___AMinusMethid___init_aminusmethid(var3, var_tminusnode2); /* Direct call parser_prod#AMinusMethid#init_aminusmethid on <var3:AMinusMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction94> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction95#action for (self: ReduceAction95, Parser) */
void nit__parser___nit__parser__ReduceAction95___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tstarnode2 = var_nodearraylist1;
/* <var_tstarnode2:nullable Object> isa nullable TStar */
cltype = type_nullable__nit__TStar.color;
idtype = type_nullable__nit__TStar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4247);
show_backtrace(1);
}
var3 = NEW_nit__AStarMethid(&type_nit__AStarMethid);
{
nit__parser_prod___AStarMethid___init_astarmethid(var3, var_tstarnode2); /* Direct call parser_prod#AStarMethid#init_astarmethid on <var3:AStarMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction95> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction96#action for (self: ReduceAction96, Parser) */
void nit__parser___nit__parser__ReduceAction96___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tstarstarnode2 = var_nodearraylist1;
/* <var_tstarstarnode2:nullable Object> isa nullable TStarstar */
cltype = type_nullable__nit__TStarstar.color;
idtype = type_nullable__nit__TStarstar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4262);
show_backtrace(1);
}
var3 = NEW_nit__AStarstarMethid(&type_nit__AStarstarMethid);
{
nit__parser_prod___AStarstarMethid___init_astarstarmethid(var3, var_tstarstarnode2); /* Direct call parser_prod#AStarstarMethid#init_astarstarmethid on <var3:AStarstarMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction96> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction97#action for (self: ReduceAction97, Parser) */
void nit__parser___nit__parser__ReduceAction97___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tslashnode2 = var_nodearraylist1;
/* <var_tslashnode2:nullable Object> isa nullable TSlash */
cltype = type_nullable__nit__TSlash.color;
idtype = type_nullable__nit__TSlash.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4277);
show_backtrace(1);
}
var3 = NEW_nit__ASlashMethid(&type_nit__ASlashMethid);
{
nit__parser_prod___ASlashMethid___init_aslashmethid(var3, var_tslashnode2); /* Direct call parser_prod#ASlashMethid#init_aslashmethid on <var3:ASlashMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction97> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction98#action for (self: ReduceAction98, Parser) */
void nit__parser___nit__parser__ReduceAction98___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tpercentnode2 = var_nodearraylist1;
/* <var_tpercentnode2:nullable Object> isa nullable TPercent */
cltype = type_nullable__nit__TPercent.color;
idtype = type_nullable__nit__TPercent.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4292);
show_backtrace(1);
}
var3 = NEW_nit__APercentMethid(&type_nit__APercentMethid);
{
nit__parser_prod___APercentMethid___init_apercentmethid(var3, var_tpercentnode2); /* Direct call parser_prod#APercentMethid#init_apercentmethid on <var3:APercentMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction98> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction99#action for (self: ReduceAction99, Parser) */
void nit__parser___nit__parser__ReduceAction99___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_teqnode2 = var_nodearraylist1;
/* <var_teqnode2:nullable Object> isa nullable TEq */
cltype = type_nullable__nit__TEq.color;
idtype = type_nullable__nit__TEq.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4307);
show_backtrace(1);
}
var3 = NEW_nit__AEqMethid(&type_nit__AEqMethid);
{
nit__parser_prod___AEqMethid___init_aeqmethid(var3, var_teqnode2); /* Direct call parser_prod#AEqMethid#init_aeqmethid on <var3:AEqMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction99> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction100#action for (self: ReduceAction100, Parser) */
void nit__parser___nit__parser__ReduceAction100___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tnenode2 = var_nodearraylist1;
/* <var_tnenode2:nullable Object> isa nullable TNe */
cltype = type_nullable__nit__TNe.color;
idtype = type_nullable__nit__TNe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4322);
show_backtrace(1);
}
var3 = NEW_nit__ANeMethid(&type_nit__ANeMethid);
{
nit__parser_prod___ANeMethid___init_anemethid(var3, var_tnenode2); /* Direct call parser_prod#ANeMethid#init_anemethid on <var3:ANeMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction100> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction101#action for (self: ReduceAction101, Parser) */
void nit__parser___nit__parser__ReduceAction101___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tlenode2 = var_nodearraylist1;
/* <var_tlenode2:nullable Object> isa nullable TLe */
cltype = type_nullable__nit__TLe.color;
idtype = type_nullable__nit__TLe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4337);
show_backtrace(1);
}
var3 = NEW_nit__ALeMethid(&type_nit__ALeMethid);
{
nit__parser_prod___ALeMethid___init_alemethid(var3, var_tlenode2); /* Direct call parser_prod#ALeMethid#init_alemethid on <var3:ALeMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction101> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction102#action for (self: ReduceAction102, Parser) */
void nit__parser___nit__parser__ReduceAction102___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tgenode2 = var_nodearraylist1;
/* <var_tgenode2:nullable Object> isa nullable TGe */
cltype = type_nullable__nit__TGe.color;
idtype = type_nullable__nit__TGe.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4352);
show_backtrace(1);
}
var3 = NEW_nit__AGeMethid(&type_nit__AGeMethid);
{
nit__parser_prod___AGeMethid___init_agemethid(var3, var_tgenode2); /* Direct call parser_prod#AGeMethid#init_agemethid on <var3:AGeMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction102> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction103#action for (self: ReduceAction103, Parser) */
void nit__parser___nit__parser__ReduceAction103___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tltnode2 = var_nodearraylist1;
/* <var_tltnode2:nullable Object> isa nullable TLt */
cltype = type_nullable__nit__TLt.color;
idtype = type_nullable__nit__TLt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4367);
show_backtrace(1);
}
var3 = NEW_nit__ALtMethid(&type_nit__ALtMethid);
{
nit__parser_prod___ALtMethid___init_altmethid(var3, var_tltnode2); /* Direct call parser_prod#ALtMethid#init_altmethid on <var3:ALtMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction103> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction104#action for (self: ReduceAction104, Parser) */
void nit__parser___nit__parser__ReduceAction104___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tgtnode2 = var_nodearraylist1;
/* <var_tgtnode2:nullable Object> isa nullable TGt */
cltype = type_nullable__nit__TGt.color;
idtype = type_nullable__nit__TGt.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4382);
show_backtrace(1);
}
var3 = NEW_nit__AGtMethid(&type_nit__AGtMethid);
{
nit__parser_prod___AGtMethid___init_agtmethid(var3, var_tgtnode2); /* Direct call parser_prod#AGtMethid#init_agtmethid on <var3:AGtMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction104> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction105#action for (self: ReduceAction105, Parser) */
void nit__parser___nit__parser__ReduceAction105___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tllnode2 = var_nodearraylist1;
/* <var_tllnode2:nullable Object> isa nullable TLl */
cltype = type_nullable__nit__TLl.color;
idtype = type_nullable__nit__TLl.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4397);
show_backtrace(1);
}
var3 = NEW_nit__ALlMethid(&type_nit__ALlMethid);
{
nit__parser_prod___ALlMethid___init_allmethid(var3, var_tllnode2); /* Direct call parser_prod#ALlMethid#init_allmethid on <var3:ALlMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction105> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction106#action for (self: ReduceAction106, Parser) */
void nit__parser___nit__parser__ReduceAction106___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tggnode2 = var_nodearraylist1;
/* <var_tggnode2:nullable Object> isa nullable TGg */
cltype = type_nullable__nit__TGg.color;
idtype = type_nullable__nit__TGg.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4412);
show_backtrace(1);
}
var3 = NEW_nit__AGgMethid(&type_nit__AGgMethid);
{
nit__parser_prod___AGgMethid___init_aggmethid(var3, var_tggnode2); /* Direct call parser_prod#AGgMethid#init_aggmethid on <var3:AGgMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction106> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction107#action for (self: ReduceAction107, Parser) */
void nit__parser___nit__parser__ReduceAction107___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_tobranode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4428);
show_backtrace(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype5 = type_nullable__nit__TCbra.color;
idtype6 = type_nullable__nit__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4430);
show_backtrace(1);
}
var7 = NEW_nit__ABraMethid(&type_nit__ABraMethid);
{
nit__parser_prod___ABraMethid___init_abramethid(var7, var_tobranode2, var_tcbranode3); /* Direct call parser_prod#ABraMethid#init_abramethid on <var7:ABraMethid>*/
}
var_pmethidnode1 = var7;
var_node_list = var_pmethidnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction107> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction108#action for (self: ReduceAction108, Parser) */
void nit__parser___nit__parser__ReduceAction108___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tstarshipnode2 = var_nodearraylist1;
/* <var_tstarshipnode2:nullable Object> isa nullable TStarship */
cltype = type_nullable__nit__TStarship.color;
idtype = type_nullable__nit__TStarship.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4446);
show_backtrace(1);
}
var3 = NEW_nit__AStarshipMethid(&type_nit__AStarshipMethid);
{
nit__parser_prod___AStarshipMethid___init_astarshipmethid(var3, var_tstarshipnode2); /* Direct call parser_prod#AStarshipMethid#init_astarshipmethid on <var3:AStarshipMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction108> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction109#action for (self: ReduceAction109, Parser) */
void nit__parser___nit__parser__ReduceAction109___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4462);
show_backtrace(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype5 = type_nullable__nit__TAssign.color;
idtype6 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4464);
show_backtrace(1);
}
var7 = NEW_nit__AAssignMethid(&type_nit__AAssignMethid);
{
nit__parser_prod___AAssignMethid___init_aassignmethid(var7, var_tidnode2, var_tassignnode3); /* Direct call parser_prod#AAssignMethid#init_aassignmethid on <var7:AAssignMethid>*/
}
var_pmethidnode1 = var7;
var_node_list = var_pmethidnode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction109> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction110#action for (self: ReduceAction110, Parser) */
void nit__parser___nit__parser__ReduceAction110___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable__nit__TObra.color;
idtype = type_nullable__nit__TObra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4482);
show_backtrace(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype6 = type_nullable__nit__TCbra.color;
idtype7 = type_nullable__nit__TCbra.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4484);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype9 = type_nullable__nit__TAssign.color;
idtype10 = type_nullable__nit__TAssign.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4486);
show_backtrace(1);
}
var11 = NEW_nit__ABraassignMethid(&type_nit__ABraassignMethid);
{
nit__parser_prod___ABraassignMethid___init_abraassignmethid(var11, var_tobranode2, var_tcbranode3, var_tassignnode4); /* Direct call parser_prod#ABraassignMethid#init_abraassignmethid on <var11:ABraassignMethid>*/
}
var_pmethidnode1 = var11;
var_node_list = var_pmethidnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction110> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction111#action for (self: ReduceAction111, Parser) */
void nit__parser___nit__parser__ReduceAction111___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_tidnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4503);
show_backtrace(1);
}
var3 = NEW_nit__AIdMethid(&type_nit__AIdMethid);
{
nit__parser_prod___AIdMethid___init_aidmethid(var3, var_tidnode2); /* Direct call parser_prod#AIdMethid#init_aidmethid on <var3:AIdMethid>*/
}
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction111> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction112#action for (self: ReduceAction112, Parser) */
void nit__parser___nit__parser__ReduceAction112___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode4 = var7;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable__nit__TOpar.color;
idtype = type_nullable__nit__TOpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4524);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4526);
show_backtrace(1);
}
{
var12 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode4, var_listnode3);
}
var_listnode4 = var12;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype14 = type_nullable__nit__TCpar.color;
idtype15 = type_nullable__nit__TCpar.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4529);
show_backtrace(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype17 = type_nullable__nit__AType.color;
idtype18 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4531);
show_backtrace(1);
}
var19 = NEW_nit__ASignature(&type_nit__ASignature);
{
nit__parser_prod___ASignature___init_asignature(var19, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6); /* Direct call parser_prod#ASignature#init_asignature on <var19:ASignature>*/
}
var_psignaturenode1 = var19;
var_node_list = var_psignaturenode1;
var20 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction112> */
{
var21 = nit___nit__Parser___go_to(var_p, var20);
}
{
nit___nit__Parser___push(var_p, var21, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction113#action for (self: ReduceAction113, Parser) */
void nit__parser___nit__parser__ReduceAction113___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_toparnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4554);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4556);
show_backtrace(1);
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
if(cltype13 >= var_tcparnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tcparnode5->type->type_table[cltype13] == idtype14;
}
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4559);
show_backtrace(1);
}
var15 = NEW_nit__ASignature(&type_nit__ASignature);
var16 = NULL;
{
nit__parser_prod___ASignature___init_asignature(var15, var_toparnode2, var_listnode4, var_tcparnode5, var16); /* Direct call parser_prod#ASignature#init_asignature on <var15:ASignature>*/
}
var_psignaturenode1 = var15;
var_node_list = var_psignaturenode1;
var17 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction113> */
{
var18 = nit___nit__Parser___go_to(var_p, var17);
}
{
nit___nit__Parser___push(var_p, var18, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction114#action for (self: ReduceAction114, Parser) */
void nit__parser___nit__parser__ReduceAction114___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4579);
show_backtrace(1);
}
var5 = NEW_nit__ASignature(&type_nit__ASignature);
var6 = NULL;
var7 = NULL;
{
nit__parser_prod___ASignature___init_asignature(var5, var6, var_listnode3, var7, var_ptypenode5); /* Direct call parser_prod#ASignature#init_asignature on <var5:ASignature>*/
}
var_psignaturenode1 = var5;
var_node_list = var_psignaturenode1;
var8 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction114> */
{
var9 = nit___nit__Parser___go_to(var_p, var8);
}
{
nit___nit__Parser___push(var_p, var9, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction115#action for (self: ReduceAction115, Parser) */
void nit__parser___nit__parser__ReduceAction115___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var2 = NEW_standard__Array(&type_standard__Array__standard__Object);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Object]>*/
}
var_listnode3 = var2;
var3 = NEW_nit__ASignature(&type_nit__ASignature);
var4 = NULL;
var5 = NULL;
var6 = NULL;
{
nit__parser_prod___ASignature___init_asignature(var3, var4, var_listnode3, var5, var6); /* Direct call parser_prod#ASignature#init_asignature on <var3:ASignature>*/
}
var_psignaturenode1 = var3;
var_node_list = var_psignaturenode1;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction115> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction116#action for (self: ReduceAction116, Parser) */
void nit__parser___nit__parser__ReduceAction116___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_listnode2 = var3;
var_pparamnode1 = var_nodearraylist1;
var4 = NULL;
if (var_pparamnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int (*)(val* self, val* p0))(var_pparamnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, var4) /* != on <var_pparamnode1:nullable Object>*/;
var5 = var6;
}
if (var5){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode2, var_pparamnode1); /* Direct call array#Array#add on <var_listnode2:Array[Object]>*/
}
} else {
}
var_node_list = var_listnode2;
var7 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction116> */
{
var8 = nit___nit__Parser___go_to(var_p, var7);
}
{
nit___nit__Parser___push(var_p, var8, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction117#action for (self: ReduceAction117, Parser) */
void nit__parser___nit__parser__ReduceAction117___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pparamnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_standard__Array__standard__Object.color;
idtype = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4634);
show_backtrace(1);
}
var6 = NULL;
if (var_pparamnode1 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val* self, val* p0))(var_pparamnode1->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_pparamnode1, var6) /* != on <var_pparamnode1:nullable Object>*/;
var7 = var8;
}
if (var7){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode3, var_pparamnode1); /* Direct call array#Array#add on <var_listnode3:Array[Object]>*/
}
} else {
}
{
var9 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode3, var_listnode2);
}
var_listnode3 = var9;
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction117> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction119#action for (self: ReduceAction119, Parser) */
void nit__parser___nit__parser__ReduceAction119___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pparamnode1 = var_nodearraylist3;
var_node_list = var_pparamnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction119> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction120#action for (self: ReduceAction120, Parser) */
void nit__parser___nit__parser__ReduceAction120___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4664);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable__nit__AAnnotations.color;
idtype6 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4666);
show_backtrace(1);
}
var7 = NEW_nit__AParam(&type_nit__AParam);
var8 = NULL;
var9 = NULL;
{
nit__parser_prod___AParam___init_aparam(var7, var_tidnode2, var8, var9, var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var7:AParam>*/
}
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction120> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction121#action for (self: ReduceAction121, Parser) */
void nit__parser___nit__parser__ReduceAction121___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4685);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4687);
show_backtrace(1);
}
var7 = NEW_nit__AParam(&type_nit__AParam);
var8 = NULL;
var9 = NULL;
{
nit__parser_prod___AParam___init_aparam(var7, var_tidnode2, var_ptypenode3, var8, var9); /* Direct call parser_prod#AParam#init_aparam on <var7:AParam>*/
}
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
var10 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction121> */
{
var11 = nit___nit__Parser___go_to(var_p, var10);
}
{
nit___nit__Parser___push(var_p, var11, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction122#action for (self: ReduceAction122, Parser) */
void nit__parser___nit__parser__ReduceAction122___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_tidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4707);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4709);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable__nit__AAnnotations.color;
idtype10 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4711);
show_backtrace(1);
}
var11 = NEW_nit__AParam(&type_nit__AParam);
var12 = NULL;
{
nit__parser_prod___AParam___init_aparam(var11, var_tidnode2, var_ptypenode3, var12, var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var11:AParam>*/
}
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction122> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction123#action for (self: ReduceAction123, Parser) */
void nit__parser___nit__parser__ReduceAction123___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
if(cltype >= var_tidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4731);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist2;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4733);
show_backtrace(1);
}
var_tdotdotdotnode4 = var_nodearraylist3;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype9 = type_nullable__nit__TDotdotdot.color;
idtype10 = type_nullable__nit__TDotdotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4735);
show_backtrace(1);
}
var11 = NEW_nit__AParam(&type_nit__AParam);
var12 = NULL;
{
nit__parser_prod___AParam___init_aparam(var11, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var12); /* Direct call parser_prod#AParam#init_aparam on <var11:AParam>*/
}
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction123> */
{
var14 = nit___nit__Parser___go_to(var_p, var13);
}
{
nit___nit__Parser___push(var_p, var14, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction124#action for (self: ReduceAction124, Parser) */
void nit__parser___nit__parser__ReduceAction124___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable__nit__TId.color;
idtype = type_nullable__nit__TId.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4756);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype7 = type_nullable__nit__AType.color;
idtype8 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4758);
show_backtrace(1);
}
var_tdotdotdotnode4 = var_nodearraylist4;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype10 = type_nullable__nit__TDotdotdot.color;
idtype11 = type_nullable__nit__TDotdotdot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4760);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable__nit__AAnnotations.color;
idtype14 = type_nullable__nit__AAnnotations.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4762);
show_backtrace(1);
}
var15 = NEW_nit__AParam(&type_nit__AParam);
{
nit__parser_prod___AParam___init_aparam(var15, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var_pannotationsnode5); /* Direct call parser_prod#AParam#init_aparam on <var15:AParam>*/
}
var_pparamnode1 = var15;
var_node_list = var_pparamnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction124> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction125#action for (self: ReduceAction125, Parser) */
void nit__parser___nit__parser__ReduceAction125___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var15 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nit__TKwimport.color;
idtype = type_nullable__nit__TKwimport.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4783);
show_backtrace(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype7 = type_nullable__nit__AExternCall.color;
idtype8 = type_nullable__nit__AExternCall.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4785);
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
var13 = ((short int (*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexterncallnode3, var_other) /* == on <var_pexterncallnode3:nullable AExternCall(AExternCall)>*/;
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode4, var_pexterncallnode3); /* Direct call array#Array#add on <var_listnode4:Array[Object]>*/
}
} else {
}
var15 = NEW_nit__AExternCalls(&type_nit__AExternCalls);
{
nit__parser_prod___AExternCalls___init_aexterncalls(var15, var_tkwimportnode2, var_listnode4); /* Direct call parser_prod#AExternCalls#init_aexterncalls on <var15:AExternCalls>*/
}
var_pexterncallsnode1 = var15;
var_node_list = var_pexterncallsnode1;
var16 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction125> */
{
var17 = nit___nit__Parser___go_to(var_p, var16);
}
{
nit___nit__Parser___push(var_p, var17, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction126#action for (self: ReduceAction126, Parser) */
void nit__parser___nit__parser__ReduceAction126___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
val* var19 /* : Array[Object] */;
val* var20 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var_listnode5 = var5;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable__nit__TKwimport.color;
idtype = type_nullable__nit__TKwimport.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4808);
show_backtrace(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype8 = type_nullable__nit__AExternCall.color;
idtype9 = type_nullable__nit__AExternCall.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4810);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype11 = type_standard__Array__standard__Object.color;
idtype12 = type_standard__Array__standard__Object.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4812);
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
var17 = ((short int (*)(val* self, val* p0))(var_pexterncallnode3->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_pexterncallnode3, var_other) /* == on <var_pexterncallnode3:nullable AExternCall(AExternCall)>*/;
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_listnode5, var_pexterncallnode3); /* Direct call array#Array#add on <var_listnode5:Array[Object]>*/
}
} else {
}
{
var19 = nit__parser_work___nit__parser_work__ReduceAction___concat(self, var_listnode5, var_listnode4);
}
var_listnode5 = var19;
var20 = NEW_nit__AExternCalls(&type_nit__AExternCalls);
{
nit__parser_prod___AExternCalls___init_aexterncalls(var20, var_tkwimportnode2, var_listnode5); /* Direct call parser_prod#AExternCalls#init_aexterncalls on <var20:AExternCalls>*/
}
var_pexterncallsnode1 = var20;
var_node_list = var_pexterncallsnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction126> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction128#action for (self: ReduceAction128, Parser) */
void nit__parser___nit__parser__ReduceAction128___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_pexterncallnode1 = var_nodearraylist3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction128> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction129#action for (self: ReduceAction129, Parser) */
void nit__parser___nit__parser__ReduceAction129___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pexterncallnode1 = var_nodearraylist1;
var_node_list = var_pexterncallnode1;
var2 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction129> */
{
var3 = nit___nit__Parser___go_to(var_p, var2);
}
{
nit___nit__Parser___push(var_p, var3, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction131#action for (self: ReduceAction131, Parser) */
void nit__parser___nit__parser__ReduceAction131___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_tkwsupernode2 = var_nodearraylist1;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable__nit__TKwsuper.color;
idtype = type_nullable__nit__TKwsuper.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4856);
show_backtrace(1);
}
var3 = NEW_nit__ASuperExternCall(&type_nit__ASuperExternCall);
{
nit__parser_prod___ASuperExternCall___init_asuperexterncall(var3, var_tkwsupernode2); /* Direct call parser_prod#ASuperExternCall#init_asuperexterncall on <var3:ASuperExternCall>*/
}
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction131> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction132#action for (self: ReduceAction132, Parser) */
void nit__parser___nit__parser__ReduceAction132___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_pmethidnode2 = var_nodearraylist1;
/* <var_pmethidnode2:nullable Object> isa nullable AMethid */
cltype = type_nullable__nit__AMethid.color;
idtype = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4871);
show_backtrace(1);
}
var3 = NEW_nit__ALocalPropExternCall(&type_nit__ALocalPropExternCall);
{
nit__parser_prod___ALocalPropExternCall___init_alocalpropexterncall(var3, var_pmethidnode2); /* Direct call parser_prod#ALocalPropExternCall#init_alocalpropexterncall on <var3:ALocalPropExternCall>*/
}
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction132> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction133#action for (self: ReduceAction133, Parser) */
void nit__parser___nit__parser__ReduceAction133___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4888);
show_backtrace(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype6 = type_nullable__nit__TDot.color;
idtype7 = type_nullable__nit__TDot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4890);
show_backtrace(1);
}
var_pmethidnode4 = var_nodearraylist3;
/* <var_pmethidnode4:nullable Object> isa nullable AMethid */
cltype9 = type_nullable__nit__AMethid.color;
idtype10 = type_nullable__nit__AMethid.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4892);
show_backtrace(1);
}
var11 = NEW_nit__AFullPropExternCall(&type_nit__AFullPropExternCall);
{
nit__parser_prod___AFullPropExternCall___init_afullpropexterncall(var11, var_ptypenode2, var_tdotnode3, var_pmethidnode4); /* Direct call parser_prod#AFullPropExternCall#init_afullpropexterncall on <var11:AFullPropExternCall>*/
}
var_pexterncallnode1 = var11;
var_node_list = var_pexterncallnode1;
var12 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction133> */
{
var13 = nit___nit__Parser___go_to(var_p, var12);
}
{
nit___nit__Parser___push(var_p, var13, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction134#action for (self: ReduceAction134, Parser) */
void nit__parser___nit__parser__ReduceAction134___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var1 = nit___nit__Parser___pop(var_p);
}
var_nodearraylist1 = var1;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4909);
show_backtrace(1);
}
var3 = NEW_nit__AInitPropExternCall(&type_nit__AInitPropExternCall);
{
nit__parser_prod___AInitPropExternCall___init_ainitpropexterncall(var3, var_ptypenode2); /* Direct call parser_prod#AInitPropExternCall#init_ainitpropexterncall on <var3:AInitPropExternCall>*/
}
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction134> */
{
var5 = nit___nit__Parser___go_to(var_p, var4);
}
{
nit___nit__Parser___push(var_p, var5, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
/* method parser#ReduceAction135#action for (self: ReduceAction135, Parser) */
void nit__parser___nit__parser__ReduceAction135___nit__parser_work__ReduceAction__action(val* self, val* p0) {
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable__nit__AType.color;
idtype = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4932);
show_backtrace(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype12 = type_nullable__nit__TDot.color;
idtype13 = type_nullable__nit__TDot.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4934);
show_backtrace(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype15 = type_nullable__nit__TKwas.color;
idtype16 = type_nullable__nit__TKwas.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4936);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist7;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype18 = type_nullable__nit__AType.color;
idtype19 = type_nullable__nit__AType.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser, 4938);
show_backtrace(1);
}
var20 = NEW_nit__ACastAsExternCall(&type_nit__ACastAsExternCall);
{
nit__parser_prod___ACastAsExternCall___init_acastasexterncall(var20, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5); /* Direct call parser_prod#ACastAsExternCall#init_acastasexterncall on <var20:ACastAsExternCall>*/
}
var_pexterncallnode1 = var20;
var_node_list = var_pexterncallnode1;
var21 = self->attrs[COLOR_nit__parser_work__ReduceAction___goto].l; /* _goto on <self:ReduceAction135> */
{
var22 = nit___nit__Parser___go_to(var_p, var21);
}
{
nit___nit__Parser___push(var_p, var22, var_node_list); /* Direct call parser_work#Parser#push on <var_p:Parser>*/
}
RET_LABEL:;
}
