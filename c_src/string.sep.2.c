#include "string.sep.0.h"
/* method string#FlatBufferIterator#index for (self: FlatBufferIterator): Int */
long string__FlatBufferIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline string#FlatBufferIterator#curr_pos (self) on <self:FlatBufferIterator> */
var3 = self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#index for (self: Object): Int */
long VIRTUAL_string__FlatBufferIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__FlatBufferIterator__index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#is_ok for (self: FlatBufferIterator): Bool */
short int string__FlatBufferIterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
val* var4 /* : FlatBuffer */;
val* var6 /* : FlatBuffer */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
{
{ /* Inline string#FlatBufferIterator#curr_pos (self) on <self:FlatBufferIterator> */
var3 = self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#target (self) on <self:FlatBufferIterator> */
var6 = self->attrs[COLOR_string__FlatBufferIterator___target].val; /* _target on <self:FlatBufferIterator> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1693);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var4) on <var4:FlatBuffer> */
var9 = var4->attrs[COLOR_string__FlatText___length].l; /* _length on <var4:FlatBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var1,var7) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var13 = var1 < var7;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_string__FlatBufferIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__FlatBufferIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#item for (self: FlatBufferIterator): Char */
char string__FlatBufferIterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var6 /* : Int */;
char var7 /* : Char */;
char var9 /* : Char */;
{
{ /* Inline string#FlatBufferIterator#target_items (self) on <self:FlatBufferIterator> */
var3 = self->attrs[COLOR_string__FlatBufferIterator___target_items].str; /* _target_items on <self:FlatBufferIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#curr_pos (self) on <self:FlatBufferIterator> */
var6 = self->attrs[COLOR_string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#NativeString#[] (var1,var4) on <var1:NativeString> */
var9 = var1[var4];
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
/* method string#FlatBufferIterator#item for (self: Object): nullable Object */
val* VIRTUAL_string__FlatBufferIterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__FlatBufferIterator__item(self);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#next for (self: FlatBufferIterator) */
void string__FlatBufferIterator__next(val* self) {
val* var_ /* var : FlatBufferIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
var_ = self;
{
{ /* Inline string#FlatBufferIterator#curr_pos (var_) on <var_:FlatBufferIterator> */
var2 = var_->attrs[COLOR_string__FlatBufferIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
{ /* Inline kernel#Int#+ (var,var3) on <var:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var7 = var + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline string#FlatBufferIterator#curr_pos= (var_,var4) on <var_:FlatBufferIterator> */
var_->attrs[COLOR_string__FlatBufferIterator___curr_pos].l = var4; /* _curr_pos on <var_:FlatBufferIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#next for (self: Object) */
void VIRTUAL_string__FlatBufferIterator__next(val* self) {
string__FlatBufferIterator__next(self); /* Direct call string#FlatBufferIterator#next on <self:Object(FlatBufferIterator)>*/
RET_LABEL:;
}
/* method string#FlatBufferIterator#init for (self: FlatBufferIterator) */
void string__FlatBufferIterator__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatBufferIterator__init]))(self) /* init on <self:FlatBufferIterator>*/;
}
RET_LABEL:;
}
/* method string#FlatBufferIterator#init for (self: Object) */
void VIRTUAL_string__FlatBufferIterator__init(val* self) {
{ /* Inline string#FlatBufferIterator#init (self) on <self:Object(FlatBufferIterator)> */
{
((void (*)(val*))(self->class->vft[COLOR_string__FlatBufferIterator__init]))(self) /* init on <self:Object(FlatBufferIterator)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#Object#to_s for (self: Object): String */
val* string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__inspect]))(self) /* inspect on <self:Object>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#to_s for (self: Object): String */
val* VIRTUAL_string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Object__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Object#native_class_name for (self: Object): NativeString */
char* string__Object__native_class_name(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
char* var1 /* : NativeString */;
var_class_name = self == NULL ? "null" : self->type->name;
var1 = (char*)var_class_name;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#native_class_name for (self: Object): NativeString */
char* VIRTUAL_string__Object__native_class_name(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
const char* var_class_name;
char* var3 /* : NativeString */;
{ /* Inline string#Object#native_class_name (self) on <self:Object> */
var_class_name = self == NULL ? "null" : self->type->name;
var3 = (char*)var_class_name;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Object#class_name for (self: Object): String */
val* string__Object__class_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
const char* var_class_name;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline string#Object#native_class_name (self) on <self:Object> */
var_class_name = self == NULL ? "null" : self->type->name;
var3 = (char*)var_class_name;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = string__NativeString__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#class_name for (self: Object): String */
val* VIRTUAL_string__Object__class_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Object__class_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Object#inspect for (self: Object): String */
val* string__Object__inspect(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = string__Object__inspect_head(self);
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ">";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 3;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var5;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#inspect for (self: Object): String */
val* VIRTUAL_string__Object__inspect(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Object__inspect(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Object#inspect_head for (self: Object): String */
val* string__Object__inspect_head(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var10 /* : NativeArray[Object] */;
val* var11 /* : String */;
{
var1 = string__Object__class_name(self);
}
if (varonce) {
var2 = varonce;
} else {
var3 = ":#";
var4 = 2;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
var6 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:Object>*/;
}
{
var7 = string__Int__to_hex(var6);
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var8 = array_instance Array[Object] */
var9 = 3;
var10 = NEW_array__NativeArray(var9, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var10)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var10)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var10)->values[2] = (val*) var7;
{
((void (*)(val*, val*, long))(var8->class->vft[COLOR_array__Array__with_native]))(var8, var10, var9) /* with_native on <var8:Array[Object]>*/;
}
}
{
var11 = ((val* (*)(val*))(var8->class->vft[COLOR_string__Object__to_s]))(var8) /* to_s on <var8:Array[Object]>*/;
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#inspect_head for (self: Object): String */
val* VIRTUAL_string__Object__inspect_head(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Object__inspect_head(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Object#args for (self: Object): Sequence[String] */
val* string__Object__args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Sequence[String] */;
{
{ /* Inline kernel#Object#sys (self) on <self:Object> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = string__Sys__program_args(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#args for (self: Object): Sequence[String] */
val* VIRTUAL_string__Object__args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sequence[String] */;
var1 = string__Object__args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Bool#to_s for (self: Bool): String */
val* string__Bool__to_s(short int self) {
val* var /* : String */;
static val* varonce;
static int varonce_guard;
val* var1 /* : String */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
static val* varonce7;
static int varonce7_guard;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
if (self){
if (varonce_guard) {
var1 = varonce;
} else {
if (varonce2) {
var3 = varonce2;
} else {
var4 = "true";
var5 = 4;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce2 = var3;
}
var1 = var3;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
} else {
if (varonce7_guard) {
var8 = varonce7;
} else {
if (varonce9) {
var10 = varonce9;
} else {
var11 = "false";
var12 = 5;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var8 = var10;
varonce7 = var8;
varonce7_guard = 1;
}
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Bool#to_s for (self: Object): String */
val* VIRTUAL_string__Bool__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
short int var2 /* : Bool */;
var2 = ((struct instance_kernel__Bool*)self)->value; /* autounbox from Object to Bool */;
var1 = string__Bool__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#strerror_ext for (self: Int): NativeString */
char* string__Int__strerror_ext(long self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string___Int_strerror_ext___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#strerror_ext for (self: Object): NativeString */
char* VIRTUAL_string__Int__strerror_ext(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
{ /* Inline string#Int#strerror_ext (self) on <self:Object(Int)> */
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = string___Int_strerror_ext___impl(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#strerror for (self: Int): String */
val* string__Int__strerror(long self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline string#Int#strerror_ext (self) on <self:Int> */
var3 = string___Int_strerror_ext___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = string__NativeString__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#strerror for (self: Object): String */
val* VIRTUAL_string__Int__strerror(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = string__Int__strerror(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#fill_buffer for (self: Int, Buffer, Int, Bool) */
void string__Int__fill_buffer(long self, val* p0, long p1, short int p2) {
val* var_s /* var s: Buffer */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_n /* var n: Int */;
val* var8 /* : Sequence[Char] */;
val* var10 /* : Sequence[Char] */;
long var11 /* : Int */;
char var12 /* : Char */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Sequence[Char] */;
val* var21 /* : Sequence[Char] */;
long var22 /* : Int */;
char var23 /* : Char */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var_pos /* var pos: Int */;
short int var34 /* : Bool */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var_ /* var : Bool */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
val* var51 /* : Sequence[Char] */;
val* var53 /* : Sequence[Char] */;
long var54 /* : Int */;
long var56 /* : Int */;
char var57 /* : Char */;
val* var58 /* : nullable Object */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var66 /* : Int */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
var_s = p0;
var_base = p1;
var_signed = p2;
var = 0;
{
{ /* Inline kernel#Int#< (self,var) on <self:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var4 = self < var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var7 = -self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_n = var5;
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:Buffer> */
var10 = var_s->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var_s:Buffer> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = 0;
var12 = '-';
{
var13 = BOX_kernel__Char(var12); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var8->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var8, var11, var13) /* []= on <var8:Sequence[Char]>*/;
}
} else {
var14 = 0;
{
{ /* Inline kernel#Int#== (self,var14) on <self:Int> */
var18 = self == var14;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:Buffer> */
var21 = var_s->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var_s:Buffer> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = 0;
var23 = '0';
{
var24 = BOX_kernel__Char(var23); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var19->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var19, var22, var24) /* []= on <var19:Sequence[Char]>*/;
}
goto RET_LABEL;
} else {
var_n = self;
}
}
{
var25 = kernel__Int__digit_count(self, var_base);
}
var26 = 1;
{
{ /* Inline kernel#Int#- (var25,var26) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var33 = var25 - var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_pos = var27;
for(;;) {
var35 = 0;
{
{ /* Inline kernel#Int#>= (var_pos,var35) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var42 = var_pos >= var35;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_ = var36;
if (var36){
var43 = 0;
{
{ /* Inline kernel#Int#> (var_n,var43) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var50 = var_n > var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var34 = var44;
} else {
var34 = var_;
}
if (var34){
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:Buffer> */
var53 = var_s->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var_s:Buffer> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Int#% (var_n,var_base) on <var_n:Int> */
var56 = var_n % var_base;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var57 = kernel__Int__to_c(var54);
}
{
var58 = BOX_kernel__Char(var57); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var51->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var51, var_pos, var58) /* []= on <var51:Sequence[Char]>*/;
}
{
{ /* Inline kernel#Int#/ (var_n,var_base) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var61 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 379);
show_backtrace(1);
}
var65 = var_n / var_base;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_n = var59;
var66 = 1;
{
{ /* Inline kernel#Int#- (var_pos,var66) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var66:Int> isa OTHER */
/* <var66:Int> isa OTHER */
var69 = 1; /* easy <var66:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var73 = var_pos - var66;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_pos = var67;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#Int#fill_buffer for (self: Object, Buffer, Int, Bool) */
void VIRTUAL_string__Int__fill_buffer(val* self, val* p0, long p1, short int p2) {
long var /* : Int */;
var = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
string__Int__fill_buffer(var, p0, p1, p2); /* Direct call string#Int#fill_buffer on <var:Int>*/
RET_LABEL:;
}
/* method string#Int#native_int_to_s for (self: Int): NativeString */
char* string__Int__native_int_to_s(long self) {
char* var /* : NativeString */;
void* var1 /* : NativeString for extern */;
var1 = native_int_to_s(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#native_int_to_s for (self: Object): NativeString */
char* VIRTUAL_string__Int__native_int_to_s(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
void* var3 /* : NativeString for extern */;
long var4 /* : Int */;
{ /* Inline string#Int#native_int_to_s (self) on <self:Object(Int)> */
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = native_int_to_s(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#to_s for (self: Int): String */
val* string__Int__to_s(long self) {
val* var /* : String */;
char* var1 /* : NativeString */;
void* var3 /* : NativeString for extern */;
val* var4 /* : String */;
{
{ /* Inline string#Int#native_int_to_s (self) on <self:Int> */
var3 = native_int_to_s(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = string__NativeString__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_s for (self: Object): String */
val* VIRTUAL_string__Int__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = string__Int__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#to_hex for (self: Int): String */
val* string__Int__to_hex(long self) {
val* var /* : String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
val* var3 /* : String */;
var1 = 16;
var2 = 0;
{
var3 = string__Int__to_base(self, var1, var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_hex for (self: Object): String */
val* VIRTUAL_string__Int__to_hex(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = string__Int__to_hex(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#to_base for (self: Int, Int, Bool): String */
val* string__Int__to_base(long self, long p0, short int p1) {
val* var /* : String */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : FlatBuffer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var_s /* var s: FlatBuffer */;
val* var8 /* : String */;
var_base = p0;
var_signed = p1;
{
var1 = kernel__Int__digit_count(self, var_base);
}
var_l = var1;
var2 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
if (varonce) {
var3 = varonce;
} else {
var4 = " ";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = string__FlatString___42d(var3, var_l);
}
{
string__FlatBuffer__from(var2, var7); /* Direct call string#FlatBuffer#from on <var2:FlatBuffer>*/
}
var_s = var2;
{
string__Int__fill_buffer(self, var_s, var_base, var_signed); /* Direct call string#Int#fill_buffer on <self:Int>*/
}
{
var8 = string__FlatBuffer__to_s(var_s);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#to_base for (self: Object, Int, Bool): String */
val* VIRTUAL_string__Int__to_base(val* self, long p0, short int p1) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = string__Int__to_base(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Float): String */
val* string__Float__to_s(double self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
val* var_str /* var str: String */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool for extern */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_len /* var len: Int */;
long var17 /* : Int */;
long var_i /* var i: Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
long var_23 /* var : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var_j /* var j: Int */;
val* var46 /* : SequenceRead[Char] */;
val* var48 /* : SequenceRead[Char] */;
val* var49 /* : nullable Object */;
char var50 /* : Char */;
char var_c /* var c: Char */;
char var51 /* : Char */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
char var56 /* : Char */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
val* var70 /* : String */;
long var71 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
val* var80 /* : String */;
long var81 /* : Int */;
long var82 /* : Int */;
var1 = 3;
{
var2 = string__Float__to_precision(self, var1);
}
var_str = var2;
{
var4 = math__Float__is_inf(self);
}
var5 = 0;
{
{ /* Inline kernel#Int#!= (var4,var5) on <var4:Int> */
var9 = var4 == var5;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
var_ = var6;
if (var6){
var3 = var_;
} else {
{
{ /* Inline math#Float#is_nan (self) on <self:Float> */
var13 = isnan(self);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var3 = var11;
}
if (var3){
var = var_str;
goto RET_LABEL;
} else {
}
{
{ /* Inline string#FlatText#length (var_str) on <var_str:String> */
var16 = var_str->attrs[COLOR_string__FlatText___length].l; /* _length on <var_str:String> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_len = var14;
var17 = 0;
var_i = var17;
var18 = 1;
{
{ /* Inline kernel#Int#- (var_len,var18) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var22 = var_len - var18;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_23 = var19;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_23:Int> isa OTHER */
/* <var_23:Int> isa OTHER */
var26 = 1; /* easy <var_23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var30 = var_i <= var_23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var31 = 1;
{
{ /* Inline kernel#Int#- (var_len,var31) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var38 = var_len - var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var32,var_i) on <var32:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var41 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var45 = var32 - var_i;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_j = var39;
{
{ /* Inline string#FlatString#chars (var_str) on <var_str:String> */
var48 = var_str->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_str:String> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = ((val* (*)(val*, long))(var46->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var46, var_j) /* [] on <var46:SequenceRead[Char]>*/;
}
var50 = ((struct instance_kernel__Char*)var49)->value; /* autounbox from nullable Object to Char */;
var_c = var50;
var51 = '0';
{
{ /* Inline kernel#Char#== (var_c,var51) on <var_c:Char> */
var55 = var_c == var51;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
goto BREAK_label;
} else {
var56 = '.';
{
{ /* Inline kernel#Char#== (var_c,var56) on <var_c:Char> */
var60 = var_c == var56;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
var61 = 0;
var62 = 2;
{
{ /* Inline kernel#Int#+ (var_j,var62) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var62:Int> isa OTHER */
/* <var62:Int> isa OTHER */
var65 = 1; /* easy <var62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var69 = var_j + var62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
var70 = string__FlatString__substring(var_str, var61, var63);
}
var = var70;
goto RET_LABEL;
} else {
var71 = 0;
var72 = 1;
{
{ /* Inline kernel#Int#+ (var_j,var72) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var72:Int> isa OTHER */
/* <var72:Int> isa OTHER */
var75 = 1; /* easy <var72:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var79 = var_j + var72;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
var80 = string__FlatString__substring(var_str, var71, var73);
}
var = var80;
goto RET_LABEL;
}
}
BREAK_label: (void)0;
var81 = 1;
{
var82 = kernel__Int__successor(var_i, var81);
}
var_i = var82;
} else {
goto BREAK_label83;
}
}
BREAK_label83: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_s for (self: Object): String */
val* VIRTUAL_string__Float__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = string__Float__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Float#to_precision for (self: Float, Int): String */
val* string__Float__to_precision(double self, long p0) {
val* var /* : String */;
long var_decimals /* var decimals: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool for extern */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
long var_isinf /* var isinf: Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var39 /* : Int */;
val* var40 /* : String */;
double var_f /* var f: Float */;
long var41 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var45 /* : Bool */;
double var46 /* : Float */;
double var47 /* : Float */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
double var53 /* : Float */;
long var54 /* : Int */;
long var55 /* : Int */;
double var56 /* : Float */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
double var64 /* : Float */;
double var65 /* : Float */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
double var71 /* : Float */;
double var72 /* : Float */;
double var73 /* : Float */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
double var79 /* : Float */;
long var80 /* : Int */;
long var82 /* : Int */;
long var_i83 /* var i: Int */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
val* var99 /* : String */;
val* var100 /* : String */;
long var101 /* : Int */;
val* var102 /* : String */;
val* var_s /* var s: String */;
long var103 /* : Int */;
long var105 /* : Int */;
long var_sl /* var sl: Int */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
short int var112 /* : Bool */;
long var113 /* : Int */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
val* var121 /* : String */;
val* var_p1 /* var p1: nullable Object */;
long var122 /* : Int */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
long var128 /* : Int */;
val* var129 /* : String */;
val* var_p2 /* var p2: nullable Object */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
val* var147 /* : String */;
val* var148 /* : String */;
long var149 /* : Int */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
short int var156 /* : Bool */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : FlatString */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : FlatString */;
val* var168 /* : String */;
val* var169 /* : String */;
var_decimals = p0;
{
{ /* Inline math#Float#is_nan (self) on <self:Float> */
var3 = isnan(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (varonce) {
var4 = varonce;
} else {
var5 = "nan";
var6 = 3;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var8 = math__Float__is_inf(self);
}
var_isinf = var8;
var9 = 1;
{
{ /* Inline kernel#Int#== (var_isinf,var9) on <var_isinf:Int> */
var13 = var_isinf == var9;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
if (varonce14) {
var15 = varonce14;
} else {
var16 = "inf";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
var19 = 1;
{
{ /* Inline kernel#Int#unary - (var19) on <var19:Int> */
var22 = -var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_isinf,var20) on <var_isinf:Int> */
var26 = var_isinf == var20;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
if (varonce27) {
var28 = varonce27;
} else {
var29 = "-inf";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var = var28;
goto RET_LABEL;
} else {
}
}
var32 = 0;
{
{ /* Inline kernel#Int#== (var_decimals,var32) on <var_decimals:Int> */
var36 = var_decimals == var32;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
{ /* Inline kernel#Float#to_i (self) on <self:Float> */
var39 = (long)self;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
var40 = string__Int__to_s(var37);
}
var = var40;
goto RET_LABEL;
} else {
}
var_f = self;
var41 = 0;
var_i = var41;
var_ = var_decimals;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var44 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var45 = var_i < var_;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
var46 = 10.0;
{
{ /* Inline kernel#Float#* (var_f,var46) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var46:Float> isa OTHER */
/* <var46:Float> isa OTHER */
var49 = 1; /* easy <var46:Float> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 305);
show_backtrace(1);
}
var53 = var_f * var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_f = var47;
var54 = 1;
{
var55 = kernel__Int__successor(var_i, var54);
}
var_i = var55;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var56 = 0.0;
{
{ /* Inline kernel#Float#> (self,var56) on <self:Float> */
/* Covariant cast for argument 0 (i) <var56:Float> isa OTHER */
/* <var56:Float> isa OTHER */
var59 = 1; /* easy <var56:Float> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 300);
show_backtrace(1);
}
var63 = self > var56;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
var64 = 0.5;
{
{ /* Inline kernel#Float#+ (var_f,var64) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var64:Float> isa OTHER */
/* <var64:Float> isa OTHER */
var67 = 1; /* easy <var64:Float> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 302);
show_backtrace(1);
}
var71 = var_f + var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_f = var65;
} else {
var72 = 0.5;
{
{ /* Inline kernel#Float#- (var_f,var72) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <var72:Float> isa OTHER */
/* <var72:Float> isa OTHER */
var75 = 1; /* easy <var72:Float> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_kernel__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 304);
show_backtrace(1);
}
var79 = var_f - var72;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_f = var73;
}
{
{ /* Inline kernel#Float#to_i (var_f) on <var_f:Float> */
var82 = (long)var_f;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var_i83 = var80;
var84 = 0;
{
{ /* Inline kernel#Int#== (var_i83,var84) on <var_i83:Int> */
var88 = var_i83 == var84;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
if (varonce89) {
var90 = varonce89;
} else {
var91 = "0.";
var92 = 2;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "0";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
{
var99 = string__FlatString___42d(var95, var_decimals);
}
{
var100 = string__FlatString___43d(var90, var99);
}
var = var100;
goto RET_LABEL;
} else {
}
{
var101 = kernel__Int__abs(var_i83);
}
{
var102 = string__Int__to_s(var101);
}
var_s = var102;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:String> */
var105 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:String> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_sl = var103;
{
{ /* Inline kernel#Int#> (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var108 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var112 = var_sl > var_decimals;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
var113 = 0;
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var116 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var120 = var_sl - var_decimals;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
{
var121 = string__FlatString__substring(var_s, var113, var114);
}
var_p1 = var121;
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var124 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var128 = var_sl - var_decimals;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
var129 = string__FlatString__substring(var_s, var122, var_decimals);
}
var_p2 = var129;
} else {
if (varonce130) {
var131 = varonce130;
} else {
var132 = "0";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var_p1 = var131;
if (varonce135) {
var136 = varonce135;
} else {
var137 = "0";
var138 = 1;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
{
{ /* Inline kernel#Int#- (var_decimals,var_sl) on <var_decimals:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var142 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var146 = var_decimals - var_sl;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
{
var147 = string__FlatString___42d(var136, var140);
}
{
var148 = string__FlatString___43d(var147, var_s);
}
var_p2 = var148;
}
var149 = 0;
{
{ /* Inline kernel#Int#< (var_i83,var149) on <var_i83:Int> */
/* Covariant cast for argument 0 (i) <var149:Int> isa OTHER */
/* <var149:Int> isa OTHER */
var152 = 1; /* easy <var149:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var156 = var_i83 < var149;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
if (var150){
if (varonce157) {
var158 = varonce157;
} else {
var159 = "-";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
{
var162 = string__FlatString___43d(var158, var_p1);
}
var_p1 = var162;
} else {
}
if (varonce163) {
var164 = varonce163;
} else {
var165 = ".";
var166 = 1;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
{
var168 = string__FlatString___43d(var_p1, var164);
}
{
var169 = string__FlatString___43d(var168, var_p2);
}
var = var169;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Float#to_precision for (self: Object, Int): String */
val* VIRTUAL_string__Float__to_precision(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = string__Float__to_precision(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Char): String */
val* string__Char__to_s(char self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
val* var_s /* var s: FlatBuffer */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : Sequence[Char] */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
val* var8 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
var2 = 1;
{
string__FlatBuffer__with_capacity(var1, var2); /* Direct call string#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_s = var1;
{
{ /* Inline string#FlatBuffer#chars (var_s) on <var_s:FlatBuffer> */
var5 = var_s->attrs[COLOR_string__FlatBuffer___chars].val; /* _chars on <var_s:FlatBuffer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1406);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
var7 = BOX_kernel__Char(self); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var3->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var3, var6, var7) /* []= on <var3:Sequence[Char]>*/;
}
{
var8 = string__FlatBuffer__to_s(var_s);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Object): String */
val* VIRTUAL_string__Char__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string__Char__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#is_numeric for (self: Char): Bool */
short int string__Char__is_numeric(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
var2 = '0';
{
{ /* Inline kernel#Char#>= (self,var2) on <self:Char> */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 547);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = '9';
{
{ /* Inline kernel#Char#<= (self,var7) on <self:Char> */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 545);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#is_numeric for (self: Object): Bool */
short int VIRTUAL_string__Char__is_numeric(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string__Char__is_numeric(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Collection#to_s for (self: Collection[nullable Object]): String */
val* string__Collection__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var_ /* var : Collection[nullable Object] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:FlatBuffer>*/;
}
var_s = var1;
var_ = self;
{
var2 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[nullable Object]>*/;
}
var_3 = var2;
for(;;) {
{
var4 = ((short int (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_3) /* is_ok on <var_3:Iterator[nullable Object]>*/;
}
if (var4){
{
var5 = ((val* (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__item]))(var_3) /* item on <var_3:Iterator[nullable Object]>*/;
}
var_e = var5;
var6 = NULL;
if (var_e == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var6) /* != on <var_e:nullable Object>*/;
var7 = var8;
}
if (var7){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1962);
show_backtrace(1);
} else {
var9 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
string__FlatBuffer__append(var_s, var9); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val*))(var_3->class->vft[COLOR_abstract_collection__Iterator__next]))(var_3) /* next on <var_3:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_3) on <var_3:Iterator[nullable Object]> */
RET_LABEL10:(void)0;
}
}
{
var11 = string__FlatBuffer__to_s(var_s);
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#to_s for (self: Object): String */
val* VIRTUAL_string__Collection__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Collection__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Collection#join for (self: Collection[nullable Object], Text): String */
val* string__Collection__join(val* self, val* p0) {
val* var /* : String */;
val* var_sep /* var sep: Text */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var7 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
val* var19 /* : String */;
var_sep = p0;
{
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:Collection[nullable Object]>*/;
}
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var6 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:FlatBuffer>*/;
}
var_s = var6;
{
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
}
var_i = var7;
{
var8 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
}
var_e = var8;
var9 = NULL;
if (var_e == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var9) /* != on <var_e:nullable Object>*/;
var10 = var11;
}
if (var10){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1979);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
string__FlatBuffer__append(var_s, var12); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
}
for(;;) {
{
var13 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:Iterator[nullable Object]>*/;
}
if (var13){
{
string__FlatBuffer__append(var_s, var_sep); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
{
var14 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
}
var_e = var14;
var15 = NULL;
if (var_e == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
var17 = ((short int (*)(val*, val*))(var_e->class->vft[COLOR_kernel__Object___33d_61d]))(var_e, var15) /* != on <var_e:nullable Object>*/;
var16 = var17;
}
if (var16){
if (var_e == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 1986);
show_backtrace(1);
} else {
var18 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
{
string__FlatBuffer__append(var_s, var18); /* Direct call string#FlatBuffer#append on <var_s:FlatBuffer>*/
}
} else {
}
{
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var19 = string__FlatBuffer__to_s(var_s);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#join for (self: Object, Text): String */
val* VIRTUAL_string__Collection__join(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Collection__join(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Array#to_s for (self: Array[nullable Object]): String */
val* string__Array__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
val* var19 /* : nullable Object */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
val* var30 /* : String */;
val* var31 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: nullable NativeArray[nullable Object] */;
val* var32 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var33 /* : Int */;
long var_i /* var i: Int */;
long var34 /* : Int */;
long var_sl /* var sl: Int */;
long var35 /* : Int */;
long var_mypos /* var mypos: Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var42 /* : nullable Object */;
val* var_itsi /* var itsi: nullable Object */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var54 /* : String */;
val* var_tmp /* var tmp: String */;
long var55 /* : Int */;
long var57 /* : Int */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const struct type* type_struct;
const char* var_class_name69;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
char* var96 /* : NativeString */;
char* var98 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
char var99 /* : Char */;
long var101 /* : Int */;
long var102 /* : Int */;
long var_off /* var off: Int */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
short int var109 /* : Bool */;
val* var110 /* : nullable Object */;
val* var112 /* : String */;
val* var_tmp113 /* var tmp: String */;
long var114 /* : Int */;
long var116 /* : Int */;
long var_tpl /* var tpl: Int */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
char* var120 /* : NativeString */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
long var125 /* : Int */;
long var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
long var133 /* : Int */;
val* var134 /* : Iterator[Text] */;
val* var_ /* var : Iterator[Text] */;
val* var135 /* : Iterator[nullable Object] */;
val* var_136 /* var : Iterator[Text] */;
short int var137 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_j /* var j: Text */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
val* var_s /* var s: FlatString */;
long var143 /* : Int */;
long var145 /* : Int */;
long var_slen /* var slen: Int */;
char* var146 /* : NativeString */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
long var151 /* : Int */;
long var153 /* : Int */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
long var159 /* : Int */;
long var162 /* : Int */;
long var163 /* : Int */;
short int var165 /* : Bool */;
int cltype166;
int idtype167;
const char* var_class_name168;
long var169 /* : Int */;
val* var171 /* : FlatString */;
{
{ /* Inline array#AbstractArrayRead#length (self) on <self:Array[nullable Object]> */
var3 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_l = var1;
var4 = 0;
{
{ /* Inline kernel#Int#== (var_l,var4) on <var_l:Int> */
var8 = var_l == var4;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
if (varonce) {
var9 = varonce;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
var = var9;
goto RET_LABEL;
} else {
}
var13 = 1;
{
{ /* Inline kernel#Int#== (var_l,var13) on <var_l:Int> */
var17 = var_l == var13;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var18 = 0;
{
var19 = array__Array___91d_93d(self, var18);
}
var20 = NULL;
if (var19 == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var20) /* == on <var19:nullable Object>*/;
var21 = var22;
}
if (var21){
if (varonce23) {
var24 = varonce23;
} else {
var25 = "";
var26 = 0;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var = var24;
goto RET_LABEL;
} else {
var28 = 0;
{
var29 = array__Array___91d_93d(self, var28);
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 2000);
show_backtrace(1);
} else {
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:nullable Object>*/;
}
var = var30;
goto RET_LABEL;
}
} else {
}
var31 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var_its = var31;
var32 = NEW_array__NativeArray(var_l, &type_array__NativeArraystring__String);
var_na = var32;
var33 = 0;
var_i = var33;
var34 = 0;
var_sl = var34;
var35 = 0;
var_mypos = var35;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var38 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var39 = var_i < var_l;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
if (var_its == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 2007);
show_backtrace(1);
} else {
{ /* Inline array#NativeArray#[] (var_its,var_i) on <var_its:nullable NativeArray[nullable Object]> */
var42 = ((struct instance_array__NativeArray*)var_its)->values[var_i];
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_itsi = var40;
var43 = NULL;
if (var_itsi == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
var45 = ((short int (*)(val*, val*))(var_itsi->class->vft[COLOR_kernel__Object___61d_61d]))(var_itsi, var43) /* == on <var_itsi:nullable Object>*/;
var44 = var45;
}
if (var44){
var46 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var46) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var53 = var_i + var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_i = var47;
goto BREAK_label;
} else {
}
if (var_itsi == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 2012);
show_backtrace(1);
} else {
var54 = ((val* (*)(val*))(var_itsi->class->vft[COLOR_string__Object__to_s]))(var_itsi) /* to_s on <var_itsi:nullable Object>*/;
}
var_tmp = var54;
{
{ /* Inline string#FlatText#length (var_tmp) on <var_tmp:String> */
var57 = var_tmp->attrs[COLOR_string__FlatText___length].l; /* _length on <var_tmp:String> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_sl,var55) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var60 = 1; /* easy <var55:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var64 = var_sl + var55;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_sl = var58;
{
{ /* Inline array#NativeArray#[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_array__NativeArray_FT0];
cltype67 = type_struct->color;
idtype68 = type_struct->id;
if(cltype67 >= var_tmp->type->table_size) {
var66 = 0;
} else {
var66 = var_tmp->type->type_table[cltype67] == idtype68;
}
if (unlikely(!var66)) {
var_class_name69 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 778);
show_backtrace(1);
}
((struct instance_array__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL65:(void)0;
}
}
var70 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var70) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var77 = var_i + var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_i = var71;
var78 = 1;
{
{ /* Inline kernel#Int#+ (var_mypos,var78) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var85 = var_mypos + var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_mypos = var79;
} else {
goto BREAK_label86;
}
BREAK_label: (void)0;
}
BREAK_label86: (void)0;
var87 = NULL/*special!*/;
var88 = 1;
{
{ /* Inline kernel#Int#+ (var_sl,var88) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var88:Int> isa OTHER */
/* <var88:Int> isa OTHER */
var91 = 1; /* easy <var88:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var95 = var_sl + var88;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline string#NativeString#new (var87,var89) on <var87:NativeString> */
var98 = (char*)nit_alloc(var89);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_ns = var96;
var99 = '\0';
{
{ /* Inline string#NativeString#[]= (var_ns,var_sl,var99) on <var_ns:NativeString> */
var_ns[var_sl]=var99;
RET_LABEL100:(void)0;
}
}
var101 = 0;
var_i = var101;
var102 = 0;
var_off = var102;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var105 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var109 = var_i < var_mypos;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var112 = ((struct instance_array__NativeArray*)var_na)->values[var_i];
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var_tmp113 = var110;
{
{ /* Inline string#FlatText#length (var_tmp113) on <var_tmp113:String> */
var116 = var_tmp113->attrs[COLOR_string__FlatText___length].l; /* _length on <var_tmp113:String> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_tpl = var114;
/* <var_tmp113:String> isa FlatString */
cltype118 = type_string__FlatString.color;
idtype119 = type_string__FlatString.id;
if(cltype118 >= var_tmp113->type->table_size) {
var117 = 0;
} else {
var117 = var_tmp113->type->type_table[cltype118] == idtype119;
}
if (var117){
{
{ /* Inline string#FlatText#items (var_tmp113) on <var_tmp113:String(FlatString)> */
var122 = var_tmp113->attrs[COLOR_string__FlatText___items].str; /* _items on <var_tmp113:String(FlatString)> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_tmp113) on <var_tmp113:String(FlatString)> */
var125 = var_tmp113->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_tmp113:String(FlatString)> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var120,var_ns,var_tpl,var123,var_off) on <var120:NativeString> */
memmove(var_ns+var_off,var120+var123,var_tpl);
RET_LABEL126:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var129 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var133 = var_off + var_tpl;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var_off = var127;
} else {
{
var134 = string__FlatString__substrings(var_tmp113);
}
var_ = var134;
{
var135 = abstract_collection__Iterator__iterator(var_);
}
var_136 = var135;
for(;;) {
{
var137 = ((short int (*)(val*))(var_136->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_136) /* is_ok on <var_136:Iterator[Text]>*/;
}
if (var137){
{
var138 = ((val* (*)(val*))(var_136->class->vft[COLOR_abstract_collection__Iterator__item]))(var_136) /* item on <var_136:Iterator[Text]>*/;
}
var_j = var138;
/* <var_j:Text> isa FlatString */
cltype140 = type_string__FlatString.color;
idtype141 = type_string__FlatString.id;
if(cltype140 >= var_j->type->table_size) {
var139 = 0;
} else {
var139 = var_j->type->type_table[cltype140] == idtype141;
}
if (unlikely(!var139)) {
var_class_name142 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 2030);
show_backtrace(1);
}
var_s = var_j;
{
{ /* Inline string#FlatText#length (var_s) on <var_s:FlatString> */
var145 = var_s->attrs[COLOR_string__FlatText___length].l; /* _length on <var_s:FlatString> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
var_slen = var143;
{
{ /* Inline string#FlatText#items (var_s) on <var_s:FlatString> */
var148 = var_s->attrs[COLOR_string__FlatText___items].str; /* _items on <var_s:FlatString> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline string#FlatString#index_from (var_s) on <var_s:FlatString> */
var151 = var_s->attrs[COLOR_string__FlatString___index_from].l; /* _index_from on <var_s:FlatString> */
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline string#NativeString#copy_to (var146,var_ns,var_slen,var149,var_off) on <var146:NativeString> */
memmove(var_ns+var_off,var146+var149,var_slen);
RET_LABEL152:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var155 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var159 = var_off + var_slen;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_off = var153;
{
((void (*)(val*))(var_136->class->vft[COLOR_abstract_collection__Iterator__next]))(var_136) /* next on <var_136:Iterator[Text]>*/;
}
} else {
goto BREAK_label160;
}
}
BREAK_label160: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_136) on <var_136:Iterator[Text]> */
RET_LABEL161:(void)0;
}
}
}
var162 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var162) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var162:Int> isa OTHER */
/* <var162:Int> isa OTHER */
var165 = 1; /* easy <var162:Int> isa OTHER*/
if (unlikely(!var165)) {
var_class_name168 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name168);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var169 = var_i + var162;
var163 = var169;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var_i = var163;
} else {
goto BREAK_label170;
}
}
BREAK_label170: (void)0;
{
var171 = string__NativeString__to_s_with_length(var_ns, var_sl);
}
var = var171;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Array#to_s for (self: Object): String */
val* VIRTUAL_string__Array__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Array__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#new for (self: NativeString, Int): NativeString */
char* string__NativeString__new(char* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = (char*)nit_alloc(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#new for (self: Object, Int): NativeString */
char* VIRTUAL_string__NativeString__new(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
char* var4 /* : NativeString */;
{ /* Inline string#NativeString#new (self,p0) on <self:Object(NativeString)> */
var3 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var4 = (char*)nit_alloc(p0);
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#[] for (self: NativeString, Int): Char */
char string__NativeString___91d_93d(char* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#[] for (self: Object, Int): Char */
char VIRTUAL_string__NativeString___91d_93d(val* self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
char* var3 /* : NativeString */;
char var4 /* : Char */;
{ /* Inline string#NativeString#[] (self,p0) on <self:Object(NativeString)> */
var3 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var4 = var3[p0];
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#[]= for (self: NativeString, Int, Char) */
void string__NativeString___91d_93d_61d(char* self, long p0, char p1) {
self[p0]=p1;
RET_LABEL:;
}
/* method string#NativeString#[]= for (self: Object, Int, Char) */
void VIRTUAL_string__NativeString___91d_93d_61d(val* self, long p0, char p1) {
char* var /* : NativeString */;
{ /* Inline string#NativeString#[]= (self,p0,p1) on <self:Object(NativeString)> */
var = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var[p0]=p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: NativeString, NativeString, Int, Int, Int) */
void string__NativeString__copy_to(char* self, char* p0, long p1, long p2, long p3) {
memmove(p0+p3,self+p2,p1);
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: Object, NativeString, Int, Int, Int) */
void VIRTUAL_string__NativeString__copy_to(val* self, char* p0, long p1, long p2, long p3) {
char* var /* : NativeString */;
{ /* Inline string#NativeString#copy_to (self,p0,p1,p2,p3) on <self:Object(NativeString)> */
var = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
memmove(p0+p3,var+p2,p1);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#NativeString#cstring_length for (self: NativeString): Int */
long string__NativeString__cstring_length(char* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
char var2 /* : Char */;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
var1 = 0;
var_l = var1;
for(;;) {
{
{ /* Inline string#NativeString#[] (self,var_l) on <self:NativeString> */
var4 = self[var_l];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var5 = '\0';
{
{ /* Inline kernel#Char#!= (var2,var5) on <var2:Char> */
var9 = var2 == var5;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var11 = 1;
{
{ /* Inline kernel#Int#+ (var_l,var11) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var15 = var_l + var11;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_l = var12;
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
/* method string#NativeString#cstring_length for (self: Object): Int */
long VIRTUAL_string__NativeString__cstring_length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__cstring_length(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#atoi for (self: NativeString): Int */
long string__NativeString__atoi(char* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = atoi(self);;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#atoi for (self: Object): Int */
long VIRTUAL_string__NativeString__atoi(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
{ /* Inline string#NativeString#atoi (self) on <self:Object(NativeString)> */
var3 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var4 = atoi(var3);;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#atof for (self: NativeString): Float */
double string__NativeString__atof(char* self) {
double var /* : Float */;
double var1 /* : Float for extern */;
var1 = atof(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#atof for (self: Object): Float */
double VIRTUAL_string__NativeString__atof(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var3 /* : Float for extern */;
char* var4 /* : NativeString */;
{ /* Inline string#NativeString#atof (self) on <self:Object(NativeString)> */
var4 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var3 = atof(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: NativeString): String */
val* string__NativeString__to_s(char* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
{
var1 = string__NativeString__cstring_length(self);
}
{
var2 = string__NativeString__to_s_with_length(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: Object): String */
val* VIRTUAL_string__NativeString__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_length for (self: NativeString, Int): FlatString */
val* string__NativeString__to_s_with_length(char* self, long p0) {
val* var /* : FlatString */;
long var_length /* var length: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : FlatString */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var_str /* var str: FlatString */;
val* var17 /* : nullable NativeString */;
var_length = p0;
var1 = 0;
{
{ /* Inline kernel#Int#>= (var_length,var1) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var5 = var_length >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 2106);
show_backtrace(1);
}
var6 = NEW_string__FlatString(&type_string__FlatString);
var7 = 0;
var8 = 1;
{
{ /* Inline kernel#Int#- (var_length,var8) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var15 = var_length - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
string__FlatString__with_infos(var6, self, var_length, var7, var9); /* Direct call string#FlatString#with_infos on <var6:FlatString>*/
}
var_str = var6;
{
{ /* Inline string#FlatText#real_items= (var_str,self) on <var_str:FlatString> */
var17 = BOX_string__NativeString(self); /* autobox from NativeString to nullable NativeString */
var_str->attrs[COLOR_string__FlatText___real_items].val = var17; /* _real_items on <var_str:FlatString> */
RET_LABEL16:(void)0;
}
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_length for (self: Object, Int): FlatString */
val* VIRTUAL_string__NativeString__to_s_with_length(val* self, long p0) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s_with_length(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: NativeString): FlatString */
val* string__NativeString__to_s_with_copy(char* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var_length /* var length: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
val* var9 /* : StringCapable */;
char* var10 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
long var11 /* : Int */;
long var12 /* : Int */;
val* var14 /* : FlatString */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
val* var_str /* var str: FlatString */;
val* var25 /* : nullable NativeString */;
{
var1 = string__NativeString__cstring_length(self);
}
var_length = var1;
var2 = 1;
{
{ /* Inline kernel#Int#+ (var_length,var2) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var6 = var_length + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline string#StringCapable#calloc_string (self,var3) on <self:NativeString> */
var9 = BOX_string__NativeString(self); /* autobox from NativeString to StringCapable */
var10 = (char*)nit_alloc(var3);
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_new_self = var7;
var11 = 0;
var12 = 0;
{
{ /* Inline string#NativeString#copy_to (self,var_new_self,var_length,var11,var12) on <self:NativeString> */
memmove(var_new_self+var12,self+var11,var_length);
RET_LABEL13:(void)0;
}
}
var14 = NEW_string__FlatString(&type_string__FlatString);
var15 = 0;
var16 = 1;
{
{ /* Inline kernel#Int#- (var_length,var16) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var23 = var_length - var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
string__FlatString__with_infos(var14, var_new_self, var_length, var15, var17); /* Direct call string#FlatString#with_infos on <var14:FlatString>*/
}
var_str = var14;
{
{ /* Inline string#FlatText#real_items= (var_str,self) on <var_str:FlatString> */
var25 = BOX_string__NativeString(self); /* autobox from NativeString to nullable NativeString */
var_str->attrs[COLOR_string__FlatText___real_items].val = var25; /* _real_items on <var_str:FlatString> */
RET_LABEL24:(void)0;
}
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: Object): FlatString */
val* VIRTUAL_string__NativeString__to_s_with_copy(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s_with_copy(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCapable#calloc_string for (self: StringCapable, Int): NativeString */
char* string__StringCapable__calloc_string(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = (char*)nit_alloc(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCapable#calloc_string for (self: Object, Int): NativeString */
char* VIRTUAL_string__StringCapable__calloc_string(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
{ /* Inline string#StringCapable#calloc_string (self,p0) on <self:Object(StringCapable)> */
var3 = (char*)nit_alloc(p0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#program_args for (self: Sys): Sequence[String] */
val* string__Sys__program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var2) /* == on <var1:nullable Sequence[String]>*/;
var3 = var4;
}
if (var3){
{
string__Sys__init_args(self); /* Direct call string#Sys#init_args on <self:Sys>*/
}
} else {
}
var5 = self->attrs[COLOR_string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 2135);
show_backtrace(1);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_args for (self: Object): Sequence[String] */
val* VIRTUAL_string__Sys__program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sequence[String] */;
var1 = string__Sys__program_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Sys): String */
val* string__Sys__program_name(val* self) {
val* var /* : String */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
var1 = 0;
{
{ /* Inline string#Sys#native_argv (self,var1) on <self:Sys> */
var4 = glob_argv[var1];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var5 = string__NativeString__to_s(var2);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Object): String */
val* VIRTUAL_string__Sys__program_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Sys__program_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#init_args for (self: Sys) */
void string__Sys__init_args(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var_argc /* var argc: Int */;
val* var3 /* : Array[String] */;
long var4 /* : Int */;
val* var_args /* var args: Array[String] */;
long var5 /* : Int */;
long var_i /* var i: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
char* var18 /* : NativeString */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
{
{ /* Inline string#Sys#native_argc (self) on <self:Sys> */
var2 = glob_argc;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_argc = var;
var3 = NEW_array__Array(&type_array__Arraystring__String);
var4 = 0;
{
array__Array__with_capacity(var3, var4); /* Direct call array#Array#with_capacity on <var3:Array[String]>*/
}
var_args = var3;
var5 = 1;
var_i = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_argc) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var8 = 1; /* easy <var_argc:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var9 = var_i < var_argc;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 1;
{
{ /* Inline kernel#Int#- (var_i,var10) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var17 = var_i - var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline string#Sys#native_argv (self,var_i) on <self:Sys> */
var20 = glob_argv[var_i];
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var21 = string__NativeString__to_s(var18);
}
{
array__Array___91d_93d_61d(var_args, var11, var21); /* Direct call array#Array#[]= on <var_args:Array[String]>*/
}
var22 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var22) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var29 = var_i + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_i = var23;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_string__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method string#Sys#init_args for (self: Object) */
void VIRTUAL_string__Sys__init_args(val* self) {
string__Sys__init_args(self); /* Direct call string#Sys#init_args on <self:Object(Sys)>*/
RET_LABEL:;
}
/* method string#Sys#native_argc for (self: Sys): Int */
long string__Sys__native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = glob_argc;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argc for (self: Object): Int */
long VIRTUAL_string__Sys__native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline string#Sys#native_argc (self) on <self:Object(Sys)> */
var3 = glob_argc;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argv for (self: Sys, Int): NativeString */
char* string__Sys__native_argv(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = glob_argv[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#native_argv for (self: Object, Int): NativeString */
char* VIRTUAL_string__Sys__native_argv(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
{ /* Inline string#Sys#native_argv (self,p0) on <self:Object(Sys)> */
var3 = glob_argv[p0];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
