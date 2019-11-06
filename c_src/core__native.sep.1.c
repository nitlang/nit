#include "core__native.sep.0.h"
/* method native$UInt32$code_point for (self: UInt32): Char */
uint32_t core__native___UInt32___code_point(uint32_t self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = core__native___UInt32_code_point___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$new for (self: CString, Int): CString */
char* core___core__CString___new(char* self, long p0) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = (char*)nit_alloc(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$[] for (self: CString, Int): Byte */
unsigned char core___core__CString____91d_93d(char* self, long p0) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)((int)self[p0]);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$[]= for (self: CString, Int, Byte) */
void core___core__CString____91d_93d_61d(char* self, long p0, unsigned char p1) {
self[p0]=(unsigned char)p1;
RET_LABEL:;
}
/* method native$CString$copy_to for (self: CString, CString, Int, Int, Int) */
void core___core__CString___copy_to(char* self, char* p0, long p1, long p2, long p3) {
memmove(p0+p3,self+p2,p1);
RET_LABEL:;
}
/* method native$CString$== for (self: CString, nullable Object): Bool */
short int core___core__CString___core__kernel__Object___61d_61d(char* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char* var2 /* : CString */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__CString)) {
var2 = ((struct instance_core__CString*)p0)->value; /* autounbox from nullable Object to CString */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__CString___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline native$CString$== (self,p0) on <self:Object(CString)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__CString*)self)->value == ((struct instance_core__CString*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method native$CString$!= for (self: CString, nullable Object): Bool */
short int core___core__CString___core__kernel__Object___33d_61d(char* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char* var2 /* : CString */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__CString)) {
var2 = ((struct instance_core__CString*)p0)->value; /* autounbox from nullable Object to CString */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__CString___core__kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline native$CString$!= (self,p0) on <self:Object(CString)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__CString*)self)->value == ((struct instance_core__CString*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method native$CString$cstring_length for (self: CString): Int */
long core___core__CString___cstring_length(char* self) {
long var /* : Int */;
long var_l /* var l: Int */;
unsigned char var1 /* : Byte */;
unsigned char var3 /* : Byte */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
var_l = 0l;
for(;;) {
{
{ /* Inline native$CString$[] (self,var_l) on <self:CString> */
var3 = (unsigned char)((int)self[var_l]);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var1,((unsigned char)0x00)) on <var1:Byte> */
var6 = var1 == ((unsigned char)0x00);
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_l + 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_l = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$atof for (self: CString): Float */
double core___core__CString___atof(char* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__native___CString_atof___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$char_at for (self: CString, Int): Char */
uint32_t core___core__CString___char_at(char* self, long p0) {
uint32_t var /* : Char */;
long var_pos /* var pos: Int */;
unsigned char var1 /* : Byte */;
unsigned char var3 /* : Byte */;
unsigned char var_c /* var c: Byte */;
unsigned char var4 /* : Byte */;
unsigned char var6 /* : Byte */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
uint32_t var10 /* : Char */;
uint32_t var12 /* : Char */;
uint32_t var13 /* : UInt32 */;
uint32_t var15 /* : UInt32 */;
uint32_t var_b /* var b: UInt32 */;
uint32_t var_ret /* var ret: UInt32 */;
uint32_t var16 /* : UInt32 */;
uint32_t var18 /* : UInt32 */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
uint32_t var23 /* : Char */;
uint32_t var25 /* : Char */;
uint32_t var26 /* : UInt32 */;
uint32_t var28 /* : UInt32 */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
uint32_t var32 /* : UInt32 */;
uint32_t var34 /* : UInt32 */;
uint32_t var35 /* : UInt32 */;
uint32_t var37 /* : UInt32 */;
uint32_t var38 /* : UInt32 */;
uint32_t var40 /* : UInt32 */;
uint32_t var41 /* : UInt32 */;
uint32_t var43 /* : UInt32 */;
uint32_t var44 /* : UInt32 */;
uint32_t var46 /* : UInt32 */;
uint32_t var47 /* : UInt32 */;
uint32_t var49 /* : UInt32 */;
uint32_t var50 /* : Char */;
uint32_t var52 /* : Char */;
uint32_t var53 /* : UInt32 */;
uint32_t var55 /* : UInt32 */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
uint32_t var60 /* : Char */;
uint32_t var62 /* : Char */;
uint32_t var63 /* : UInt32 */;
uint32_t var65 /* : UInt32 */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
uint32_t var69 /* : UInt32 */;
uint32_t var71 /* : UInt32 */;
uint32_t var72 /* : UInt32 */;
uint32_t var74 /* : UInt32 */;
uint32_t var75 /* : UInt32 */;
uint32_t var77 /* : UInt32 */;
uint32_t var78 /* : UInt32 */;
uint32_t var80 /* : UInt32 */;
uint32_t var81 /* : UInt32 */;
uint32_t var83 /* : UInt32 */;
uint32_t var84 /* : UInt32 */;
uint32_t var86 /* : UInt32 */;
uint32_t var87 /* : UInt32 */;
uint32_t var89 /* : UInt32 */;
uint32_t var90 /* : UInt32 */;
uint32_t var92 /* : UInt32 */;
uint32_t var93 /* : UInt32 */;
uint32_t var95 /* : UInt32 */;
uint32_t var96 /* : Char */;
uint32_t var98 /* : Char */;
uint32_t var99 /* : UInt32 */;
uint32_t var101 /* : UInt32 */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
uint32_t var106 /* : Char */;
uint32_t var108 /* : Char */;
uint32_t var109 /* : UInt32 */;
uint32_t var111 /* : UInt32 */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
uint32_t var115 /* : UInt32 */;
uint32_t var117 /* : UInt32 */;
uint32_t var118 /* : UInt32 */;
uint32_t var120 /* : UInt32 */;
uint32_t var121 /* : UInt32 */;
uint32_t var123 /* : UInt32 */;
uint32_t var124 /* : UInt32 */;
uint32_t var126 /* : UInt32 */;
uint32_t var127 /* : UInt32 */;
uint32_t var129 /* : UInt32 */;
uint32_t var130 /* : UInt32 */;
uint32_t var132 /* : UInt32 */;
uint32_t var133 /* : UInt32 */;
uint32_t var135 /* : UInt32 */;
uint32_t var136 /* : UInt32 */;
uint32_t var138 /* : UInt32 */;
uint32_t var139 /* : UInt32 */;
uint32_t var141 /* : UInt32 */;
uint32_t var142 /* : UInt32 */;
uint32_t var144 /* : UInt32 */;
uint32_t var145 /* : UInt32 */;
uint32_t var147 /* : UInt32 */;
uint32_t var148 /* : Char */;
uint32_t var150 /* : Char */;
uint32_t var151 /* : Char */;
uint32_t var153 /* : Char */;
var_pos = p0;
{
{ /* Inline native$CString$[] (self,var_pos) on <self:CString> */
var3 = (unsigned char)((int)self[var_pos]);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_c = var1;
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0x80)) on <var_c:Byte> */
var6 = var_c & ((unsigned char)0x80);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var4,((unsigned char)0x00)) on <var4:Byte> */
var9 = var4 == ((unsigned char)0x00);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline kernel$Byte$ascii (var_c) on <var_c:Byte> */
var12 = (uint32_t)var_c;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
}
{
{ /* Inline native$CString$fetch_4_hchars (self,var_pos) on <self:CString> */
var15 = (uint32_t)be32toh(*((uint32_t*)(self + var_pos)));
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_b = var13;
var_ret = UINT32_C(0);
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(12582912)) on <var_b:UInt32> */
var18 = var_b & UINT32_C(12582912);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var16,UINT32_C(8388608)) on <var16:UInt32> */
var21 = var16 == UINT32_C(8388608);
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var25 = (uint32_t)65533l;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(3758096384)) on <var_b:UInt32> */
var28 = var_b & UINT32_C(3758096384);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$== (var26,UINT32_C(3221225472)) on <var26:UInt32> */
var31 = var26 == UINT32_C(3221225472);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(520093696)) on <var_b:UInt32> */
var34 = var_b & UINT32_C(520093696);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var32,18l) on <var32:UInt32> */
var37 = var32 >> 18l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var35) on <var_ret:UInt32> */
var40 = var_ret | var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_ret = var38;
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(4128768)) on <var_b:UInt32> */
var43 = var_b & UINT32_C(4128768);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var41,16l) on <var41:UInt32> */
var46 = var41 >> 16l;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var44) on <var_ret:UInt32> */
var49 = var_ret | var44;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_ret = var47;
{
{ /* Inline native$UInt32$code_point (var_ret) on <var_ret:UInt32> */
var52 = core__native___UInt32_code_point___impl(var_ret);
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(49152)) on <var_b:UInt32> */
var55 = var_b & UINT32_C(49152);
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$== (var53,UINT32_C(32768)) on <var53:UInt32> */
var58 = var53 == UINT32_C(32768);
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var59 = !var56;
if (var59){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var62 = (uint32_t)65533l;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var = var60;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(4026531840)) on <var_b:UInt32> */
var65 = var_b & UINT32_C(4026531840);
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$== (var63,UINT32_C(3758096384)) on <var63:UInt32> */
var68 = var63 == UINT32_C(3758096384);
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(251658240)) on <var_b:UInt32> */
var71 = var_b & UINT32_C(251658240);
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var69,12l) on <var69:UInt32> */
var74 = var69 >> 12l;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var72) on <var_ret:UInt32> */
var77 = var_ret | var72;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_ret = var75;
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(4128768)) on <var_b:UInt32> */
var80 = var_b & UINT32_C(4128768);
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var78,10l) on <var78:UInt32> */
var83 = var78 >> 10l;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var81) on <var_ret:UInt32> */
var86 = var_ret | var81;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_ret = var84;
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(16128)) on <var_b:UInt32> */
var89 = var_b & UINT32_C(16128);
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var87,8l) on <var87:UInt32> */
var92 = var87 >> 8l;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var90) on <var_ret:UInt32> */
var95 = var_ret | var90;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var_ret = var93;
{
{ /* Inline native$UInt32$code_point (var_ret) on <var_ret:UInt32> */
var98 = core__native___UInt32_code_point___impl(var_ret);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var = var96;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(192)) on <var_b:UInt32> */
var101 = var_b & UINT32_C(192);
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$== (var99,UINT32_C(128)) on <var99:UInt32> */
var104 = var99 == UINT32_C(128);
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var105 = !var102;
if (var105){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var108 = (uint32_t)65533l;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var = var106;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(4160749568)) on <var_b:UInt32> */
var111 = var_b & UINT32_C(4160749568);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$== (var109,UINT32_C(4026531840)) on <var109:UInt32> */
var114 = var109 == UINT32_C(4026531840);
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
if (var112){
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(117440512)) on <var_b:UInt32> */
var117 = var_b & UINT32_C(117440512);
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var115,6l) on <var115:UInt32> */
var120 = var115 >> 6l;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var118) on <var_ret:UInt32> */
var123 = var_ret | var118;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var_ret = var121;
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(4128768)) on <var_b:UInt32> */
var126 = var_b & UINT32_C(4128768);
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var124,4l) on <var124:UInt32> */
var129 = var124 >> 4l;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var127) on <var_ret:UInt32> */
var132 = var_ret | var127;
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
var_ret = var130;
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(16128)) on <var_b:UInt32> */
var135 = var_b & UINT32_C(16128);
var133 = var135;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$>> (var133,2l) on <var133:UInt32> */
var138 = var133 >> 2l;
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var136) on <var_ret:UInt32> */
var141 = var_ret | var136;
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
var_ret = var139;
{
{ /* Inline fixed_ints$UInt32$& (var_b,UINT32_C(63)) on <var_b:UInt32> */
var144 = var_b & UINT32_C(63);
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$| (var_ret,var142) on <var_ret:UInt32> */
var147 = var_ret | var142;
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var_ret = var145;
{
{ /* Inline native$UInt32$code_point (var_ret) on <var_ret:UInt32> */
var150 = core__native___UInt32_code_point___impl(var_ret);
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
var = var148;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var153 = (uint32_t)65533l;
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var = var151;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$char_to_byte_index for (self: CString, Int): Int */
long core___core__CString___char_to_byte_index(char* self, long p0) {
long var /* : Int */;
long var_n /* var n: Int */;
long var1 /* : Int */;
var_n = p0;
{
var1 = core___core__CString___char_to_byte_index_cached(self, var_n, 0l, 0l);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$length_of_char_at for (self: CString, Int): Int */
long core___core__CString___length_of_char_at(char* self, long p0) {
long var /* : Int */;
long var_pos /* var pos: Int */;
unsigned char var1 /* : Byte */;
unsigned char var3 /* : Byte */;
unsigned char var_c /* var c: Byte */;
unsigned char var4 /* : Byte */;
unsigned char var6 /* : Byte */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
unsigned char var11 /* : Byte */;
unsigned char var13 /* : Byte */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
unsigned char var21 /* : Byte */;
unsigned char var23 /* : Byte */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
unsigned char var32 /* : Byte */;
unsigned char var34 /* : Byte */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
unsigned char var46 /* : Byte */;
unsigned char var48 /* : Byte */;
unsigned char var49 /* : Byte */;
unsigned char var51 /* : Byte */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
unsigned char var63 /* : Byte */;
unsigned char var65 /* : Byte */;
unsigned char var66 /* : Byte */;
unsigned char var68 /* : Byte */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
unsigned char var75 /* : Byte */;
unsigned char var77 /* : Byte */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var_81 /* var : Bool */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
unsigned char var89 /* : Byte */;
unsigned char var91 /* : Byte */;
unsigned char var92 /* : Byte */;
unsigned char var94 /* : Byte */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var_98 /* var : Bool */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
unsigned char var106 /* : Byte */;
unsigned char var108 /* : Byte */;
unsigned char var109 /* : Byte */;
unsigned char var111 /* : Byte */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var_115 /* var : Bool */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
unsigned char var123 /* : Byte */;
unsigned char var125 /* : Byte */;
unsigned char var126 /* : Byte */;
unsigned char var128 /* : Byte */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
var_pos = p0;
{
{ /* Inline native$CString$[] (self,var_pos) on <self:CString> */
var3 = (unsigned char)((int)self[var_pos]);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_c = var1;
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0x80)) on <var_c:Byte> */
var6 = var_c & ((unsigned char)0x80);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var4,((unsigned char)0x00)) on <var4:Byte> */
var9 = var4 == ((unsigned char)0x00);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = 1l;
goto RET_LABEL;
} else {
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0xe0)) on <var_c:Byte> */
var13 = var_c & ((unsigned char)0xe0);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var11,((unsigned char)0xc0)) on <var11:Byte> */
var16 = var11 == ((unsigned char)0xc0);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_ = var14;
if (var14){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_pos + 1l;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline native$CString$[] (self,var17) on <self:CString> */
var23 = (unsigned char)((int)self[var17]);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline math$Byte$& (var21,((unsigned char)0xc0)) on <var21:Byte> */
var26 = var21 & ((unsigned char)0xc0);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var24,((unsigned char)0x80)) on <var24:Byte> */
var29 = var24 == ((unsigned char)0x80);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var10 = var27;
} else {
var10 = var_;
}
if (var10){
var = 2l;
goto RET_LABEL;
} else {
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0xf0)) on <var_c:Byte> */
var34 = var_c & ((unsigned char)0xf0);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var32,((unsigned char)0xe0)) on <var32:Byte> */
var37 = var32 == ((unsigned char)0xe0);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
if (var35){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_pos + 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline native$CString$[] (self,var39) on <self:CString> */
var48 = (unsigned char)((int)self[var39]);
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline math$Byte$& (var46,((unsigned char)0xc0)) on <var46:Byte> */
var51 = var46 & ((unsigned char)0xc0);
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var49,((unsigned char)0x80)) on <var49:Byte> */
var54 = var49 == ((unsigned char)0x80);
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var31 = var52;
} else {
var31 = var_38;
}
var_55 = var31;
if (var31){
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var58 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_pos + 2l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline native$CString$[] (self,var56) on <self:CString> */
var65 = (unsigned char)((int)self[var56]);
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline math$Byte$& (var63,((unsigned char)0xc0)) on <var63:Byte> */
var68 = var63 & ((unsigned char)0xc0);
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var66,((unsigned char)0x80)) on <var66:Byte> */
var71 = var66 == ((unsigned char)0x80);
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var30 = var69;
} else {
var30 = var_55;
}
if (var30){
var = 3l;
goto RET_LABEL;
} else {
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0xf8)) on <var_c:Byte> */
var77 = var_c & ((unsigned char)0xf8);
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var75,((unsigned char)0xf0)) on <var75:Byte> */
var80 = var75 == ((unsigned char)0xf0);
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_81 = var78;
if (var78){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var84 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var88 = var_pos + 1l;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline native$CString$[] (self,var82) on <self:CString> */
var91 = (unsigned char)((int)self[var82]);
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline math$Byte$& (var89,((unsigned char)0xc0)) on <var89:Byte> */
var94 = var89 & ((unsigned char)0xc0);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var92,((unsigned char)0x80)) on <var92:Byte> */
var97 = var92 == ((unsigned char)0x80);
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var74 = var95;
} else {
var74 = var_81;
}
var_98 = var74;
if (var74){
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var101 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var105 = var_pos + 2l;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline native$CString$[] (self,var99) on <self:CString> */
var108 = (unsigned char)((int)self[var99]);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline math$Byte$& (var106,((unsigned char)0xc0)) on <var106:Byte> */
var111 = var106 & ((unsigned char)0xc0);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var109,((unsigned char)0x80)) on <var109:Byte> */
var114 = var109 == ((unsigned char)0x80);
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var73 = var112;
} else {
var73 = var_98;
}
var_115 = var73;
if (var73){
{
{ /* Inline kernel$Int$+ (var_pos,3l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var118 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var122 = var_pos + 3l;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline native$CString$[] (self,var116) on <self:CString> */
var125 = (unsigned char)((int)self[var116]);
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline math$Byte$& (var123,((unsigned char)0xc0)) on <var123:Byte> */
var128 = var123 & ((unsigned char)0xc0);
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var126,((unsigned char)0x80)) on <var126:Byte> */
var131 = var126 == ((unsigned char)0x80);
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
var72 = var129;
} else {
var72 = var_115;
}
if (var72){
var = 4l;
goto RET_LABEL;
} else {
var = 1l;
goto RET_LABEL;
}
}
}
}
RET_LABEL:;
return var;
}
/* method native$CString$char_to_byte_index_cached for (self: CString, Int, Int, Int): Int */
long core___core__CString___char_to_byte_index_cached(char* self, long p0, long p1, long p2) {
long var /* : Int */;
long var_n /* var n: Int */;
long var_char_from /* var char_from: Int */;
long var_byte_from /* var byte_from: Int */;
long var_ns_i /* var ns_i: Int */;
long var_my_i /* var my_i: Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var_dist /* var dist: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
uint32_t var19 /* : UInt32 */;
uint32_t var21 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var22 /* : UInt32 */;
uint32_t var24 /* : UInt32 */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
short int var82 /* : Bool */;
long var83 /* : Int */;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
long var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
long var99 /* : Int */;
uint32_t var100 /* : UInt32 */;
uint32_t var102 /* : UInt32 */;
uint32_t var_i103 /* var i: UInt32 */;
uint32_t var104 /* : UInt32 */;
uint32_t var106 /* : UInt32 */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
long var118 /* : Int */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
long var126 /* : Int */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
long var132 /* : Int */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
long var137 /* : Int */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
long var143 /* : Int */;
long var144 /* : Int */;
long var145 /* : Int */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const char* var_class_name150;
long var151 /* : Int */;
long var152 /* : Int */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
long var158 /* : Int */;
var_n = p0;
var_char_from = p1;
var_byte_from = p2;
var_ns_i = var_byte_from;
var_my_i = var_char_from;
{
{ /* Inline kernel$Int$- (var_n,var_my_i) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_my_i:Int> isa OTHER */
/* <var_my_i:Int> isa OTHER */
var3 = 1; /* easy <var_my_i:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var4 = var_n - var_my_i;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_dist = var1;
for(;;) {
{
{ /* Inline kernel$Int$> (var_dist,0l) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var11 = var_dist > 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
for(;;) {
{
{ /* Inline kernel$Int$>= (var_dist,4l) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var14 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var18 = var_dist >= 4l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline native$CString$fetch_4_chars (self,var_ns_i) on <self:CString> */
var21 = *((uint32_t*)(self + var_ns_i));
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
{
{ /* Inline fixed_ints$UInt32$& (var_i,UINT32_C(2155905152)) on <var_i:UInt32> */
var24 = var_i & UINT32_C(2155905152);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var22,UINT32_C(0)) on <var22:UInt32> */
var27 = var22 == UINT32_C(0);
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$+ (var_ns_i,4l) on <var_ns_i:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var31 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_ns_i + 4l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_ns_i = var29;
{
{ /* Inline kernel$Int$+ (var_my_i,4l) on <var_my_i:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var38 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_my_i + 4l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_my_i = var36;
{
{ /* Inline kernel$Int$- (var_dist,4l) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var45 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var49 = var_dist - 4l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_dist = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_dist,0l) on <var_dist:Int> */
var52 = var_dist == 0l;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
goto BREAK_label53;
} else {
}
{
var54 = core___core__CString___length_of_char_at(self, var_ns_i);
}
{
{ /* Inline kernel$Int$+ (var_ns_i,var54) on <var_ns_i:Int> */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var61 = var_ns_i + var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_ns_i = var55;
{
{ /* Inline kernel$Int$+ (var_my_i,1l) on <var_my_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var64 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var68 = var_my_i + 1l;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_my_i = var62;
{
{ /* Inline kernel$Int$- (var_dist,1l) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var75 = var_dist - 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_dist = var69;
} else {
goto BREAK_label53;
}
}
BREAK_label53: (void)0;
for(;;) {
{
{ /* Inline kernel$Int$< (var_dist,0l) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var78 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var82 = var_dist < 0l;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
for(;;) {
{
{ /* Inline kernel$Int$unary - (4l) on <4l:Int> */
var85 = -4l;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var_dist,var83) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <var83:Int> isa OTHER */
/* <var83:Int> isa OTHER */
var88 = 1; /* easy <var83:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var92 = var_dist <= var83;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
if (var86){
{
{ /* Inline kernel$Int$- (var_ns_i,4l) on <var_ns_i:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var95 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var99 = var_ns_i - 4l;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline native$CString$fetch_4_chars (self,var93) on <self:CString> */
var102 = *((uint32_t*)(self + var93));
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var_i103 = var100;
{
{ /* Inline fixed_ints$UInt32$& (var_i103,UINT32_C(2155905152)) on <var_i103:UInt32> */
var106 = var_i103 & UINT32_C(2155905152);
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var104,UINT32_C(0)) on <var104:UInt32> */
var109 = var104 == UINT32_C(0);
var110 = !var109;
var107 = var110;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
if (var107){
goto BREAK_label111;
} else {
}
{
{ /* Inline kernel$Int$- (var_ns_i,4l) on <var_ns_i:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var114 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var118 = var_ns_i - 4l;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var_ns_i = var112;
{
{ /* Inline kernel$Int$- (var_my_i,4l) on <var_my_i:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var121 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var125 = var_my_i - 4l;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var_my_i = var119;
{
{ /* Inline kernel$Int$+ (var_dist,4l) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var128 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var132 = var_dist + 4l;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var_dist = var126;
} else {
goto BREAK_label111;
}
}
BREAK_label111: (void)0;
{
{ /* Inline kernel$Int$== (var_dist,0l) on <var_dist:Int> */
var135 = var_dist == 0l;
var133 = var135;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
if (var133){
goto BREAK_label136;
} else {
}
{
{ /* Inline kernel$Int$- (var_ns_i,1l) on <var_ns_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var139 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name142 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var143 = var_ns_i - 1l;
var137 = var143;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
{
var144 = core___core__CString___find_beginning_of_char_at(self, var137);
}
var_ns_i = var144;
{
{ /* Inline kernel$Int$- (var_my_i,1l) on <var_my_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var147 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var147)) {
var_class_name150 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name150);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var151 = var_my_i - 1l;
var145 = var151;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var_my_i = var145;
{
{ /* Inline kernel$Int$+ (var_dist,1l) on <var_dist:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var154 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var158 = var_dist + 1l;
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
var_dist = var152;
} else {
goto BREAK_label136;
}
}
BREAK_label136: (void)0;
var = var_ns_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$find_beginning_of_char_at for (self: CString, Int): Int */
long core___core__CString___find_beginning_of_char_at(char* self, long p0) {
long var /* : Int */;
long var_pos /* var pos: Int */;
long var_endpos /* var endpos: Int */;
unsigned char var1 /* : Byte */;
unsigned char var3 /* : Byte */;
unsigned char var_c /* var c: Byte */;
unsigned char var4 /* : Byte */;
unsigned char var6 /* : Byte */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
unsigned char var10 /* : Byte */;
unsigned char var12 /* : Byte */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
unsigned char var20 /* : Byte */;
unsigned char var22 /* : Byte */;
long var_stpos /* var stpos: Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
var_pos = p0;
var_endpos = var_pos;
{
{ /* Inline native$CString$[] (self,var_pos) on <self:CString> */
var3 = (unsigned char)((int)self[var_pos]);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_c = var1;
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0x80)) on <var_c:Byte> */
var6 = var_c & ((unsigned char)0x80);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var4,((unsigned char)0x00)) on <var4:Byte> */
var9 = var4 == ((unsigned char)0x00);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_pos;
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0xc0)) on <var_c:Byte> */
var12 = var_c & ((unsigned char)0xc0);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var10,((unsigned char)0x80)) on <var10:Byte> */
var15 = var10 == ((unsigned char)0x80);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline kernel$Int$- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var19 = var_pos - 1l;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_pos = var16;
{
{ /* Inline native$CString$[] (self,var_pos) on <self:CString> */
var22 = (unsigned char)((int)self[var_pos]);
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_c = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var_stpos = var_pos;
{
var23 = core___core__CString___length_of_char_at(self, var_stpos);
}
{
{ /* Inline kernel$Int$- (var_endpos,var_stpos) on <var_endpos:Int> */
/* Covariant cast for argument 0 (i) <var_stpos:Int> isa OTHER */
/* <var_stpos:Int> isa OTHER */
var26 = 1; /* easy <var_stpos:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var30 = var_endpos - var_stpos;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var24,1l) on <var24:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var37 = var24 + 1l;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var23,var31) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var40 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var44 = var23 >= var31;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
var = var_pos;
goto RET_LABEL;
} else {
}
var = var_endpos;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$utf8_length for (self: CString, Int, Int): Int */
long core___core__CString___utf8_length(char* self, long p0, long p1) {
long var /* : Int */;
long var_from /* var from: Int */;
long var_byte_length /* var byte_length: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
uint32_t var12 /* : UInt32 */;
uint32_t var14 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var15 /* : UInt32 */;
uint32_t var17 /* : UInt32 */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var47 /* : Int */;
long var_cln /* var cln: Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
var_from = p0;
var_byte_length = p1;
var_st = var_from;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel$Int$> (var_byte_length,0l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var4 = var_byte_length > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
for(;;) {
{
{ /* Inline kernel$Int$>= (var_byte_length,4l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_byte_length >= 4l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline native$CString$fetch_4_chars (self,var_st) on <self:CString> */
var14 = *((uint32_t*)(self + var_st));
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
{
{ /* Inline fixed_ints$UInt32$& (var_i,UINT32_C(2155905152)) on <var_i:UInt32> */
var17 = var_i & UINT32_C(2155905152);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var15,UINT32_C(0)) on <var15:UInt32> */
var20 = var15 == UINT32_C(0);
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$- (var_byte_length,4l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var24 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var28 = var_byte_length - 4l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_byte_length = var22;
{
{ /* Inline kernel$Int$+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var31 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_st + 4l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_st = var29;
{
{ /* Inline kernel$Int$+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var38 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_ln + 4l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_ln = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_byte_length,0l) on <var_byte_length:Int> */
var45 = var_byte_length == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
goto BREAK_label46;
} else {
}
{
var47 = core___core__CString___length_of_char_at(self, var_st);
}
var_cln = var47;
{
{ /* Inline kernel$Int$+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var50 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_st + var_cln;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_st = var48;
{
{ /* Inline kernel$Int$+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var57 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var61 = var_ln + 1l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_ln = var55;
{
{ /* Inline kernel$Int$- (var_byte_length,var_cln) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var64 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var68 = var_byte_length - var_cln;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_byte_length = var62;
} else {
goto BREAK_label46;
}
}
BREAK_label46: (void)0;
var = var_ln;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$fetch_4_chars for (self: CString, Int): UInt32 */
uint32_t core___core__CString___fetch_95d4_chars(char* self, long p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = *((uint32_t*)(self + p0));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method native$CString$fetch_4_hchars for (self: CString, Int): UInt32 */
uint32_t core___core__CString___fetch_95d4_hchars(char* self, long p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)be32toh(*((uint32_t*)(self + p0)));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
