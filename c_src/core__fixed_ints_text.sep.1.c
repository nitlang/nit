#include "core__fixed_ints_text.sep.0.h"
/* method fixed_ints_text$Int8$to_s_len for (self: Int8): Int */
long core__fixed_ints_text___Int8___to_s_len(int8_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints_text___Int8_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int8$native_to_s for (self: Int8, CString, Int) */
void core__fixed_ints_text___Int8___native_to_s(int8_t self, char* p0, long p1) {
core__fixed_ints_text___Int8_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text$Int8$to_s for (self: Int8): String */
val* core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(int8_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var4 /* : CString */;
char* var5 /* : CString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : CString */;
char* var12 /* : CString */;
char* var_ns /* var ns: CString */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text$Int8$to_s_len (self) on <self:Int8> */
var3 = core__fixed_ints_text___Int8_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NULL/*special!*/;
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_nslen + 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native$CString$new (var4,var6) on <var4:CString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ns = var10;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_nslen + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline fixed_ints_text$Int8$native_to_s (self,var_ns,var14) on <self:Int8> */
core__fixed_ints_text___Int8_native_to_s___impl(self, var_ns, var14);
RET_LABEL21:(void)0;
}
}
{
var23 = (val*)(var_nslen<<2|1);
var24 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var_ns, var23, ((val*)NULL), var24, ((val*)NULL));
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int8$to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int8_t var2 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Object to Int8 */;
var1 = core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int16$to_s_len for (self: Int16): Int */
long core__fixed_ints_text___Int16___to_s_len(int16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints_text___Int16_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int16$native_to_s for (self: Int16, CString, Int) */
void core__fixed_ints_text___Int16___native_to_s(int16_t self, char* p0, long p1) {
core__fixed_ints_text___Int16_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text$Int16$to_s for (self: Int16): String */
val* core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(int16_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var4 /* : CString */;
char* var5 /* : CString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : CString */;
char* var12 /* : CString */;
char* var_ns /* var ns: CString */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text$Int16$to_s_len (self) on <self:Int16> */
var3 = core__fixed_ints_text___Int16_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NULL/*special!*/;
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_nslen + 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native$CString$new (var4,var6) on <var4:CString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ns = var10;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_nslen + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline fixed_ints_text$Int16$native_to_s (self,var_ns,var14) on <self:Int16> */
core__fixed_ints_text___Int16_native_to_s___impl(self, var_ns, var14);
RET_LABEL21:(void)0;
}
}
{
var23 = (val*)(var_nslen<<2|1);
var24 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var_ns, var23, ((val*)NULL), var24, ((val*)NULL));
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int16$to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int16_t var2 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Object to Int16 */;
var1 = core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$UInt16$to_s_len for (self: UInt16): Int */
long core__fixed_ints_text___UInt16___to_s_len(uint16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints_text___UInt16_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$UInt16$native_to_s for (self: UInt16, CString, Int) */
void core__fixed_ints_text___UInt16___native_to_s(uint16_t self, char* p0, long p1) {
core__fixed_ints_text___UInt16_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text$UInt16$to_s for (self: UInt16): String */
val* core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(uint16_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var4 /* : CString */;
char* var5 /* : CString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : CString */;
char* var12 /* : CString */;
char* var_ns /* var ns: CString */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text$UInt16$to_s_len (self) on <self:UInt16> */
var3 = core__fixed_ints_text___UInt16_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NULL/*special!*/;
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_nslen + 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native$CString$new (var4,var6) on <var4:CString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ns = var10;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_nslen + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline fixed_ints_text$UInt16$native_to_s (self,var_ns,var14) on <self:UInt16> */
core__fixed_ints_text___UInt16_native_to_s___impl(self, var_ns, var14);
RET_LABEL21:(void)0;
}
}
{
var23 = (val*)(var_nslen<<2|1);
var24 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var_ns, var23, ((val*)NULL), var24, ((val*)NULL));
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$UInt16$to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint16_t var2 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Object to UInt16 */;
var1 = core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int32$to_s_len for (self: Int32): Int */
long core__fixed_ints_text___Int32___to_s_len(int32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints_text___Int32_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int32$native_to_s for (self: Int32, CString, Int) */
void core__fixed_ints_text___Int32___native_to_s(int32_t self, char* p0, long p1) {
core__fixed_ints_text___Int32_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text$Int32$to_s for (self: Int32): String */
val* core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(int32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var4 /* : CString */;
char* var5 /* : CString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : CString */;
char* var12 /* : CString */;
char* var_ns /* var ns: CString */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text$Int32$to_s_len (self) on <self:Int32> */
var3 = core__fixed_ints_text___Int32_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NULL/*special!*/;
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_nslen + 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native$CString$new (var4,var6) on <var4:CString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ns = var10;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_nslen + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline fixed_ints_text$Int32$native_to_s (self,var_ns,var14) on <self:Int32> */
core__fixed_ints_text___Int32_native_to_s___impl(self, var_ns, var14);
RET_LABEL21:(void)0;
}
}
{
var23 = (val*)(var_nslen<<2|1);
var24 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var_ns, var23, ((val*)NULL), var24, ((val*)NULL));
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Int32$to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int32_t var2 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Object to Int32 */;
var1 = core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$UInt32$to_s_len for (self: UInt32): Int */
long core__fixed_ints_text___UInt32___to_s_len(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints_text___UInt32_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$UInt32$native_to_s for (self: UInt32, CString, Int) */
void core__fixed_ints_text___UInt32___native_to_s(uint32_t self, char* p0, long p1) {
core__fixed_ints_text___UInt32_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text$UInt32$to_s for (self: UInt32): String */
val* core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(uint32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var4 /* : CString */;
char* var5 /* : CString */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
char* var10 /* : CString */;
char* var12 /* : CString */;
char* var_ns /* var ns: CString */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text$UInt32$to_s_len (self) on <self:UInt32> */
var3 = core__fixed_ints_text___UInt32_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NULL/*special!*/;
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_nslen + 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native$CString$new (var4,var6) on <var4:CString> */
var12 = (char*)nit_alloc(var6);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_ns = var10;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_nslen + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline fixed_ints_text$UInt32$native_to_s (self,var_ns,var14) on <self:UInt32> */
core__fixed_ints_text___UInt32_native_to_s___impl(self, var_ns, var14);
RET_LABEL21:(void)0;
}
}
{
var23 = (val*)(var_nslen<<2|1);
var24 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var_ns, var23, ((val*)NULL), var24, ((val*)NULL));
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$UInt32$to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint32_t var2 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Object to UInt32 */;
var1 = core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$strip_numhead for (self: Text): Text */
val* core__fixed_ints_text___Text___strip_numhead(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Text */;
{
var1 = core__fixed_ints_text___Text___get_numhead(self);
}
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
{
{ /* Inline kernel$Object$!= (var1,var2) on <var1:Text> */
var_other = var2;
{
var11 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:Text>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, 2l); /* substring_from on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$get_numhead for (self: Text): Text */
val* core__fixed_ints_text___Text___get_numhead(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
uint32_t var13 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
uint32_t var26 /* : Char */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var_ /* var : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : Text */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var1,2l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var4 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var1 < 2l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var9 = (val*)(0l<<2|1);
var10 = (val*)(0l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
{
var13 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 0l); /* [] on <self:Text>*/
}
var_c = var13;
{
{ /* Inline kernel$Char$!= (var_c,'0') on <var_c:Char> */
var16 = var_c == '0';
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "";
var22 = (val*)(0l<<2|1);
var23 = (val*)(0l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
var = var19;
goto RET_LABEL;
} else {
}
{
var26 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 1l); /* [] on <self:Text>*/
}
var_c = var26;
{
{ /* Inline kernel$Char$== (var_c,'x') on <var_c:Char> */
var34 = var_c == 'x';
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_ = var32;
if (var32){
var31 = var_;
} else {
{
{ /* Inline kernel$Char$== (var_c,'b') on <var_c:Char> */
var37 = var_c == 'b';
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var31 = var35;
}
var_38 = var31;
if (var31){
var30 = var_38;
} else {
{
{ /* Inline kernel$Char$== (var_c,'o') on <var_c:Char> */
var41 = var_c == 'o';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var30 = var39;
}
var_42 = var30;
if (var30){
var29 = var_42;
} else {
{
{ /* Inline kernel$Char$== (var_c,'X') on <var_c:Char> */
var45 = var_c == 'X';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var29 = var43;
}
var_46 = var29;
if (var29){
var28 = var_46;
} else {
{
{ /* Inline kernel$Char$== (var_c,'B') on <var_c:Char> */
var49 = var_c == 'B';
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var28 = var47;
}
var_50 = var28;
if (var28){
var27 = var_50;
} else {
{
{ /* Inline kernel$Char$== (var_c,'O') on <var_c:Char> */
var53 = var_c == 'O';
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var27 = var51;
}
if (var27){
{
var54 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, 2l); /* substring on <self:Text>*/
}
var = var54;
goto RET_LABEL;
} else {
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "";
var59 = (val*)(0l<<2|1);
var60 = (val*)(0l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
var = var56;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$strip_numext for (self: Text): Text */
val* core__fixed_ints_text___Text___strip_numext(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var_ext /* var ext: Text */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
val* var19 /* : Text */;
{
var1 = core__fixed_ints_text___Text___get_numext(self);
}
var_ext = var1;
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
{
{ /* Inline kernel$Object$!= (var_ext,var2) on <var_ext:Text> */
var_other = var2;
{
var11 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var_other); /* == on <var_ext:Text>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var14 = ((long(*)(val* self))(var_ext->class->vft[COLOR_core__abstract_text__Text__length]))(var_ext); /* length on <var_ext:Text>*/
}
{
{ /* Inline kernel$Int$- (var13,var14) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var13 - var14;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var19 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var15); /* substring on <self:Text>*/
}
var = var19;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$get_numext for (self: Text): Text */
val* core__fixed_ints_text___Text___get_numext(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var_max /* var max: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
uint32_t var23 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
val* var39 /* : Text */;
long var40 /* : Int */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var3,3l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var6 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var3 < 3l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var2 = var8;
} else {
var2 = 3l;
}
var_max = var2;
var_i = 1l;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_i <= var_;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$- (var_len,var_i) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var_len - var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var23 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var16); /* [] on <self:Text>*/
}
var_c = var23;
{
{ /* Inline kernel$Char$== (var_c,'i') on <var_c:Char> */
var27 = var_c == 'i';
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_28 = var25;
if (var25){
var24 = var_28;
} else {
{
{ /* Inline kernel$Char$== (var_c,'u') on <var_c:Char> */
var31 = var_c == 'u';
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var24 = var29;
}
if (var24){
{
{ /* Inline kernel$Int$- (var_len,var_i) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var34 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_len - var_i;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var39 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var32); /* substring_from on <self:Text>*/
}
var = var39;
goto RET_LABEL;
} else {
}
{
var40 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var40;
}
BREAK_label: (void)0;
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "";
var44 = (val*)(0l<<2|1);
var45 = (val*)(0l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$is_int for (self: Text): Bool */
short int core__fixed_ints_text___Text___is_int(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
val* var6 /* : Pattern */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
long var7 /* : Int */;
long var_len /* var len: Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
uint32_t var13 /* : Char */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
val* var24 /* : Text */;
val* var25 /* : Text */;
val* var_rets /* var rets: Text */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
short int var33 /* : Bool */;
val* var34 /* : Text */;
val* var_hd /* var hd: Text */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
short int var44 /* : Bool */;
short int var_45 /* var : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
short int var86 /* : Bool */;
short int var_87 /* var : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Text>*/
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var6 = (val*)((long)('_')<<2|2);
var5 = core__string_search___Text___remove_all(self, var6);
}
var_s = var5;
var_pos = 0l;
{
var7 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_len = var7;
for(;;) {
{
{ /* Inline kernel$Int$< (var_pos,var_len) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var11 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_pos < var_len;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
var13 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_pos); /* [] on <var_s:String>*/
}
{
{ /* Inline kernel$Char$== (var13,'-') on <var13:Char> */
var16 = var13 == '-';
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var8 = var14;
} else {
var8 = var_;
}
if (var8){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_pos + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_pos = var17;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var24 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var_pos); /* substring_from on <var_s:String>*/
}
var_s = var24;
{
var25 = core__fixed_ints_text___Text___strip_numhead(var_s);
}
var_rets = var25;
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "";
var29 = (val*)(0l<<2|1);
var30 = (val*)(0l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce = var26;
}
{
var33 = ((short int(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rets, var26); /* == on <var_rets:Text>*/
}
if (var33){
var = 0;
goto RET_LABEL;
} else {
}
{
var34 = core__fixed_ints_text___Text___get_numhead(self);
}
var_hd = var34;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "0x";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
var44 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var37); /* == on <var_hd:Text>*/
}
var_45 = var44;
if (var44){
var35 = var_45;
} else {
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "0X";
var50 = (val*)(2l<<2|1);
var51 = (val*)(2l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
var54 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var47); /* == on <var_hd:Text>*/
}
var35 = var54;
}
if (var35){
{
var55 = core___core__Text___is_hex(var_rets);
}
var = var55;
goto RET_LABEL;
} else {
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "0b";
var61 = (val*)(2l<<2|1);
var62 = (val*)(2l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
{
var65 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var58); /* == on <var_hd:Text>*/
}
var_66 = var65;
if (var65){
var56 = var_66;
} else {
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "0B";
var71 = (val*)(2l<<2|1);
var72 = (val*)(2l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
{
var75 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var68); /* == on <var_hd:Text>*/
}
var56 = var75;
}
if (var56){
{
var76 = core___core__Text___is_bin(var_rets);
}
var = var76;
goto RET_LABEL;
} else {
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "0o";
var82 = (val*)(2l<<2|1);
var83 = (val*)(2l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
var86 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var79); /* == on <var_hd:Text>*/
}
var_87 = var86;
if (var86){
var77 = var_87;
} else {
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "0O";
var92 = (val*)(2l<<2|1);
var93 = (val*)(2l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
{
var96 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var89); /* == on <var_hd:Text>*/
}
var77 = var96;
}
if (var77){
{
var97 = core___core__Text___is_oct(var_rets);
}
var = var97;
goto RET_LABEL;
} else {
}
{
var98 = core___core__Text___is_dec(var_rets);
}
var = var98;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$to_i for (self: Text): Int */
long core__fixed_ints_text___Text___to_i(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : Pattern */;
val* var_s /* var s: String */;
long var_val /* var val: Int */;
short int var_neg /* var neg: Bool */;
long var_pos /* var pos: Int */;
uint32_t var4 /* : Char */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Text */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
uint32_t var_s1 /* var s1: Char */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Text */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Text */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : Text */;
long var51 /* : Int */;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
{
var1 = core__fixed_ints_text___Text___is_int(self);
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints_text, 236);
fatal_exit(1);
}
{
var3 = (val*)((long)('_')<<2|2);
var2 = core__string_search___Text___remove_all(self, var3);
}
var_s = var2;
var_val = 0l;
var_neg = 0;
var_pos = 0l;
for(;;) {
{
var4 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_pos); /* [] on <var_s:String>*/
}
{
{ /* Inline kernel$Char$== (var4,'-') on <var4:Char> */
var7 = var4 == '-';
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var8 = !var_neg;
var_neg = var8;
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_pos + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_pos = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var13 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var_pos); /* substring_from on <var_s:String>*/
}
var_s = var13;
{
var14 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
{
{ /* Inline kernel$Int$>= (var14,2l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var17 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var14 >= 2l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, 1l); /* [] on <var_s:String>*/
}
var_s1 = var22;
{
{ /* Inline kernel$Char$== (var_s1,'x') on <var_s1:Char> */
var26 = var_s1 == 'x';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ = var24;
if (var24){
var23 = var_;
} else {
{
{ /* Inline kernel$Char$== (var_s1,'X') on <var_s1:Char> */
var29 = var_s1 == 'X';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var23 = var27;
}
if (var23){
{
var30 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var31 = ((long(*)(val* self, val* p0, val* p1))(var30->class->vft[COLOR_core__abstract_text__Text__to_hex]))(var30, ((val*)NULL), ((val*)NULL)); /* to_hex on <var30:Text(String)>*/
}
var_val = var31;
} else {
{
{ /* Inline kernel$Char$== (var_s1,'o') on <var_s1:Char> */
var35 = var_s1 == 'o';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_36 = var33;
if (var33){
var32 = var_36;
} else {
{
{ /* Inline kernel$Char$== (var_s1,'O') on <var_s1:Char> */
var39 = var_s1 == 'O';
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var32 = var37;
}
if (var32){
{
var40 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var41 = core___core__Text___to_oct(var40);
}
var_val = var41;
} else {
{
{ /* Inline kernel$Char$== (var_s1,'b') on <var_s1:Char> */
var45 = var_s1 == 'b';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_46 = var43;
if (var43){
var42 = var_46;
} else {
{
{ /* Inline kernel$Char$== (var_s1,'B') on <var_s1:Char> */
var49 = var_s1 == 'B';
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var42 = var47;
}
if (var42){
{
var50 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var51 = core___core__Text___to_bin(var50);
}
var_val = var51;
} else {
{
var52 = core__abstract_text___Char___is_numeric(var_s1);
}
if (var52){
{
var53 = core___core__Text___to_dec(var_s);
}
var_val = var53;
} else {
}
}
}
}
} else {
{
var54 = core___core__Text___to_dec(var_s);
}
var_val = var54;
}
if (var_neg){
{
{ /* Inline kernel$Int$unary - (var_val) on <var_val:Int> */
var58 = -var_val;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var55 = var56;
} else {
var55 = var_val;
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$is_num for (self: Text): Bool */
short int core__fixed_ints_text___Text___is_num(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
val* var_prefix /* var prefix: Text */;
val* var2 /* : Text */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var5 /* : Pattern */;
val* var_s /* var s: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
uint32_t var17 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
{
var1 = core__fixed_ints_text___Text___get_numhead(self);
}
var_prefix = var1;
{
var2 = core__fixed_ints_text___Text___strip_numhead(self);
}
{
var3 = core__fixed_ints_text___Text___strip_numext(var2);
}
{
var5 = (val*)((long)('_')<<2|2);
var4 = core__string_search___Text___remove_all(var3, var5);
}
var_s = var4;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var9 = (val*)(0l<<2|1);
var10 = (val*)(0l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
{ /* Inline kernel$Object$!= (var_prefix,var6) on <var_prefix:Text> */
var_other = var6;
{
var15 = ((short int(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_prefix, var_other); /* == on <var_prefix:Text>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
var17 = ((uint32_t(*)(val* self, long p0))(var_prefix->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_prefix, 1l); /* [] on <var_prefix:Text>*/
}
var_c = var17;
{
{ /* Inline kernel$Char$== (var_c,'x') on <var_c:Char> */
var21 = var_c == 'x';
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_ = var19;
if (var19){
var18 = var_;
} else {
{
{ /* Inline kernel$Char$== (var_c,'X') on <var_c:Char> */
var24 = var_c == 'X';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var18 = var22;
}
if (var18){
{
var25 = core___core__Text___is_hex(var_s);
}
var = var25;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Char$== (var_c,'o') on <var_c:Char> */
var29 = var_c == 'o';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_30 = var27;
if (var27){
var26 = var_30;
} else {
{
{ /* Inline kernel$Char$== (var_c,'O') on <var_c:Char> */
var33 = var_c == 'O';
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var26 = var31;
}
if (var26){
{
var34 = core___core__Text___is_oct(var_s);
}
var = var34;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Char$== (var_c,'b') on <var_c:Char> */
var38 = var_c == 'b';
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_39 = var36;
if (var36){
var35 = var_39;
} else {
{
{ /* Inline kernel$Char$== (var_c,'B') on <var_c:Char> */
var42 = var_c == 'B';
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var35 = var40;
}
if (var35){
{
var43 = core___core__Text___is_bin(var_s);
}
var = var43;
goto RET_LABEL;
} else {
}
} else {
}
{
var44 = core___core__Text___is_dec(var_s);
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text$Text$to_num for (self: Text): nullable Numeric */
val* core__fixed_ints_text___Text___to_num(val* self) {
val* var /* : nullable Numeric */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : String */;
val* var4 /* : Pattern */;
val* var_s /* var s: String */;
val* var5 /* : Text */;
val* var_ext /* var ext: Text */;
val* var6 /* : Text */;
val* var_trunk /* var trunk: Text */;
val* var7 /* : Text */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var_trval /* var trval: Int */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
short int var25 /* : Bool */;
unsigned char var26 /* : Byte */;
unsigned char var28 /* : Byte */;
val* var29 /* : nullable Numeric */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
short int var38 /* : Bool */;
int8_t var39 /* : Int8 */;
int8_t var41 /* : Int8 */;
val* var42 /* : nullable Numeric */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
short int var51 /* : Bool */;
int16_t var52 /* : Int16 */;
int16_t var54 /* : Int16 */;
val* var55 /* : nullable Numeric */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
short int var64 /* : Bool */;
uint16_t var65 /* : UInt16 */;
uint16_t var67 /* : UInt16 */;
val* var68 /* : nullable Numeric */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
short int var77 /* : Bool */;
int32_t var78 /* : Int32 */;
int32_t var80 /* : Int32 */;
val* var81 /* : nullable Numeric */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
short int var90 /* : Bool */;
uint32_t var91 /* : UInt32 */;
uint32_t var93 /* : UInt32 */;
val* var94 /* : nullable Numeric */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
short int var103 /* : Bool */;
val* var104 /* : nullable Numeric */;
{
var1 = core__fixed_ints_text___Text___is_num(self);
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = (val*)((long)('_')<<2|2);
var3 = core__string_search___Text___remove_all(self, var4);
}
var_s = var3;
{
var5 = core__fixed_ints_text___Text___get_numext(var_s);
}
var_ext = var5;
{
var6 = core__fixed_ints_text___Text___strip_numext(var_s);
}
var_trunk = var6;
{
var7 = core__fixed_ints_text___Text___strip_numhead(var_trunk);
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "";
var11 = (val*)(0l<<2|1);
var12 = (val*)(0l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
var15 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var8); /* == on <var7:Text>*/
}
if (var15){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var16 = core__fixed_ints_text___Text___to_i(var_trunk);
}
var_trval = var16;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "u8";
var21 = (val*)(2l<<2|1);
var22 = (val*)(2l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
{
var25 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var18); /* == on <var_ext:Text>*/
}
if (var25){
{
{ /* Inline kernel$Int$to_b (var_trval) on <var_trval:Int> */
var28 = (unsigned char)var_trval;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var29 = BOX_core__Byte(var26); /* autobox from Byte to nullable Numeric */
var = var29;
goto RET_LABEL;
} else {
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "i8";
var34 = (val*)(2l<<2|1);
var35 = (val*)(2l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
{
var38 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var31); /* == on <var_ext:Text>*/
}
if (var38){
{
{ /* Inline fixed_ints$Int$to_i8 (var_trval) on <var_trval:Int> */
var41 = (int8_t)var_trval;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var42 = BOX_core__Int8(var39); /* autobox from Int8 to nullable Numeric */
var = var42;
goto RET_LABEL;
} else {
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "i16";
var47 = (val*)(3l<<2|1);
var48 = (val*)(3l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
var51 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var44); /* == on <var_ext:Text>*/
}
if (var51){
{
{ /* Inline fixed_ints$Int$to_i16 (var_trval) on <var_trval:Int> */
var54 = (int16_t)var_trval;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var55 = BOX_core__Int16(var52); /* autobox from Int16 to nullable Numeric */
var = var55;
goto RET_LABEL;
} else {
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "u16";
var60 = (val*)(3l<<2|1);
var61 = (val*)(3l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
{
var64 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var57); /* == on <var_ext:Text>*/
}
if (var64){
{
{ /* Inline fixed_ints$Int$to_u16 (var_trval) on <var_trval:Int> */
var67 = (uint16_t)var_trval;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var68 = BOX_core__UInt16(var65); /* autobox from UInt16 to nullable Numeric */
var = var68;
goto RET_LABEL;
} else {
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "i32";
var73 = (val*)(3l<<2|1);
var74 = (val*)(3l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
{
var77 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var70); /* == on <var_ext:Text>*/
}
if (var77){
{
{ /* Inline fixed_ints$Int$to_i32 (var_trval) on <var_trval:Int> */
var80 = (int32_t)var_trval;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var81 = BOX_core__Int32(var78); /* autobox from Int32 to nullable Numeric */
var = var81;
goto RET_LABEL;
} else {
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "u32";
var86 = (val*)(3l<<2|1);
var87 = (val*)(3l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
{
var90 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var83); /* == on <var_ext:Text>*/
}
if (var90){
{
{ /* Inline fixed_ints$Int$to_u32 (var_trval) on <var_trval:Int> */
var93 = (uint32_t)var_trval;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var94 = BOX_core__UInt32(var91); /* autobox from UInt32 to nullable Numeric */
var = var94;
goto RET_LABEL;
} else {
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "";
var99 = (val*)(0l<<2|1);
var100 = (val*)(0l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
{
var103 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var96); /* == on <var_ext:Text>*/
}
if (var103){
var104 = (val*)(var_trval<<2|1);
var = var104;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
