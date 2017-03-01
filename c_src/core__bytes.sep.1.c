#include "core__bytes.sep.0.h"
/* method bytes$Bytes$items for (self: Bytes): CString */
char* core___core__Bytes___items(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$items= for (self: Bytes, CString) */
void core___core__Bytes___items_61d(val* self, char* p0) {
self->attrs[COLOR_core__bytes__Bytes___items].str = p0; /* _items on <self:Bytes> */
RET_LABEL:;
}
/* method bytes$Bytes$length for (self: Bytes): Int */
long core___core__Bytes___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$length= for (self: Bytes, Int) */
void core___core__Bytes___core__array__AbstractArrayRead__length_61d(val* self, long p0) {
self->attrs[COLOR_core__bytes__Bytes___length].l = p0; /* _length on <self:Bytes> */
RET_LABEL:;
}
/* method bytes$Bytes$capacity for (self: Bytes): Int */
long core___core__Bytes___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$capacity= for (self: Bytes, Int) */
void core___core__Bytes___capacity_61d(val* self, long p0) {
self->attrs[COLOR_core__bytes__Bytes___capacity].l = p0; /* _capacity on <self:Bytes> */
RET_LABEL:;
}
/* method bytes$Bytes$persisted for (self: Bytes): Bool */
short int core___core__Bytes___persisted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$persisted= for (self: Bytes, Bool) */
void core___core__Bytes___persisted_61d(val* self, short int p0) {
self->attrs[COLOR_core__bytes__Bytes___persisted].s = p0; /* _persisted on <self:Bytes> */
RET_LABEL:;
}
/* method bytes$Bytes$empty for (self: Bytes) */
void core___core__Bytes___empty(val* self) {
static char* varoncenew;
static int varoncenew_guard;
char* var /* : CString */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
char* var_ns /* var ns: CString */;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var,0l) on <var:CString> */
var4 = (char*)nit_alloc(0l);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ns = var2;
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__bytes__Bytes__items_61d]))(self, var_ns); /* items= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__array__AbstractArrayRead__length_61d]))(self, 0l); /* length= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__bytes__Bytes__capacity_61d]))(self, 0l); /* capacity= on <self:Bytes>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Bytes>*/
}
RET_LABEL:;
}
/* method bytes$Bytes$with_capacity for (self: Bytes, Int) */
void core___core__Bytes___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var /* : CString */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
char* var_ns /* var ns: CString */;
var_cap = p0;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var,var_cap) on <var:CString> */
var4 = (char*)nit_alloc(var_cap);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ns = var2;
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__bytes__Bytes__items_61d]))(self, var_ns); /* items= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__array__AbstractArrayRead__length_61d]))(self, 0l); /* length= on <self:Bytes>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__bytes__Bytes__capacity_61d]))(self, var_cap); /* capacity= on <self:Bytes>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Bytes>*/
}
RET_LABEL:;
}
/* method bytes$Bytes$is_empty for (self: Bytes): Bool */
short int core___core__Bytes___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var3 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$[] for (self: Bytes, Int): Byte */
unsigned char core___core__Bytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
char* var15 /* : CString */;
char* var17 /* : CString */;
unsigned char var18 /* : Byte */;
unsigned char var20 /* : Byte */;
var_i = p0;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_i >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 184);
fatal_exit(1);
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var7 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var5) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_i < var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 185);
fatal_exit(1);
}
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var17 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline native$CString$[] (var15,var_i) on <var15:CString> */
var20 = (unsigned char)((int)var15[var_i]);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core___core__Bytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__Bytes___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$[]= for (self: Bytes, Int, Byte) */
void core___core__Bytes___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, unsigned char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
unsigned char var_v /* var v: Byte */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
char* var27 /* : CString */;
char* var29 /* : CString */;
/* Covariant cast for argument 1 (v) <p1:Byte> isa Byte */
/* <p1:Byte> isa Byte */
var = 1; /* easy <p1:Byte> isa Byte*/
if (unlikely(!var)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Byte", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 370);
fatal_exit(1);
}
var_i = p0;
var_v = p1;
{
{ /* Inline bytes$Bytes$persisted (self) on <self:Bytes> */
var3 = self->attrs[COLOR_core__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
core___core__Bytes___regen(self); /* Direct call bytes$Bytes$regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var10 = var_i >= 0l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 375);
fatal_exit(1);
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var13 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var_i,var11) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var16 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var20 = var_i <= var11;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 376);
fatal_exit(1);
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var23 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_i,var21) on <var_i:Int> */
var26 = var_i == var21;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
core___core__Bytes___core__abstract_collection__SimpleCollection__add(self, var_v); /* Direct call bytes$Bytes$add on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var29 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var27,var_i,var_v) on <var27:CString> */
var27[var_i]=(unsigned char)var_v;
RET_LABEL30:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_core___core__Bytes___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
unsigned char var /* : Byte */;
var = ((struct instance_core__Byte*)p1)->value; /* autounbox from nullable Object to Byte */;
core___core__Bytes___core__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call bytes$Bytes$[]= on <self:Sequence[nullable Object](Bytes)>*/
RET_LABEL:;
}
/* method bytes$Bytes$add for (self: Bytes, Byte) */
void core___core__Bytes___core__abstract_collection__SimpleCollection__add(val* self, unsigned char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
unsigned char var_c /* var c: Byte */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
char* var20 /* : CString */;
char* var22 /* : CString */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var_ /* var : Bytes */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Byte> isa Byte */
/* <p0:Byte> isa Byte */
var = 1; /* easy <p0:Byte> isa Byte*/
if (unlikely(!var)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Byte", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 381);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline bytes$Bytes$persisted (self) on <self:Bytes> */
var3 = self->attrs[COLOR_core__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
core___core__Bytes___regen(self); /* Direct call bytes$Bytes$regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var6 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var9 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var4,var7) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var16 = var4 >= var7;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var19 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
core___core__Bytes___core__array__AbstractArray__enlarge(self, var17); /* Direct call bytes$Bytes$enlarge on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var22 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var25 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var20,var23,var_c) on <var20:CString> */
var20[var23]=(unsigned char)var_c;
RET_LABEL26:(void)0;
}
}
var_ = self;
{
{ /* Inline bytes$Bytes$length (var_) on <var_:Bytes> */
var29 = var_->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var27,1l) on <var27:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var36 = var27 + 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length= (var_,var30) on <var_:Bytes> */
var_->attrs[COLOR_core__bytes__Bytes___length].l = var30; /* _length on <var_:Bytes> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_core___core__Bytes___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
unsigned char var /* : Byte */;
var = ((struct instance_core__Byte*)p0)->value; /* autounbox from nullable Object to Byte */;
core___core__Bytes___core__abstract_collection__SimpleCollection__add(self, var); /* Direct call bytes$Bytes$add on <self:SimpleCollection[nullable Object](Bytes)>*/
RET_LABEL:;
}
/* method bytes$Bytes$add_char for (self: Bytes, Char) */
void core___core__Bytes___add_char(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
short int var /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var_cln /* var cln: Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_ln /* var ln: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
char* var11 /* : CString */;
char* var13 /* : CString */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var_ /* var : Bytes */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
var_c = p0;
{
{ /* Inline bytes$Bytes$persisted (self) on <self:Bytes> */
var2 = self->attrs[COLOR_core__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
core___core__Bytes___regen(self); /* Direct call bytes$Bytes$regen on <self:Bytes>*/
}
} else {
}
{
var3 = core__abstract_text___Char___u8char_len(var_c);
}
var_cln = var3;
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var6 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ln = var4;
{
{ /* Inline kernel$Int$+ (var_ln,var_cln) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var9 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var_ln + var_cln;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
core___core__Bytes___core__array__AbstractArray__enlarge(self, var7); /* Direct call bytes$Bytes$enlarge on <self:Bytes>*/
}
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var13 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var16 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core__flat___CString___set_char_at(var11, var14, var_c); /* Direct call flat$CString$set_char_at on <var11:CString>*/
}
var_ = self;
{
{ /* Inline bytes$Bytes$length (var_) on <var_:Bytes> */
var19 = var_->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var17,var_cln) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var22 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var17 + var_cln;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length= (var_,var20) on <var_:Bytes> */
var_->attrs[COLOR_core__bytes__Bytes___length].l = var20; /* _length on <var_:Bytes> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$append for (self: Bytes, Collection[Byte]) */
void core___core__Bytes___core__abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_arr /* var arr: Collection[Byte] */;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
char* var4 /* : CString */;
char* var6 /* : CString */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var_ /* var : Collection[Byte] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[Byte] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
unsigned char var14 /* : Byte */;
unsigned char var_i /* var i: Byte */;
/* Covariant cast for argument 0 (arr) <p0:Collection[Byte]> isa Collection[Byte] */
/* <p0:Collection[Byte]> isa Collection[Byte] */
var = 1; /* easy <p0:Collection[Byte]> isa Collection[Byte]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Byte]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 408);
fatal_exit(1);
}
var_arr = p0;
/* <var_arr:Collection[Byte]> isa Bytes */
cltype2 = type_core__Bytes.color;
idtype3 = type_core__Bytes.id;
if(cltype2 >= (((long)var_arr&3)?type_info[((long)var_arr&3)]:var_arr->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_arr&3)?type_info[((long)var_arr&3)]:var_arr->type)->type_table[cltype2] == idtype3;
}
if (var1){
{
{ /* Inline bytes$Bytes$items (var_arr) on <var_arr:Collection[Byte](Bytes)> */
var6 = var_arr->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var_arr:Collection[Byte](Bytes)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (var_arr) on <var_arr:Collection[Byte](Bytes)> */
var9 = var_arr->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_arr:Collection[Byte](Bytes)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__Bytes___append_ns(self, var4, var7); /* Direct call bytes$Bytes$append_ns on <self:Bytes>*/
}
} else {
var_ = var_arr;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Byte]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[Byte]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[Byte]>*/
}
var14 = ((struct instance_core__Byte*)var13)->value; /* autounbox from nullable Object to Byte */;
var_i = var14;
{
core___core__Bytes___core__abstract_collection__SimpleCollection__add(self, var_i); /* Direct call bytes$Bytes$add on <self:Bytes>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[Byte]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[Byte]>*/
}
}
RET_LABEL:;
}
/* method bytes$Bytes$pop for (self: Bytes): Byte */
unsigned char core___core__Bytes___core__abstract_collection__Sequence__pop(val* self) {
unsigned char var /* : Byte */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var_ /* var : Bytes */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
char* var19 /* : CString */;
char* var21 /* : CString */;
long var22 /* : Int */;
long var24 /* : Int */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var3 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var1 >= 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__bytes, 424);
fatal_exit(1);
}
var_ = self;
{
{ /* Inline bytes$Bytes$length (var_) on <var_:Bytes> */
var10 = var_->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var17 = var8 - 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length= (var_,var11) on <var_:Bytes> */
var_->attrs[COLOR_core__bytes__Bytes___length].l = var11; /* _length on <var_:Bytes> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var21 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var24 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline native$CString$[] (var19,var22) on <var19:CString> */
var27 = (unsigned char)((int)var19[var22]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$pop for (self: Sequence[nullable Object]): nullable Object */
val* VIRTUAL_core___core__Bytes___core__abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__Bytes___core__abstract_collection__Sequence__pop(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$clear for (self: Bytes) */
void core___core__Bytes___core__abstract_collection__RemovableCollection__clear(val* self) {
{
{ /* Inline bytes$Bytes$length= (self,0l) on <self:Bytes> */
self->attrs[COLOR_core__bytes__Bytes___length].l = 0l; /* _length on <self:Bytes> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$regen for (self: Bytes) */
void core___core__Bytes___regen(val* self) {
static char* varoncenew;
static int varoncenew_guard;
char* var /* : CString */;
char* var1 /* : CString */;
long var2 /* : Int */;
long var4 /* : Int */;
char* var5 /* : CString */;
char* var7 /* : CString */;
char* var_nns /* var nns: CString */;
char* var8 /* : CString */;
char* var10 /* : CString */;
long var11 /* : Int */;
long var13 /* : Int */;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var4 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline native$CString$new (var,var2) on <var:CString> */
var7 = (char*)nit_alloc(var2);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_nns = var5;
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var10 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var13 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var8,var_nns,var11,0l,0l) on <var8:CString> */
memmove(var_nns+0l,var8+0l,var11);
RET_LABEL14:(void)0;
}
}
{
{ /* Inline bytes$Bytes$persisted= (self,0) on <self:Bytes> */
self->attrs[COLOR_core__bytes__Bytes___persisted].s = 0; /* _persisted on <self:Bytes> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$append_ns for (self: Bytes, CString, Int) */
void core___core__Bytes___append_ns(val* self, char* p0, long p1) {
char* var_ns /* var ns: CString */;
long var_ln /* var ln: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_nlen /* var nlen: Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char* var20 /* : CString */;
char* var22 /* : CString */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var_ /* var : Bytes */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
var_ns = p0;
var_ln = p1;
{
{ /* Inline bytes$Bytes$persisted (self) on <self:Bytes> */
var2 = self->attrs[COLOR_core__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
core___core__Bytes___regen(self); /* Direct call bytes$Bytes$regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var5 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var3,var_ln) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var8 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var3 + var_ln;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_nlen = var6;
{
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var12 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var_nlen,var10) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var15 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var19 = var_nlen > var10;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
core___core__Bytes___core__array__AbstractArray__enlarge(self, var_nlen); /* Direct call bytes$Bytes$enlarge on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var22 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var25 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var_ns,var20,var_ln,0l,var23) on <var_ns:CString> */
memmove(var20+var23,var_ns+0l,var_ln);
RET_LABEL26:(void)0;
}
}
var_ = self;
{
{ /* Inline bytes$Bytes$length (var_) on <var_:Bytes> */
var29 = var_->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var27,var_ln) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var32 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var36 = var27 + var_ln;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length= (var_,var30) on <var_:Bytes> */
var_->attrs[COLOR_core__bytes__Bytes___length].l = var30; /* _length on <var_:Bytes> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$append_ns_from for (self: Bytes, CString, Int, Int) */
void core___core__Bytes___append_ns_from(val* self, char* p0, long p1, long p2) {
char* var_ns /* var ns: CString */;
long var_ln /* var ln: Int */;
long var_from /* var from: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_nlen /* var nlen: Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char* var20 /* : CString */;
char* var22 /* : CString */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var_ /* var : Bytes */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
var_ns = p0;
var_ln = p1;
var_from = p2;
{
{ /* Inline bytes$Bytes$persisted (self) on <self:Bytes> */
var2 = self->attrs[COLOR_core__bytes__Bytes___persisted].s; /* _persisted on <self:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
core___core__Bytes___regen(self); /* Direct call bytes$Bytes$regen on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var5 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var3,var_ln) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var8 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var3 + var_ln;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_nlen = var6;
{
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var12 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var_nlen,var10) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var15 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var19 = var_nlen > var10;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
core___core__Bytes___core__array__AbstractArray__enlarge(self, var_nlen); /* Direct call bytes$Bytes$enlarge on <self:Bytes>*/
}
} else {
}
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var22 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var25 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var_ns,var20,var_ln,var_from,var23) on <var_ns:CString> */
memmove(var20+var23,var_ns+var_from,var_ln);
RET_LABEL26:(void)0;
}
}
var_ = self;
{
{ /* Inline bytes$Bytes$length (var_) on <var_:Bytes> */
var29 = var_->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_:Bytes> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var27,var_ln) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var32 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var36 = var27 + var_ln;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length= (var_,var30) on <var_:Bytes> */
var_->attrs[COLOR_core__bytes__Bytes___length].l = var30; /* _length on <var_:Bytes> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$enlarge for (self: Bytes, Int) */
void core___core__Bytes___core__array__AbstractArray__enlarge(val* self, long p0) {
long var_sz /* var sz: Int */;
long var /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var36 /* : CString */;
char* var37 /* : CString */;
long var38 /* : Int */;
long var40 /* : Int */;
char* var41 /* : CString */;
char* var43 /* : CString */;
char* var_ns /* var ns: CString */;
char* var44 /* : CString */;
char* var46 /* : CString */;
long var47 /* : Int */;
long var49 /* : Int */;
var_sz = p0;
{
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var2 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var,var_sz) on <var:Int> */
/* Covariant cast for argument 0 (i) <var_sz:Int> isa OTHER */
/* <var_sz:Int> isa OTHER */
var5 = 1; /* easy <var_sz:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var6 = var >= var_sz;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline bytes$Bytes$persisted= (self,0) on <self:Bytes> */
self->attrs[COLOR_core__bytes__Bytes___persisted].s = 0; /* _persisted on <self:Bytes> */
RET_LABEL7:(void)0;
}
}
for(;;) {
{
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var10 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var8,var_sz) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_sz:Int> isa OTHER */
/* <var_sz:Int> isa OTHER */
var13 = 1; /* easy <var_sz:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var8 < var_sz;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var20 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel$Int$* (var18,2l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var23 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var27 = var18 * 2l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var21,2l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var30 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var21 + 2l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline bytes$Bytes$capacity= (self,var28) on <self:Bytes> */
self->attrs[COLOR_core__bytes__Bytes___capacity].l = var28; /* _capacity on <self:Bytes> */
RET_LABEL35:(void)0;
}
}
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
{ /* Inline bytes$Bytes$capacity (self) on <self:Bytes> */
var40 = self->attrs[COLOR_core__bytes__Bytes___capacity].l; /* _capacity on <self:Bytes> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline native$CString$new (var36,var38) on <var36:CString> */
var43 = (char*)nit_alloc(var38);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_ns = var41;
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var46 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var49 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var44,var_ns,var47,0l,0l) on <var44:CString> */
memmove(var_ns+0l,var44+0l,var47);
RET_LABEL50:(void)0;
}
}
{
{ /* Inline bytes$Bytes$items= (self,var_ns) on <self:Bytes> */
self->attrs[COLOR_core__bytes__Bytes___items].str = var_ns; /* _items on <self:Bytes> */
RET_LABEL51:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$Bytes$to_s for (self: Bytes): String */
val* core___core__Bytes___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var_b /* var b: Bytes */;
char* var2 /* : CString */;
char* var4 /* : CString */;
long var5 /* : Int */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var_r /* var r: String */;
char* var11 /* : CString */;
char* var13 /* : CString */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
{
{ /* Inline bytes$Bytes$persisted= (self,1) on <self:Bytes> */
self->attrs[COLOR_core__bytes__Bytes___persisted].s = 1; /* _persisted on <self:Bytes> */
RET_LABEL1:(void)0;
}
}
var_b = self;
{
{ /* Inline bytes$Bytes$items (var_b) on <var_b:Bytes> */
var4 = var_b->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var_b:Bytes> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (self) on <self:Bytes> */
var7 = self->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <self:Bytes> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var9 = (val*)(var5<<2|1);
var10 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var2, var9, ((val*)NULL), var10, ((val*)NULL));
}
var_r = var8;
{
{ /* Inline bytes$Bytes$items (self) on <self:Bytes> */
var13 = self->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <self:Bytes> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var_r,var11) on <var_r:String> */
var16 = BOX_core__CString(var11); /* autobox from CString to nullable Object */
var_other = var16;
{
var17 = ((short int(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_r, var_other); /* == on <var_r:String>*/
}
var18 = !var17;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
{ /* Inline bytes$Bytes$persisted= (self,0) on <self:Bytes> */
self->attrs[COLOR_core__bytes__Bytes___persisted].s = 0; /* _persisted on <self:Bytes> */
RET_LABEL19:(void)0;
}
}
} else {
}
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$iterator for (self: Bytes): Iterator[Byte] */
val* core___core__Bytes___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Byte] */;
val* var1 /* : BytesIterator */;
var1 = NEW_core__bytes__BytesIterator(&type_core__bytes__BytesIterator);
{
core__bytes___core__bytes__BytesIterator___with_buffer(var1, self); /* Direct call bytes$BytesIterator$with_buffer on <var1:BytesIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$Bytes$init for (self: Bytes) */
void core___core__Bytes___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Bytes___core__kernel__Object__init]))(self); /* init on <self:Bytes>*/
}
RET_LABEL:;
}
/* method bytes$BytesIterator$tgt for (self: BytesIterator): CString */
char* core__bytes___core__bytes__BytesIterator___tgt(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__bytes__BytesIterator___tgt].str; /* _tgt on <self:BytesIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes$BytesIterator$tgt= for (self: BytesIterator, CString) */
void core__bytes___core__bytes__BytesIterator___tgt_61d(val* self, char* p0) {
self->attrs[COLOR_core__bytes__BytesIterator___tgt].str = p0; /* _tgt on <self:BytesIterator> */
RET_LABEL:;
}
/* method bytes$BytesIterator$index for (self: BytesIterator): Int */
long core__bytes___core__bytes__BytesIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__bytes__BytesIterator___index].l; /* _index on <self:BytesIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes$BytesIterator$index= for (self: BytesIterator, Int) */
void core__bytes___core__bytes__BytesIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_core__bytes__BytesIterator___index].l = p0; /* _index on <self:BytesIterator> */
RET_LABEL:;
}
/* method bytes$BytesIterator$max for (self: BytesIterator): Int */
long core__bytes___core__bytes__BytesIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__bytes__BytesIterator___max].l; /* _max on <self:BytesIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method bytes$BytesIterator$max= for (self: BytesIterator, Int) */
void core__bytes___core__bytes__BytesIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__bytes__BytesIterator___max].l = p0; /* _max on <self:BytesIterator> */
RET_LABEL:;
}
/* method bytes$BytesIterator$with_buffer for (self: BytesIterator, Bytes) */
void core__bytes___core__bytes__BytesIterator___with_buffer(val* self, val* p0) {
val* var_b /* var b: Bytes */;
char* var /* : CString */;
char* var2 /* : CString */;
long var3 /* : Int */;
long var5 /* : Int */;
var_b = p0;
{
{ /* Inline bytes$Bytes$items (var_b) on <var_b:Bytes> */
var2 = var_b->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var_b:Bytes> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline bytes$Bytes$length (var_b) on <var_b:Bytes> */
var5 = var_b->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_b:Bytes> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__bytes__BytesIterator__tgt_61d]))(self, var); /* tgt= on <self:BytesIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__bytes__BytesIterator__index_61d]))(self, 0l); /* index= on <self:BytesIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__bytes__BytesIterator__max_61d]))(self, var3); /* max= on <self:BytesIterator>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:BytesIterator>*/
}
RET_LABEL:;
}
/* method bytes$BytesIterator$is_ok for (self: BytesIterator): Bool */
short int core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline bytes$BytesIterator$index (self) on <self:BytesIterator> */
var3 = self->attrs[COLOR_core__bytes__BytesIterator___index].l; /* _index on <self:BytesIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline bytes$BytesIterator$max (self) on <self:BytesIterator> */
var6 = self->attrs[COLOR_core__bytes__BytesIterator___max].l; /* _max on <self:BytesIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var1 < var4;
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
/* method bytes$BytesIterator$next for (self: BytesIterator) */
void core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : BytesIterator */;
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
{ /* Inline bytes$BytesIterator$index (var_) on <var_:BytesIterator> */
var2 = var_->attrs[COLOR_core__bytes__BytesIterator___index].l; /* _index on <var_:BytesIterator> */
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
{ /* Inline bytes$BytesIterator$index= (var_,var3) on <var_:BytesIterator> */
var_->attrs[COLOR_core__bytes__BytesIterator___index].l = var3; /* _index on <var_:BytesIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method bytes$BytesIterator$item for (self: BytesIterator): Byte */
unsigned char core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : CString */;
char* var3 /* : CString */;
long var4 /* : Int */;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
{
{ /* Inline bytes$BytesIterator$tgt (self) on <self:BytesIterator> */
var3 = self->attrs[COLOR_core__bytes__BytesIterator___tgt].str; /* _tgt on <self:BytesIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline bytes$BytesIterator$index (self) on <self:BytesIterator> */
var6 = self->attrs[COLOR_core__bytes__BytesIterator___index].l; /* _index on <self:BytesIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native$CString$[] (var1,var4) on <var1:CString> */
var9 = (unsigned char)((int)var1[var4]);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$BytesIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method bytes$BytesIterator$init for (self: BytesIterator) */
void core__bytes___core__bytes__BytesIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__bytes___core__bytes__BytesIterator___core__kernel__Object__init]))(self); /* init on <self:BytesIterator>*/
}
RET_LABEL:;
}
/* method bytes$Text$to_bytes for (self: Text): Bytes */
val* core__bytes___Text___to_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : Bytes */;
long var2 /* : Int */;
val* var_b /* var b: Bytes */;
var1 = NEW_core__Bytes(&type_core__Bytes);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Text>*/
}
{
core___core__Bytes___with_capacity(var1, var2); /* Direct call bytes$Bytes$with_capacity on <var1:Bytes>*/
}
var_b = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__bytes__Text__append_to_bytes]))(self, var_b); /* append_to_bytes on <self:Text>*/
}
var = var_b;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$Text$append_to_bytes for (self: Text, Bytes) */
void core__bytes___Text___append_to_bytes(val* self, val* p0) {
val* var_b /* var b: Bytes */;
val* var /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[FlatText] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_s /* var s: FlatText */;
long var5 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
long var7 /* : Int */;
long var9 /* : Int */;
long var_from /* var from: Int */;
char* var10 /* : CString */;
char* var12 /* : CString */;
long var13 /* : Int */;
long var15 /* : Int */;
var_b = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__substrings]))(self); /* substrings on <self:Text>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[FlatText]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[FlatText]>*/
}
var_s = var4;
/* <var_s:FlatText> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var_s->type->table_size) {
var6 = 0;
} else {
var6 = var_s->type->type_table[cltype] == idtype;
}
if (var6){
{
{ /* Inline flat$FlatString$first_byte (var_s) on <var_s:FlatText(FlatString)> */
var9 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatText(FlatString)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var5 = var7;
} else {
var5 = 0l;
}
var_from = var5;
{
{ /* Inline abstract_text$FlatText$items (var_s) on <var_s:FlatText> */
var12 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatText> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_text$FlatText$byte_length (var_s) on <var_s:FlatText> */
var15 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatText> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
core___core__Bytes___append_ns_from(var_b, var10, var13, var_from); /* Direct call bytes$Bytes$append_ns_from on <var_b:Bytes>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[FlatText]>*/
}
RET_LABEL:;
}
/* method bytes$Text$unescape_to_bytes for (self: Text): Bytes */
val* core__bytes___Text___unescape_to_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : Bytes */;
long var2 /* : Int */;
val* var_res /* var res: Bytes */;
short int var_was_slash /* var was_slash: Bool */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var_ /* var : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : Text */;
val* var_hx /* var hx: Text */;
short int var47 /* : Bool */;
long var48 /* : Int */;
unsigned char var49 /* : Byte */;
unsigned char var51 /* : Byte */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
val* var74 /* : Text */;
val* var_hx75 /* var hx: Text */;
short int var76 /* : Bool */;
long var77 /* : Int */;
uint32_t var78 /* : Char */;
uint32_t var80 /* : Char */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
var1 = NEW_core__Bytes(&type_core__Bytes);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Text>*/
}
{
core___core__Bytes___with_capacity(var1, var2); /* Direct call bytes$Bytes$with_capacity on <var1:Bytes>*/
}
var_res = var1;
var_was_slash = 0;
var_i = 0l;
for(;;) {
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var_c = var8;
var9 = !var_was_slash;
if (var9){
{
{ /* Inline kernel$Char$== (var_c,'\\') on <var_c:Char> */
var12 = var_c == '\\';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var_was_slash = 1;
} else {
{
core___core__Bytes___add_char(var_res, var_c); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_i + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_i = var13;
goto BREAK_label;
} else {
}
var_was_slash = 0;
{
{ /* Inline kernel$Char$== (var_c,'n') on <var_c:Char> */
var22 = var_c == 'n';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
core___core__Bytes___add_char(var_res, '\n'); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'r') on <var_c:Char> */
var25 = var_c == 'r';
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
core___core__Bytes___add_char(var_res, '\015'); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'t') on <var_c:Char> */
var28 = var_c == 't';
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
core___core__Bytes___add_char(var_res, '\t'); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'0') on <var_c:Char> */
var31 = var_c == '0';
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
core___core__Bytes___add_char(var_res, '\000'); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'x') on <var_c:Char> */
var35 = var_c == 'x';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_ = var33;
if (var33){
var32 = var_;
} else {
{
{ /* Inline kernel$Char$== (var_c,'X') on <var_c:Char> */
var38 = var_c == 'X';
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var32 = var36;
}
if (var32){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_i + 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var46 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var39, 2l); /* substring on <self:Text>*/
}
var_hx = var46;
{
var47 = core___core__Text___is_hex(var_hx);
}
if (var47){
{
var48 = ((long(*)(val* self, val* p0, val* p1))(var_hx->class->vft[COLOR_core__abstract_text__Text__to_hex]))(var_hx, ((val*)NULL), ((val*)NULL)); /* to_hex on <var_hx:Text>*/
}
{
{ /* Inline kernel$Int$to_b (var48) on <var48:Int> */
var51 = (unsigned char)var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
core___core__Bytes___core__abstract_collection__SimpleCollection__add(var_res, var49); /* Direct call bytes$Bytes$add on <var_res:Bytes>*/
}
} else {
{
core___core__Bytes___add_char(var_res, var_c); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,2l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var54 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_i + 2l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_i = var52;
} else {
{
{ /* Inline kernel$Char$== (var_c,'u') on <var_c:Char> */
var62 = var_c == 'u';
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_63 = var60;
if (var60){
var59 = var_63;
} else {
{
{ /* Inline kernel$Char$== (var_c,'U') on <var_c:Char> */
var66 = var_c == 'U';
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var59 = var64;
}
if (var59){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_i + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var74 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var67, 6l); /* substring on <self:Text>*/
}
var_hx75 = var74;
{
var76 = core___core__Text___is_hex(var_hx75);
}
if (var76){
{
var77 = ((long(*)(val* self, val* p0, val* p1))(var_hx75->class->vft[COLOR_core__abstract_text__Text__to_hex]))(var_hx75, ((val*)NULL), ((val*)NULL)); /* to_hex on <var_hx75:Text>*/
}
{
{ /* Inline kernel$Int$code_point (var77) on <var77:Int> */
var80 = (uint32_t)var77;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
core___core__Bytes___add_char(var_res, var78); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
} else {
{
core___core__Bytes___add_char(var_res, var_c); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,6l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <6l:Int> isa OTHER */
/* <6l:Int> isa OTHER */
var83 = 1; /* easy <6l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_i + 6l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_i = var81;
} else {
{
core___core__Bytes___add_char(var_res, var_c); /* Direct call bytes$Bytes$add_char on <var_res:Bytes>*/
}
}
}
}
}
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var90 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var94 = var_i + 1l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_i = var88;
} else {
goto BREAK_label95;
}
BREAK_label: (void)0;
}
BREAK_label95: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method bytes$FlatText$append_to_bytes for (self: FlatText, Bytes) */
void core__bytes___FlatText___Text__append_to_bytes(val* self, val* p0) {
val* var_b /* var b: Bytes */;
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
long var2 /* : Int */;
long var4 /* : Int */;
long var_from /* var from: Int */;
char* var5 /* : CString */;
char* var7 /* : CString */;
long var8 /* : Int */;
long var10 /* : Int */;
var_b = p0;
/* <self:FlatText> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (var1){
{
{ /* Inline flat$FlatString$first_byte (self) on <self:FlatText(FlatString)> */
var4 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatText(FlatString)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
} else {
var = 0l;
}
var_from = var;
{
{ /* Inline abstract_text$FlatText$items (self) on <self:FlatText> */
var7 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_text$FlatText$byte_length (self) on <self:FlatText> */
var10 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatText> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
core___core__Bytes___append_ns_from(var_b, var5, var8, var_from); /* Direct call bytes$Bytes$append_ns_from on <var_b:Bytes>*/
}
RET_LABEL:;
}
