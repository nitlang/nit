#include "core__ropes.sep.0.h"
/* method ropes#RopeChars#reverse_iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeCharReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharReverseIterator(&type_core__ropes__RopeCharReverseIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeChars> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeChars> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core__ropes___core__ropes__RopeCharReverseIterator___from(var1, var2, var_i); /* Direct call ropes#RopeCharReverseIterator#from on <var1:RopeCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#[] for (self: RopeBytes, Int): Byte */
unsigned char core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
val* var_nod /* var nod: String */;
short int var4 /* : Bool */;
int cltype;
int idtype;
char* var5 /* : NativeString */;
unsigned char var6 /* : Byte */;
unsigned char var8 /* : Byte */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
val* var13 /* : String */;
val* var_lft /* var lft: String */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name;
short int var20 /* : Bool */;
val* var21 /* : String */;
var_i = p0;
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBytes> */
var3 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBytes> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_nod = var1;
for(;;) {
/* <var_nod:String> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var_nod->type->table_size) {
var4 = 0;
} else {
var4 = var_nod->type->type_table[cltype] == idtype;
}
if (var4){
var5 = var_nod->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_nod:String(FlatString)> */
{
{ /* Inline native#NativeString#[] (var5,var_i) on <var5:NativeString> */
var8 = (unsigned char)((int)var5[var_i]);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
} else {
}
/* <var_nod:String> isa Concat */
cltype10 = type_core__ropes__Concat.color;
idtype11 = type_core__ropes__Concat.id;
if(cltype10 >= var_nod->type->table_size) {
var9 = 0;
} else {
var9 = var_nod->type->type_table[cltype10] == idtype11;
}
var12 = !var9;
if (var12){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 991);
fatal_exit(1);
} else {
}
var13 = var_nod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_nod:String(Concat)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 992);
fatal_exit(1);
}
var_lft = var13;
{
var14 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_lft); /* bytelen on <var_lft:String>*/
}
{
{ /* Inline kernel#Int#>= (var14,var_i) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var17 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var20 = var14 >= var_i;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var21 = var_nod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_nod:String(Concat)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 994);
fatal_exit(1);
}
var_nod = var21;
} else {
var_nod = var_lft;
}
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#iterator_from for (self: RopeBytes, Int): IndexedIterator[Byte] */
val* core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeByteIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeByteIterator(&type_core__ropes__RopeByteIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBytes> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBytes> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core__ropes___core__ropes__RopeByteIterator___from(var1, var2, var_i); /* Direct call ropes#RopeByteIterator#from on <var1:RopeByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#reverse_iterator_from for (self: RopeBytes, Int): IndexedIterator[Byte] */
val* core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeByteReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeByteReverseIterator(&type_core__ropes__RopeByteReverseIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBytes> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBytes> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core__ropes___core__ropes__RopeByteReverseIterator___from(var1, var2, var_i); /* Direct call ropes#RopeByteReverseIterator#from on <var1:RopeByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#sit for (self: RopeBufferCharIterator): IndexedIterator[Char] */
val* core___core__RopeBufferCharIterator___sit(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val; /* _sit on <self:RopeBufferCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1011);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#sit= for (self: RopeBufferCharIterator, IndexedIterator[Char]) */
void core___core__RopeBufferCharIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val = p0; /* _sit on <self:RopeBufferCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferCharIterator#index for (self: RopeBufferCharIterator): Int */
long core___core__RopeBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
val* var1 /* : IndexedIterator[Char] */;
val* var3 /* : IndexedIterator[Char] */;
long var4 /* : Int */;
{
{ /* Inline ropes#RopeBufferCharIterator#sit (self) on <self:RopeBufferCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val; /* _sit on <self:RopeBufferCharIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1011);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[Char]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#from for (self: RopeBufferCharIterator, RopeBuffer, Int) */
void core___core__RopeBufferCharIterator___from(val* self, val* p0, long p1) {
val* var_t /* var t: RopeBuffer */;
long var_pos /* var pos: Int */;
val* var /* : String */;
val* var3 /* : String */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : IndexedIterator[nullable Object] */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeBufferCharIterator> */
RET_LABEL1:(void)0;
}
}
var_t = p0;
var_pos = p1;
{
core___core__RopeBuffer___persist_buffer(var_t); /* Direct call ropes#RopeBuffer#persist_buffer on <var_t:RopeBuffer>*/
}
{
{ /* Inline ropes#RopeBuffer#str (var_t) on <var_t:RopeBuffer> */
var3 = var_t->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_t:RopeBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__chars]))(var); /* chars on <var:String>*/
}
{
var5 = ((val*(*)(val* self, long p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var4, var_pos); /* iterator_from on <var4:SequenceRead[Char]>*/
}
{
{ /* Inline ropes#RopeBufferCharIterator#sit= (self,var5) on <self:RopeBufferCharIterator> */
self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val = var5; /* _sit on <self:RopeBufferCharIterator> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferCharIterator#is_ok for (self: RopeBufferCharIterator): Bool */
short int core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : IndexedIterator[Char] */;
val* var3 /* : IndexedIterator[Char] */;
short int var4 /* : Bool */;
{
{ /* Inline ropes#RopeBufferCharIterator#sit (self) on <self:RopeBufferCharIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val; /* _sit on <self:RopeBufferCharIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1011);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Char]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#item for (self: RopeBufferCharIterator): Char */
uint32_t core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
val* var2 /* : IndexedIterator[Char] */;
val* var4 /* : IndexedIterator[Char] */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
{
var1 = core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1025);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeBufferCharIterator#sit (self) on <self:RopeBufferCharIterator> */
var4 = self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val; /* _sit on <self:RopeBufferCharIterator> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1011);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var2); /* item on <var2:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#next for (self: RopeBufferCharIterator) */
void core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var2 /* : IndexedIterator[Char] */;
{
{ /* Inline ropes#RopeBufferCharIterator#sit (self) on <self:RopeBufferCharIterator> */
var2 = self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val; /* _sit on <self:RopeBufferCharIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1011);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var); /* next on <var:IndexedIterator[Char]>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferCharReverseIterator#sit for (self: RopeBufferCharReverseIterator): IndexedIterator[Char] */
val* core___core__RopeBufferCharReverseIterator___sit(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val; /* _sit on <self:RopeBufferCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1036);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#sit= for (self: RopeBufferCharReverseIterator, IndexedIterator[Char]) */
void core___core__RopeBufferCharReverseIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val = p0; /* _sit on <self:RopeBufferCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferCharReverseIterator#index for (self: RopeBufferCharReverseIterator): Int */
long core___core__RopeBufferCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
val* var1 /* : IndexedIterator[Char] */;
val* var3 /* : IndexedIterator[Char] */;
long var4 /* : Int */;
{
{ /* Inline ropes#RopeBufferCharReverseIterator#sit (self) on <self:RopeBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val; /* _sit on <self:RopeBufferCharReverseIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1036);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[Char]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#from for (self: RopeBufferCharReverseIterator, RopeBuffer, Int) */
void core___core__RopeBufferCharReverseIterator___from(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: RopeBuffer */;
long var_pos /* var pos: Int */;
val* var /* : String */;
val* var3 /* : String */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : IndexedIterator[nullable Object] */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeBufferCharReverseIterator> */
RET_LABEL1:(void)0;
}
}
var_tgt = p0;
var_pos = p1;
{
core___core__RopeBuffer___persist_buffer(var_tgt); /* Direct call ropes#RopeBuffer#persist_buffer on <var_tgt:RopeBuffer>*/
}
{
{ /* Inline ropes#RopeBuffer#str (var_tgt) on <var_tgt:RopeBuffer> */
var3 = var_tgt->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_tgt:RopeBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__chars]))(var); /* chars on <var:String>*/
}
{
var5 = ((val*(*)(val* self, long p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(var4, var_pos); /* reverse_iterator_from on <var4:SequenceRead[Char]>*/
}
{
{ /* Inline ropes#RopeBufferCharReverseIterator#sit= (self,var5) on <self:RopeBufferCharReverseIterator> */
self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val = var5; /* _sit on <self:RopeBufferCharReverseIterator> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferCharReverseIterator#is_ok for (self: RopeBufferCharReverseIterator): Bool */
short int core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : IndexedIterator[Char] */;
val* var3 /* : IndexedIterator[Char] */;
short int var4 /* : Bool */;
{
{ /* Inline ropes#RopeBufferCharReverseIterator#sit (self) on <self:RopeBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val; /* _sit on <self:RopeBufferCharReverseIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1036);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Char]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#item for (self: RopeBufferCharReverseIterator): Char */
uint32_t core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
val* var2 /* : IndexedIterator[Char] */;
val* var4 /* : IndexedIterator[Char] */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
{
var1 = core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1050);
fatal_exit(1);
}
{
{ /* Inline ropes#RopeBufferCharReverseIterator#sit (self) on <self:RopeBufferCharReverseIterator> */
var4 = self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val; /* _sit on <self:RopeBufferCharReverseIterator> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1036);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var2); /* item on <var2:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#next for (self: RopeBufferCharReverseIterator) */
void core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var2 /* : IndexedIterator[Char] */;
{
{ /* Inline ropes#RopeBufferCharReverseIterator#sit (self) on <self:RopeBufferCharReverseIterator> */
var2 = self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val; /* _sit on <self:RopeBufferCharReverseIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1036);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var); /* next on <var:IndexedIterator[Char]>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[] for (self: RopeBufferChars, Int): Char */
uint32_t core___core__RopeBufferChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_i = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__RopeBuffer___core__abstract_text__Text___91d_93d(var1, var_i);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferChars___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[]= for (self: RopeBufferChars, Int, Char) */
void core___core__RopeBufferChars___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 1 (c) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1065);
fatal_exit(1);
}
var_i = p0;
var_c = p1;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__RopeBuffer___core__abstract_text__Buffer___91d_93d_61d(var1, var_i, var_c); /* Direct call ropes#RopeBuffer#[]= on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
core___core__RopeBufferChars___core__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call ropes#RopeBufferChars#[]= on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: RopeBufferChars, Char) */
void core___core__RopeBufferChars___core__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1067);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__RopeBuffer___core__abstract_text__Buffer__add(var1, var_c); /* Direct call ropes#RopeBuffer#add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core___core__RopeBufferChars___core__abstract_collection__SimpleCollection__add(self, var); /* Direct call ropes#RopeBufferChars#add on <self:SimpleCollection[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: RopeBufferChars, Char) */
void core___core__RopeBufferChars___core__abstract_collection__Sequence__push(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1069);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeBufferChars> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__RopeBuffer___core__abstract_text__Buffer__add(var1, var_c); /* Direct call ropes#RopeBuffer#add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core___core__RopeBufferChars___core__abstract_collection__Sequence__push(self, var); /* Direct call ropes#RopeBufferChars#push on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#iterator_from for (self: RopeBufferChars, Int): IndexedIterator[Char] */
val* core___core__RopeBufferChars___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferCharIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferCharIterator(&type_core__RopeBufferCharIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeBufferChars> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__RopeBufferCharIterator___from(var1, var2, var_i); /* Direct call ropes#RopeBufferCharIterator#from on <var1:RopeBufferCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#reverse_iterator_from for (self: RopeBufferChars, Int): IndexedIterator[Char] */
val* core___core__RopeBufferChars___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferCharReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferCharReverseIterator(&type_core__RopeBufferCharReverseIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:RopeBufferChars> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:RopeBufferChars> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1138);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__RopeBufferCharReverseIterator___from(var1, var2, var_i); /* Direct call ropes#RopeBufferCharReverseIterator#from on <var1:RopeBufferCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#sit for (self: RopeBufferByteIterator): IndexedIterator[Byte] */
val* core___core__RopeBufferByteIterator___sit(val* self) {
val* var /* : IndexedIterator[Byte] */;
val* var1 /* : IndexedIterator[Byte] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val; /* _sit on <self:RopeBufferByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1080);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#sit= for (self: RopeBufferByteIterator, IndexedIterator[Byte]) */
void core___core__RopeBufferByteIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val = p0; /* _sit on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#ns for (self: RopeBufferByteIterator): NativeString */
char* core___core__RopeBufferByteIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___ns].str; /* _ns on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#ns= for (self: RopeBufferByteIterator, NativeString) */
void core___core__RopeBufferByteIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___ns].str = p0; /* _ns on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#pns for (self: RopeBufferByteIterator): Int */
long core___core__RopeBufferByteIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l; /* _pns on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#pns= for (self: RopeBufferByteIterator, Int) */
void core___core__RopeBufferByteIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l = p0; /* _pns on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#maxpos for (self: RopeBufferByteIterator): Int */
long core___core__RopeBufferByteIterator___maxpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___maxpos].l; /* _maxpos on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#maxpos= for (self: RopeBufferByteIterator, Int) */
void core___core__RopeBufferByteIterator___maxpos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___maxpos].l = p0; /* _maxpos on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#index for (self: RopeBufferByteIterator): Int */
long core___core__RopeBufferByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l; /* _index on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#index= for (self: RopeBufferByteIterator, Int) */
void core___core__RopeBufferByteIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l = p0; /* _index on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#from for (self: RopeBufferByteIterator, RopeBuffer, Int) */
void core___core__RopeBufferByteIterator___from(val* self, val* p0, long p1) {
val* var_t /* var t: RopeBuffer */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
char* var3 /* : NativeString */;
long var5 /* : Int */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var10 /* : SequenceRead[Byte] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var13 /* : String */;
val* var15 /* : String */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeBufferByteIterator> */
RET_LABEL1:(void)0;
}
}
var_t = p0;
var_pos = p1;
{
{ /* Inline ropes#RopeBuffer#ns (var_t) on <var_t:RopeBuffer> */
var3 = var_t->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <var_t:RopeBuffer> */
var = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#ns= (self,var) on <self:RopeBufferByteIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___ns].str = var; /* _ns on <self:RopeBufferByteIterator> */
RET_LABEL4:(void)0;
}
}
var5 = var_t->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_t:RopeBuffer> */
{
{ /* Inline ropes#RopeBufferByteIterator#maxpos= (self,var5) on <self:RopeBufferByteIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___maxpos].l = var5; /* _maxpos on <self:RopeBufferByteIterator> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var_t) on <var_t:RopeBuffer> */
var9 = var_t->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_t:RopeBuffer> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__Text__bytes]))(var7); /* bytes on <var7:String>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var10, var_pos); /* iterator_from on <var10:SequenceRead[Byte]>*/
}
{
{ /* Inline ropes#RopeBufferByteIterator#sit= (self,var11) on <self:RopeBufferByteIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val = var11; /* _sit on <self:RopeBufferByteIterator> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var_t) on <var_t:RopeBuffer> */
var15 = var_t->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_t:RopeBuffer> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((long(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__length]))(var13); /* length on <var13:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var16) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var20 = var_pos - var16;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#pns= (self,var17) on <self:RopeBufferByteIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l = var17; /* _pns on <self:RopeBufferByteIterator> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#index= (self,var_pos) on <self:RopeBufferByteIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l = var_pos; /* _index on <self:RopeBufferByteIterator> */
RET_LABEL22:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#is_ok for (self: RopeBufferByteIterator): Bool */
short int core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline ropes#RopeBufferByteIterator#index (self) on <self:RopeBufferByteIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l; /* _index on <self:RopeBufferByteIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#maxpos (self) on <self:RopeBufferByteIterator> */
var6 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___maxpos].l; /* _maxpos on <self:RopeBufferByteIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
/* method ropes#RopeBufferByteIterator#item for (self: RopeBufferByteIterator): Byte */
unsigned char core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
val* var1 /* : IndexedIterator[Byte] */;
val* var3 /* : IndexedIterator[Byte] */;
short int var4 /* : Bool */;
val* var5 /* : IndexedIterator[Byte] */;
val* var7 /* : IndexedIterator[Byte] */;
val* var8 /* : nullable Object */;
unsigned char var9 /* : Byte */;
char* var10 /* : NativeString */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
long var15 /* : Int */;
unsigned char var16 /* : Byte */;
unsigned char var18 /* : Byte */;
{
{ /* Inline ropes#RopeBufferByteIterator#sit (self) on <self:RopeBufferByteIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val; /* _sit on <self:RopeBufferByteIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1080);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Byte]>*/
}
if (var4){
{
{ /* Inline ropes#RopeBufferByteIterator#sit (self) on <self:RopeBufferByteIterator> */
var7 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val; /* _sit on <self:RopeBufferByteIterator> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1080);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var5); /* item on <var5:IndexedIterator[Byte]>*/
}
var9 = ((struct instance_core__Byte*)var8)->value; /* autounbox from nullable Object to Byte */;
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBufferByteIterator#ns (self) on <self:RopeBufferByteIterator> */
var12 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___ns].str; /* _ns on <self:RopeBufferByteIterator> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#pns (self) on <self:RopeBufferByteIterator> */
var15 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l; /* _pns on <self:RopeBufferByteIterator> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var10,var13) on <var10:NativeString> */
var18 = (unsigned char)((int)var10[var13]);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#next for (self: RopeBufferByteIterator) */
void core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeBufferByteIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var8 /* : IndexedIterator[Byte] */;
val* var10 /* : IndexedIterator[Byte] */;
short int var11 /* : Bool */;
val* var12 /* : IndexedIterator[Byte] */;
val* var14 /* : IndexedIterator[Byte] */;
val* var_15 /* var : RopeBufferByteIterator */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
var_ = self;
{
{ /* Inline ropes#RopeBufferByteIterator#index (var_) on <var_:RopeBufferByteIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l; /* _index on <var_:RopeBufferByteIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#index= (var_,var3) on <var_:RopeBufferByteIterator> */
var_->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l = var3; /* _index on <var_:RopeBufferByteIterator> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#sit (self) on <self:RopeBufferByteIterator> */
var10 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val; /* _sit on <self:RopeBufferByteIterator> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1080);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var8); /* is_ok on <var8:IndexedIterator[Byte]>*/
}
if (var11){
{
{ /* Inline ropes#RopeBufferByteIterator#sit (self) on <self:RopeBufferByteIterator> */
var14 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val; /* _sit on <self:RopeBufferByteIterator> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1080);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var12); /* next on <var12:IndexedIterator[Byte]>*/
}
} else {
var_15 = self;
{
{ /* Inline ropes#RopeBufferByteIterator#pns (var_15) on <var_15:RopeBufferByteIterator> */
var18 = var_15->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l; /* _pns on <var_15:RopeBufferByteIterator> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var25 = var16 + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteIterator#pns= (var_15,var19) on <var_15:RopeBufferByteIterator> */
var_15->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l = var19; /* _pns on <var_15:RopeBufferByteIterator> */
RET_LABEL26:(void)0;
}
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#sit for (self: RopeBufferByteReverseIterator): IndexedIterator[Byte] */
val* core___core__RopeBufferByteReverseIterator___sit(val* self) {
val* var /* : IndexedIterator[Byte] */;
val* var1 /* : IndexedIterator[Byte] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___sit].val; /* _sit on <self:RopeBufferByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1124);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#sit= for (self: RopeBufferByteReverseIterator, IndexedIterator[Byte]) */
void core___core__RopeBufferByteReverseIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___sit].val = p0; /* _sit on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#ns for (self: RopeBufferByteReverseIterator): NativeString */
char* core___core__RopeBufferByteReverseIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___ns].str; /* _ns on <self:RopeBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#ns= for (self: RopeBufferByteReverseIterator, NativeString) */
void core___core__RopeBufferByteReverseIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___ns].str = p0; /* _ns on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#pns for (self: RopeBufferByteReverseIterator): Int */
long core___core__RopeBufferByteReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l; /* _pns on <self:RopeBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#pns= for (self: RopeBufferByteReverseIterator, Int) */
void core___core__RopeBufferByteReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l = p0; /* _pns on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#index for (self: RopeBufferByteReverseIterator): Int */
long core___core__RopeBufferByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l; /* _index on <self:RopeBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#index= for (self: RopeBufferByteReverseIterator, Int) */
void core___core__RopeBufferByteReverseIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l = p0; /* _index on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#from for (self: RopeBufferByteReverseIterator, RopeBuffer, Int) */
void core___core__RopeBufferByteReverseIterator___from(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: RopeBuffer */;
long var_pos /* var pos: Int */;
val* var /* : String */;
val* var3 /* : String */;
val* var4 /* : SequenceRead[Byte] */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : IndexedIterator[nullable Object] */;
val* var24 /* : String */;
val* var26 /* : String */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
char* var47 /* : NativeString */;
char* var49 /* : NativeString */;
{
{ /* Inline kernel#Object#init (self) on <self:RopeBufferByteReverseIterator> */
RET_LABEL1:(void)0;
}
}
var_tgt = p0;
var_pos = p1;
{
{ /* Inline ropes#RopeBuffer#str (var_tgt) on <var_tgt:RopeBuffer> */
var3 = var_tgt->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_tgt:RopeBuffer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__bytes]))(var); /* bytes on <var:String>*/
}
{
{ /* Inline ropes#RopeBuffer#rpos (var_tgt) on <var_tgt:RopeBuffer> */
var7 = var_tgt->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <var_tgt:RopeBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#dumped (var_tgt) on <var_tgt:RopeBuffer> */
var10 = var_tgt->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <var_tgt:RopeBuffer> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var13 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var14 = var5 - var8;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pos,var11) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var17 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var21 = var_pos - var11;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, long p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(var4, var15); /* reverse_iterator_from on <var4:SequenceRead[Byte]>*/
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#sit= (self,var22) on <self:RopeBufferByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___sit].val = var22; /* _sit on <self:RopeBufferByteReverseIterator> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var_tgt) on <var_tgt:RopeBuffer> */
var26 = var_tgt->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var_tgt:RopeBuffer> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var24); /* bytelen on <var24:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var27) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var34 = var_pos - var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#rpos (var_tgt) on <var_tgt:RopeBuffer> */
var37 = var_tgt->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <var_tgt:RopeBuffer> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var28,var35) on <var28:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var40 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var28 + var35;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#pns= (self,var38) on <self:RopeBufferByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l = var38; /* _pns on <self:RopeBufferByteReverseIterator> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#index= (self,var_pos) on <self:RopeBufferByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l = var_pos; /* _index on <self:RopeBufferByteReverseIterator> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns (var_tgt) on <var_tgt:RopeBuffer> */
var49 = var_tgt->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <var_tgt:RopeBuffer> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#ns= (self,var47) on <self:RopeBufferByteReverseIterator> */
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___ns].str = var47; /* _ns on <self:RopeBufferByteReverseIterator> */
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#is_ok for (self: RopeBufferByteReverseIterator): Bool */
short int core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline ropes#RopeBufferByteReverseIterator#index (self) on <self:RopeBufferByteReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l; /* _index on <self:RopeBufferByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var7 = var1 >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#item for (self: RopeBufferByteReverseIterator): Byte */
unsigned char core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
char* var8 /* : NativeString */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
long var13 /* : Int */;
unsigned char var14 /* : Byte */;
unsigned char var16 /* : Byte */;
val* var17 /* : IndexedIterator[Byte] */;
val* var19 /* : IndexedIterator[Byte] */;
val* var20 /* : nullable Object */;
unsigned char var21 /* : Byte */;
{
{ /* Inline ropes#RopeBufferByteReverseIterator#pns (self) on <self:RopeBufferByteReverseIterator> */
var3 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l; /* _pns on <self:RopeBufferByteReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var7 = var1 >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline ropes#RopeBufferByteReverseIterator#ns (self) on <self:RopeBufferByteReverseIterator> */
var10 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___ns].str; /* _ns on <self:RopeBufferByteReverseIterator> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#pns (self) on <self:RopeBufferByteReverseIterator> */
var13 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l; /* _pns on <self:RopeBufferByteReverseIterator> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var8,var11) on <var8:NativeString> */
var16 = (unsigned char)((int)var8[var11]);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var = var14;
goto RET_LABEL;
} else {
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#sit (self) on <self:RopeBufferByteReverseIterator> */
var19 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___sit].val; /* _sit on <self:RopeBufferByteReverseIterator> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1124);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = ((val*(*)(val* self))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var17); /* item on <var17:IndexedIterator[Byte]>*/
}
var21 = ((struct instance_core__Byte*)var20)->value; /* autounbox from nullable Object to Byte */;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#next for (self: RopeBufferByteReverseIterator) */
void core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeBufferByteReverseIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var_18 /* var : RopeBufferByteReverseIterator */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
val* var30 /* : IndexedIterator[Byte] */;
val* var32 /* : IndexedIterator[Byte] */;
var_ = self;
{
{ /* Inline ropes#RopeBufferByteReverseIterator#index (var_) on <var_:RopeBufferByteReverseIterator> */
var2 = var_->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l; /* _index on <var_:RopeBufferByteReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#index= (var_,var3) on <var_:RopeBufferByteReverseIterator> */
var_->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l = var3; /* _index on <var_:RopeBufferByteReverseIterator> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#pns (self) on <self:RopeBufferByteReverseIterator> */
var10 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l; /* _pns on <self:RopeBufferByteReverseIterator> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var13 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var17 = var8 >= 0l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var_18 = self;
{
{ /* Inline ropes#RopeBufferByteReverseIterator#pns (var_18) on <var_18:RopeBufferByteReverseIterator> */
var21 = var_18->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l; /* _pns on <var_18:RopeBufferByteReverseIterator> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var19,1l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var28 = var19 - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline ropes#RopeBufferByteReverseIterator#pns= (var_18,var22) on <var_18:RopeBufferByteReverseIterator> */
var_18->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l = var22; /* _pns on <var_18:RopeBufferByteReverseIterator> */
RET_LABEL29:(void)0;
}
}
} else {
{
{ /* Inline ropes#RopeBufferByteReverseIterator#sit (self) on <self:RopeBufferByteReverseIterator> */
var32 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___sit].val; /* _sit on <self:RopeBufferByteReverseIterator> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1124);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
((void(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var30); /* next on <var30:IndexedIterator[Byte]>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferBytes#[] for (self: RopeBufferBytes, Int): Byte */
unsigned char core___core__RopeBufferBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var6 /* : String */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var12 /* : Text */;
val* var14 /* : Text */;
val* var15 /* : String */;
val* var17 /* : String */;
val* var18 /* : SequenceRead[Byte] */;
val* var19 /* : nullable Object */;
unsigned char var20 /* : Byte */;
val* var21 /* : Text */;
val* var23 /* : Text */;
char* var24 /* : NativeString */;
char* var26 /* : NativeString */;
val* var27 /* : Text */;
val* var29 /* : Text */;
val* var30 /* : String */;
val* var32 /* : String */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
unsigned char var41 /* : Byte */;
unsigned char var43 /* : Byte */;
var_i = p0;
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBufferBytes> */
var3 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBufferBytes> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var1) on <var1:Text(RopeBuffer)> */
var6 = var1->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var1:Text(RopeBuffer)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((long(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var4); /* bytelen on <var4:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var7) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_i < var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBufferBytes> */
var14 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBufferBytes> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var12) on <var12:Text(RopeBuffer)> */
var17 = var12->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var12:Text(RopeBuffer)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__Text__bytes]))(var15); /* bytes on <var15:String>*/
}
{
var19 = ((val*(*)(val* self, long p0))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var18, var_i); /* [] on <var18:SequenceRead[Byte]>*/
}
var20 = ((struct instance_core__Byte*)var19)->value; /* autounbox from nullable Object to Byte */;
var = var20;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBufferBytes> */
var23 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBufferBytes> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#ns (var21) on <var21:Text(RopeBuffer)> */
var26 = var21->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <var21:Text(RopeBuffer)> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBufferBytes> */
var29 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBufferBytes> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline ropes#RopeBuffer#str (var27) on <var27:Text(RopeBuffer)> */
var32 = var27->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <var27:Text(RopeBuffer)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = ((long(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var30); /* bytelen on <var30:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var33) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var40 = var_i - var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var24,var34) on <var24:NativeString> */
var43 = (unsigned char)((int)var24[var34]);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var = var41;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferBytes#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core___core__RopeBufferBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferBytes___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferBytes#iterator_from for (self: RopeBufferBytes, Int): IndexedIterator[Byte] */
val* core___core__RopeBufferBytes___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferByteIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferByteIterator(&type_core__RopeBufferByteIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBufferBytes> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBufferBytes> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__RopeBufferByteIterator___from(var1, var2, var_i); /* Direct call ropes#RopeBufferByteIterator#from on <var1:RopeBufferByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferBytes#reverse_iterator_from for (self: RopeBufferBytes, Int): IndexedIterator[Byte] */
val* core___core__RopeBufferBytes___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferByteReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferByteReverseIterator(&type_core__RopeBufferByteReverseIterator);
{
{ /* Inline abstract_text#StringByteView#target (self) on <self:RopeBufferBytes> */
var4 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:RopeBufferBytes> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1156);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__RopeBufferByteReverseIterator___from(var1, var2, var_i); /* Direct call ropes#RopeBufferByteReverseIterator#from on <var1:RopeBufferByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Sys#maxlen for (self: Sys): Int */
long core__ropes___Sys___maxlen(val* self) {
long var /* : Int */;
var = 64l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
