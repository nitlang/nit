#include "core__flat.sep.0.h"
/* method flat$FlatBufferCharIterator$target for (self: FlatBufferCharIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$target= for (self: FlatBufferCharIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val = p0; /* _target on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$max for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$max= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = p0; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$curr_pos for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$curr_pos= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$init for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
val* var2 /* : FlatBuffer */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharIterator>*/
}
{
{ /* Inline flat$FlatBufferCharIterator$target (self) on <self:FlatBufferCharIterator> */
var2 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatBuffer> */
{
{ /* Inline kernel$Int$- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flat$FlatBufferCharIterator$max= (self,var4) on <self:FlatBufferCharIterator> */
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = var4; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$index for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$is_ok for (self: FlatBufferCharIterator): Bool */
short int core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat$FlatBufferCharIterator$max (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var10 = var1 <= var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$item for (self: FlatBufferCharIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
val* var3 /* : FlatBuffer */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat$FlatBufferCharIterator$target (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$next for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
var_ = self;
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos (var_) on <var_:FlatBufferCharIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferCharIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat$FlatBufferCharIterator$curr_pos= (var_,var3) on <var_:FlatBufferCharIterator> */
var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferCharIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat$CString$to_s for (self: CString): String */
val* core__flat___CString___core__abstract_text__Object__to_s(char* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = core__flat___CString___to_s_unsafe(self, ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL));
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$CString$to_s for (self: Object): String */
val* VIRTUAL_core__flat___CString___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : CString */;
var2 = ((struct instance_core__CString*)self)->value; /* autounbox from Object to CString */;
var1 = core__flat___CString___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat$CString$to_s_unsafe for (self: CString, nullable Int, nullable Int, nullable Bool, nullable Bool): String */
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : String */;
val* var_byte_length /* var byte_length: nullable Int */;
val* var_char_length /* var char_length: nullable Int */;
val* var_copy /* var copy: nullable Bool */;
val* var_clean /* var clean: nullable Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : nullable Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Bool */;
val* var_str /* var str: nullable Object */;
short int var11 /* : Bool */;
val* var12 /* : FlatString */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var17 /* : nullable Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_from /* var from: Int */;
long var_byte_length23 /* var byte_length: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
uint32_t var35 /* : UInt32 */;
uint32_t var37 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var38 /* : UInt32 */;
uint32_t var40 /* : UInt32 */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var70 /* : Int */;
long var_cln /* var cln: Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
val* var92 /* : nullable Int */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var_ /* var : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var_98 /* var : Bool */;
char* var99 /* : CString */;
char* var101 /* : CString */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var105 /* : CString */;
char* var106 /* : CString */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
long var114 /* : Int */;
char* var115 /* : CString */;
char* var117 /* : CString */;
char* var_new_cstr /* var new_cstr: CString */;
long var119 /* : Int */;
long var121 /* : Int */;
static val* varoncenew122;
static int varoncenew122_guard;
val* var123 /* : FlatString */;
val* var124 /* : FlatString */;
val* var125 /* : FlatString */;
long var126 /* : Int */;
long var127 /* : Int */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
static val* varoncenew130;
static int varoncenew130_guard;
val* var131 /* : FlatString */;
val* var132 /* : FlatString */;
val* var133 /* : FlatString */;
long var134 /* : Int */;
long var135 /* : Int */;
var_byte_length = p0;
var_char_length = p1;
var_copy = p2;
var_clean = p3;
if (var_byte_length!=NULL) {
var2 = (long)(var_byte_length)>>2;
var1 = var2;
} else {
{
var3 = core___core__CString___cstring_length(self);
}
var1 = var3;
}
var4 = (val*)(var1<<2|1);
var_byte_length = var4;
if (var_clean!=NULL) {
var6 = (short int)((long)(var_clean)>>2);
var5 = var6;
} else {
var5 = 1;
}
var7 = (val*)((long)(var5)<<2|3);
var_clean = var7;
if (var_copy!=NULL) {
var9 = (short int)((long)(var_copy)>>2);
var8 = var9;
} else {
var8 = 1;
}
var10 = (val*)((long)(var8)<<2|3);
var_copy = var10;
var_str = ((val*)NULL);
var11 = (short int)((long)(var_clean)>>2);
if (var11){
{
var13 = (long)(var_byte_length)>>2;
var12 = core__flat___CString___clean_utf8(self, var13);
}
var_str = var12;
{
{ /* Inline abstract_text$FlatText$length (var_str) on <var_str:nullable Object(FlatString)> */
var16 = var_str->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_str:nullable Object(FlatString)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = (val*)(var14<<2|1);
var_char_length = var17;
} else {
if (var_char_length!=NULL) {
var19 = (long)(var_char_length)>>2;
var18 = var19;
} else {
{
{ /* Inline native$CString$utf8_length (self,0l,var_byte_length) on <self:CString> */
var22 = (long)(var_byte_length)>>2;
var_from = 0l;
var_byte_length23 = var22;
var_st = var_from;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel$Int$> (var_byte_length23,0l) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var26 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var27 = var_byte_length23 > 0l;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
for(;;) {
{
{ /* Inline kernel$Int$>= (var_byte_length23,4l) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var30 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var34 = var_byte_length23 >= 4l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native$CString$fetch_4_chars (self,var_st) on <self:CString> */
var37 = *((uint32_t*)(self + var_st));
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_i = var35;
{
{ /* Inline fixed_ints$UInt32$& (var_i,UINT32_C(2155905152)) on <var_i:UInt32> */
var40 = var_i & UINT32_C(2155905152);
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var38,UINT32_C(0)) on <var38:UInt32> */
var43 = var38 == UINT32_C(0);
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$- (var_byte_length23,4l) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var47 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var51 = var_byte_length23 - 4l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_byte_length23 = var45;
{
{ /* Inline kernel$Int$+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var54 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_st + 4l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_st = var52;
{
{ /* Inline kernel$Int$+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var61 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var65 = var_ln + 4l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_ln = var59;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_byte_length23,0l) on <var_byte_length23:Int> */
var68 = var_byte_length23 == 0l;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
goto BREAK_label69;
} else {
}
{
var70 = core___core__CString___length_of_char_at(self, var_st);
}
var_cln = var70;
{
{ /* Inline kernel$Int$+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var73 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var77 = var_st + var_cln;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_st = var71;
{
{ /* Inline kernel$Int$+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_ln + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_ln = var78;
{
{ /* Inline kernel$Int$- (var_byte_length23,var_cln) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var87 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var91 = var_byte_length23 - var_cln;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_byte_length23 = var85;
} else {
goto BREAK_label69;
}
}
BREAK_label69: (void)0;
var20 = var_ln;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
}
var92 = (val*)(var18<<2|1);
var_char_length = var92;
}
var94 = (short int)((long)(var_copy)>>2);
var_ = var94;
if (var94){
if (var_str == NULL) {
var96 = 1; /* is null */
} else {
var96 = 0; /* arg is null but recv is not */
}
if (0) {
var97 = core___core__FlatString___core__kernel__Object___61d_61d(var_str, ((val*)NULL));
var96 = var97;
}
var_98 = var96;
if (var96){
var95 = var_98;
} else {
{
{ /* Inline abstract_text$FlatText$items (var_str) on <var_str:nullable Object(FlatString)> */
var101 = var_str->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_str:nullable Object(FlatString)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline native$CString$== (var99,self) on <var99:CString> */
var104 = var99 == self;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var95 = var102;
}
var93 = var95;
} else {
var93 = var_;
}
if (var93){
if (likely(varoncenew_guard)) {
var105 = varoncenew;
} else {
var106 = NULL/*special!*/;
var105 = var106;
varoncenew = var105;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_byte_length,1l) on <var_byte_length:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var109 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var113 = (long)(var_byte_length)>>2;
var114 = var113 + 1l;
var107 = var114;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline native$CString$new (var105,var107) on <var105:CString> */
var117 = (char*)nit_alloc(var107);
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
var_new_cstr = var115;
{
{ /* Inline native$CString$copy_to (self,var_new_cstr,var_byte_length,0l,0l) on <self:CString> */
var119 = (long)(var_byte_length)>>2;
memmove(var_new_cstr+0l,self+0l,var119);
RET_LABEL118:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_new_cstr,var_byte_length,((unsigned char)0x00)) on <var_new_cstr:CString> */
var121 = (long)(var_byte_length)>>2;
var_new_cstr[var121]=(unsigned char)((unsigned char)0x00);
RET_LABEL120:(void)0;
}
}
if (likely(varoncenew122_guard)) {
var123 = varoncenew122;
} else {
var124 = NEW_core__FlatString(&type_core__FlatString);
var123 = var124;
varoncenew122 = var123;
varoncenew122_guard = 1;
}
{
var126 = (long)(var_byte_length)>>2;
var127 = (long)(var_char_length)>>2;
var125 = core___core__FlatString___full(var123, var_new_cstr, var126, 0l, var127);
}
var_str = var125;
} else {
}
if (var_str == NULL) {
var128 = 1; /* is null */
} else {
var128 = 0; /* arg is null but recv is not */
}
if (0) {
var129 = core___core__FlatString___core__kernel__Object___61d_61d(var_str, ((val*)NULL));
var128 = var129;
}
if (var128){
if (likely(varoncenew130_guard)) {
var131 = varoncenew130;
} else {
var132 = NEW_core__FlatString(&type_core__FlatString);
var131 = var132;
varoncenew130 = var131;
varoncenew130_guard = 1;
}
{
var134 = (long)(var_byte_length)>>2;
var135 = (long)(var_char_length)>>2;
var133 = core___core__FlatString___full(var131, self, var134, 0l, var135);
}
var_str = var133;
} else {
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$CString$clean_utf8 for (self: CString, Int): FlatString */
val* core__flat___CString___clean_utf8(char* self, long p0) {
val* var /* : FlatString */;
long var_len /* var len: Int */;
val* var_replacements /* var replacements: nullable Array[Int] */;
long var_end_length /* var end_length: Int */;
long var_pos /* var pos: Int */;
long var_chr_ln /* var chr_ln: Int */;
long var_rem /* var rem: Int */;
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
unsigned char var47 /* : Byte */;
unsigned char var49 /* : Byte */;
unsigned char var_b /* var b: Byte */;
unsigned char var50 /* : Byte */;
unsigned char var52 /* : Byte */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
long var_nxst /* var nxst: Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
unsigned char var82 /* : Byte */;
unsigned char var84 /* : Byte */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var_ok_st /* var ok_st: Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
unsigned char var91 /* : Byte */;
unsigned char var93 /* : Byte */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
unsigned char var100 /* : Byte */;
unsigned char var102 /* : Byte */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
unsigned char var106 /* : Byte */;
unsigned char var108 /* : Byte */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : Array[Int] */;
val* var116 /* : nullable Object */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
long var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
long var130 /* : Int */;
long var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
long var137 /* : Int */;
long var138 /* : Int */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
long var144 /* : Int */;
uint32_t var145 /* : Char */;
uint32_t var_c /* var c: Char */;
long var146 /* : Int */;
long var148 /* : Int */;
long var_cp /* var cp: Int */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
short int var159 /* : Bool */;
short int var_ /* var : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
short int var166 /* : Bool */;
short int var_ok_c /* var ok_c: Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
short int var177 /* : Bool */;
short int var_178 /* var : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
short int var196 /* : Bool */;
short int var_197 /* var : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var_208 /* var : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
int cltype213;
int idtype214;
const char* var_class_name215;
short int var216 /* : Bool */;
short int var_217 /* var : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
const char* var_class_name223;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var_226 /* var : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var_231 /* var : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
short int var243 /* : Bool */;
short int var_244 /* var : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
int cltype248;
int idtype249;
const char* var_class_name250;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
val* var255 /* : Array[Int] */;
val* var256 /* : nullable Object */;
long var257 /* : Int */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
const char* var_class_name262;
long var263 /* : Int */;
long var264 /* : Int */;
short int var266 /* : Bool */;
int cltype267;
int idtype268;
const char* var_class_name269;
long var270 /* : Int */;
long var271 /* : Int */;
short int var273 /* : Bool */;
int cltype274;
int idtype275;
const char* var_class_name276;
long var277 /* : Int */;
long var278 /* : Int */;
short int var280 /* : Bool */;
int cltype281;
int idtype282;
const char* var_class_name283;
long var284 /* : Int */;
long var285 /* : Int */;
long var_clen /* var clen: Int */;
long var286 /* : Int */;
short int var288 /* : Bool */;
int cltype289;
int idtype290;
const char* var_class_name291;
long var292 /* : Int */;
long var293 /* : Int */;
short int var295 /* : Bool */;
int cltype296;
int idtype297;
const char* var_class_name298;
long var299 /* : Int */;
long var300 /* : Int */;
short int var302 /* : Bool */;
int cltype303;
int idtype304;
const char* var_class_name305;
long var306 /* : Int */;
char* var_ret /* var ret: CString */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var311 /* : CString */;
char* var312 /* : CString */;
char* var313 /* : CString */;
char* var315 /* : CString */;
long var_old_repl /* var old_repl: Int */;
long var_off /* var off: Int */;
val* var_repls /* var repls: Array[Int] */;
val* var316 /* : nullable NativeArray[nullable Object] */;
val* var318 /* : nullable NativeArray[nullable Object] */;
val* var_r /* var r: NativeArray[Int] */;
long var319 /* : Int */;
long var321 /* : Int */;
long var_imax /* var imax: Int */;
long var_i322 /* var i: Int */;
long var_323 /* var : Int */;
short int var324 /* : Bool */;
short int var326 /* : Bool */;
int cltype327;
int idtype328;
const char* var_class_name329;
short int var330 /* : Bool */;
val* var332 /* : nullable Object */;
val* var334 /* : Object */;
long var335 /* : Int */;
long var_repl_pos /* var repl_pos: Int */;
long var336 /* : Int */;
short int var338 /* : Bool */;
int cltype339;
int idtype340;
const char* var_class_name341;
long var342 /* : Int */;
long var_chkln /* var chkln: Int */;
long var344 /* : Int */;
short int var346 /* : Bool */;
int cltype347;
int idtype348;
const char* var_class_name349;
long var350 /* : Int */;
long var352 /* : Int */;
short int var354 /* : Bool */;
int cltype355;
int idtype356;
const char* var_class_name357;
long var358 /* : Int */;
long var360 /* : Int */;
short int var362 /* : Bool */;
int cltype363;
int idtype364;
const char* var_class_name365;
long var366 /* : Int */;
long var368 /* : Int */;
short int var370 /* : Bool */;
int cltype371;
int idtype372;
const char* var_class_name373;
long var374 /* : Int */;
long var375 /* : Int */;
short int var377 /* : Bool */;
int cltype378;
int idtype379;
const char* var_class_name380;
long var381 /* : Int */;
long var382 /* : Int */;
long var383 /* : Int */;
short int var385 /* : Bool */;
int cltype386;
int idtype387;
const char* var_class_name388;
long var389 /* : Int */;
static val* varoncenew391;
static int varoncenew391_guard;
val* var392 /* : FlatString */;
val* var393 /* : FlatString */;
val* var394 /* : FlatString */;
var_len = p0;
var_replacements = ((val*)NULL);
var_end_length = var_len;
var_pos = 0l;
var_chr_ln = 0l;
var_rem = var_len;
for(;;) {
{
{ /* Inline kernel$Int$> (var_rem,0l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var4 = var_rem > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
for(;;) {
{
{ /* Inline kernel$Int$>= (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_rem >= 4l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline native$CString$fetch_4_chars (self,var_pos) on <self:CString> */
var14 = *((uint32_t*)(self + var_pos));
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
{ /* Inline kernel$Int$+ (var_pos,4l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var24 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_pos + 4l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_pos = var22;
{
{ /* Inline kernel$Int$+ (var_chr_ln,4l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var31 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_chr_ln + 4l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_chr_ln = var29;
{
{ /* Inline kernel$Int$- (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var38 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_rem - 4l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_rem = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_rem,0l) on <var_rem:Int> */
var45 = var_rem == 0l;
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
{ /* Inline native$CString$[] (self,var_pos) on <self:CString> */
var49 = (unsigned char)((int)self[var_pos]);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_b = var47;
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var52 = var_b & ((unsigned char)0x80);
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var50,((unsigned char)0x00)) on <var50:Byte> */
var55 = var50 == ((unsigned char)0x00);
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_pos + 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_pos = var56;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var69 = var_chr_ln + 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_chr_ln = var63;
{
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var76 = var_rem - 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_rem = var70;
goto BREAK_label77;
} else {
}
{
var78 = core___core__CString___length_of_char_at(self, var_pos);
}
var_nxst = var78;
{
{ /* Inline kernel$Int$== (var_nxst,1l) on <var_nxst:Int> */
var81 = var_nxst == 1l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var84 = var_b & ((unsigned char)0x80);
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var82,((unsigned char)0x00)) on <var82:Byte> */
var87 = var82 == ((unsigned char)0x00);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_ok_st = var85;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,2l) on <var_nxst:Int> */
var90 = var_nxst == 2l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xe0)) on <var_b:Byte> */
var93 = var_b & ((unsigned char)0xe0);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var91,((unsigned char)0xc0)) on <var91:Byte> */
var96 = var91 == ((unsigned char)0xc0);
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_ok_st = var94;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,3l) on <var_nxst:Int> */
var99 = var_nxst == 3l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (var97){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xf0)) on <var_b:Byte> */
var102 = var_b & ((unsigned char)0xf0);
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var100,((unsigned char)0xe0)) on <var100:Byte> */
var105 = var100 == ((unsigned char)0xe0);
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_ok_st = var103;
} else {
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xf8)) on <var_b:Byte> */
var108 = var_b & ((unsigned char)0xf8);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var106,((unsigned char)0xf0)) on <var106:Byte> */
var111 = var106 == ((unsigned char)0xf0);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var_ok_st = var109;
}
}
}
var112 = !var_ok_st;
if (var112){
if (var_replacements == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (0) {
var114 = core___core__Array___core__kernel__Object___61d_61d(var_replacements, ((val*)NULL));
var113 = var114;
}
if (var113){
var115 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var115); /* Direct call array$Array$init on <var115:Array[Int]>*/
}
var_replacements = var115;
} else {
}
{
var116 = (val*)(var_pos<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_replacements, var116); /* Direct call array$Array$add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel$Int$+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var119 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var123 = var_end_length + 2l;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_end_length = var117;
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var126 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var130 = var_pos + 1l;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var_pos = var124;
{
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var133 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var137 = var_rem - 1l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var_rem = var131;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var140 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var144 = var_chr_ln + 1l;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var_chr_ln = var138;
goto BREAK_label77;
} else {
}
{
var145 = core___core__CString___char_at(self, var_pos);
}
var_c = var145;
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var148 = (long)var_c;
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_cp = var146;
{
{ /* Inline kernel$Int$== (var_nxst,1l) on <var_nxst:Int> */
var151 = var_nxst == 1l;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
if (var149){
{
{ /* Inline kernel$Int$>= (var_cp,0l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var155 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var159 = var_cp >= 0l;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_ = var153;
if (var153){
{
{ /* Inline kernel$Int$<= (var_cp,127l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <127l:Int> isa OTHER */
/* <127l:Int> isa OTHER */
var162 = 1; /* easy <127l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var166 = var_cp <= 127l;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
var152 = var160;
} else {
var152 = var_;
}
var_ok_c = var152;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,2l) on <var_nxst:Int> */
var169 = var_nxst == 2l;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
{
{ /* Inline kernel$Int$>= (var_cp,128l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var173 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var177 = var_cp >= 128l;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
var_178 = var171;
if (var171){
{
{ /* Inline kernel$Int$<= (var_cp,2047l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2047l:Int> isa OTHER */
/* <2047l:Int> isa OTHER */
var181 = 1; /* easy <2047l:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var185 = var_cp <= 2047l;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var170 = var179;
} else {
var170 = var_178;
}
var_ok_c = var170;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,3l) on <var_nxst:Int> */
var188 = var_nxst == 3l;
var186 = var188;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
if (var186){
{
{ /* Inline kernel$Int$>= (var_cp,2048l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2048l:Int> isa OTHER */
/* <2048l:Int> isa OTHER */
var192 = 1; /* easy <2048l:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var196 = var_cp >= 2048l;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var_197 = var190;
if (var190){
{
{ /* Inline kernel$Int$<= (var_cp,65535l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var200 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var204 = var_cp <= 65535l;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
var189 = var198;
} else {
var189 = var_197;
}
var_ok_c = var189;
var_208 = var_ok_c;
if (var_ok_c){
{
{ /* Inline kernel$Int$>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var212 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var212)) {
var_class_name215 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name215);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var216 = var_cp >= 55296l;
var210 = var216;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var_217 = var210;
if (var210){
{
{ /* Inline kernel$Int$<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var220 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var220)) {
var_class_name223 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name223);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var224 = var_cp <= 57343l;
var218 = var224;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
}
var209 = var218;
} else {
var209 = var_217;
}
var225 = !var209;
var207 = var225;
} else {
var207 = var_208;
}
var_226 = var207;
if (var207){
{
{ /* Inline kernel$Int$!= (var_cp,65534l) on <var_cp:Int> */
var229 = var_cp == 65534l;
var230 = !var229;
var227 = var230;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var206 = var227;
} else {
var206 = var_226;
}
var_231 = var206;
if (var206){
{
{ /* Inline kernel$Int$!= (var_cp,65535l) on <var_cp:Int> */
var234 = var_cp == 65535l;
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
var205 = var232;
} else {
var205 = var_231;
}
var_ok_c = var205;
} else {
{
{ /* Inline kernel$Int$>= (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var239 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var243 = var_cp >= 65536l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_244 = var237;
if (var237){
{
{ /* Inline kernel$Int$<= (var_cp,1114111l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <1114111l:Int> isa OTHER */
/* <1114111l:Int> isa OTHER */
var247 = 1; /* easy <1114111l:Int> isa OTHER*/
if (unlikely(!var247)) {
var_class_name250 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name250);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var251 = var_cp <= 1114111l;
var245 = var251;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
var236 = var245;
} else {
var236 = var_244;
}
var_ok_c = var236;
}
}
}
var252 = !var_ok_c;
if (var252){
if (var_replacements == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
if (0) {
var254 = core___core__Array___core__kernel__Object___61d_61d(var_replacements, ((val*)NULL));
var253 = var254;
}
if (var253){
var255 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var255); /* Direct call array$Array$init on <var255:Array[Int]>*/
}
var_replacements = var255;
} else {
}
{
var256 = (val*)(var_pos<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_replacements, var256); /* Direct call array$Array$add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel$Int$+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var259 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var259)) {
var_class_name262 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name262);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var263 = var_end_length + 2l;
var257 = var263;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
var_end_length = var257;
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var266 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var266)) {
var_class_name269 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name269);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var270 = var_pos + 1l;
var264 = var270;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var_pos = var264;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var273 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var273)) {
var_class_name276 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name276);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var277 = var_chr_ln + 1l;
var271 = var277;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var_chr_ln = var271;
{
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var280 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var280)) {
var_class_name283 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name283);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var284 = var_rem - 1l;
var278 = var284;
goto RET_LABEL279;
RET_LABEL279:(void)0;
}
}
var_rem = var278;
goto BREAK_label77;
} else {
}
{
var285 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var285;
{
{ /* Inline kernel$Int$+ (var_pos,var_clen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var288 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var288)) {
var_class_name291 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name291);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var292 = var_pos + var_clen;
var286 = var292;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
}
var_pos = var286;
{
{ /* Inline kernel$Int$- (var_rem,var_clen) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var295 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var295)) {
var_class_name298 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name298);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var299 = var_rem - var_clen;
var293 = var299;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
}
var_rem = var293;
{
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var302 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var302)) {
var_class_name305 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name305);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var306 = var_chr_ln + 1l;
var300 = var306;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var_chr_ln = var300;
} else {
goto BREAK_label46;
}
BREAK_label77: (void)0;
}
BREAK_label46: (void)0;
var_ret = self;
{
{ /* Inline kernel$Int$!= (var_end_length,var_len) on <var_end_length:Int> */
var309 = var_end_length == var_len;
var310 = !var309;
var307 = var310;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
}
if (var307){
if (likely(varoncenew_guard)) {
var311 = varoncenew;
} else {
var312 = NULL/*special!*/;
var311 = var312;
varoncenew = var311;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var311,var_end_length) on <var311:CString> */
var315 = (char*)nit_alloc(var_end_length);
var313 = var315;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
}
var_ret = var313;
var_old_repl = 0l;
var_off = 0l;
if (unlikely(var_replacements == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1427);
fatal_exit(1);
}
var_repls = var_replacements;
{
{ /* Inline array$Array$items (var_repls) on <var_repls:Array[Int]> */
var318 = var_repls->attrs[COLOR_core__array__Array___items].val; /* _items on <var_repls:Array[Int]> */
var316 = var318;
RET_LABEL317:(void)0;
}
}
if (unlikely(var316 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1428);
fatal_exit(1);
}
var_r = var316;
{
{ /* Inline array$AbstractArrayRead$length (var_repls) on <var_repls:Array[Int]> */
var321 = var_repls->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_repls:Array[Int]> */
var319 = var321;
RET_LABEL320:(void)0;
}
}
var_imax = var319;
var_i322 = 0l;
var_323 = var_imax;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i322,var_323) on <var_i322:Int> */
/* Covariant cast for argument 0 (i) <var_323:Int> isa OTHER */
/* <var_323:Int> isa OTHER */
var326 = 1; /* easy <var_323:Int> isa OTHER*/
if (unlikely(!var326)) {
var_class_name329 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name329);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var330 = var_i322 < var_323;
var324 = var330;
goto RET_LABEL325;
RET_LABEL325:(void)0;
}
}
if (var324){
} else {
goto BREAK_label331;
}
{
{ /* Inline array$NativeArray$[] (var_r,var_i322) on <var_r:NativeArray[Int]> */
var334 = ((struct instance_core__NativeArray*)var_r)->values[var_i322];
var332 = var334;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
}
var335 = (long)(var332)>>2;
var_repl_pos = var335;
{
{ /* Inline kernel$Int$- (var_repl_pos,var_old_repl) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var338 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var338)) {
var_class_name341 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name341);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var342 = var_repl_pos - var_old_repl;
var336 = var342;
goto RET_LABEL337;
RET_LABEL337:(void)0;
}
}
var_chkln = var336;
{
{ /* Inline native$CString$copy_to (self,var_ret,var_chkln,var_old_repl,var_off) on <self:CString> */
memmove(var_ret+var_off,self+var_old_repl,var_chkln);
RET_LABEL343:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_chkln) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_chkln:Int> isa OTHER */
/* <var_chkln:Int> isa OTHER */
var346 = 1; /* easy <var_chkln:Int> isa OTHER*/
if (unlikely(!var346)) {
var_class_name349 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name349);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var350 = var_off + var_chkln;
var344 = var350;
goto RET_LABEL345;
RET_LABEL345:(void)0;
}
}
var_off = var344;
{
{ /* Inline native$CString$[]= (var_ret,var_off,((unsigned char)0xef)) on <var_ret:CString> */
var_ret[var_off]=(unsigned char)((unsigned char)0xef);
RET_LABEL351:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,1l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var354 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var354)) {
var_class_name357 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name357);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var358 = var_off + 1l;
var352 = var358;
goto RET_LABEL353;
RET_LABEL353:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_ret,var352,((unsigned char)0xbf)) on <var_ret:CString> */
var_ret[var352]=(unsigned char)((unsigned char)0xbf);
RET_LABEL359:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,2l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var362 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var362)) {
var_class_name365 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name365);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var366 = var_off + 2l;
var360 = var366;
goto RET_LABEL361;
RET_LABEL361:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_ret,var360,((unsigned char)0xbd)) on <var_ret:CString> */
var_ret[var360]=(unsigned char)((unsigned char)0xbd);
RET_LABEL367:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_repl_pos,1l) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var370 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var370)) {
var_class_name373 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name373);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var374 = var_repl_pos + 1l;
var368 = var374;
goto RET_LABEL369;
RET_LABEL369:(void)0;
}
}
var_old_repl = var368;
{
{ /* Inline kernel$Int$+ (var_off,3l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var377 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var377)) {
var_class_name380 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name380);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var381 = var_off + 3l;
var375 = var381;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
}
var_off = var375;
{
var382 = core___core__Int___Discrete__successor(var_i322, 1l);
}
var_i322 = var382;
}
BREAK_label331: (void)0;
{
{ /* Inline kernel$Int$- (var_len,var_old_repl) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var385 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var385)) {
var_class_name388 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name388);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var389 = var_len - var_old_repl;
var383 = var389;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (self,var_ret,var383,var_old_repl,var_off) on <self:CString> */
memmove(var_ret+var_off,self+var_old_repl,var383);
RET_LABEL390:(void)0;
}
}
} else {
}
if (likely(varoncenew391_guard)) {
var392 = varoncenew391;
} else {
var393 = NEW_core__FlatString(&type_core__FlatString);
var392 = var393;
varoncenew391 = var392;
varoncenew391_guard = 1;
}
{
var394 = core___core__FlatString___full(var392, var_ret, var_end_length, 0l, var_chr_ln);
}
var = var394;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$CString$set_char_at for (self: CString, Int, Char) */
void core__flat___CString___set_char_at(char* self, long p0, uint32_t p1) {
long var_pos /* var pos: Int */;
uint32_t var_c /* var c: Char */;
long var /* : Int */;
long var2 /* : Int */;
long var_cp /* var cp: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
long var11 /* : Int */;
long var_ln /* var ln: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
long var40 /* : Int */;
unsigned char var41 /* : Byte */;
unsigned char var43 /* : Byte */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
unsigned char var57 /* : Byte */;
unsigned char var59 /* : Byte */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
unsigned char var77 /* : Byte */;
unsigned char var79 /* : Byte */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
long var93 /* : Int */;
unsigned char var94 /* : Byte */;
unsigned char var96 /* : Byte */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
long var101 /* : Int */;
long var103 /* : Int */;
long var104 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
long var109 /* : Int */;
unsigned char var110 /* : Byte */;
unsigned char var112 /* : Byte */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
long var121 /* : Int */;
long var123 /* : Int */;
long var124 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
unsigned char var130 /* : Byte */;
unsigned char var132 /* : Byte */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
long var140 /* : Int */;
long var141 /* : Int */;
long var143 /* : Int */;
long var144 /* : Int */;
long var146 /* : Int */;
long var147 /* : Int */;
long var149 /* : Int */;
unsigned char var150 /* : Byte */;
unsigned char var152 /* : Byte */;
long var154 /* : Int */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
long var160 /* : Int */;
long var161 /* : Int */;
long var163 /* : Int */;
long var164 /* : Int */;
long var166 /* : Int */;
unsigned char var167 /* : Byte */;
unsigned char var169 /* : Byte */;
var_pos = p0;
var_c = p1;
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var2 = (long)var_c;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_cp = var;
{
{ /* Inline kernel$Int$< (var_cp,128l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var5 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_cp < 128l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel$Int$to_b (var_cp) on <var_cp:Int> */
var9 = (unsigned char)var_cp;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var7) on <self:CString> */
self[var_pos]=(unsigned char)var7;
RET_LABEL10:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var11 = core__abstract_text___Char___u8char_len(var_c);
}
var_ln = var11;
{
{ /* Inline kernel$Int$== (var_ln,2l) on <var_ln:Int> */
var14 = var_ln == 2l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline math$Int$& (var_cp,1984l) on <var_cp:Int> */
var17 = var_cp & 1984l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var15,6l) on <var15:Int> */
var20 = var15 >> 6l;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline math$Int$| (192l,var18) on <192l:Int> */
var23 = 192l | var18;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var21) on <var21:Int> */
var26 = (unsigned char)var21;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var24) on <self:CString> */
self[var_pos]=(unsigned char)var24;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var_pos + 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var37 = var_cp & 63l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var35) on <128l:Int> */
var40 = 128l | var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var38) on <var38:Int> */
var43 = (unsigned char)var38;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var28,var41) on <self:CString> */
self[var28]=(unsigned char)var41;
RET_LABEL44:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$== (var_ln,3l) on <var_ln:Int> */
var47 = var_ln == 3l;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline math$Int$& (var_cp,61440l) on <var_cp:Int> */
var50 = var_cp & 61440l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var48,12l) on <var48:Int> */
var53 = var48 >> 12l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline math$Int$| (224l,var51) on <224l:Int> */
var56 = 224l | var51;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var54) on <var54:Int> */
var59 = (unsigned char)var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var57) on <self:CString> */
self[var_pos]=(unsigned char)var57;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_pos + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,4032l) on <var_cp:Int> */
var70 = var_cp & 4032l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var68,6l) on <var68:Int> */
var73 = var68 >> 6l;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var71) on <128l:Int> */
var76 = 128l | var71;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var74) on <var74:Int> */
var79 = (unsigned char)var74;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var61,var77) on <self:CString> */
self[var61]=(unsigned char)var77;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var83 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_pos + 2l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var90 = var_cp & 63l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var88) on <128l:Int> */
var93 = 128l | var88;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var91) on <var91:Int> */
var96 = (unsigned char)var91;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var81,var94) on <self:CString> */
self[var81]=(unsigned char)var94;
RET_LABEL97:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$== (var_ln,4l) on <var_ln:Int> */
var100 = var_ln == 4l;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
{ /* Inline math$Int$& (var_cp,1835008l) on <var_cp:Int> */
var103 = var_cp & 1835008l;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var101,18l) on <var101:Int> */
var106 = var101 >> 18l;
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline math$Int$| (240l,var104) on <240l:Int> */
var109 = 240l | var104;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var107) on <var107:Int> */
var112 = (unsigned char)var107;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var110) on <self:CString> */
self[var_pos]=(unsigned char)var110;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var116 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var120 = var_pos + 1l;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,258048l) on <var_cp:Int> */
var123 = var_cp & 258048l;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var121,12l) on <var121:Int> */
var126 = var121 >> 12l;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var124) on <128l:Int> */
var129 = 128l | var124;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var127) on <var127:Int> */
var132 = (unsigned char)var127;
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var114,var130) on <self:CString> */
self[var114]=(unsigned char)var130;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var136 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var140 = var_pos + 2l;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,4032l) on <var_cp:Int> */
var143 = var_cp & 4032l;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var141,6l) on <var141:Int> */
var146 = var141 >> 6l;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var144) on <128l:Int> */
var149 = 128l | var144;
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var147) on <var147:Int> */
var152 = (unsigned char)var147;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var134,var150) on <self:CString> */
self[var134]=(unsigned char)var150;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,3l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var156 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var156)) {
var_class_name159 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var160 = var_pos + 3l;
var154 = var160;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var163 = var_cp & 63l;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var161) on <128l:Int> */
var166 = 128l | var161;
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var164) on <var164:Int> */
var169 = (unsigned char)var164;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var154,var167) on <self:CString> */
self[var154]=(unsigned char)var167;
RET_LABEL170:(void)0;
}
}
} else {
}
}
}
RET_LABEL:;
}
/* method flat$Int$to_s for (self: Int): String */
val* core__flat___Int___core__abstract_text__Object__to_s(long self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var25 /* : CString */;
char* var26 /* : CString */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var30 /* : Int */;
char* var31 /* : CString */;
char* var33 /* : CString */;
char* var_ns /* var ns: CString */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
static val* varoncenew43;
static int varoncenew43_guard;
val* var44 /* : FlatString */;
val* var45 /* : FlatString */;
val* var46 /* : FlatString */;
{
{ /* Inline kernel$Int$== (self,0l) on <self:Int> */
var3 = self == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "0";
var7 = (val*)(1l<<2|1);
var8 = (val*)(1l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (self,1l) on <self:Int> */
var13 = self == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "1";
var18 = (val*)(1l<<2|1);
var19 = (val*)(1l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_text$Int$int_to_s_len (self) on <self:Int> */
var24 = core__abstract_text___Int_int_to_s_len___impl(self);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_nslen = var22;
if (likely(varoncenew_guard)) {
var25 = varoncenew;
} else {
var26 = NULL/*special!*/;
var25 = var26;
varoncenew = var25;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var_nslen + 1l;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline native$CString$new (var25,var27) on <var25:CString> */
var33 = (char*)nit_alloc(var27);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_ns = var31;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var_nslen + 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_text$Int$native_int_to_s (self,var_ns,var35) on <self:Int> */
core__abstract_text___Int_native_int_to_s___impl(self, var_ns, var35);
RET_LABEL42:(void)0;
}
}
if (likely(varoncenew43_guard)) {
var44 = varoncenew43;
} else {
var45 = NEW_core__FlatString(&type_core__FlatString);
var44 = var45;
varoncenew43 = var44;
varoncenew43_guard = 1;
}
{
var46 = core___core__FlatString___full(var44, var_ns, var_nslen, 0l, var_nslen);
}
var = var46;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Int$to_s for (self: Object): String */
val* VIRTUAL_core__flat___Int___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core__flat___Int___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat$Array$plain_to_s for (self: Array[nullable Object]): String */
val* core__flat___Array___core__abstract_text__Collection__plain_to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: NativeArray[nullable Object] */;
val* var13 /* : nullable Object */;
val* var15 /* : Object */;
val* var_first /* var first: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
val* var29 /* : String */;
val* var30 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var37 /* : Object */;
val* var_itsi /* var itsi: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
val* var47 /* : String */;
val* var_tmp /* var tmp: String */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const struct type* type_struct;
const char* var_class_name60;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var76 /* : CString */;
char* var77 /* : CString */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
char* var85 /* : CString */;
char* var87 /* : CString */;
char* var_ns /* var ns: CString */;
long var_off /* var off: Int */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
short int var95 /* : Bool */;
val* var96 /* : nullable Object */;
val* var98 /* : Object */;
val* var_tmp99 /* var tmp: String */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
long var103 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var104 /* : CString */;
long var105 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
val* var114 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var115 /* : Iterator[nullable Object] */;
val* var_116 /* var : Iterator[FlatText] */;
short int var117 /* : Bool */;
val* var119 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
val* var_s /* var s: FlatString */;
long var124 /* : Int */;
long var_slen /* var slen: Int */;
char* var125 /* : CString */;
long var126 /* : Int */;
long var128 /* : Int */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
long var134 /* : Int */;
long var135 /* : Int */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
long var141 /* : Int */;
static val* varoncenew143;
static int varoncenew143_guard;
val* var144 /* : FlatString */;
val* var145 /* : FlatString */;
val* var146 /* : FlatString */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
var4 = var_l == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "";
var8 = (val*)(0l<<2|1);
var9 = (val*)(0l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1497);
fatal_exit(1);
}
var_its = var12;
{
{ /* Inline array$NativeArray$[] (var_its,0l) on <var_its:NativeArray[nullable Object]> */
var15 = ((struct instance_core__NativeArray*)var_its)->values[0l];
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_first = var13;
{
{ /* Inline kernel$Int$== (var_l,1l) on <var_l:Int> */
var18 = var_l == 1l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (var_first == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_first, ((val*)NULL)); /* == on <var_first:nullable Object>*/
var19 = var20;
}
if (var19){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "";
var25 = (val*)(0l<<2|1);
var26 = (val*)(0l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
{
var29 = ((val*(*)(val* self))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_first); /* to_s on <var_first:nullable Object(Object)>*/
}
var = var29;
goto RET_LABEL;
}
} else {
}
var30 = NEW_core__NativeArray((int)var_l, &type_core__NativeArray__core__String);
var_na = var30;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var33 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var34 = var_i < var_l;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline array$NativeArray$[] (var_its,var_i) on <var_its:NativeArray[nullable Object]> */
var37 = ((struct instance_core__NativeArray*)var_its)->values[var_i];
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_itsi = var35;
if (var_itsi == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
var39 = ((short int(*)(val* self, val* p0))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_itsi, ((val*)NULL)); /* == on <var_itsi:nullable Object>*/
var38 = var39;
}
if (var38){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_i + 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_i = var40;
goto BREAK_label;
} else {
}
{
var47 = ((val*(*)(val* self))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_itsi); /* to_s on <var_itsi:nullable Object(Object)>*/
}
var_tmp = var47;
{
var48 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_tmp); /* byte_length on <var_tmp:String>*/
}
{
{ /* Inline kernel$Int$+ (var_sl,var48) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_sl + var48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_sl = var49;
{
{ /* Inline array$NativeArray$[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype58 = type_struct->color;
idtype59 = type_struct->id;
if(cltype58 >= var_tmp->type->table_size) {
var57 = 0;
} else {
var57 = var_tmp->type->type_table[cltype58] == idtype59;
}
if (unlikely(!var57)) {
var_class_name60 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_i + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_i = var61;
{
{ /* Inline kernel$Int$+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_mypos + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_mypos = var68;
} else {
goto BREAK_label75;
}
BREAK_label: (void)0;
}
BREAK_label75: (void)0;
if (likely(varoncenew_guard)) {
var76 = varoncenew;
} else {
var77 = NULL/*special!*/;
var76 = var77;
varoncenew = var76;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_sl + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline native$CString$new (var76,var78) on <var76:CString> */
var87 = (char*)nit_alloc(var78);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_ns = var85;
{
{ /* Inline native$CString$[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL88:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var91 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var95 = var_i < var_mypos;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
if (var89){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var98 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_tmp99 = var96;
/* <var_tmp99:String> isa FlatString */
cltype101 = type_core__FlatString.color;
idtype102 = type_core__FlatString.id;
if(cltype101 >= var_tmp99->type->table_size) {
var100 = 0;
} else {
var100 = var_tmp99->type->type_table[cltype101] == idtype102;
}
if (var100){
var103 = var_tmp99->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp99:String(FlatString)> */
var_tpl = var103;
var104 = var_tmp99->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp99:String(FlatString)> */
var105 = var_tmp99->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp99:String(FlatString)> */
{
{ /* Inline native$CString$copy_to (var104,var_ns,var_tpl,var105,var_off) on <var104:CString> */
memmove(var_ns+var_off,var104+var105,var_tpl);
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var109 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var113 = var_off + var_tpl;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var_off = var107;
} else {
{
var114 = ((val*(*)(val* self))(var_tmp99->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp99); /* substrings on <var_tmp99:String>*/
}
var_ = var114;
{
var115 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_116 = var115;
for(;;) {
{
var117 = ((short int(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_116); /* is_ok on <var_116:Iterator[FlatText]>*/
}
if (var117){
} else {
goto BREAK_label118;
}
{
var119 = ((val*(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_116); /* item on <var_116:Iterator[FlatText]>*/
}
var_j = var119;
/* <var_j:FlatText> isa FlatString */
cltype121 = type_core__FlatString.color;
idtype122 = type_core__FlatString.id;
if(cltype121 >= var_j->type->table_size) {
var120 = 0;
} else {
var120 = var_j->type->type_table[cltype121] == idtype122;
}
if (unlikely(!var120)) {
var_class_name123 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1528);
fatal_exit(1);
}
var_s = var_j;
var124 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var124;
var125 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var126 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native$CString$copy_to (var125,var_ns,var_slen,var126,var_off) on <var125:CString> */
memmove(var_ns+var_off,var125+var126,var_slen);
RET_LABEL127:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var130 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var134 = var_off + var_slen;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var_off = var128;
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_116); /* next on <var_116:Iterator[FlatText]>*/
}
}
BREAK_label118: (void)0;
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_116); /* finish on <var_116:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var137 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var141 = var_i + 1l;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var_i = var135;
} else {
goto BREAK_label142;
}
}
BREAK_label142: (void)0;
if (likely(varoncenew143_guard)) {
var144 = varoncenew143;
} else {
var145 = NEW_core__FlatString(&type_core__FlatString);
var144 = var145;
varoncenew143 = var144;
varoncenew143_guard = 1;
}
{
var146 = core___core__FlatString___with_infos(var144, var_ns, var_sl, 0l);
}
var = var146;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeArray$native_to_s for (self: NativeArray[nullable Object]): String */
val* core__flat___NativeArray___native_to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
long var2 /* : Int */;
long var4 /* : Int */;
long var_l /* var l: Int */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
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
static char* varoncenew;
static int varoncenew_guard;
char* var36 /* : CString */;
char* var37 /* : CString */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
char* var45 /* : CString */;
char* var47 /* : CString */;
char* var_ns /* var ns: CString */;
long var_off /* var off: Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var58 /* : Object */;
val* var_tmp /* var tmp: String */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
long var62 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var63 /* : CString */;
long var64 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
val* var73 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var74 /* : Iterator[nullable Object] */;
val* var_75 /* var : Iterator[FlatText] */;
short int var76 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
val* var_s /* var s: FlatString */;
long var83 /* : Int */;
long var_slen /* var slen: Int */;
char* var84 /* : CString */;
long var85 /* : Int */;
long var87 /* : Int */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
long var93 /* : Int */;
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
static val* varoncenew102;
static int varoncenew102_guard;
val* var103 /* : FlatString */;
val* var104 /* : FlatString */;
val* var105 /* : FlatString */;
/* <self:NativeArray[nullable Object]> isa NativeArray[String] */
cltype = type_core__NativeArray__core__String.color;
idtype = type_core__NativeArray__core__String.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1542);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$length (self) on <self:NativeArray[nullable Object](NativeArray[String])> */
var4 = ((struct instance_core__NativeArray*)self)->length;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
var_na = self;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var7 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_i < var_l;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var13 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var14 = ((long(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var11); /* byte_length on <var11:nullable Object(String)>*/
}
{
{ /* Inline kernel$Int$+ (var_sl,var14) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var_sl + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_sl = var15;
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
{ /* Inline kernel$Int$+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_mypos + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_mypos = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varoncenew_guard)) {
var36 = varoncenew;
} else {
var37 = NULL/*special!*/;
var36 = var37;
varoncenew = var36;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_sl + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline native$CString$new (var36,var38) on <var36:CString> */
var47 = (char*)nit_alloc(var38);
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_ns = var45;
{
{ /* Inline native$CString$[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL48:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var51 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var55 = var_i < var_mypos;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var58 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_tmp = var56;
/* <var_tmp:String> isa FlatString */
cltype60 = type_core__FlatString.color;
idtype61 = type_core__FlatString.id;
if(cltype60 >= var_tmp->type->table_size) {
var59 = 0;
} else {
var59 = var_tmp->type->type_table[cltype60] == idtype61;
}
if (var59){
var62 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp:String(FlatString)> */
var_tpl = var62;
var63 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp:String(FlatString)> */
var64 = var_tmp->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp:String(FlatString)> */
{
{ /* Inline native$CString$copy_to (var63,var_ns,var_tpl,var64,var_off) on <var63:CString> */
memmove(var_ns+var_off,var63+var64,var_tpl);
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var68 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var72 = var_off + var_tpl;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_off = var66;
} else {
{
var73 = ((val*(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp); /* substrings on <var_tmp:String>*/
}
var_ = var73;
{
var74 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_75 = var74;
for(;;) {
{
var76 = ((short int(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_75); /* is_ok on <var_75:Iterator[FlatText]>*/
}
if (var76){
} else {
goto BREAK_label77;
}
{
var78 = ((val*(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_75); /* item on <var_75:Iterator[FlatText]>*/
}
var_j = var78;
/* <var_j:FlatText> isa FlatString */
cltype80 = type_core__FlatString.color;
idtype81 = type_core__FlatString.id;
if(cltype80 >= var_j->type->table_size) {
var79 = 0;
} else {
var79 = var_j->type->type_table[cltype80] == idtype81;
}
if (unlikely(!var79)) {
var_class_name82 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1565);
fatal_exit(1);
}
var_s = var_j;
var83 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var83;
var84 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var85 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native$CString$copy_to (var84,var_ns,var_slen,var85,var_off) on <var84:CString> */
memmove(var_ns+var_off,var84+var85,var_slen);
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var89 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var93 = var_off + var_slen;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var_off = var87;
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_75); /* next on <var_75:Iterator[FlatText]>*/
}
}
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_75); /* finish on <var_75:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var96 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var100 = var_i + 1l;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_i = var94;
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
if (likely(varoncenew102_guard)) {
var103 = varoncenew102;
} else {
var104 = NEW_core__FlatString(&type_core__FlatString);
var103 = var104;
varoncenew102 = var103;
varoncenew102_guard = 1;
}
{
var105 = core___core__FlatString___with_infos(var103, var_ns, var_sl, 0l);
}
var = var105;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Map$join for (self: Map[nullable Object, nullable Object], String, String): String */
val* core__flat___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_sep /* var sep: String */;
val* var_couple_sep /* var couple_sep: String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var9 /* : Buffer */;
val* var10 /* : Buffer */;
val* var11 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var12 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
val* var13 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var14 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
val* var17 /* : Object */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : Object */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var36 /* : String */;
val* var37 /* : String */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable Object */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
val* var43 /* : Object */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
val* var52 /* : String */;
val* var53 /* : Object */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
var_sep = p0;
var_couple_sep = p1;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__is_empty]))(self); /* is_empty on <self:Map[nullable Object, nullable Object]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var5 = (val*)(0l<<2|1);
var6 = (val*)(0l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var9 = varoncenew;
} else {
var10 = NEW_core__Buffer(&type_core__Buffer);
var9 = var10;
varoncenew = var9;
varoncenew_guard = 1;
}
{
var11 = core__flat___Buffer___new(var9);
}
var_s = var11;
{
var12 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(self); /* iterator on <self:Map[nullable Object, nullable Object]>*/
}
var_i = var12;
{
var13 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var13;
{
var14 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var14;
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
} else {
var16 = varonce15;
varonce15 = NULL;
}
if (var_k!=NULL) {
var17 = var_k;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "<null>";
var22 = (val*)(6l<<2|1);
var23 = (val*)(6l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
var17 = var19;
}
{
var26 = ((val*(*)(val* self))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var17); /* to_s on <var17:Object>*/
}
((struct instance_core__NativeArray*)var16)->values[0]=var26;
((struct instance_core__NativeArray*)var16)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var27 = var_e;
} else {
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "<null>";
var32 = (val*)(6l<<2|1);
var33 = (val*)(6l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
var27 = var29;
}
{
var36 = ((val*(*)(val* self))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var27); /* to_s on <var27:Object>*/
}
((struct instance_core__NativeArray*)var16)->values[2]=var36;
{
var37 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var37); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
for(;;) {
{
var38 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var38){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_sep); /* append on <var_s:Buffer>*/
}
{
var39 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var39;
{
var40 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var40;
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
} else {
var42 = varonce41;
varonce41 = NULL;
}
if (var_k!=NULL) {
var43 = var_k;
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "<null>";
var48 = (val*)(6l<<2|1);
var49 = (val*)(6l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
var43 = var45;
}
{
var52 = ((val*(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var43); /* to_s on <var43:Object>*/
}
((struct instance_core__NativeArray*)var42)->values[0]=var52;
((struct instance_core__NativeArray*)var42)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var53 = var_e;
} else {
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "<null>";
var58 = (val*)(6l<<2|1);
var59 = (val*)(6l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
var53 = var55;
}
{
var62 = ((val*(*)(val* self))((((long)var53&3)?class_info[((long)var53&3)]:var53->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var53); /* to_s on <var53:Object>*/
}
((struct instance_core__NativeArray*)var42)->values[2]=var62;
{
var63 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var63); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var64 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var64;
goto RET_LABEL;
RET_LABEL:;
return var;
}
