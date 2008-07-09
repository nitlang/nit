#ifndef parser_prod__sep
#define parser_prod__sep
#include "lexer._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_Visitor[];
extern const int SFT_parser_prod[];
#define COLOR_parser_prod___PNode____parent SFT_parser_prod[0]
#define COLOR_parser_prod___PNode___parent SFT_parser_prod[1]
#define COLOR_parser_prod___PNode___parent__eq SFT_parser_prod[2]
#define COLOR_parser_prod___PNode___remove_child SFT_parser_prod[3]
#define COLOR_parser_prod___PNode___replace_child SFT_parser_prod[4]
#define COLOR_parser_prod___PNode___replace_with SFT_parser_prod[5]
#define COLOR_parser_prod___PNode___visit_all SFT_parser_prod[6]
#define COLOR_parser_prod___PNode___visit_all_reverse SFT_parser_prod[7]
#define COLOR_parser_prod___PNode___locate SFT_parser_prod[8]
#define COLOR_parser_prod___PNode___printl SFT_parser_prod[9]
#define COLOR_parser_prod___Prod____first_token SFT_parser_prod[10]
#define COLOR_parser_prod___Prod____last_token SFT_parser_prod[11]
#define COLOR_parser_prod___Prod___first_token SFT_parser_prod[12]
#define COLOR_parser_prod___Prod___first_token__eq SFT_parser_prod[13]
#define COLOR_parser_prod___Prod___last_token SFT_parser_prod[14]
#define COLOR_parser_prod___Prod___last_token__eq SFT_parser_prod[15]
#define COLOR_SUPER_parser_prod___Prod___replace_with SFT_parser_prod[16]
#define ID_Visitor SFT_parser_prod[17]
#define COLOR_Visitor SFT_parser_prod[18]
#define INIT_TABLE_POS_Visitor SFT_parser_prod[19]
#define COLOR_parser_prod___Visitor___visit SFT_parser_prod[20]
#define COLOR_parser_prod___AModule___empty_init SFT_parser_prod[21]
#define COLOR_parser_prod___AModule___init_amodule SFT_parser_prod[22]
#define COLOR_parser_prod___APackagedecl___empty_init SFT_parser_prod[23]
#define COLOR_parser_prod___APackagedecl___init_apackagedecl SFT_parser_prod[24]
#define COLOR_parser_prod___AImport___empty_init SFT_parser_prod[25]
#define COLOR_parser_prod___AImport___init_aimport SFT_parser_prod[26]
#define COLOR_parser_prod___ANoImport___empty_init SFT_parser_prod[27]
#define COLOR_parser_prod___ANoImport___init_anoimport SFT_parser_prod[28]
#define COLOR_parser_prod___APublicVisibility___empty_init SFT_parser_prod[29]
#define COLOR_parser_prod___APublicVisibility___init_apublicvisibility SFT_parser_prod[30]
#define COLOR_parser_prod___APrivateVisibility___empty_init SFT_parser_prod[31]
#define COLOR_parser_prod___APrivateVisibility___init_aprivatevisibility SFT_parser_prod[32]
#define COLOR_parser_prod___AProtectedVisibility___empty_init SFT_parser_prod[33]
#define COLOR_parser_prod___AProtectedVisibility___init_aprotectedvisibility SFT_parser_prod[34]
#define COLOR_parser_prod___AIntrudeVisibility___empty_init SFT_parser_prod[35]
#define COLOR_parser_prod___AIntrudeVisibility___init_aintrudevisibility SFT_parser_prod[36]
#define COLOR_parser_prod___AClassdef___empty_init SFT_parser_prod[37]
#define COLOR_parser_prod___AClassdef___init_aclassdef SFT_parser_prod[38]
#define COLOR_parser_prod___ATopClassdef___empty_init SFT_parser_prod[39]
#define COLOR_parser_prod___ATopClassdef___init_atopclassdef SFT_parser_prod[40]
#define COLOR_parser_prod___AMainClassdef___empty_init SFT_parser_prod[41]
#define COLOR_parser_prod___AMainClassdef___init_amainclassdef SFT_parser_prod[42]
#define COLOR_parser_prod___AConcreteClasskind___empty_init SFT_parser_prod[43]
#define COLOR_parser_prod___AConcreteClasskind___init_aconcreteclasskind SFT_parser_prod[44]
#define COLOR_parser_prod___AAbstractClasskind___empty_init SFT_parser_prod[45]
#define COLOR_parser_prod___AAbstractClasskind___init_aabstractclasskind SFT_parser_prod[46]
#define COLOR_parser_prod___AInterfaceClasskind___empty_init SFT_parser_prod[47]
#define COLOR_parser_prod___AInterfaceClasskind___init_ainterfaceclasskind SFT_parser_prod[48]
#define COLOR_parser_prod___AUniversalClasskind___empty_init SFT_parser_prod[49]
#define COLOR_parser_prod___AUniversalClasskind___init_auniversalclasskind SFT_parser_prod[50]
#define COLOR_parser_prod___AFormaldef___empty_init SFT_parser_prod[51]
#define COLOR_parser_prod___AFormaldef___init_aformaldef SFT_parser_prod[52]
#define COLOR_parser_prod___ASuperclass___empty_init SFT_parser_prod[53]
#define COLOR_parser_prod___ASuperclass___init_asuperclass SFT_parser_prod[54]
#define COLOR_parser_prod___AAttrPropdef___empty_init SFT_parser_prod[55]
#define COLOR_parser_prod___AAttrPropdef___init_aattrpropdef SFT_parser_prod[56]
#define COLOR_parser_prod___AMethPropdef___empty_init SFT_parser_prod[57]
#define COLOR_parser_prod___AMethPropdef___init_amethpropdef SFT_parser_prod[58]
#define COLOR_parser_prod___ADeferredMethPropdef___empty_init SFT_parser_prod[59]
#define COLOR_parser_prod___ADeferredMethPropdef___init_adeferredmethpropdef SFT_parser_prod[60]
#define COLOR_parser_prod___AInternMethPropdef___empty_init SFT_parser_prod[61]
#define COLOR_parser_prod___AInternMethPropdef___init_ainternmethpropdef SFT_parser_prod[62]
#define COLOR_parser_prod___AExternMethPropdef___empty_init SFT_parser_prod[63]
#define COLOR_parser_prod___AExternMethPropdef___init_aexternmethpropdef SFT_parser_prod[64]
#define COLOR_parser_prod___AConcreteMethPropdef___empty_init SFT_parser_prod[65]
#define COLOR_parser_prod___AConcreteMethPropdef___init_aconcretemethpropdef SFT_parser_prod[66]
#define COLOR_parser_prod___AConcreteInitPropdef___empty_init SFT_parser_prod[67]
#define COLOR_parser_prod___AConcreteInitPropdef___init_aconcreteinitpropdef SFT_parser_prod[68]
#define COLOR_parser_prod___AMainMethPropdef___empty_init SFT_parser_prod[69]
#define COLOR_parser_prod___AMainMethPropdef___init_amainmethpropdef SFT_parser_prod[70]
#define COLOR_parser_prod___ATypePropdef___empty_init SFT_parser_prod[71]
#define COLOR_parser_prod___ATypePropdef___init_atypepropdef SFT_parser_prod[72]
#define COLOR_parser_prod___AReadAble___empty_init SFT_parser_prod[73]
#define COLOR_parser_prod___AReadAble___init_areadable SFT_parser_prod[74]
#define COLOR_parser_prod___AWriteAble___empty_init SFT_parser_prod[75]
#define COLOR_parser_prod___AWriteAble___init_awriteable SFT_parser_prod[76]
#define COLOR_parser_prod___AIdMethid___empty_init SFT_parser_prod[77]
#define COLOR_parser_prod___AIdMethid___init_aidmethid SFT_parser_prod[78]
#define COLOR_parser_prod___APlusMethid___empty_init SFT_parser_prod[79]
#define COLOR_parser_prod___APlusMethid___init_aplusmethid SFT_parser_prod[80]
#define COLOR_parser_prod___AMinusMethid___empty_init SFT_parser_prod[81]
#define COLOR_parser_prod___AMinusMethid___init_aminusmethid SFT_parser_prod[82]
#define COLOR_parser_prod___AStarMethid___empty_init SFT_parser_prod[83]
#define COLOR_parser_prod___AStarMethid___init_astarmethid SFT_parser_prod[84]
#define COLOR_parser_prod___ASlashMethid___empty_init SFT_parser_prod[85]
#define COLOR_parser_prod___ASlashMethid___init_aslashmethid SFT_parser_prod[86]
#define COLOR_parser_prod___APercentMethid___empty_init SFT_parser_prod[87]
#define COLOR_parser_prod___APercentMethid___init_apercentmethid SFT_parser_prod[88]
#define COLOR_parser_prod___AEqMethid___empty_init SFT_parser_prod[89]
#define COLOR_parser_prod___AEqMethid___init_aeqmethid SFT_parser_prod[90]
#define COLOR_parser_prod___ANeMethid___empty_init SFT_parser_prod[91]
#define COLOR_parser_prod___ANeMethid___init_anemethid SFT_parser_prod[92]
#define COLOR_parser_prod___ALeMethid___empty_init SFT_parser_prod[93]
#define COLOR_parser_prod___ALeMethid___init_alemethid SFT_parser_prod[94]
#define COLOR_parser_prod___AGeMethid___empty_init SFT_parser_prod[95]
#define COLOR_parser_prod___AGeMethid___init_agemethid SFT_parser_prod[96]
#define COLOR_parser_prod___ALtMethid___empty_init SFT_parser_prod[97]
#define COLOR_parser_prod___ALtMethid___init_altmethid SFT_parser_prod[98]
#define COLOR_parser_prod___AGtMethid___empty_init SFT_parser_prod[99]
#define COLOR_parser_prod___AGtMethid___init_agtmethid SFT_parser_prod[100]
#define COLOR_parser_prod___ABraMethid___empty_init SFT_parser_prod[101]
#define COLOR_parser_prod___ABraMethid___init_abramethid SFT_parser_prod[102]
#define COLOR_parser_prod___AStarshipMethid___empty_init SFT_parser_prod[103]
#define COLOR_parser_prod___AStarshipMethid___init_astarshipmethid SFT_parser_prod[104]
#define COLOR_parser_prod___AAssignMethid___empty_init SFT_parser_prod[105]
#define COLOR_parser_prod___AAssignMethid___init_aassignmethid SFT_parser_prod[106]
#define COLOR_parser_prod___ABraassignMethid___empty_init SFT_parser_prod[107]
#define COLOR_parser_prod___ABraassignMethid___init_abraassignmethid SFT_parser_prod[108]
#define COLOR_parser_prod___ASignature___empty_init SFT_parser_prod[109]
#define COLOR_parser_prod___ASignature___init_asignature SFT_parser_prod[110]
#define COLOR_parser_prod___AParam___empty_init SFT_parser_prod[111]
#define COLOR_parser_prod___AParam___init_aparam SFT_parser_prod[112]
#define COLOR_parser_prod___AType___empty_init SFT_parser_prod[113]
#define COLOR_parser_prod___AType___init_atype SFT_parser_prod[114]
#define COLOR_parser_prod___ABlockExpr___empty_init SFT_parser_prod[115]
#define COLOR_parser_prod___ABlockExpr___init_ablockexpr SFT_parser_prod[116]
#define COLOR_parser_prod___AVardeclExpr___empty_init SFT_parser_prod[117]
#define COLOR_parser_prod___AVardeclExpr___init_avardeclexpr SFT_parser_prod[118]
#define COLOR_parser_prod___AReturnExpr___empty_init SFT_parser_prod[119]
#define COLOR_parser_prod___AReturnExpr___init_areturnexpr SFT_parser_prod[120]
#define COLOR_parser_prod___ABreakExpr___empty_init SFT_parser_prod[121]
#define COLOR_parser_prod___ABreakExpr___init_abreakexpr SFT_parser_prod[122]
#define COLOR_parser_prod___AAbortExpr___empty_init SFT_parser_prod[123]
#define COLOR_parser_prod___AAbortExpr___init_aabortexpr SFT_parser_prod[124]
#define COLOR_parser_prod___AContinueExpr___empty_init SFT_parser_prod[125]
#define COLOR_parser_prod___AContinueExpr___init_acontinueexpr SFT_parser_prod[126]
#define COLOR_parser_prod___ADoExpr___empty_init SFT_parser_prod[127]
#define COLOR_parser_prod___ADoExpr___init_adoexpr SFT_parser_prod[128]
#define COLOR_parser_prod___AIfExpr___empty_init SFT_parser_prod[129]
#define COLOR_parser_prod___AIfExpr___init_aifexpr SFT_parser_prod[130]
#define COLOR_parser_prod___AIfexprExpr___empty_init SFT_parser_prod[131]
#define COLOR_parser_prod___AIfexprExpr___init_aifexprexpr SFT_parser_prod[132]
#define COLOR_parser_prod___AWhileExpr___empty_init SFT_parser_prod[133]
#define COLOR_parser_prod___AWhileExpr___init_awhileexpr SFT_parser_prod[134]
#define COLOR_parser_prod___AForExpr___empty_init SFT_parser_prod[135]
#define COLOR_parser_prod___AForExpr___init_aforexpr SFT_parser_prod[136]
#define COLOR_parser_prod___AForVardeclExpr___empty_init SFT_parser_prod[137]
#define COLOR_parser_prod___AForVardeclExpr___init_aforvardeclexpr SFT_parser_prod[138]
#define COLOR_parser_prod___AAssertExpr___empty_init SFT_parser_prod[139]
#define COLOR_parser_prod___AAssertExpr___init_aassertexpr SFT_parser_prod[140]
#define COLOR_parser_prod___AOnceExpr___empty_init SFT_parser_prod[141]
#define COLOR_parser_prod___AOnceExpr___init_aonceexpr SFT_parser_prod[142]
#define COLOR_parser_prod___ASendExpr___empty_init SFT_parser_prod[143]
#define COLOR_parser_prod___ASendExpr___init_asendexpr SFT_parser_prod[144]
#define COLOR_parser_prod___ABinopExpr___empty_init SFT_parser_prod[145]
#define COLOR_parser_prod___ABinopExpr___init_abinopexpr SFT_parser_prod[146]
#define COLOR_parser_prod___AOrExpr___empty_init SFT_parser_prod[147]
#define COLOR_parser_prod___AOrExpr___init_aorexpr SFT_parser_prod[148]
#define COLOR_parser_prod___AAndExpr___empty_init SFT_parser_prod[149]
#define COLOR_parser_prod___AAndExpr___init_aandexpr SFT_parser_prod[150]
#define COLOR_parser_prod___ANotExpr___empty_init SFT_parser_prod[151]
#define COLOR_parser_prod___ANotExpr___init_anotexpr SFT_parser_prod[152]
#define COLOR_parser_prod___AEqExpr___empty_init SFT_parser_prod[153]
#define COLOR_parser_prod___AEqExpr___init_aeqexpr SFT_parser_prod[154]
#define COLOR_parser_prod___AEeExpr___empty_init SFT_parser_prod[155]
#define COLOR_parser_prod___AEeExpr___init_aeeexpr SFT_parser_prod[156]
#define COLOR_parser_prod___ANeExpr___empty_init SFT_parser_prod[157]
#define COLOR_parser_prod___ANeExpr___init_aneexpr SFT_parser_prod[158]
#define COLOR_parser_prod___ALtExpr___empty_init SFT_parser_prod[159]
#define COLOR_parser_prod___ALtExpr___init_altexpr SFT_parser_prod[160]
#define COLOR_parser_prod___ALeExpr___empty_init SFT_parser_prod[161]
#define COLOR_parser_prod___ALeExpr___init_aleexpr SFT_parser_prod[162]
#define COLOR_parser_prod___AGtExpr___empty_init SFT_parser_prod[163]
#define COLOR_parser_prod___AGtExpr___init_agtexpr SFT_parser_prod[164]
#define COLOR_parser_prod___AGeExpr___empty_init SFT_parser_prod[165]
#define COLOR_parser_prod___AGeExpr___init_ageexpr SFT_parser_prod[166]
#define COLOR_parser_prod___AIsaExpr___empty_init SFT_parser_prod[167]
#define COLOR_parser_prod___AIsaExpr___init_aisaexpr SFT_parser_prod[168]
#define COLOR_parser_prod___APlusExpr___empty_init SFT_parser_prod[169]
#define COLOR_parser_prod___APlusExpr___init_aplusexpr SFT_parser_prod[170]
#define COLOR_parser_prod___AMinusExpr___empty_init SFT_parser_prod[171]
#define COLOR_parser_prod___AMinusExpr___init_aminusexpr SFT_parser_prod[172]
#define COLOR_parser_prod___AStarshipExpr___empty_init SFT_parser_prod[173]
#define COLOR_parser_prod___AStarshipExpr___init_astarshipexpr SFT_parser_prod[174]
#define COLOR_parser_prod___AStarExpr___empty_init SFT_parser_prod[175]
#define COLOR_parser_prod___AStarExpr___init_astarexpr SFT_parser_prod[176]
#define COLOR_parser_prod___ASlashExpr___empty_init SFT_parser_prod[177]
#define COLOR_parser_prod___ASlashExpr___init_aslashexpr SFT_parser_prod[178]
#define COLOR_parser_prod___APercentExpr___empty_init SFT_parser_prod[179]
#define COLOR_parser_prod___APercentExpr___init_apercentexpr SFT_parser_prod[180]
#define COLOR_parser_prod___AUminusExpr___empty_init SFT_parser_prod[181]
#define COLOR_parser_prod___AUminusExpr___init_auminusexpr SFT_parser_prod[182]
#define COLOR_parser_prod___ANewExpr___empty_init SFT_parser_prod[183]
#define COLOR_parser_prod___ANewExpr___init_anewexpr SFT_parser_prod[184]
#define COLOR_parser_prod___AAttrExpr___empty_init SFT_parser_prod[185]
#define COLOR_parser_prod___AAttrExpr___init_aattrexpr SFT_parser_prod[186]
#define COLOR_parser_prod___AAttrAssignExpr___empty_init SFT_parser_prod[187]
#define COLOR_parser_prod___AAttrAssignExpr___init_aattrassignexpr SFT_parser_prod[188]
#define COLOR_parser_prod___AAttrReassignExpr___empty_init SFT_parser_prod[189]
#define COLOR_parser_prod___AAttrReassignExpr___init_aattrreassignexpr SFT_parser_prod[190]
#define COLOR_parser_prod___ACallExpr___empty_init SFT_parser_prod[191]
#define COLOR_parser_prod___ACallExpr___init_acallexpr SFT_parser_prod[192]
#define COLOR_parser_prod___ACallAssignExpr___empty_init SFT_parser_prod[193]
#define COLOR_parser_prod___ACallAssignExpr___init_acallassignexpr SFT_parser_prod[194]
#define COLOR_parser_prod___ACallReassignExpr___empty_init SFT_parser_prod[195]
#define COLOR_parser_prod___ACallReassignExpr___init_acallreassignexpr SFT_parser_prod[196]
#define COLOR_parser_prod___ASuperExpr___empty_init SFT_parser_prod[197]
#define COLOR_parser_prod___ASuperExpr___init_asuperexpr SFT_parser_prod[198]
#define COLOR_parser_prod___AInitExpr___empty_init SFT_parser_prod[199]
#define COLOR_parser_prod___AInitExpr___init_ainitexpr SFT_parser_prod[200]
#define COLOR_parser_prod___ABraExpr___empty_init SFT_parser_prod[201]
#define COLOR_parser_prod___ABraExpr___init_abraexpr SFT_parser_prod[202]
#define COLOR_parser_prod___ABraAssignExpr___empty_init SFT_parser_prod[203]
#define COLOR_parser_prod___ABraAssignExpr___init_abraassignexpr SFT_parser_prod[204]
#define COLOR_parser_prod___ABraReassignExpr___empty_init SFT_parser_prod[205]
#define COLOR_parser_prod___ABraReassignExpr___init_abrareassignexpr SFT_parser_prod[206]
#define COLOR_parser_prod___AVarExpr___empty_init SFT_parser_prod[207]
#define COLOR_parser_prod___AVarExpr___init_avarexpr SFT_parser_prod[208]
#define COLOR_parser_prod___AVarAssignExpr___empty_init SFT_parser_prod[209]
#define COLOR_parser_prod___AVarAssignExpr___init_avarassignexpr SFT_parser_prod[210]
#define COLOR_parser_prod___AVarReassignExpr___empty_init SFT_parser_prod[211]
#define COLOR_parser_prod___AVarReassignExpr___init_avarreassignexpr SFT_parser_prod[212]
#define COLOR_parser_prod___ARangeExpr___empty_init SFT_parser_prod[213]
#define COLOR_parser_prod___ARangeExpr___init_arangeexpr SFT_parser_prod[214]
#define COLOR_parser_prod___ACrangeExpr___empty_init SFT_parser_prod[215]
#define COLOR_parser_prod___ACrangeExpr___init_acrangeexpr SFT_parser_prod[216]
#define COLOR_parser_prod___AOrangeExpr___empty_init SFT_parser_prod[217]
#define COLOR_parser_prod___AOrangeExpr___init_aorangeexpr SFT_parser_prod[218]
#define COLOR_parser_prod___AArrayExpr___empty_init SFT_parser_prod[219]
#define COLOR_parser_prod___AArrayExpr___init_aarrayexpr SFT_parser_prod[220]
#define COLOR_parser_prod___ASelfExpr___empty_init SFT_parser_prod[221]
#define COLOR_parser_prod___ASelfExpr___init_aselfexpr SFT_parser_prod[222]
#define COLOR_parser_prod___AImplicitSelfExpr___empty_init SFT_parser_prod[223]
#define COLOR_parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr SFT_parser_prod[224]
#define COLOR_parser_prod___ATrueExpr___empty_init SFT_parser_prod[225]
#define COLOR_parser_prod___ATrueExpr___init_atrueexpr SFT_parser_prod[226]
#define COLOR_parser_prod___AFalseExpr___empty_init SFT_parser_prod[227]
#define COLOR_parser_prod___AFalseExpr___init_afalseexpr SFT_parser_prod[228]
#define COLOR_parser_prod___ANullExpr___empty_init SFT_parser_prod[229]
#define COLOR_parser_prod___ANullExpr___init_anullexpr SFT_parser_prod[230]
#define COLOR_parser_prod___AIntExpr___empty_init SFT_parser_prod[231]
#define COLOR_parser_prod___AIntExpr___init_aintexpr SFT_parser_prod[232]
#define COLOR_parser_prod___AFloatExpr___empty_init SFT_parser_prod[233]
#define COLOR_parser_prod___AFloatExpr___init_afloatexpr SFT_parser_prod[234]
#define COLOR_parser_prod___ACharExpr___empty_init SFT_parser_prod[235]
#define COLOR_parser_prod___ACharExpr___init_acharexpr SFT_parser_prod[236]
#define COLOR_parser_prod___AStringExpr___empty_init SFT_parser_prod[237]
#define COLOR_parser_prod___AStringExpr___init_astringexpr SFT_parser_prod[238]
#define COLOR_parser_prod___AStartStringExpr___empty_init SFT_parser_prod[239]
#define COLOR_parser_prod___AStartStringExpr___init_astartstringexpr SFT_parser_prod[240]
#define COLOR_parser_prod___AMidStringExpr___empty_init SFT_parser_prod[241]
#define COLOR_parser_prod___AMidStringExpr___init_amidstringexpr SFT_parser_prod[242]
#define COLOR_parser_prod___AEndStringExpr___empty_init SFT_parser_prod[243]
#define COLOR_parser_prod___AEndStringExpr___init_aendstringexpr SFT_parser_prod[244]
#define COLOR_parser_prod___ASuperstringExpr___empty_init SFT_parser_prod[245]
#define COLOR_parser_prod___ASuperstringExpr___init_asuperstringexpr SFT_parser_prod[246]
#define COLOR_parser_prod___AParExpr___empty_init SFT_parser_prod[247]
#define COLOR_parser_prod___AParExpr___init_aparexpr SFT_parser_prod[248]
#define COLOR_parser_prod___APlusAssignOp___empty_init SFT_parser_prod[249]
#define COLOR_parser_prod___APlusAssignOp___init_aplusassignop SFT_parser_prod[250]
#define COLOR_parser_prod___AMinusAssignOp___empty_init SFT_parser_prod[251]
#define COLOR_parser_prod___AMinusAssignOp___init_aminusassignop SFT_parser_prod[252]
#define COLOR_parser_prod___AQualified___empty_init SFT_parser_prod[253]
#define COLOR_parser_prod___AQualified___init_aqualified SFT_parser_prod[254]
#define COLOR_parser_prod___ADoc___empty_init SFT_parser_prod[255]
#define COLOR_parser_prod___ADoc___init_adoc SFT_parser_prod[256]
#define COLOR_parser_prod___Start___init SFT_parser_prod[257]
#define ATTR_parser_prod___PNode____parent(recv) ATTR(recv, COLOR_parser_prod___PNode____parent)
typedef val_t (* parser_prod___PNode___parent_t)(val_t  self);
val_t parser_prod___PNode___parent(val_t  self);
typedef void (* parser_prod___PNode___parent__eq_t)(val_t  self, val_t  param0);
void parser_prod___PNode___parent__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___PNode___remove_child_t)(val_t  self, val_t  param0);
void parser_prod___PNode___remove_child(val_t  self, val_t  param0);
typedef void (* parser_prod___PNode___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___PNode___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___PNode___replace_with_t)(val_t  self, val_t  param0);
void parser_prod___PNode___replace_with(val_t  self, val_t  param0);
typedef void (* parser_prod___PNode___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___PNode___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___PNode___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___PNode___visit_all_reverse(val_t  self, val_t  param0);
typedef val_t (* parser_prod___PNode___locate_t)(val_t  self);
val_t parser_prod___PNode___locate(val_t  self);
typedef void (* parser_prod___PNode___printl_t)(val_t  self, val_t  param0);
void parser_prod___PNode___printl(val_t  self, val_t  param0);
typedef void (* parser_prod___Token___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___Token___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___Token___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___Token___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___Token___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___Token___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* parser_prod___Token___locate_t)(val_t  self);
val_t parser_prod___Token___locate(val_t  self);
#define ATTR_parser_prod___Prod____first_token(recv) ATTR(recv, COLOR_parser_prod___Prod____first_token)
typedef val_t (* parser_prod___Prod___first_token_t)(val_t  self);
val_t parser_prod___Prod___first_token(val_t  self);
typedef void (* parser_prod___Prod___first_token__eq_t)(val_t  self, val_t  param0);
void parser_prod___Prod___first_token__eq(val_t  self, val_t  param0);
#define ATTR_parser_prod___Prod____last_token(recv) ATTR(recv, COLOR_parser_prod___Prod____last_token)
typedef val_t (* parser_prod___Prod___last_token_t)(val_t  self);
val_t parser_prod___Prod___last_token(val_t  self);
typedef void (* parser_prod___Prod___last_token__eq_t)(val_t  self, val_t  param0);
void parser_prod___Prod___last_token__eq(val_t  self, val_t  param0);
typedef val_t (* parser_prod___Prod___locate_t)(val_t  self);
val_t parser_prod___Prod___locate(val_t  self);
typedef void (* parser_prod___Prod___replace_with_t)(val_t  self, val_t  param0);
void parser_prod___Prod___replace_with(val_t  self, val_t  param0);
typedef void (* parser_prod___Visitor___visit_t)(val_t  self, val_t  param0);
void parser_prod___Visitor___visit(val_t  self, val_t  param0);
typedef void (* parser_prod___AModule___n_packagedecl__eq_t)(val_t  self, val_t  param0);
void parser_prod___AModule___n_packagedecl__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AModule___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AModule___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AModule___empty_init();
typedef void (* parser_prod___AModule___init_amodule_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AModule___init_amodule(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AModule___init_amodule(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AModule___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AModule___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AModule___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AModule___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AModule___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AModule___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APackagedecl___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___APackagedecl___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APackagedecl___n_kwpackage__eq_t)(val_t  self, val_t  param0);
void parser_prod___APackagedecl___n_kwpackage__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APackagedecl___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___APackagedecl___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APackagedecl___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APackagedecl___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APackagedecl___empty_init();
typedef void (* parser_prod___APackagedecl___init_apackagedecl_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___APackagedecl___init_apackagedecl(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___APackagedecl___init_apackagedecl(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___APackagedecl___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APackagedecl___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APackagedecl___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APackagedecl___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APackagedecl___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APackagedecl___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AImport___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AImport___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AImport___n_kwimport__eq_t)(val_t  self, val_t  param0);
void parser_prod___AImport___n_kwimport__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AImport___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AImport___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AImport___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AImport___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AImport___empty_init();
typedef void (* parser_prod___AImport___init_aimport_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AImport___init_aimport(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AImport___init_aimport(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AImport___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AImport___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AImport___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AImport___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AImport___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AImport___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ANoImport___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANoImport___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANoImport___n_kwimport__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANoImport___n_kwimport__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANoImport___n_kwend__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANoImport___n_kwend__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANoImport___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ANoImport___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ANoImport___empty_init();
typedef void (* parser_prod___ANoImport___init_anoimport_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___ANoImport___init_anoimport(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___ANoImport___init_anoimport(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___ANoImport___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ANoImport___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ANoImport___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ANoImport___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ANoImport___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ANoImport___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APublicVisibility___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APublicVisibility___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APublicVisibility___empty_init();
typedef void (* parser_prod___APublicVisibility___init_apublicvisibility_t)(val_t  self, int* init_table);
void parser_prod___APublicVisibility___init_apublicvisibility(val_t  self, int* init_table);
val_t NEW_parser_prod___APublicVisibility___init_apublicvisibility();
typedef void (* parser_prod___APublicVisibility___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APublicVisibility___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APublicVisibility___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APublicVisibility___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APublicVisibility___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APublicVisibility___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APrivateVisibility___n_kwprivate__eq_t)(val_t  self, val_t  param0);
void parser_prod___APrivateVisibility___n_kwprivate__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APrivateVisibility___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APrivateVisibility___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APrivateVisibility___empty_init();
typedef void (* parser_prod___APrivateVisibility___init_aprivatevisibility_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___APrivateVisibility___init_aprivatevisibility(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___APrivateVisibility___init_aprivatevisibility(val_t  param0);
typedef void (* parser_prod___APrivateVisibility___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APrivateVisibility___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APrivateVisibility___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APrivateVisibility___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APrivateVisibility___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APrivateVisibility___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AProtectedVisibility___n_kwprotected__eq_t)(val_t  self, val_t  param0);
void parser_prod___AProtectedVisibility___n_kwprotected__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AProtectedVisibility___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AProtectedVisibility___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AProtectedVisibility___empty_init();
typedef void (* parser_prod___AProtectedVisibility___init_aprotectedvisibility_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AProtectedVisibility___init_aprotectedvisibility(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AProtectedVisibility___init_aprotectedvisibility(val_t  param0);
typedef void (* parser_prod___AProtectedVisibility___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AProtectedVisibility___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AProtectedVisibility___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AProtectedVisibility___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AProtectedVisibility___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AProtectedVisibility___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AIntrudeVisibility___n_kwintrude__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIntrudeVisibility___n_kwintrude__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIntrudeVisibility___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AIntrudeVisibility___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AIntrudeVisibility___empty_init();
typedef void (* parser_prod___AIntrudeVisibility___init_aintrudevisibility_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AIntrudeVisibility___init_aintrudevisibility(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AIntrudeVisibility___init_aintrudevisibility(val_t  param0);
typedef void (* parser_prod___AIntrudeVisibility___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AIntrudeVisibility___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AIntrudeVisibility___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AIntrudeVisibility___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AIntrudeVisibility___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AIntrudeVisibility___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AClassdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___AClassdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AClassdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AClassdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AClassdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AClassdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AClassdef___n_classkind__eq_t)(val_t  self, val_t  param0);
void parser_prod___AClassdef___n_classkind__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AClassdef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AClassdef___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AClassdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AClassdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AClassdef___empty_init();
typedef void (* parser_prod___AClassdef___init_aclassdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, val_t  param7, int* init_table);
void parser_prod___AClassdef___init_aclassdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, val_t  param7, int* init_table);
val_t NEW_parser_prod___AClassdef___init_aclassdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, val_t  param7);
typedef void (* parser_prod___AClassdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AClassdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AClassdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AClassdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AClassdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AClassdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ATopClassdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ATopClassdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ATopClassdef___empty_init();
typedef void (* parser_prod___ATopClassdef___init_atopclassdef_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ATopClassdef___init_atopclassdef(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ATopClassdef___init_atopclassdef(val_t  param0);
typedef void (* parser_prod___ATopClassdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ATopClassdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ATopClassdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ATopClassdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ATopClassdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ATopClassdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AMainClassdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AMainClassdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AMainClassdef___empty_init();
typedef void (* parser_prod___AMainClassdef___init_amainclassdef_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AMainClassdef___init_amainclassdef(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AMainClassdef___init_amainclassdef(val_t  param0);
typedef void (* parser_prod___AMainClassdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AMainClassdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AMainClassdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AMainClassdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AMainClassdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AMainClassdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteClasskind___n_kwclass__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteClasskind___n_kwclass__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteClasskind___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AConcreteClasskind___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AConcreteClasskind___empty_init();
typedef void (* parser_prod___AConcreteClasskind___init_aconcreteclasskind_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AConcreteClasskind___init_aconcreteclasskind(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AConcreteClasskind___init_aconcreteclasskind(val_t  param0);
typedef void (* parser_prod___AConcreteClasskind___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AConcreteClasskind___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AConcreteClasskind___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteClasskind___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteClasskind___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteClasskind___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAbstractClasskind___n_kwabstract__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAbstractClasskind___n_kwabstract__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAbstractClasskind___n_kwclass__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAbstractClasskind___n_kwclass__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAbstractClasskind___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAbstractClasskind___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAbstractClasskind___empty_init();
typedef void (* parser_prod___AAbstractClasskind___init_aabstractclasskind_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AAbstractClasskind___init_aabstractclasskind(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AAbstractClasskind___init_aabstractclasskind(val_t  param0, val_t  param1);
typedef void (* parser_prod___AAbstractClasskind___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAbstractClasskind___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAbstractClasskind___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAbstractClasskind___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAbstractClasskind___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAbstractClasskind___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AInterfaceClasskind___n_kwinterface__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInterfaceClasskind___n_kwinterface__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInterfaceClasskind___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AInterfaceClasskind___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AInterfaceClasskind___empty_init();
typedef void (* parser_prod___AInterfaceClasskind___init_ainterfaceclasskind_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AInterfaceClasskind___init_ainterfaceclasskind(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AInterfaceClasskind___init_ainterfaceclasskind(val_t  param0);
typedef void (* parser_prod___AInterfaceClasskind___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AInterfaceClasskind___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AInterfaceClasskind___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AInterfaceClasskind___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AInterfaceClasskind___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AInterfaceClasskind___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AUniversalClasskind___n_kwuniversal__eq_t)(val_t  self, val_t  param0);
void parser_prod___AUniversalClasskind___n_kwuniversal__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AUniversalClasskind___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AUniversalClasskind___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AUniversalClasskind___empty_init();
typedef void (* parser_prod___AUniversalClasskind___init_auniversalclasskind_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AUniversalClasskind___init_auniversalclasskind(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AUniversalClasskind___init_auniversalclasskind(val_t  param0);
typedef void (* parser_prod___AUniversalClasskind___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AUniversalClasskind___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AUniversalClasskind___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AUniversalClasskind___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AUniversalClasskind___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AUniversalClasskind___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AFormaldef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AFormaldef___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AFormaldef___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___AFormaldef___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AFormaldef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AFormaldef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AFormaldef___empty_init();
typedef void (* parser_prod___AFormaldef___init_aformaldef_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AFormaldef___init_aformaldef(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AFormaldef___init_aformaldef(val_t  param0, val_t  param1);
typedef void (* parser_prod___AFormaldef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AFormaldef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AFormaldef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AFormaldef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AFormaldef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AFormaldef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperclass___n_kwspecial__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASuperclass___n_kwspecial__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperclass___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASuperclass___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperclass___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASuperclass___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASuperclass___empty_init();
typedef void (* parser_prod___ASuperclass___init_asuperclass_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ASuperclass___init_asuperclass(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ASuperclass___init_asuperclass(val_t  param0, val_t  param1);
typedef void (* parser_prod___ASuperclass___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASuperclass___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASuperclass___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASuperclass___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperclass___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASuperclass___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_readable__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_readable__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_writable__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_writable__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_kwattr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_kwattr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAttrPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAttrPropdef___empty_init();
typedef void (* parser_prod___AAttrPropdef___init_aattrpropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, val_t  param7, val_t  param8, int* init_table);
void parser_prod___AAttrPropdef___init_aattrpropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, val_t  param7, val_t  param8, int* init_table);
val_t NEW_parser_prod___AAttrPropdef___init_aattrpropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, val_t  param7, val_t  param8);
typedef void (* parser_prod___AAttrPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAttrPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAttrPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAttrPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AMethPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMethPropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMethPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMethPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMethPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMethPropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMethPropdef___n_methid__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMethPropdef___n_methid__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMethPropdef___n_signature__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMethPropdef___n_signature__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMethPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AMethPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AMethPropdef___empty_init();
typedef void (* parser_prod___AMethPropdef___init_amethpropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
void parser_prod___AMethPropdef___init_amethpropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
val_t NEW_parser_prod___AMethPropdef___init_amethpropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
typedef void (* parser_prod___AMethPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AMethPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AMethPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AMethPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AMethPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AMethPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___n_methid__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___n_methid__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___n_signature__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___n_signature__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ADeferredMethPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ADeferredMethPropdef___empty_init();
typedef void (* parser_prod___ADeferredMethPropdef___init_adeferredmethpropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
void parser_prod___ADeferredMethPropdef___init_adeferredmethpropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
val_t NEW_parser_prod___ADeferredMethPropdef___init_adeferredmethpropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5);
typedef void (* parser_prod___ADeferredMethPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ADeferredMethPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ADeferredMethPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ADeferredMethPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ADeferredMethPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___n_methid__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___n_methid__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___n_signature__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___n_signature__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AInternMethPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AInternMethPropdef___empty_init();
typedef void (* parser_prod___AInternMethPropdef___init_ainternmethpropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
void parser_prod___AInternMethPropdef___init_ainternmethpropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
val_t NEW_parser_prod___AInternMethPropdef___init_ainternmethpropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5);
typedef void (* parser_prod___AInternMethPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AInternMethPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AInternMethPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AInternMethPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AInternMethPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___n_methid__eq_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___n_methid__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___n_signature__eq_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___n_signature__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___n_extern__eq_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___n_extern__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AExternMethPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AExternMethPropdef___empty_init();
typedef void (* parser_prod___AExternMethPropdef___init_aexternmethpropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, int* init_table);
void parser_prod___AExternMethPropdef___init_aexternmethpropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, int* init_table);
val_t NEW_parser_prod___AExternMethPropdef___init_aexternmethpropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6);
typedef void (* parser_prod___AExternMethPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AExternMethPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AExternMethPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AExternMethPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AExternMethPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___n_kwmeth__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___n_kwmeth__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___n_methid__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___n_methid__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___n_signature__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___n_signature__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___n_block__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___n_block__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AConcreteMethPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AConcreteMethPropdef___empty_init();
typedef void (* parser_prod___AConcreteMethPropdef___init_aconcretemethpropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, int* init_table);
void parser_prod___AConcreteMethPropdef___init_aconcretemethpropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, int* init_table);
val_t NEW_parser_prod___AConcreteMethPropdef___init_aconcretemethpropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6);
typedef void (* parser_prod___AConcreteMethPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AConcreteMethPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AConcreteMethPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteMethPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteMethPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___n_kwinit__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___n_kwinit__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___n_methid__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___n_methid__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___n_signature__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___n_signature__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___n_block__eq_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___n_block__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AConcreteInitPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AConcreteInitPropdef___empty_init();
typedef void (* parser_prod___AConcreteInitPropdef___init_aconcreteinitpropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, int* init_table);
void parser_prod___AConcreteInitPropdef___init_aconcreteinitpropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6, int* init_table);
val_t NEW_parser_prod___AConcreteInitPropdef___init_aconcreteinitpropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, val_t  param6);
typedef void (* parser_prod___AConcreteInitPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AConcreteInitPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AConcreteInitPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AConcreteInitPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AConcreteInitPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AMainMethPropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMainMethPropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMainMethPropdef___n_block__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMainMethPropdef___n_block__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMainMethPropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AMainMethPropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AMainMethPropdef___empty_init();
typedef void (* parser_prod___AMainMethPropdef___init_amainmethpropdef_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AMainMethPropdef___init_amainmethpropdef(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AMainMethPropdef___init_amainmethpropdef(val_t  param0, val_t  param1);
typedef void (* parser_prod___AMainMethPropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AMainMethPropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AMainMethPropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AMainMethPropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AMainMethPropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AMainMethPropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___n_doc__eq_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___n_doc__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___n_visibility__eq_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___n_visibility__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___n_kwtype__eq_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___n_kwtype__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ATypePropdef___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ATypePropdef___empty_init();
typedef void (* parser_prod___ATypePropdef___init_atypepropdef_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
void parser_prod___ATypePropdef___init_atypepropdef(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
val_t NEW_parser_prod___ATypePropdef___init_atypepropdef(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5);
typedef void (* parser_prod___ATypePropdef___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ATypePropdef___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ATypePropdef___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ATypePropdef___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ATypePropdef___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AReadAble___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AReadAble___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AReadAble___n_kwreadable__eq_t)(val_t  self, val_t  param0);
void parser_prod___AReadAble___n_kwreadable__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AReadAble___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AReadAble___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AReadAble___empty_init();
typedef void (* parser_prod___AReadAble___init_areadable_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AReadAble___init_areadable(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AReadAble___init_areadable(val_t  param0, val_t  param1);
typedef void (* parser_prod___AReadAble___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AReadAble___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AReadAble___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AReadAble___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AReadAble___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AReadAble___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AWriteAble___n_kwredef__eq_t)(val_t  self, val_t  param0);
void parser_prod___AWriteAble___n_kwredef__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AWriteAble___n_kwwritable__eq_t)(val_t  self, val_t  param0);
void parser_prod___AWriteAble___n_kwwritable__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AWriteAble___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AWriteAble___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AWriteAble___empty_init();
typedef void (* parser_prod___AWriteAble___init_awriteable_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AWriteAble___init_awriteable(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AWriteAble___init_awriteable(val_t  param0, val_t  param1);
typedef void (* parser_prod___AWriteAble___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AWriteAble___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AWriteAble___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AWriteAble___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AWriteAble___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AWriteAble___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AIdMethid___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIdMethid___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIdMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AIdMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AIdMethid___empty_init();
typedef void (* parser_prod___AIdMethid___init_aidmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AIdMethid___init_aidmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AIdMethid___init_aidmethid(val_t  param0);
typedef void (* parser_prod___AIdMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AIdMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AIdMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AIdMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AIdMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AIdMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusMethid___n_plus__eq_t)(val_t  self, val_t  param0);
void parser_prod___APlusMethid___n_plus__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APlusMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APlusMethid___empty_init();
typedef void (* parser_prod___APlusMethid___init_aplusmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___APlusMethid___init_aplusmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___APlusMethid___init_aplusmethid(val_t  param0);
typedef void (* parser_prod___APlusMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APlusMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APlusMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APlusMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APlusMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusMethid___n_minus__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMinusMethid___n_minus__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AMinusMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AMinusMethid___empty_init();
typedef void (* parser_prod___AMinusMethid___init_aminusmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AMinusMethid___init_aminusmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AMinusMethid___init_aminusmethid(val_t  param0);
typedef void (* parser_prod___AMinusMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AMinusMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AMinusMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AMinusMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AMinusMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarMethid___n_star__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStarMethid___n_star__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AStarMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AStarMethid___empty_init();
typedef void (* parser_prod___AStarMethid___init_astarmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AStarMethid___init_astarmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AStarMethid___init_astarmethid(val_t  param0);
typedef void (* parser_prod___AStarMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AStarMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AStarMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AStarMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AStarMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASlashMethid___n_slash__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASlashMethid___n_slash__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASlashMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASlashMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASlashMethid___empty_init();
typedef void (* parser_prod___ASlashMethid___init_aslashmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ASlashMethid___init_aslashmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ASlashMethid___init_aslashmethid(val_t  param0);
typedef void (* parser_prod___ASlashMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASlashMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASlashMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASlashMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASlashMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASlashMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APercentMethid___n_percent__eq_t)(val_t  self, val_t  param0);
void parser_prod___APercentMethid___n_percent__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APercentMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APercentMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APercentMethid___empty_init();
typedef void (* parser_prod___APercentMethid___init_apercentmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___APercentMethid___init_apercentmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___APercentMethid___init_apercentmethid(val_t  param0);
typedef void (* parser_prod___APercentMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APercentMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APercentMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APercentMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APercentMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APercentMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AEqMethid___n_eq__eq_t)(val_t  self, val_t  param0);
void parser_prod___AEqMethid___n_eq__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AEqMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AEqMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AEqMethid___empty_init();
typedef void (* parser_prod___AEqMethid___init_aeqmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AEqMethid___init_aeqmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AEqMethid___init_aeqmethid(val_t  param0);
typedef void (* parser_prod___AEqMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AEqMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AEqMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AEqMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AEqMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AEqMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ANeMethid___n_ne__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANeMethid___n_ne__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANeMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ANeMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ANeMethid___empty_init();
typedef void (* parser_prod___ANeMethid___init_anemethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ANeMethid___init_anemethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ANeMethid___init_anemethid(val_t  param0);
typedef void (* parser_prod___ANeMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ANeMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ANeMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ANeMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ANeMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ANeMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ALeMethid___n_le__eq_t)(val_t  self, val_t  param0);
void parser_prod___ALeMethid___n_le__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ALeMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ALeMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ALeMethid___empty_init();
typedef void (* parser_prod___ALeMethid___init_alemethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ALeMethid___init_alemethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ALeMethid___init_alemethid(val_t  param0);
typedef void (* parser_prod___ALeMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ALeMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ALeMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ALeMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ALeMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ALeMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AGeMethid___n_ge__eq_t)(val_t  self, val_t  param0);
void parser_prod___AGeMethid___n_ge__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AGeMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AGeMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AGeMethid___empty_init();
typedef void (* parser_prod___AGeMethid___init_agemethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AGeMethid___init_agemethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AGeMethid___init_agemethid(val_t  param0);
typedef void (* parser_prod___AGeMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AGeMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AGeMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AGeMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AGeMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AGeMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ALtMethid___n_lt__eq_t)(val_t  self, val_t  param0);
void parser_prod___ALtMethid___n_lt__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ALtMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ALtMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ALtMethid___empty_init();
typedef void (* parser_prod___ALtMethid___init_altmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ALtMethid___init_altmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ALtMethid___init_altmethid(val_t  param0);
typedef void (* parser_prod___ALtMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ALtMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ALtMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ALtMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ALtMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ALtMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AGtMethid___n_gt__eq_t)(val_t  self, val_t  param0);
void parser_prod___AGtMethid___n_gt__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AGtMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AGtMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AGtMethid___empty_init();
typedef void (* parser_prod___AGtMethid___init_agtmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AGtMethid___init_agtmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AGtMethid___init_agtmethid(val_t  param0);
typedef void (* parser_prod___AGtMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AGtMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AGtMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AGtMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AGtMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AGtMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraMethid___n_obra__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraMethid___n_obra__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraMethid___n_cbra__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraMethid___n_cbra__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABraMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABraMethid___empty_init();
typedef void (* parser_prod___ABraMethid___init_abramethid_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ABraMethid___init_abramethid(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ABraMethid___init_abramethid(val_t  param0, val_t  param1);
typedef void (* parser_prod___ABraMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABraMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABraMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABraMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABraMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarshipMethid___n_starship__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStarshipMethid___n_starship__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarshipMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AStarshipMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AStarshipMethid___empty_init();
typedef void (* parser_prod___AStarshipMethid___init_astarshipmethid_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AStarshipMethid___init_astarshipmethid(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AStarshipMethid___init_astarshipmethid(val_t  param0);
typedef void (* parser_prod___AStarshipMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AStarshipMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AStarshipMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AStarshipMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarshipMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AStarshipMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssignMethid___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAssignMethid___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssignMethid___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAssignMethid___n_assign__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssignMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAssignMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAssignMethid___empty_init();
typedef void (* parser_prod___AAssignMethid___init_aassignmethid_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AAssignMethid___init_aassignmethid(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AAssignMethid___init_aassignmethid(val_t  param0, val_t  param1);
typedef void (* parser_prod___AAssignMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAssignMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAssignMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAssignMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssignMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAssignMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraassignMethid___n_obra__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraassignMethid___n_obra__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraassignMethid___n_cbra__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraassignMethid___n_cbra__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraassignMethid___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraassignMethid___n_assign__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraassignMethid___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABraassignMethid___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABraassignMethid___empty_init();
typedef void (* parser_prod___ABraassignMethid___init_abraassignmethid_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___ABraassignMethid___init_abraassignmethid(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___ABraassignMethid___init_abraassignmethid(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___ABraassignMethid___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABraassignMethid___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABraassignMethid___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABraassignMethid___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraassignMethid___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABraassignMethid___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASignature___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASignature___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASignature___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASignature___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASignature___empty_init();
typedef void (* parser_prod___ASignature___init_asignature_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ASignature___init_asignature(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ASignature___init_asignature(val_t  param0, val_t  param1);
typedef void (* parser_prod___ASignature___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASignature___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASignature___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASignature___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASignature___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASignature___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AParam___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AParam___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AParam___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___AParam___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AParam___n_dotdotdot__eq_t)(val_t  self, val_t  param0);
void parser_prod___AParam___n_dotdotdot__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AParam___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AParam___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AParam___empty_init();
typedef void (* parser_prod___AParam___init_aparam_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AParam___init_aparam(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AParam___init_aparam(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AParam___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AParam___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AParam___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AParam___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AParam___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AParam___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AType___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AType___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AType___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AType___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AType___empty_init();
typedef void (* parser_prod___AType___init_atype_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AType___init_atype(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AType___init_atype(val_t  param0, val_t  param1);
typedef void (* parser_prod___AType___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AType___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AType___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AType___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AType___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AType___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABlockExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABlockExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABlockExpr___empty_init();
typedef void (* parser_prod___ABlockExpr___init_ablockexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ABlockExpr___init_ablockexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ABlockExpr___init_ablockexpr(val_t  param0);
typedef void (* parser_prod___ABlockExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABlockExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABlockExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABlockExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABlockExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABlockExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AVardeclExpr___n_kwvar__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVardeclExpr___n_kwvar__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVardeclExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVardeclExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVardeclExpr___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVardeclExpr___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVardeclExpr___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVardeclExpr___n_assign__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVardeclExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVardeclExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVardeclExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AVardeclExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AVardeclExpr___empty_init();
typedef void (* parser_prod___AVardeclExpr___init_avardeclexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
void parser_prod___AVardeclExpr___init_avardeclexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
val_t NEW_parser_prod___AVardeclExpr___init_avardeclexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
typedef void (* parser_prod___AVardeclExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AVardeclExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AVardeclExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AVardeclExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AVardeclExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AVardeclExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AReturnExpr___n_kwreturn__eq_t)(val_t  self, val_t  param0);
void parser_prod___AReturnExpr___n_kwreturn__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AReturnExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AReturnExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AReturnExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AReturnExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AReturnExpr___empty_init();
typedef void (* parser_prod___AReturnExpr___init_areturnexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AReturnExpr___init_areturnexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AReturnExpr___init_areturnexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AReturnExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AReturnExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AReturnExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AReturnExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AReturnExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AReturnExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABreakExpr___n_kwbreak__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABreakExpr___n_kwbreak__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABreakExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABreakExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABreakExpr___empty_init();
typedef void (* parser_prod___ABreakExpr___init_abreakexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ABreakExpr___init_abreakexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ABreakExpr___init_abreakexpr(val_t  param0);
typedef void (* parser_prod___ABreakExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABreakExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABreakExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABreakExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABreakExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABreakExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAbortExpr___n_kwabort__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAbortExpr___n_kwabort__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAbortExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAbortExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAbortExpr___empty_init();
typedef void (* parser_prod___AAbortExpr___init_aabortexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AAbortExpr___init_aabortexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AAbortExpr___init_aabortexpr(val_t  param0);
typedef void (* parser_prod___AAbortExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAbortExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAbortExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAbortExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAbortExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAbortExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AContinueExpr___n_kwcontinue__eq_t)(val_t  self, val_t  param0);
void parser_prod___AContinueExpr___n_kwcontinue__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AContinueExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AContinueExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AContinueExpr___empty_init();
typedef void (* parser_prod___AContinueExpr___init_acontinueexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AContinueExpr___init_acontinueexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AContinueExpr___init_acontinueexpr(val_t  param0);
typedef void (* parser_prod___AContinueExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AContinueExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AContinueExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AContinueExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AContinueExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AContinueExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ADoExpr___n_kwdo__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADoExpr___n_kwdo__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADoExpr___n_block__eq_t)(val_t  self, val_t  param0);
void parser_prod___ADoExpr___n_block__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ADoExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ADoExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ADoExpr___empty_init();
typedef void (* parser_prod___ADoExpr___init_adoexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ADoExpr___init_adoexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ADoExpr___init_adoexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ADoExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ADoExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ADoExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ADoExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ADoExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ADoExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfExpr___n_kwif__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfExpr___n_kwif__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfExpr___n_then__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfExpr___n_then__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfExpr___n_else__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfExpr___n_else__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AIfExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AIfExpr___empty_init();
typedef void (* parser_prod___AIfExpr___init_aifexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void parser_prod___AIfExpr___init_aifexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_parser_prod___AIfExpr___init_aifexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* parser_prod___AIfExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AIfExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AIfExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AIfExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AIfExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___n_kwif__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___n_kwif__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___n_kwthen__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___n_kwthen__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___n_then__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___n_then__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___n_kwelse__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___n_kwelse__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___n_else__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___n_else__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AIfexprExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AIfexprExpr___empty_init();
typedef void (* parser_prod___AIfexprExpr___init_aifexprexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
void parser_prod___AIfexprExpr___init_aifexprexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5, int* init_table);
val_t NEW_parser_prod___AIfexprExpr___init_aifexprexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, val_t  param5);
typedef void (* parser_prod___AIfexprExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AIfexprExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AIfexprExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AIfexprExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AIfexprExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AWhileExpr___n_kwwhile__eq_t)(val_t  self, val_t  param0);
void parser_prod___AWhileExpr___n_kwwhile__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AWhileExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AWhileExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AWhileExpr___n_kwdo__eq_t)(val_t  self, val_t  param0);
void parser_prod___AWhileExpr___n_kwdo__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AWhileExpr___n_block__eq_t)(val_t  self, val_t  param0);
void parser_prod___AWhileExpr___n_block__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AWhileExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AWhileExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AWhileExpr___empty_init();
typedef void (* parser_prod___AWhileExpr___init_awhileexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void parser_prod___AWhileExpr___init_awhileexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_parser_prod___AWhileExpr___init_awhileexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* parser_prod___AWhileExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AWhileExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AWhileExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AWhileExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AWhileExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AWhileExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AForExpr___n_vardecl__eq_t)(val_t  self, val_t  param0);
void parser_prod___AForExpr___n_vardecl__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AForExpr___n_kwdo__eq_t)(val_t  self, val_t  param0);
void parser_prod___AForExpr___n_kwdo__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AForExpr___n_block__eq_t)(val_t  self, val_t  param0);
void parser_prod___AForExpr___n_block__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AForExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AForExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AForExpr___empty_init();
typedef void (* parser_prod___AForExpr___init_aforexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AForExpr___init_aforexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AForExpr___init_aforexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AForExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AForExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AForExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AForExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AForExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AForExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AForVardeclExpr___n_kwfor__eq_t)(val_t  self, val_t  param0);
void parser_prod___AForVardeclExpr___n_kwfor__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AForVardeclExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AForVardeclExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AForVardeclExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AForVardeclExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AForVardeclExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AForVardeclExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AForVardeclExpr___empty_init();
typedef void (* parser_prod___AForVardeclExpr___init_aforvardeclexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AForVardeclExpr___init_aforvardeclexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AForVardeclExpr___init_aforvardeclexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AForVardeclExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AForVardeclExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AForVardeclExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AForVardeclExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AForVardeclExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AForVardeclExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssertExpr___n_kwassert__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAssertExpr___n_kwassert__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssertExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAssertExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssertExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAssertExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssertExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAssertExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAssertExpr___empty_init();
typedef void (* parser_prod___AAssertExpr___init_aassertexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AAssertExpr___init_aassertexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AAssertExpr___init_aassertexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AAssertExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAssertExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAssertExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAssertExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAssertExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAssertExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AOnceExpr___n_kwonce__eq_t)(val_t  self, val_t  param0);
void parser_prod___AOnceExpr___n_kwonce__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AOnceExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AOnceExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AOnceExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AOnceExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AOnceExpr___empty_init();
typedef void (* parser_prod___AOnceExpr___init_aonceexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AOnceExpr___init_aonceexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AOnceExpr___init_aonceexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AOnceExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AOnceExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AOnceExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AOnceExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AOnceExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AOnceExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASendExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASendExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASendExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASendExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASendExpr___empty_init();
typedef void (* parser_prod___ASendExpr___init_asendexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ASendExpr___init_asendexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ASendExpr___init_asendexpr(val_t  param0);
typedef void (* parser_prod___ASendExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASendExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASendExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASendExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASendExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASendExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABinopExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABinopExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABinopExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABinopExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABinopExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABinopExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABinopExpr___empty_init();
typedef void (* parser_prod___ABinopExpr___init_abinopexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ABinopExpr___init_abinopexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ABinopExpr___init_abinopexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ABinopExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABinopExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABinopExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABinopExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABinopExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABinopExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AOrExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AOrExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AOrExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AOrExpr___empty_init();
typedef void (* parser_prod___AOrExpr___init_aorexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AOrExpr___init_aorexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AOrExpr___init_aorexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AOrExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AOrExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AOrExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AOrExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AOrExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAndExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAndExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAndExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAndExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAndExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAndExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAndExpr___empty_init();
typedef void (* parser_prod___AAndExpr___init_aandexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AAndExpr___init_aandexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AAndExpr___init_aandexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AAndExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAndExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAndExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAndExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAndExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAndExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ANotExpr___n_kwnot__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANotExpr___n_kwnot__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANotExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANotExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANotExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ANotExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ANotExpr___empty_init();
typedef void (* parser_prod___ANotExpr___init_anotexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ANotExpr___init_anotexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ANotExpr___init_anotexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ANotExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ANotExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ANotExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ANotExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ANotExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ANotExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AEqExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AEqExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AEqExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AEqExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AEqExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AEqExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AEqExpr___empty_init();
typedef void (* parser_prod___AEqExpr___init_aeqexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AEqExpr___init_aeqexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AEqExpr___init_aeqexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AEqExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AEqExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AEqExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AEqExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AEqExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AEqExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AEeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AEeExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AEeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AEeExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AEeExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AEeExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AEeExpr___empty_init();
typedef void (* parser_prod___AEeExpr___init_aeeexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AEeExpr___init_aeeexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AEeExpr___init_aeeexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AEeExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AEeExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AEeExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AEeExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AEeExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AEeExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ANeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANeExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANeExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANeExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ANeExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ANeExpr___empty_init();
typedef void (* parser_prod___ANeExpr___init_aneexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ANeExpr___init_aneexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ANeExpr___init_aneexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ANeExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ANeExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ANeExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ANeExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ANeExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ANeExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ALtExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ALtExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ALtExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___ALtExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ALtExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ALtExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ALtExpr___empty_init();
typedef void (* parser_prod___ALtExpr___init_altexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ALtExpr___init_altexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ALtExpr___init_altexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ALtExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ALtExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ALtExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ALtExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ALtExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ALtExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ALeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ALeExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ALeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___ALeExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ALeExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ALeExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ALeExpr___empty_init();
typedef void (* parser_prod___ALeExpr___init_aleexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ALeExpr___init_aleexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ALeExpr___init_aleexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ALeExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ALeExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ALeExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ALeExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ALeExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ALeExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AGtExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AGtExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AGtExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AGtExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AGtExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AGtExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AGtExpr___empty_init();
typedef void (* parser_prod___AGtExpr___init_agtexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AGtExpr___init_agtexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AGtExpr___init_agtexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AGtExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AGtExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AGtExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AGtExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AGtExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AGtExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AGeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AGeExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AGeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AGeExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AGeExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AGeExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AGeExpr___empty_init();
typedef void (* parser_prod___AGeExpr___init_ageexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AGeExpr___init_ageexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AGeExpr___init_ageexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AGeExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AGeExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AGeExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AGeExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AGeExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AGeExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AIsaExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIsaExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIsaExpr___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIsaExpr___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIsaExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AIsaExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AIsaExpr___empty_init();
typedef void (* parser_prod___AIsaExpr___init_aisaexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AIsaExpr___init_aisaexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AIsaExpr___init_aisaexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AIsaExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AIsaExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AIsaExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AIsaExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AIsaExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AIsaExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___APlusExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___APlusExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APlusExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APlusExpr___empty_init();
typedef void (* parser_prod___APlusExpr___init_aplusexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___APlusExpr___init_aplusexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___APlusExpr___init_aplusexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___APlusExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APlusExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APlusExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APlusExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APlusExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMinusExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMinusExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AMinusExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AMinusExpr___empty_init();
typedef void (* parser_prod___AMinusExpr___init_aminusexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AMinusExpr___init_aminusexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AMinusExpr___init_aminusexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AMinusExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AMinusExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AMinusExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AMinusExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AMinusExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarshipExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStarshipExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarshipExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStarshipExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarshipExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AStarshipExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AStarshipExpr___empty_init();
typedef void (* parser_prod___AStarshipExpr___init_astarshipexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AStarshipExpr___init_astarshipexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AStarshipExpr___init_astarshipexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AStarshipExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AStarshipExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AStarshipExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AStarshipExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarshipExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AStarshipExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStarExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStarExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AStarExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AStarExpr___empty_init();
typedef void (* parser_prod___AStarExpr___init_astarexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AStarExpr___init_astarexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AStarExpr___init_astarexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AStarExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AStarExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AStarExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AStarExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AStarExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AStarExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASlashExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASlashExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASlashExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASlashExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASlashExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASlashExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASlashExpr___empty_init();
typedef void (* parser_prod___ASlashExpr___init_aslashexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ASlashExpr___init_aslashexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ASlashExpr___init_aslashexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ASlashExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASlashExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASlashExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASlashExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASlashExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASlashExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APercentExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___APercentExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APercentExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___APercentExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APercentExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APercentExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APercentExpr___empty_init();
typedef void (* parser_prod___APercentExpr___init_apercentexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___APercentExpr___init_apercentexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___APercentExpr___init_apercentexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___APercentExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APercentExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APercentExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APercentExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APercentExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APercentExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AUminusExpr___n_minus__eq_t)(val_t  self, val_t  param0);
void parser_prod___AUminusExpr___n_minus__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AUminusExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AUminusExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AUminusExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AUminusExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AUminusExpr___empty_init();
typedef void (* parser_prod___AUminusExpr___init_auminusexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AUminusExpr___init_auminusexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AUminusExpr___init_auminusexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AUminusExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AUminusExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AUminusExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AUminusExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AUminusExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AUminusExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ANewExpr___n_kwnew__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANewExpr___n_kwnew__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANewExpr___n_type__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANewExpr___n_type__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANewExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANewExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANewExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ANewExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ANewExpr___empty_init();
typedef void (* parser_prod___ANewExpr___init_anewexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void parser_prod___ANewExpr___init_anewexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_parser_prod___ANewExpr___init_anewexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* parser_prod___ANewExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ANewExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ANewExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ANewExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ANewExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ANewExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAttrExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAttrExpr___empty_init();
typedef void (* parser_prod___AAttrExpr___init_aattrexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AAttrExpr___init_aattrexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AAttrExpr___init_aattrexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AAttrExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAttrExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAttrExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAttrExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAttrExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrAssignExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrAssignExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrAssignExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrAssignExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrAssignExpr___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrAssignExpr___n_assign__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrAssignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrAssignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrAssignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAttrAssignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAttrAssignExpr___empty_init();
typedef void (* parser_prod___AAttrAssignExpr___init_aattrassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void parser_prod___AAttrAssignExpr___init_aattrassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_parser_prod___AAttrAssignExpr___init_aattrassignexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* parser_prod___AAttrAssignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAttrAssignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAttrAssignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAttrAssignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrAssignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAttrAssignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrReassignExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrReassignExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrReassignExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrReassignExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrReassignExpr___n_assign_op__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrReassignExpr___n_assign_op__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrReassignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___AAttrReassignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrReassignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AAttrReassignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AAttrReassignExpr___empty_init();
typedef void (* parser_prod___AAttrReassignExpr___init_aattrreassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void parser_prod___AAttrReassignExpr___init_aattrreassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_parser_prod___AAttrReassignExpr___init_aattrreassignexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* parser_prod___AAttrReassignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AAttrReassignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AAttrReassignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AAttrReassignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AAttrReassignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AAttrReassignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ACallExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ACallExpr___empty_init();
typedef void (* parser_prod___ACallExpr___init_acallexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___ACallExpr___init_acallexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___ACallExpr___init_acallexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___ACallExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ACallExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ACallExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ACallExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ACallExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallAssignExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallAssignExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallAssignExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallAssignExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallAssignExpr___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallAssignExpr___n_assign__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallAssignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallAssignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallAssignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ACallAssignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ACallAssignExpr___empty_init();
typedef void (* parser_prod___ACallAssignExpr___init_acallassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
void parser_prod___ACallAssignExpr___init_acallassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
val_t NEW_parser_prod___ACallAssignExpr___init_acallassignexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
typedef void (* parser_prod___ACallAssignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ACallAssignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ACallAssignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ACallAssignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallAssignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ACallAssignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallReassignExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallReassignExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallReassignExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallReassignExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallReassignExpr___n_assign_op__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallReassignExpr___n_assign_op__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallReassignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACallReassignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallReassignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ACallReassignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ACallReassignExpr___empty_init();
typedef void (* parser_prod___ACallReassignExpr___init_acallreassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
void parser_prod___ACallReassignExpr___init_acallreassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4, int* init_table);
val_t NEW_parser_prod___ACallReassignExpr___init_acallreassignexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3, val_t  param4);
typedef void (* parser_prod___ACallReassignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ACallReassignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ACallReassignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ACallReassignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ACallReassignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ACallReassignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperExpr___n_qualified__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASuperExpr___n_qualified__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperExpr___n_kwsuper__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASuperExpr___n_kwsuper__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASuperExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASuperExpr___empty_init();
typedef void (* parser_prod___ASuperExpr___init_asuperexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___ASuperExpr___init_asuperexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___ASuperExpr___init_asuperexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___ASuperExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASuperExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASuperExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASuperExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASuperExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AInitExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInitExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInitExpr___n_kwinit__eq_t)(val_t  self, val_t  param0);
void parser_prod___AInitExpr___n_kwinit__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AInitExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AInitExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AInitExpr___empty_init();
typedef void (* parser_prod___AInitExpr___init_ainitexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AInitExpr___init_ainitexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AInitExpr___init_ainitexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AInitExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AInitExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AInitExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AInitExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AInitExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AInitExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABraExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABraExpr___empty_init();
typedef void (* parser_prod___ABraExpr___init_abraexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ABraExpr___init_abraexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ABraExpr___init_abraexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ABraExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABraExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABraExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABraExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABraExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraAssignExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraAssignExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraAssignExpr___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraAssignExpr___n_assign__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraAssignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraAssignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraAssignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABraAssignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABraAssignExpr___empty_init();
typedef void (* parser_prod___ABraAssignExpr___init_abraassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void parser_prod___ABraAssignExpr___init_abraassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_parser_prod___ABraAssignExpr___init_abraassignexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* parser_prod___ABraAssignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABraAssignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABraAssignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABraAssignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraAssignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABraAssignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraReassignExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraReassignExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraReassignExpr___n_assign_op__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraReassignExpr___n_assign_op__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraReassignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___ABraReassignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraReassignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ABraReassignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ABraReassignExpr___empty_init();
typedef void (* parser_prod___ABraReassignExpr___init_abrareassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
void parser_prod___ABraReassignExpr___init_abrareassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, val_t  param3, int* init_table);
val_t NEW_parser_prod___ABraReassignExpr___init_abrareassignexpr(val_t  param0, val_t  param1, val_t  param2, val_t  param3);
typedef void (* parser_prod___ABraReassignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ABraReassignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ABraReassignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ABraReassignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ABraReassignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ABraReassignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVarExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AVarExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AVarExpr___empty_init();
typedef void (* parser_prod___AVarExpr___init_avarexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AVarExpr___init_avarexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AVarExpr___init_avarexpr(val_t  param0);
typedef void (* parser_prod___AVarExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AVarExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AVarExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AVarExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AVarExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarAssignExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVarAssignExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarAssignExpr___n_assign__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVarAssignExpr___n_assign__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarAssignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVarAssignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarAssignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AVarAssignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AVarAssignExpr___empty_init();
typedef void (* parser_prod___AVarAssignExpr___init_avarassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AVarAssignExpr___init_avarassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AVarAssignExpr___init_avarassignexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AVarAssignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AVarAssignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AVarAssignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AVarAssignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarAssignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AVarAssignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarReassignExpr___n_id__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVarReassignExpr___n_id__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarReassignExpr___n_assign_op__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVarReassignExpr___n_assign_op__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarReassignExpr___n_value__eq_t)(val_t  self, val_t  param0);
void parser_prod___AVarReassignExpr___n_value__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarReassignExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AVarReassignExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AVarReassignExpr___empty_init();
typedef void (* parser_prod___AVarReassignExpr___init_avarreassignexpr_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void parser_prod___AVarReassignExpr___init_avarreassignexpr(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_parser_prod___AVarReassignExpr___init_avarreassignexpr(val_t  param0, val_t  param1, val_t  param2);
typedef void (* parser_prod___AVarReassignExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AVarReassignExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AVarReassignExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AVarReassignExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AVarReassignExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AVarReassignExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ARangeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ARangeExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ARangeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___ARangeExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ARangeExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ARangeExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ARangeExpr___empty_init();
typedef void (* parser_prod___ARangeExpr___init_arangeexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ARangeExpr___init_arangeexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ARangeExpr___init_arangeexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ARangeExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ARangeExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ARangeExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ARangeExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ARangeExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ARangeExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ACrangeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACrangeExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACrangeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACrangeExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACrangeExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ACrangeExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ACrangeExpr___empty_init();
typedef void (* parser_prod___ACrangeExpr___init_acrangeexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___ACrangeExpr___init_acrangeexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___ACrangeExpr___init_acrangeexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___ACrangeExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ACrangeExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ACrangeExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ACrangeExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ACrangeExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ACrangeExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrangeExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AOrangeExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrangeExpr___n_expr2__eq_t)(val_t  self, val_t  param0);
void parser_prod___AOrangeExpr___n_expr2__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrangeExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AOrangeExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AOrangeExpr___empty_init();
typedef void (* parser_prod___AOrangeExpr___init_aorangeexpr_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AOrangeExpr___init_aorangeexpr(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AOrangeExpr___init_aorangeexpr(val_t  param0, val_t  param1);
typedef void (* parser_prod___AOrangeExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AOrangeExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AOrangeExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AOrangeExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AOrangeExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AOrangeExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AArrayExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AArrayExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AArrayExpr___empty_init();
typedef void (* parser_prod___AArrayExpr___init_aarrayexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AArrayExpr___init_aarrayexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AArrayExpr___init_aarrayexpr(val_t  param0);
typedef void (* parser_prod___AArrayExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AArrayExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AArrayExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AArrayExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AArrayExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AArrayExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASelfExpr___n_kwself__eq_t)(val_t  self, val_t  param0);
void parser_prod___ASelfExpr___n_kwself__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ASelfExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASelfExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASelfExpr___empty_init();
typedef void (* parser_prod___ASelfExpr___init_aselfexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ASelfExpr___init_aselfexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ASelfExpr___init_aselfexpr(val_t  param0);
typedef void (* parser_prod___ASelfExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASelfExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASelfExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASelfExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASelfExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASelfExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AImplicitSelfExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AImplicitSelfExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AImplicitSelfExpr___empty_init();
typedef void (* parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr_t)(val_t  self, int* init_table);
void parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr(val_t  self, int* init_table);
val_t NEW_parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr();
typedef void (* parser_prod___AImplicitSelfExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AImplicitSelfExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AImplicitSelfExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AImplicitSelfExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AImplicitSelfExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AImplicitSelfExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ATrueExpr___n_kwtrue__eq_t)(val_t  self, val_t  param0);
void parser_prod___ATrueExpr___n_kwtrue__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ATrueExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ATrueExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ATrueExpr___empty_init();
typedef void (* parser_prod___ATrueExpr___init_atrueexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ATrueExpr___init_atrueexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ATrueExpr___init_atrueexpr(val_t  param0);
typedef void (* parser_prod___ATrueExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ATrueExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ATrueExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ATrueExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ATrueExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ATrueExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AFalseExpr___n_kwfalse__eq_t)(val_t  self, val_t  param0);
void parser_prod___AFalseExpr___n_kwfalse__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AFalseExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AFalseExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AFalseExpr___empty_init();
typedef void (* parser_prod___AFalseExpr___init_afalseexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AFalseExpr___init_afalseexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AFalseExpr___init_afalseexpr(val_t  param0);
typedef void (* parser_prod___AFalseExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AFalseExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AFalseExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AFalseExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AFalseExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AFalseExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ANullExpr___n_kwnull__eq_t)(val_t  self, val_t  param0);
void parser_prod___ANullExpr___n_kwnull__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ANullExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ANullExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ANullExpr___empty_init();
typedef void (* parser_prod___ANullExpr___init_anullexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ANullExpr___init_anullexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ANullExpr___init_anullexpr(val_t  param0);
typedef void (* parser_prod___ANullExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ANullExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ANullExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ANullExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ANullExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ANullExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AIntExpr___n_number__eq_t)(val_t  self, val_t  param0);
void parser_prod___AIntExpr___n_number__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AIntExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AIntExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AIntExpr___empty_init();
typedef void (* parser_prod___AIntExpr___init_aintexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AIntExpr___init_aintexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AIntExpr___init_aintexpr(val_t  param0);
typedef void (* parser_prod___AIntExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AIntExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AIntExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AIntExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AIntExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AIntExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AFloatExpr___n_float__eq_t)(val_t  self, val_t  param0);
void parser_prod___AFloatExpr___n_float__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AFloatExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AFloatExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AFloatExpr___empty_init();
typedef void (* parser_prod___AFloatExpr___init_afloatexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AFloatExpr___init_afloatexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AFloatExpr___init_afloatexpr(val_t  param0);
typedef void (* parser_prod___AFloatExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AFloatExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AFloatExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AFloatExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AFloatExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AFloatExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ACharExpr___n_char__eq_t)(val_t  self, val_t  param0);
void parser_prod___ACharExpr___n_char__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___ACharExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ACharExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ACharExpr___empty_init();
typedef void (* parser_prod___ACharExpr___init_acharexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ACharExpr___init_acharexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ACharExpr___init_acharexpr(val_t  param0);
typedef void (* parser_prod___ACharExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ACharExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ACharExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ACharExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ACharExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ACharExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStringExpr___n_string__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStringExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AStringExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AStringExpr___empty_init();
typedef void (* parser_prod___AStringExpr___init_astringexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AStringExpr___init_astringexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AStringExpr___init_astringexpr(val_t  param0);
typedef void (* parser_prod___AStringExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AStringExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AStringExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AStringExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AStringExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AStringExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AStartStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_prod___AStartStringExpr___n_string__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AStartStringExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AStartStringExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AStartStringExpr___empty_init();
typedef void (* parser_prod___AStartStringExpr___init_astartstringexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AStartStringExpr___init_astartstringexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AStartStringExpr___init_astartstringexpr(val_t  param0);
typedef void (* parser_prod___AStartStringExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AStartStringExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AStartStringExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AStartStringExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AStartStringExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AStartStringExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AMidStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMidStringExpr___n_string__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMidStringExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AMidStringExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AMidStringExpr___empty_init();
typedef void (* parser_prod___AMidStringExpr___init_amidstringexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AMidStringExpr___init_amidstringexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AMidStringExpr___init_amidstringexpr(val_t  param0);
typedef void (* parser_prod___AMidStringExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AMidStringExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AMidStringExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AMidStringExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AMidStringExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AMidStringExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AEndStringExpr___n_string__eq_t)(val_t  self, val_t  param0);
void parser_prod___AEndStringExpr___n_string__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AEndStringExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AEndStringExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AEndStringExpr___empty_init();
typedef void (* parser_prod___AEndStringExpr___init_aendstringexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AEndStringExpr___init_aendstringexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AEndStringExpr___init_aendstringexpr(val_t  param0);
typedef void (* parser_prod___AEndStringExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AEndStringExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AEndStringExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AEndStringExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AEndStringExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AEndStringExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperstringExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ASuperstringExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ASuperstringExpr___empty_init();
typedef void (* parser_prod___ASuperstringExpr___init_asuperstringexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ASuperstringExpr___init_asuperstringexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ASuperstringExpr___init_asuperstringexpr(val_t  param0);
typedef void (* parser_prod___ASuperstringExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ASuperstringExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ASuperstringExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ASuperstringExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ASuperstringExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ASuperstringExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AParExpr___n_expr__eq_t)(val_t  self, val_t  param0);
void parser_prod___AParExpr___n_expr__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AParExpr___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AParExpr___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AParExpr___empty_init();
typedef void (* parser_prod___AParExpr___init_aparexpr_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AParExpr___init_aparexpr(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AParExpr___init_aparexpr(val_t  param0);
typedef void (* parser_prod___AParExpr___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AParExpr___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AParExpr___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AParExpr___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AParExpr___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AParExpr___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusAssignOp___n_pluseq__eq_t)(val_t  self, val_t  param0);
void parser_prod___APlusAssignOp___n_pluseq__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusAssignOp___empty_init_t)(val_t  self, int* init_table);
void parser_prod___APlusAssignOp___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___APlusAssignOp___empty_init();
typedef void (* parser_prod___APlusAssignOp___init_aplusassignop_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___APlusAssignOp___init_aplusassignop(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___APlusAssignOp___init_aplusassignop(val_t  param0);
typedef void (* parser_prod___APlusAssignOp___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___APlusAssignOp___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___APlusAssignOp___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___APlusAssignOp___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___APlusAssignOp___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___APlusAssignOp___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusAssignOp___n_minuseq__eq_t)(val_t  self, val_t  param0);
void parser_prod___AMinusAssignOp___n_minuseq__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusAssignOp___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AMinusAssignOp___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AMinusAssignOp___empty_init();
typedef void (* parser_prod___AMinusAssignOp___init_aminusassignop_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___AMinusAssignOp___init_aminusassignop(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___AMinusAssignOp___init_aminusassignop(val_t  param0);
typedef void (* parser_prod___AMinusAssignOp___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AMinusAssignOp___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AMinusAssignOp___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AMinusAssignOp___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AMinusAssignOp___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AMinusAssignOp___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___AQualified___n_classid__eq_t)(val_t  self, val_t  param0);
void parser_prod___AQualified___n_classid__eq(val_t  self, val_t  param0);
typedef void (* parser_prod___AQualified___empty_init_t)(val_t  self, int* init_table);
void parser_prod___AQualified___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___AQualified___empty_init();
typedef void (* parser_prod___AQualified___init_aqualified_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___AQualified___init_aqualified(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___AQualified___init_aqualified(val_t  param0, val_t  param1);
typedef void (* parser_prod___AQualified___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___AQualified___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___AQualified___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___AQualified___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___AQualified___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___AQualified___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___ADoc___empty_init_t)(val_t  self, int* init_table);
void parser_prod___ADoc___empty_init(val_t  self, int* init_table);
val_t NEW_parser_prod___ADoc___empty_init();
typedef void (* parser_prod___ADoc___init_adoc_t)(val_t  self, val_t  param0, int* init_table);
void parser_prod___ADoc___init_adoc(val_t  self, val_t  param0, int* init_table);
val_t NEW_parser_prod___ADoc___init_adoc(val_t  param0);
typedef void (* parser_prod___ADoc___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___ADoc___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___ADoc___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___ADoc___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___ADoc___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___ADoc___visit_all_reverse(val_t  self, val_t  param0);
typedef void (* parser_prod___Start___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void parser_prod___Start___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_parser_prod___Start___init(val_t  param0, val_t  param1);
typedef void (* parser_prod___Start___replace_child_t)(val_t  self, val_t  param0, val_t  param1);
void parser_prod___Start___replace_child(val_t  self, val_t  param0, val_t  param1);
typedef void (* parser_prod___Start___visit_all_t)(val_t  self, val_t  param0);
void parser_prod___Start___visit_all(val_t  self, val_t  param0);
typedef void (* parser_prod___Start___visit_all_reverse_t)(val_t  self, val_t  param0);
void parser_prod___Start___visit_all_reverse(val_t  self, val_t  param0);
#endif
