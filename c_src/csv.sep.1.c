#include "csv.sep.0.h"
/* method csv#CsvFormat#delimiter for (self: CsvFormat): Char */
uint32_t csv___csv__CsvFormat___delimiter(val* self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = self->attrs[COLOR_csv__CsvFormat___delimiter].c; /* _delimiter on <self:CsvFormat> */
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvFormat#delimiter= for (self: CsvFormat, Char) */
void csv___csv__CsvFormat___delimiter_61d(val* self, uint32_t p0) {
self->attrs[COLOR_csv__CsvFormat___delimiter].c = p0; /* _delimiter on <self:CsvFormat> */
RET_LABEL:;
}
/* method csv#CsvFormat#separator for (self: CsvFormat): Char */
uint32_t csv___csv__CsvFormat___separator(val* self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = self->attrs[COLOR_csv__CsvFormat___separator].c; /* _separator on <self:CsvFormat> */
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvFormat#separator= for (self: CsvFormat, Char) */
void csv___csv__CsvFormat___separator_61d(val* self, uint32_t p0) {
self->attrs[COLOR_csv__CsvFormat___separator].c = p0; /* _separator on <self:CsvFormat> */
RET_LABEL:;
}
/* method csv#CsvFormat#eol for (self: CsvFormat): String */
val* csv___csv__CsvFormat___eol(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_csv__CsvFormat___eol].val; /* _eol on <self:CsvFormat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _eol");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvFormat#eol= for (self: CsvFormat, String) */
void csv___csv__CsvFormat___eol_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CsvFormat___eol].val = p0; /* _eol on <self:CsvFormat> */
RET_LABEL:;
}
/* method csv#CsvFormat#escaping for (self: CsvFormat): String */
val* csv___csv__CsvFormat___escaping(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
uint32_t var4 /* : Char */;
uint32_t var6 /* : Char */;
val* var7 /* : String */;
uint32_t var8 /* : Char */;
uint32_t var10 /* : Char */;
val* var11 /* : String */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_csv__CsvFormat___escaping].val != NULL; /* _escaping on <self:CsvFormat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_csv__CsvFormat___escaping].val; /* _escaping on <self:CsvFormat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escaping");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 31);
fatal_exit(1);
}
} else {
if (unlikely(varonce==NULL)) {
var3 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
} else {
var3 = varonce;
varonce = NULL;
}
{
{ /* Inline csv#CsvFormat#delimiter (self) on <self:CsvFormat> */
var6 = self->attrs[COLOR_csv__CsvFormat___delimiter].c; /* _delimiter on <self:CsvFormat> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = standard__string___Char___Object__to_s(var4);
((struct instance_standard__NativeArray*)var3)->values[0]=var7;
{
{ /* Inline csv#CsvFormat#delimiter (self) on <self:CsvFormat> */
var10 = self->attrs[COLOR_csv__CsvFormat___delimiter].c; /* _delimiter on <self:CsvFormat> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = standard__string___Char___Object__to_s(var8);
((struct instance_standard__NativeArray*)var3)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var3->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
self->attrs[COLOR_csv__CsvFormat___escaping].val = var12; /* _escaping on <self:CsvFormat> */
var2 = var12;
}
var = var2;
RET_LABEL:;
return var;
}
/* method csv#CsvFormat#escape_cell for (self: CsvFormat, String): Text */
val* csv___csv__CsvFormat___escape_cell(val* self, val* p0) {
val* var /* : Text */;
val* var_cell /* var cell: String */;
val* var1 /* : RopeBuffer */;
val* var_result /* var result: RopeBuffer */;
uint32_t var2 /* : Char */;
uint32_t var4 /* : Char */;
uint32_t var5 /* : Char */;
uint32_t var7 /* : Char */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : Pattern */;
uint32_t var11 /* : Char */;
uint32_t var13 /* : Char */;
var_cell = p0;
var1 = NEW_standard__RopeBuffer(&type_standard__RopeBuffer);
{
standard___standard__RopeBuffer___standard__kernel__Object__init(var1); /* Direct call ropes#RopeBuffer#init on <var1:RopeBuffer>*/
}
var_result = var1;
{
{ /* Inline csv#CsvFormat#delimiter (self) on <self:CsvFormat> */
var4 = self->attrs[COLOR_csv__CsvFormat___delimiter].c; /* _delimiter on <self:CsvFormat> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
standard___standard__RopeBuffer___standard__string__Buffer__add(var_result, var2); /* Direct call ropes#RopeBuffer#add on <var_result:RopeBuffer>*/
}
{
{ /* Inline csv#CsvFormat#delimiter (self) on <self:CsvFormat> */
var7 = self->attrs[COLOR_csv__CsvFormat___delimiter].c; /* _delimiter on <self:CsvFormat> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = csv___csv__CsvFormat___escaping(self);
}
{
var10 = (val*)((long)(var5)<<2|2);
var9 = standard__string_search___Text___replace(var_cell, var10, var8);
}
{
standard___standard__RopeBuffer___standard__string__Buffer__append(var_result, var9); /* Direct call ropes#RopeBuffer#append on <var_result:RopeBuffer>*/
}
{
{ /* Inline csv#CsvFormat#delimiter (self) on <self:CsvFormat> */
var13 = self->attrs[COLOR_csv__CsvFormat___delimiter].c; /* _delimiter on <self:CsvFormat> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
standard___standard__RopeBuffer___standard__string__Buffer__add(var_result, var11); /* Direct call ropes#RopeBuffer#add on <var_result:RopeBuffer>*/
}
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method csv#CsvFormat#is_value_clean for (self: CsvFormat, String): Bool */
short int csv___csv__CsvFormat___is_value_clean(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: String */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_c /* var c: Char */;
uint32_t var7 /* : Char */;
uint32_t var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
uint32_t var13 /* : Char */;
uint32_t var15 /* : Char */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : String */;
val* var21 /* : String */;
val* var22 /* : SequenceRead[Char] */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
var_value = p0;
{
var1 = ((val*(*)(val* self))(var_value->class->vft[COLOR_standard__string__Text__chars]))(var_value); /* chars on <var_value:String>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var_c = var6;
{
{ /* Inline csv#CsvFormat#delimiter (self) on <self:CsvFormat> */
var9 = self->attrs[COLOR_csv__CsvFormat___delimiter].c; /* _delimiter on <self:CsvFormat> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Char#== (var_c,var7) on <var_c:Char> */
var12 = var_c == var7;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline csv#CsvFormat#separator (self) on <self:CsvFormat> */
var15 = self->attrs[COLOR_csv__CsvFormat___separator].c; /* _separator on <self:CsvFormat> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Char#== (var_c,var13) on <var_c:Char> */
var18 = var_c == var13;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline csv#CsvFormat#eol (self) on <self:CsvFormat> */
var21 = self->attrs[COLOR_csv__CsvFormat___eol].val; /* _eol on <self:CsvFormat> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _eol");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 28);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((val*(*)(val* self))(var19->class->vft[COLOR_standard__string__Text__chars]))(var19); /* chars on <var19:String>*/
}
{
var23 = (val*)((long)(var_c)<<2|2);
var24 = ((short int(*)(val* self, val* p0))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_standard__abstract_collection__Collection__has]))(var22, var23); /* has on <var22:SequenceRead[Char]>*/
}
if (var24){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method csv#CsvFormat#init for (self: CsvFormat) */
void csv___csv__CsvFormat___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_csv___csv__CsvFormat___standard__kernel__Object__init]))(self); /* init on <self:CsvFormat>*/
}
RET_LABEL:;
}
/* method csv#CsvDocument#format for (self: CsvDocument): CsvFormat */
val* csv___csv__CsvDocument___format(val* self) {
val* var /* : CsvFormat */;
val* var1 /* : CsvFormat */;
var1 = self->attrs[COLOR_csv__CsvDocument___format].val; /* _format on <self:CsvDocument> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _format");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 58);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvDocument#format= for (self: CsvDocument, CsvFormat) */
void csv___csv__CsvDocument___format_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CsvDocument___format].val = p0; /* _format on <self:CsvDocument> */
RET_LABEL:;
}
/* method csv#CsvDocument#header for (self: CsvDocument): Array[String] */
val* csv___csv__CsvDocument___header(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_csv__CsvDocument___header].val; /* _header on <self:CsvDocument> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 63);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvDocument#header= for (self: CsvDocument, Array[String]) */
void csv___csv__CsvDocument___header_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CsvDocument___header].val = p0; /* _header on <self:CsvDocument> */
RET_LABEL:;
}
/* method csv#CsvDocument#records for (self: CsvDocument): Array[Array[String]] */
val* csv___csv__CsvDocument___records(val* self) {
val* var /* : Array[Array[String]] */;
val* var1 /* : Array[Array[String]] */;
var1 = self->attrs[COLOR_csv__CsvDocument___records].val; /* _records on <self:CsvDocument> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _records");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 68);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvDocument#add_record for (self: CsvDocument, Array[Object]) */
void csv___csv__CsvDocument___add_record(val* self, val* p0) {
val* var_values /* var values: Array[Object] */;
long var /* : Int */;
long var2 /* : Int */;
val* var3 /* : Array[String] */;
val* var5 /* : Array[String] */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : Sys */;
val* var14 /* : Sys */;
val* var15 /* : Writer */;
val* var16 /* : NativeArray[String] */;
static val* varonce;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var29 /* : Array[String] */;
val* var31 /* : Array[String] */;
long var32 /* : Int */;
long var34 /* : Int */;
val* var35 /* : String */;
long var36 /* : Int */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : Array[String] */;
val* var_record /* var record: Array[String] */;
val* var_ /* var : Array[Object] */;
val* var42 /* : ArrayIterator[nullable Object] */;
val* var_43 /* var : ArrayIterator[Object] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_value /* var value: Object */;
val* var46 /* : String */;
val* var47 /* : Array[Array[String]] */;
val* var49 /* : Array[Array[String]] */;
var_values = p0;
{
{ /* Inline array#AbstractArrayRead#length (var_values) on <var_values:Array[Object]> */
var2 = var_values->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_values:Array[Object]> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline csv#CsvDocument#header (self) on <self:CsvDocument> */
var5 = self->attrs[COLOR_csv__CsvDocument___header].val; /* _header on <self:CsvDocument> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 63);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var3) on <var3:Array[String]> */
var8 = var3->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var3:Array[String]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var,var6) on <var:Int> */
var11 = var == var6;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (unlikely(!var9)) {
{
{ /* Inline kernel#Object#sys (self) on <self:CsvDocument> */
var14 = glob_sys;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var15 = standard__file___Sys___stderr(var12);
}
if (unlikely(varonce==NULL)) {
var16 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "CSV error: Header declares ";
var20 = standard___standard__NativeString___to_s_with_length(var19, 27l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " columns, record contains ";
var24 = standard___standard__NativeString___to_s_with_length(var23, 26l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[2]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = " values.\n";
var28 = standard___standard__NativeString___to_s_with_length(var27, 9l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var16)->values[4]=var26;
} else {
var16 = varonce;
varonce = NULL;
}
{
{ /* Inline csv#CsvDocument#header (self) on <self:CsvDocument> */
var31 = self->attrs[COLOR_csv__CsvDocument___header].val; /* _header on <self:CsvDocument> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 63);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var29) on <var29:Array[String]> */
var34 = var29->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var29:Array[String]> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = standard__string___Int___Object__to_s(var32);
((struct instance_standard__NativeArray*)var16)->values[1]=var35;
{
{ /* Inline array#AbstractArrayRead#length (var_values) on <var_values:Array[Object]> */
var38 = var_values->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_values:Array[Object]> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = standard__string___Int___Object__to_s(var36);
((struct instance_standard__NativeArray*)var16)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
standard___standard__FileWriter___standard__stream__Writer__write(var15, var40); /* Direct call file#FileWriter#write on <var15:Writer>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 81);
fatal_exit(1);
}
var41 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var41); /* Direct call array#Array#init on <var41:Array[String]>*/
}
var_record = var41;
var_ = var_values;
{
var42 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_43 = var42;
for(;;) {
{
var44 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_43);
}
if (var44){
{
var45 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_43);
}
var_value = var45;
{
var46 = ((val*(*)(val* self))((((long)var_value&3)?class_info[((long)var_value&3)]:var_value->class)->vft[COLOR_standard__string__Object__to_s]))(var_value); /* to_s on <var_value:Object>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_record, var46); /* Direct call array#Array#add on <var_record:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_43); /* Direct call array#ArrayIterator#next on <var_43:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_43); /* Direct call array#ArrayIterator#finish on <var_43:ArrayIterator[Object]>*/
}
{
{ /* Inline csv#CsvDocument#records (self) on <self:CsvDocument> */
var49 = self->attrs[COLOR_csv__CsvDocument___records].val; /* _records on <self:CsvDocument> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _records");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 68);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var47, var_record); /* Direct call array#Array#add on <var47:Array[Array[String]]>*/
}
RET_LABEL:;
}
/* method csv#CsvDocument#write_to for (self: CsvDocument, Writer) */
void csv___csv__CsvDocument___standard__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : CsvWriter */;
val* var1 /* : CsvFormat */;
val* var3 /* : CsvFormat */;
val* var_writer /* var writer: CsvWriter */;
val* var4 /* : Array[String] */;
val* var6 /* : Array[String] */;
val* var7 /* : Array[Array[String]] */;
val* var9 /* : Array[Array[String]] */;
val* var_ /* var : Array[Array[String]] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[Array[String]] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_record /* var record: Array[String] */;
var_stream = p0;
var = NEW_csv__CsvWriter(&type_csv__CsvWriter);
{
{ /* Inline csv#CsvDocument#format (self) on <self:CsvDocument> */
var3 = self->attrs[COLOR_csv__CsvDocument___format].val; /* _format on <self:CsvDocument> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _format");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 58);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
csv___csv__CsvWriter___with_format(var, var_stream, var1); /* Direct call csv#CsvWriter#with_format on <var:CsvWriter>*/
}
var_writer = var;
{
{ /* Inline csv#CsvDocument#header (self) on <self:CsvDocument> */
var6 = self->attrs[COLOR_csv__CsvDocument___header].val; /* _header on <self:CsvDocument> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 63);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
csv___csv__CsvWriter___write_sequence(var_writer, var4); /* Direct call csv#CsvWriter#write_sequence on <var_writer:CsvWriter>*/
}
{
{ /* Inline csv#CsvDocument#records (self) on <self:CsvDocument> */
var9 = self->attrs[COLOR_csv__CsvDocument___records].val; /* _records on <self:CsvDocument> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _records");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 68);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ = var7;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_record = var13;
{
csv___csv__CsvWriter___write_sequence(var_writer, var_record); /* Direct call csv#CsvWriter#write_sequence on <var_writer:CsvWriter>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[Array[String]]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_11); /* Direct call array#ArrayIterator#finish on <var_11:ArrayIterator[Array[String]]>*/
}
RET_LABEL:;
}
/* method csv#CsvWriter#ostream for (self: CsvWriter): Writer */
val* csv___csv__CsvWriter___ostream(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_csv__CsvWriter___ostream].val; /* _ostream on <self:CsvWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ostream");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 152);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvWriter#ostream= for (self: CsvWriter, Writer) */
void csv___csv__CsvWriter___ostream_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CsvWriter___ostream].val = p0; /* _ostream on <self:CsvWriter> */
RET_LABEL:;
}
/* method csv#CsvWriter#format for (self: CsvWriter): CsvFormat */
val* csv___csv__CsvWriter___format(val* self) {
val* var /* : CsvFormat */;
val* var1 /* : CsvFormat */;
var1 = self->attrs[COLOR_csv__CsvWriter___format].val; /* _format on <self:CsvWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _format");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 155);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvWriter#format= for (self: CsvWriter, CsvFormat) */
void csv___csv__CsvWriter___format_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CsvWriter___format].val = p0; /* _format on <self:CsvWriter> */
RET_LABEL:;
}
/* method csv#CsvWriter#always_escape for (self: CsvWriter): Bool */
short int csv___csv__CsvWriter___always_escape(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_csv__CsvWriter___always_escape].s; /* _always_escape on <self:CsvWriter> */
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CsvWriter#with_format for (self: CsvWriter, Writer, CsvFormat) */
void csv___csv__CsvWriter___with_format(val* self, val* p0, val* p1) {
val* var_ostream /* var ostream: Writer */;
val* var_format /* var format: CsvFormat */;
var_ostream = p0;
var_format = p1;
{
{ /* Inline csv#CsvWriter#ostream= (self,var_ostream) on <self:CsvWriter> */
self->attrs[COLOR_csv__CsvWriter___ostream].val = var_ostream; /* _ostream on <self:CsvWriter> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline csv#CsvWriter#format= (self,var_format) on <self:CsvWriter> */
self->attrs[COLOR_csv__CsvWriter___format].val = var_format; /* _format on <self:CsvWriter> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method csv#CsvWriter#write_sequence for (self: CsvWriter, SequenceRead[Object]) */
void csv___csv__CsvWriter___write_sequence(val* self, val* p0) {
val* var_row /* var row: SequenceRead[Object] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[Object] */;
val* var3 /* : CsvFormat */;
val* var5 /* : CsvFormat */;
uint32_t var6 /* : Char */;
uint32_t var8 /* : Char */;
val* var9 /* : String */;
val* var_separator /* var separator: String */;
val* var10 /* : nullable Object */;
val* var11 /* : String */;
val* var_ /* var : IndexedIterator[Object] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : Iterator[Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_cell /* var cell: Object */;
val* var16 /* : Writer */;
val* var18 /* : Writer */;
val* var19 /* : String */;
val* var20 /* : Writer */;
val* var22 /* : Writer */;
val* var23 /* : CsvFormat */;
val* var25 /* : CsvFormat */;
val* var26 /* : String */;
val* var28 /* : String */;
var_row = p0;
{
var = ((short int(*)(val* self))((((long)var_row&3)?class_info[((long)var_row&3)]:var_row->class)->vft[COLOR_standard__abstract_collection__Collection__is_empty]))(var_row); /* is_empty on <var_row:SequenceRead[Object]>*/
}
var1 = !var;
if (var1){
{
var2 = ((val*(*)(val* self))((((long)var_row&3)?class_info[((long)var_row&3)]:var_row->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_row); /* iterator on <var_row:SequenceRead[Object]>*/
}
var_i = var2;
{
{ /* Inline csv#CsvWriter#format (self) on <self:CsvWriter> */
var5 = self->attrs[COLOR_csv__CsvWriter___format].val; /* _format on <self:CsvWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _format");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 155);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline csv#CsvFormat#separator (var3) on <var3:CsvFormat> */
var8 = var3->attrs[COLOR_csv__CsvFormat___separator].c; /* _separator on <var3:CsvFormat> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = standard__string___Char___Object__to_s(var6);
}
var_separator = var9;
{
var10 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[Object]>*/
}
{
var11 = ((val*(*)(val* self))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_standard__string__Object__to_s]))(var10); /* to_s on <var10:nullable Object(Object)>*/
}
{
csv___csv__CsvWriter___write_cell(self, var11); /* Direct call csv#CsvWriter#write_cell on <self:CsvWriter>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[Object]>*/
}
var_ = var_i;
{
var12 = standard___standard__Iterator___iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:Iterator[Object]>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:Iterator[Object]>*/
}
var_cell = var15;
{
{ /* Inline csv#CsvWriter#ostream (self) on <self:CsvWriter> */
var18 = self->attrs[COLOR_csv__CsvWriter___ostream].val; /* _ostream on <self:CsvWriter> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ostream");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 152);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var16, var_separator); /* Direct call file#FileWriter#write on <var16:Writer>*/
}
{
var19 = ((val*(*)(val* self))((((long)var_cell&3)?class_info[((long)var_cell&3)]:var_cell->class)->vft[COLOR_standard__string__Object__to_s]))(var_cell); /* to_s on <var_cell:Object>*/
}
{
csv___csv__CsvWriter___write_cell(self, var19); /* Direct call csv#CsvWriter#write_cell on <self:CsvWriter>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:Iterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:Iterator[Object]>*/
}
} else {
}
{
{ /* Inline csv#CsvWriter#ostream (self) on <self:CsvWriter> */
var22 = self->attrs[COLOR_csv__CsvWriter___ostream].val; /* _ostream on <self:CsvWriter> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ostream");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 152);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline csv#CsvWriter#format (self) on <self:CsvWriter> */
var25 = self->attrs[COLOR_csv__CsvWriter___format].val; /* _format on <self:CsvWriter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _format");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 155);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline csv#CsvFormat#eol (var23) on <var23:CsvFormat> */
var28 = var23->attrs[COLOR_csv__CsvFormat___eol].val; /* _eol on <var23:CsvFormat> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _eol");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 28);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var20, var26); /* Direct call file#FileWriter#write on <var20:Writer>*/
}
RET_LABEL:;
}
/* method csv#CsvWriter#write_cell for (self: CsvWriter, String) */
void csv___csv__CsvWriter___write_cell(val* self, val* p0) {
val* var_cell /* var cell: String */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : CsvFormat */;
val* var8 /* : CsvFormat */;
short int var9 /* : Bool */;
val* var10 /* : Writer */;
val* var12 /* : Writer */;
val* var13 /* : Writer */;
val* var15 /* : Writer */;
val* var16 /* : CsvFormat */;
val* var18 /* : CsvFormat */;
val* var19 /* : Text */;
var_cell = p0;
{
var = standard___standard__Text___is_empty(var_cell);
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline csv#CsvWriter#always_escape (self) on <self:CsvWriter> */
var4 = self->attrs[COLOR_csv__CsvWriter___always_escape].s; /* _always_escape on <self:CsvWriter> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = !var2;
var_ = var5;
if (var5){
{
{ /* Inline csv#CsvWriter#format (self) on <self:CsvWriter> */
var8 = self->attrs[COLOR_csv__CsvWriter___format].val; /* _format on <self:CsvWriter> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _format");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 155);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = csv___csv__CsvFormat___is_value_clean(var6, var_cell);
}
var1 = var9;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline csv#CsvWriter#ostream (self) on <self:CsvWriter> */
var12 = self->attrs[COLOR_csv__CsvWriter___ostream].val; /* _ostream on <self:CsvWriter> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ostream");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 152);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var10, var_cell); /* Direct call file#FileWriter#write on <var10:Writer>*/
}
} else {
{
{ /* Inline csv#CsvWriter#ostream (self) on <self:CsvWriter> */
var15 = self->attrs[COLOR_csv__CsvWriter___ostream].val; /* _ostream on <self:CsvWriter> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ostream");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 152);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline csv#CsvWriter#format (self) on <self:CsvWriter> */
var18 = self->attrs[COLOR_csv__CsvWriter___format].val; /* _format on <self:CsvWriter> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _format");
PRINT_ERROR(" (%s:%d)\n", FILE_csv, 155);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = csv___csv__CsvFormat___escape_cell(var16, var_cell);
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var13, var19); /* Direct call file#FileWriter#write on <var13:Writer>*/
}
}
RET_LABEL:;
}
/* method csv#CsvWriter#init for (self: CsvWriter) */
void csv___csv__CsvWriter___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_csv___csv__CsvWriter___standard__kernel__Object__init]))(self); /* init on <self:CsvWriter>*/
}
RET_LABEL:;
}
/* method csv#Sys#rfc4180 for (self: Sys): CsvFormat */
val* csv___standard__Sys___rfc4180(val* self) {
val* var /* : CsvFormat */;
static val* varonce;
static int varonce_guard;
val* var1 /* : CsvFormat */;
val* var2 /* : CsvFormat */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_csv__CsvFormat(&type_csv__CsvFormat);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "\015\n";
var6 = standard___standard__NativeString___to_s_with_length(var5, 2l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, uint32_t p0))(var2->class->vft[COLOR_csv__CsvFormat__delimiter_61d]))(var2, '\"'); /* delimiter= on <var2:CsvFormat>*/
}
{
((void(*)(val* self, uint32_t p0))(var2->class->vft[COLOR_csv__CsvFormat__separator_61d]))(var2, ','); /* separator= on <var2:CsvFormat>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_csv__CsvFormat__eol_61d]))(var2, var4); /* eol= on <var2:CsvFormat>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:CsvFormat>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
