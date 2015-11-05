#include "nit__location.sep.0.h"
/* method location#SourceFile#filename for (self: SourceFile): String */
val* nit___nit__SourceFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#filename= for (self: SourceFile, String) */
void nit___nit__SourceFile___filename_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___filename].val = p0; /* _filename on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#string for (self: SourceFile): String */
val* nit___nit__SourceFile___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#string= for (self: SourceFile, String) */
void nit___nit__SourceFile___string_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___string].val = p0; /* _string on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#stream for (self: SourceFile): Reader */
val* nit___nit__SourceFile___stream(val* self) {
val* var /* : Reader */;
val* var1 /* : Reader */;
var1 = self->attrs[COLOR_nit__location__SourceFile___stream].val; /* _stream on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#stream= for (self: SourceFile, Reader) */
void nit___nit__SourceFile___stream_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___stream].val = p0; /* _stream on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#init for (self: SourceFile) */
void nit___nit__SourceFile___standard__kernel__Object__init(val* self) {
val* var /* : Reader */;
val* var2 /* : Reader */;
val* var3 /* : String */;
val* var5 /* : Array[Int] */;
val* var7 /* : Array[Int] */;
val* var8 /* : nullable Object */;
{
{ /* Inline location#SourceFile#stream (self) on <self:SourceFile> */
var2 = self->attrs[COLOR_nit__location__SourceFile___stream].val; /* _stream on <self:SourceFile> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 28);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__Reader___read_all(var);
}
{
{ /* Inline location#SourceFile#string= (self,var3) on <self:SourceFile> */
self->attrs[COLOR_nit__location__SourceFile___string].val = var3; /* _string on <self:SourceFile> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline location#SourceFile#line_starts (self) on <self:SourceFile> */
var7 = self->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = (val*)(0l<<2|1);
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var5, 0l, var8); /* Direct call array#Array#[]= on <var5:Array[Int]>*/
}
RET_LABEL:;
}
/* method location#SourceFile#from_string for (self: SourceFile, String, String) */
void nit___nit__SourceFile___from_string(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_string /* var string: String */;
val* var /* : Array[Int] */;
val* var4 /* : Array[Int] */;
val* var5 /* : nullable Object */;
var_filename = p0;
var_string = p1;
{
{ /* Inline location#SourceFile#filename= (self,var_filename) on <self:SourceFile> */
self->attrs[COLOR_nit__location__SourceFile___filename].val = var_filename; /* _filename on <self:SourceFile> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline location#SourceFile#string= (self,var_string) on <self:SourceFile> */
self->attrs[COLOR_nit__location__SourceFile___string].val = var_string; /* _string on <self:SourceFile> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline location#SourceFile#line_starts (self) on <self:SourceFile> */
var4 = self->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = (val*)(0l<<2|1);
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var, 0l, var5); /* Direct call array#Array#[]= on <var:Array[Int]>*/
}
RET_LABEL:;
}
/* method location#SourceFile#line_starts for (self: SourceFile): Array[Int] */
val* nit___nit__SourceFile___line_starts(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file for (self: Location): nullable SourceFile */
val* nit___nit__Location___file(val* self) {
val* var /* : nullable SourceFile */;
val* var1 /* : nullable SourceFile */;
var1 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file= for (self: Location, nullable SourceFile) */
void nit___nit__Location___file_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__Location___file].val = p0; /* _file on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_start for (self: Location): Int */
long nit___nit__Location___line_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_start= for (self: Location, Int) */
void nit___nit__Location___line_start_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___line_start].l = p0; /* _line_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_end for (self: Location): Int */
long nit___nit__Location___line_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_end= for (self: Location, Int) */
void nit___nit__Location___line_end_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___line_end].l = p0; /* _line_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_start for (self: Location): Int */
long nit___nit__Location___column_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_start= for (self: Location, Int) */
void nit___nit__Location___column_start_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___column_start].l = p0; /* _column_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_end for (self: Location): Int */
long nit___nit__Location___column_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_end= for (self: Location, Int) */
void nit___nit__Location___column_end_61d(val* self, long p0) {
self->attrs[COLOR_nit__location__Location___column_end].l = p0; /* _column_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#pstart for (self: Location): Int */
long nit___nit__Location___pstart(val* self) {
long var /* : Int */;
val* var1 /* : nullable SourceFile */;
val* var3 /* : nullable SourceFile */;
val* var4 /* : Array[Int] */;
val* var6 /* : Array[Int] */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var3 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 139);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var9 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var13 = var7 - 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var14 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var4, var10);
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var17 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var14,var15) on <var14:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var24 = (long)(var14)>>2;
var25 = var24 + var15;
var18 = var25;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var32 = var18 - 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#pend for (self: Location): Int */
long nit___nit__Location___pend(val* self) {
long var /* : Int */;
val* var1 /* : nullable SourceFile */;
val* var3 /* : nullable SourceFile */;
val* var4 /* : Array[Int] */;
val* var6 /* : Array[Int] */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var3 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 142);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var9 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var13 = var7 - 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var14 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var4, var10);
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var17 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var14,var15) on <var14:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var24 = (long)(var14)>>2;
var25 = var24 + var15;
var18 = var25;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var32 = var18 - 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#text for (self: Location): String */
val* nit___nit__Location___text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_l /* var l: Location */;
long var9 /* : Int */;
long var_pstart /* var pstart: Int */;
long var10 /* : Int */;
long var_pend /* var pend: Int */;
val* var11 /* : nullable SourceFile */;
val* var13 /* : nullable SourceFile */;
val* var14 /* : String */;
val* var16 /* : String */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : Text */;
{
{ /* Inline location#Location#text_cache (self) on <self:Location> */
var3 = self->attrs[COLOR_nit__location__Location___text_cache].val; /* _text_cache on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
var_l = self;
{
var9 = nit___nit__Location___pstart(self);
}
var_pstart = var9;
{
var10 = nit___nit__Location___pend(self);
}
var_pend = var10;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var13 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:Location> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 152);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#string (var11) on <var11:nullable SourceFile> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
fatal_exit(1);
}
var16 = var11->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <var11:nullable SourceFile> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pend,var_pstart) on <var_pend:Int> */
/* Covariant cast for argument 0 (i) <var_pstart:Int> isa OTHER */
/* <var_pstart:Int> isa OTHER */
var19 = 1; /* easy <var_pstart:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var20 = var_pend - var_pstart;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var17,1l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var27 = var17 + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = ((val*(*)(val* self, long p0, long p1))(var14->class->vft[COLOR_standard__string__Text__substring]))(var14, var_pstart, var21); /* substring on <var14:String>*/
}
var_res = var28;
{
{ /* Inline location#Location#text_cache= (self,var_res) on <self:Location> */
self->attrs[COLOR_nit__location__Location___text_cache].val = var_res; /* _text_cache on <self:Location> */
RET_LABEL29:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache for (self: Location): nullable String */
val* nit___nit__Location___text_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__location__Location___text_cache].val; /* _text_cache on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache= for (self: Location, nullable String) */
void nit___nit__Location___text_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__Location___text_cache].val = p0; /* _text_cache on <self:Location> */
RET_LABEL:;
}
/* method location#Location#== for (self: Location, nullable Object): Bool */
short int nit___nit__Location___standard__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : nullable SourceFile */;
val* var7 /* : nullable SourceFile */;
val* var8 /* : nullable SourceFile */;
val* var10 /* : nullable SourceFile */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
var_other = p0;
if (var_other == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other, ((val*)NULL)); /* == on <var_other:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Object)> isa Location */
cltype = type_nit__Location.color;
idtype = type_nit__Location.id;
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#file (var_other) on <var_other:nullable Object(Location)> */
var7 = var_other->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_other:nullable Object(Location)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline location#Location#file (self) on <self:Location> */
var10 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var5 == NULL) {
var11 = (var8 != NULL);
} else {
{ /* Inline kernel#Object#!= (var5,var8) on <var5:nullable SourceFile> */
var_other14 = var8;
{
var15 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other14); /* == on <var5:nullable SourceFile(SourceFile)>*/
}
var16 = !var15;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:nullable Object(Location)> */
var19 = var_other->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_other:nullable Object(Location)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var22 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var17,var20) on <var17:Int> */
var25 = var17 == var20;
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:nullable Object(Location)> */
var29 = var_other->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_other:nullable Object(Location)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var32 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var27,var30) on <var27:Int> */
var35 = var27 == var30;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:nullable Object(Location)> */
var39 = var_other->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_other:nullable Object(Location)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var42 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var37,var40) on <var37:Int> */
var45 = var37 == var40;
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_end (var_other) on <var_other:nullable Object(Location)> */
var49 = var_other->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_other:nullable Object(Location)> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var52 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var47,var50) on <var47:Int> */
var55 = var47 == var50;
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#located_in for (self: Location, nullable Location): Bool */
short int nit___nit__Location___located_in(val* self, val* p0) {
short int var /* : Bool */;
val* var_loc /* var loc: nullable Location */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
long var75 /* : Int */;
long var77 /* : Int */;
long var78 /* : Int */;
long var80 /* : Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var_ /* var : Bool */;
long var84 /* : Int */;
long var86 /* : Int */;
long var87 /* : Int */;
long var89 /* : Int */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
short int var96 /* : Bool */;
var_loc = p0;
if (var_loc == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = nit___nit__Location___standard__kernel__Object___61d_61d(var_loc, ((val*)NULL));
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var5 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:nullable Location(Location)> */
var8 = var_loc->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var3,var6) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var12 = var3 < var6;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var15 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var18 = var_loc->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var13,var16) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var21 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var25 = var13 > var16;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var28 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var31 = var_loc->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var26,var29) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var34 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var38 = var26 > var29;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var41 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:nullable Location(Location)> */
var44 = var_loc->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var39,var42) on <var39:Int> */
var47 = var39 == var42;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var50 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_loc) on <var_loc:nullable Location(Location)> */
var53 = var_loc->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_loc:nullable Location(Location)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var48,var51) on <var48:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var56 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var60 = var48 < var51;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var63 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_loc) on <var_loc:nullable Location(Location)> */
var66 = var_loc->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var61,var64) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var69 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var73 = var61 > var64;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var77 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var80 = var_loc->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var75,var78) on <var75:Int> */
var83 = var75 == var78;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_ = var81;
if (var81){
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var86 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_loc) on <var_loc:nullable Location(Location)> */
var89 = var_loc->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var84,var87) on <var84:Int> */
/* Covariant cast for argument 0 (i) <var87:Int> isa OTHER */
/* <var87:Int> isa OTHER */
var92 = 1; /* easy <var87:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var96 = var84 > var87;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var74 = var90;
} else {
var74 = var_;
}
if (var74){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#to_s for (self: Location): String */
val* nit___nit__Location___standard__string__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var_file_part /* var file_part: String */;
val* var4 /* : nullable SourceFile */;
val* var6 /* : nullable SourceFile */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable SourceFile */;
val* var14 /* : nullable SourceFile */;
val* var15 /* : String */;
val* var17 /* : String */;
long var18 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable SourceFile */;
val* var28 /* : nullable SourceFile */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
val* var34 /* : nullable SourceFile */;
val* var36 /* : nullable SourceFile */;
val* var37 /* : String */;
val* var39 /* : String */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
long var53 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
long var77 /* : Int */;
long var79 /* : Int */;
val* var80 /* : String */;
long var81 /* : Int */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
long var96 /* : Int */;
long var98 /* : Int */;
val* var99 /* : String */;
long var100 /* : Int */;
long var102 /* : Int */;
val* var103 /* : String */;
long var104 /* : Int */;
long var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
long var123 /* : Int */;
long var125 /* : Int */;
val* var126 /* : String */;
long var127 /* : Int */;
long var129 /* : Int */;
val* var130 /* : String */;
long var131 /* : Int */;
long var133 /* : Int */;
val* var134 /* : String */;
long var135 /* : Int */;
long var137 /* : Int */;
val* var138 /* : String */;
val* var139 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = standard___standard__NativeString___to_s_with_length(var2, 0l);
var1 = var3;
varonce = var1;
}
var_file_part = var1;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var6 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var4,((val*)NULL)) on <var4:nullable SourceFile> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var_other); /* == on <var4:nullable SourceFile(SourceFile)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline location#Location#file (self) on <self:Location> */
var14 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 194);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var12) on <var12:nullable SourceFile> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var17 = var12->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var12:nullable SourceFile> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_file_part = var15;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var20 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var18,0l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var23 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var24 = var18 <= 0l;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var = var_file_part;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#file (self) on <self:Location> */
var28 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var26,((val*)NULL)) on <var26:nullable SourceFile> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:nullable SourceFile(SourceFile)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var_ = var29;
if (var29){
{
{ /* Inline location#Location#file (self) on <self:Location> */
var36 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 199);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var34) on <var34:nullable SourceFile> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var34:nullable SourceFile> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = ((long(*)(val* self))(var37->class->vft[COLOR_standard__string__Text__length]))(var37); /* length on <var37:String>*/
}
{
{ /* Inline kernel#Int#> (var40,0l) on <var40:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var43 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var47 = var40 > 0l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var25 = var41;
} else {
var25 = var_;
}
if (var25){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ":";
var51 = standard___standard__NativeString___to_s_with_length(var50, 1l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((val*(*)(val* self, val* p0))(var_file_part->class->vft[COLOR_standard__string__String___43d]))(var_file_part, var49); /* + on <var_file_part:String>*/
}
var_file_part = var52;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var55 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var58 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var53,var56) on <var53:Int> */
var61 = var53 == var56;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var64 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var67 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var62,var65) on <var62:Int> */
var70 = var62 == var65;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = ",";
var76 = standard___standard__NativeString___to_s_with_length(var75, 1l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[2]=var74;
} else {
var72 = varonce71;
varonce71 = NULL;
}
((struct instance_standard__NativeArray*)var72)->values[0]=var_file_part;
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var79 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var80 = standard__string___Int___Object__to_s(var77);
((struct instance_standard__NativeArray*)var72)->values[1]=var80;
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var83 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var84 = standard__string___Int___Object__to_s(var81);
((struct instance_standard__NativeArray*)var72)->values[3]=var84;
{
var85 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
var = var85;
goto RET_LABEL;
} else {
if (unlikely(varonce86==NULL)) {
var87 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = ",";
var91 = standard___standard__NativeString___to_s_with_length(var90, 1l);
var89 = var91;
varonce88 = var89;
}
((struct instance_standard__NativeArray*)var87)->values[2]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "--";
var95 = standard___standard__NativeString___to_s_with_length(var94, 2l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var87)->values[4]=var93;
} else {
var87 = varonce86;
varonce86 = NULL;
}
((struct instance_standard__NativeArray*)var87)->values[0]=var_file_part;
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var98 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
var99 = standard__string___Int___Object__to_s(var96);
((struct instance_standard__NativeArray*)var87)->values[1]=var99;
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var102 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var103 = standard__string___Int___Object__to_s(var100);
((struct instance_standard__NativeArray*)var87)->values[3]=var103;
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var106 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var107 = standard__string___Int___Object__to_s(var104);
((struct instance_standard__NativeArray*)var87)->values[5]=var107;
{
var108 = ((val*(*)(val* self))(var87->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
var = var108;
goto RET_LABEL;
}
} else {
if (unlikely(varonce109==NULL)) {
var110 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = ",";
var114 = standard___standard__NativeString___to_s_with_length(var113, 1l);
var112 = var114;
varonce111 = var112;
}
((struct instance_standard__NativeArray*)var110)->values[2]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "--";
var118 = standard___standard__NativeString___to_s_with_length(var117, 2l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var110)->values[4]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = ",";
var122 = standard___standard__NativeString___to_s_with_length(var121, 1l);
var120 = var122;
varonce119 = var120;
}
((struct instance_standard__NativeArray*)var110)->values[6]=var120;
} else {
var110 = varonce109;
varonce109 = NULL;
}
((struct instance_standard__NativeArray*)var110)->values[0]=var_file_part;
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var125 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
var126 = standard__string___Int___Object__to_s(var123);
((struct instance_standard__NativeArray*)var110)->values[1]=var126;
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var129 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
var130 = standard__string___Int___Object__to_s(var127);
((struct instance_standard__NativeArray*)var110)->values[3]=var130;
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var133 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
var134 = standard__string___Int___Object__to_s(var131);
((struct instance_standard__NativeArray*)var110)->values[5]=var134;
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var137 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
var138 = standard__string___Int___Object__to_s(var135);
((struct instance_standard__NativeArray*)var110)->values[7]=var138;
{
var139 = ((val*(*)(val* self))(var110->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
var = var139;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method location#Location#< for (self: Location, Location): Bool */
short int nit___nit__Location___standard__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Location */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
short int var73 /* : Bool */;
long var74 /* : Int */;
long var76 /* : Int */;
long var77 /* : Int */;
long var79 /* : Int */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
short int var86 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Location> isa OTHER */
/* <p0:Location> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 225);
fatal_exit(1);
}
var_other = p0;
{
var2 = nit___nit__Location___standard__kernel__Object___61d_61d(self, var_other);
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = nit___nit__Location___located_in(self, var_other);
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
{
var4 = nit___nit__Location___located_in(var_other, self);
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var7 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:Location> */
var10 = var_other->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_other:Location> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var5,var8) on <var5:Int> */
var13 = var5 == var8;
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var17 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:Location> */
var20 = var_other->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_other:Location> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var15,var18) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var23 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var27 = var15 < var18;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var30 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:Location> */
var33 = var_other->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_other:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var28,var31) on <var28:Int> */
var36 = var28 == var31;
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var40 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:Location> */
var43 = var_other->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_other:Location> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var38,var41) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var46 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var50 = var38 < var41;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var = var44;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var53 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:Location> */
var56 = var_other->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_other:Location> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var51,var54) on <var51:Int> */
var59 = var51 == var54;
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var63 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:Location> */
var66 = var_other->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_other:Location> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var61,var64) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var69 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var73 = var61 < var64;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var = var67;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var76 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_other) on <var_other:Location> */
var79 = var_other->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_other:Location> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var74,var77) on <var74:Int> */
/* Covariant cast for argument 0 (i) <var77:Int> isa OTHER */
/* <var77:Int> isa OTHER */
var82 = 1; /* easy <var77:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var86 = var74 < var77;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var = var80;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#colored_line for (self: Location, String): String */
val* nit___nit__Location___colored_line(val* self, val* p0) {
val* var /* : String */;
val* var_color /* var color: String */;
uint32_t var1 /* : Char */;
uint32_t var3 /* : Char */;
uint32_t var_esc /* var esc: Char */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_def /* var def: String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_col /* var col: String */;
val* var_l /* var l: Location */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_i /* var i: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : nullable SourceFile */;
val* var36 /* : nullable SourceFile */;
val* var37 /* : Array[Int] */;
val* var39 /* : Array[Int] */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
val* var47 /* : nullable Object */;
long var48 /* : Int */;
long var_line_start /* var line_start: Int */;
long var_line_end /* var line_end: Int */;
val* var49 /* : nullable SourceFile */;
val* var51 /* : nullable SourceFile */;
val* var52 /* : String */;
val* var54 /* : String */;
val* var_string /* var string: String */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
short int var_ /* var : Bool */;
val* var72 /* : SequenceRead[Char] */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
val* var80 /* : nullable Object */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
uint32_t var84 /* : Char */;
short int var85 /* : Bool */;
short int var_86 /* var : Bool */;
val* var87 /* : SequenceRead[Char] */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
val* var95 /* : nullable Object */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
uint32_t var99 /* : Char */;
short int var100 /* : Bool */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var108 /* : Int */;
long var110 /* : Int */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
const char* var_class_name116;
short int var117 /* : Bool */;
long var118 /* : Int */;
long var120 /* : Int */;
long var121 /* : Int */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
long var127 /* : Int */;
val* var128 /* : Text */;
val* var_lstart /* var lstart: nullable Object */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
long var133 /* : Int */;
long var135 /* : Int */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
long var147 /* : Int */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
const char* var_class_name152;
long var153 /* : Int */;
val* var154 /* : nullable Object */;
val* var_cend /* var cend: nullable Object */;
long var155 /* : Int */;
long var157 /* : Int */;
val* var158 /* : nullable Object */;
long var159 /* : Int */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
long var165 /* : Int */;
long var166 /* : Int */;
long var167 /* : Int */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
const char* var_class_name173;
short int var174 /* : Bool */;
long var175 /* : Int */;
long var177 /* : Int */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
long var185 /* : Int */;
short int var187 /* : Bool */;
int cltype188;
int idtype189;
const char* var_class_name190;
long var191 /* : Int */;
long var192 /* : Int */;
long var194 /* : Int */;
long var195 /* : Int */;
short int var197 /* : Bool */;
int cltype198;
int idtype199;
const char* var_class_name200;
long var201 /* : Int */;
long var202 /* : Int */;
long var203 /* : Int */;
short int var205 /* : Bool */;
int cltype206;
int idtype207;
const char* var_class_name208;
long var209 /* : Int */;
val* var210 /* : Text */;
val* var_lmid /* var lmid: nullable Object */;
long var211 /* : Int */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
const char* var_class_name216;
long var217 /* : Int */;
long var218 /* : Int */;
long var219 /* : Int */;
short int var221 /* : Bool */;
int cltype222;
int idtype223;
const char* var_class_name224;
long var225 /* : Int */;
long var226 /* : Int */;
short int var228 /* : Bool */;
int cltype229;
int idtype230;
const char* var_class_name231;
long var232 /* : Int */;
long var233 /* : Int */;
long var234 /* : Int */;
short int var236 /* : Bool */;
int cltype237;
int idtype238;
const char* var_class_name239;
long var240 /* : Int */;
val* var241 /* : Text */;
val* var_lend /* var lend: nullable Object */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : FlatString */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
val* var249 /* : FlatString */;
val* var250 /* : FlatBuffer */;
val* var_indent /* var indent: FlatBuffer */;
long var_j /* var j: Int */;
long var252 /* : Int */;
long var254 /* : Int */;
long var255 /* : Int */;
short int var257 /* : Bool */;
int cltype258;
int idtype259;
const char* var_class_name260;
long var261 /* : Int */;
long var262 /* : Int */;
short int var264 /* : Bool */;
int cltype265;
int idtype266;
const char* var_class_name267;
long var268 /* : Int */;
long var_269 /* var : Int */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
int cltype273;
int idtype274;
const char* var_class_name275;
short int var276 /* : Bool */;
val* var277 /* : SequenceRead[Char] */;
val* var278 /* : nullable Object */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
uint32_t var282 /* : Char */;
long var283 /* : Int */;
val* var286 /* : NativeArray[String] */;
static val* varonce285;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : NativeString */;
val* var290 /* : FlatString */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : FlatString */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
val* var298 /* : FlatString */;
val* var299 /* : String */;
val* var300 /* : String */;
var_color = p0;
{
{ /* Inline kernel#Int#ascii (27l) on <27l:Int> */
var3 = (uint32_t)27l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_esc = var1;
if (unlikely(varonce==NULL)) {
var4 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "[0m";
var8 = standard___standard__NativeString___to_s_with_length(var7, 3l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
var9 = standard__string___Char___Object__to_s(var_esc);
((struct instance_standard__NativeArray*)var4)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_def = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "[";
var16 = standard___standard__NativeString___to_s_with_length(var15, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var12)->values[1]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "m";
var20 = standard___standard__NativeString___to_s_with_length(var19, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var12)->values[3]=var18;
} else {
var12 = varonce11;
varonce11 = NULL;
}
var21 = standard__string___Char___Object__to_s(var_esc);
((struct instance_standard__NativeArray*)var12)->values[0]=var21;
((struct instance_standard__NativeArray*)var12)->values[2]=var_color;
{
var22 = ((val*(*)(val* self))(var12->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
var_col = var22;
var_l = self;
{
{ /* Inline location#Location#line_start (var_l) on <var_l:Location> */
var25 = var_l->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_l:Location> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_i = var23;
{
{ /* Inline kernel#Int#<= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var28 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var29 = var_i <= 0l;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "";
var33 = standard___standard__NativeString___to_s_with_length(var32, 0l);
var31 = var33;
varonce30 = var31;
}
var = var31;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var36 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 252);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#line_starts (var34) on <var34:nullable SourceFile> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var34:nullable SourceFile> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var46 = var_i - 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var47 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var37, var40);
}
var48 = (long)(var47)>>2;
var_line_start = var48;
var_line_end = var_line_start;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var51 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:Location> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (var49 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 254);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#string (var49) on <var49:nullable SourceFile> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
fatal_exit(1);
}
var54 = var49->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <var49:nullable SourceFile> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_string = var52;
for(;;) {
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var59 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var63 = var_line_end + 1l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
var64 = ((long(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
{ /* Inline kernel#Int#< (var57,var64) on <var57:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var71 = var57 < var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_ = var65;
if (var65){
{
var72 = ((val*(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var79 = var_line_end + 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
var80 = ((val*(*)(val* self, long p0))((((long)var72&3)?class_info[((long)var72&3)]:var72->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var72, var73); /* [] on <var72:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var80,'\n') on <var80:nullable Object(Char)> */
var84 = (uint32_t)((long)(var80)>>2);
var83 = (var80 != NULL) && (var84 == '\n');
var85 = !var83;
var81 = var85;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var56 = var81;
} else {
var56 = var_;
}
var_86 = var56;
if (var56){
{
var87 = ((val*(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var90 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var94 = var_line_end + 1l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
var95 = ((val*(*)(val* self, long p0))((((long)var87&3)?class_info[((long)var87&3)]:var87->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var87, var88); /* [] on <var87:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var95,'\015') on <var95:nullable Object(Char)> */
var99 = (uint32_t)((long)(var95)>>2);
var98 = (var95 != NULL) && (var99 == '\015');
var100 = !var98;
var96 = var100;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var55 = var96;
} else {
var55 = var_86;
}
if (var55){
{
{ /* Inline kernel#Int#+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var103 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var107 = var_line_end + 1l;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var_line_end = var101;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var110 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var108,0l) on <var108:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var113 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var113)) {
var_class_name116 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var117 = var108 > 0l;
var111 = var117;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
if (var111){
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var120 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var118,1l) on <var118:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var123 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var127 = var118 - 1l;
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
{
var128 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var_line_start, var121); /* substring on <var_string:String>*/
}
var_lstart = var128;
} else {
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "";
var132 = standard___standard__NativeString___to_s_with_length(var131, 0l);
var130 = var132;
varonce129 = var130;
}
var_lstart = var130;
}
{
{ /* Inline location#Location#line_end (var_l) on <var_l:Location> */
var135 = var_l->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_l:Location> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_i,var133) on <var_i:Int> */
var138 = var_i == var133;
var139 = !var138;
var136 = var139;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var142 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var146 = var_line_end - var_line_start;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var140,1l) on <var140:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var149 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var149)) {
var_class_name152 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name152);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var153 = var140 + 1l;
var147 = var153;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
var154 = (val*)(var147<<2|1);
var_cend = var154;
} else {
{
{ /* Inline location#Location#column_end (var_l) on <var_l:Location> */
var157 = var_l->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_l:Location> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
var158 = (val*)(var155<<2|1);
var_cend = var158;
}
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var161 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var165 = (long)(var_cend)>>2;
var166 = var_line_start + var165;
var159 = var166;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
{
var167 = ((long(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
{ /* Inline kernel#Int#<= (var159,var167) on <var159:Int> */
/* Covariant cast for argument 0 (i) <var167:Int> isa OTHER */
/* <var167:Int> isa OTHER */
var170 = 1; /* easy <var167:Int> isa OTHER*/
if (unlikely(!var170)) {
var_class_name173 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name173);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var174 = var159 <= var167;
var168 = var174;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
if (var168){
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var177 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_line_start,var175) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var175:Int> isa OTHER */
/* <var175:Int> isa OTHER */
var180 = 1; /* easy <var175:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var184 = var_line_start + var175;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var178,1l) on <var178:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var187 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var187)) {
var_class_name190 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name190);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var191 = var178 - 1l;
var185 = var191;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var194 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_cend,var192) on <var_cend:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var192:Int> isa OTHER */
/* <var192:Int> isa OTHER */
var197 = 1; /* easy <var192:Int> isa OTHER*/
if (unlikely(!var197)) {
var_class_name200 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name200);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var201 = (long)(var_cend)>>2;
var202 = var201 - var192;
var195 = var202;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var195,1l) on <var195:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var205 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var205)) {
var_class_name208 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name208);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var209 = var195 + 1l;
var203 = var209;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
}
{
var210 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var185, var203); /* substring on <var_string:String>*/
}
var_lmid = var210;
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var213 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var213)) {
var_class_name216 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name216);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var217 = (long)(var_cend)>>2;
var218 = var_line_start + var217;
var211 = var218;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var221 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var221)) {
var_class_name224 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name224);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var225 = var_line_end - var_line_start;
var219 = var225;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var219,var_cend) on <var219:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var228 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var228)) {
var_class_name231 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name231);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var232 = (long)(var_cend)>>2;
var233 = var219 - var232;
var226 = var233;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var226,1l) on <var226:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var236 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var236)) {
var_class_name239 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name239);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var240 = var226 + 1l;
var234 = var240;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
{
var241 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var211, var234); /* substring on <var_string:String>*/
}
var_lend = var241;
} else {
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "";
var245 = standard___standard__NativeString___to_s_with_length(var244, 0l);
var243 = var245;
varonce242 = var243;
}
var_lmid = var243;
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = "";
var249 = standard___standard__NativeString___to_s_with_length(var248, 0l);
var247 = var249;
varonce246 = var247;
}
var_lend = var247;
}
var250 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var250) on <var250:FlatBuffer> */
{
((void(*)(val* self))(var250->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var250); /* init on <var250:FlatBuffer>*/
}
RET_LABEL251:(void)0;
}
}
var_indent = var250;
var_j = var_line_start;
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var254 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_line_start,var252) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var252:Int> isa OTHER */
/* <var252:Int> isa OTHER */
var257 = 1; /* easy <var252:Int> isa OTHER*/
if (unlikely(!var257)) {
var_class_name260 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name260);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var261 = var_line_start + var252;
var255 = var261;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var255,1l) on <var255:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var264 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var264)) {
var_class_name267 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name267);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var268 = var255 - 1l;
var262 = var268;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
}
var_269 = var262;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_269) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_269:Int> isa OTHER */
/* <var_269:Int> isa OTHER */
var272 = 1; /* easy <var_269:Int> isa OTHER*/
if (unlikely(!var272)) {
var_class_name275 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name275);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var276 = var_j < var_269;
var270 = var276;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
}
if (var270){
{
var277 = ((val*(*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
var278 = ((val*(*)(val* self, long p0))((((long)var277&3)?class_info[((long)var277&3)]:var277->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var277, var_j); /* [] on <var277:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var278,'\t') on <var278:nullable Object(Char)> */
var282 = (uint32_t)((long)(var278)>>2);
var281 = (var278 != NULL) && (var282 == '\t');
var279 = var281;
goto RET_LABEL280;
RET_LABEL280:(void)0;
}
}
if (var279){
{
standard___standard__FlatBuffer___Buffer__add(var_indent, '\t'); /* Direct call string#FlatBuffer#add on <var_indent:FlatBuffer>*/
}
} else {
{
standard___standard__FlatBuffer___Buffer__add(var_indent, ' '); /* Direct call string#FlatBuffer#add on <var_indent:FlatBuffer>*/
}
}
{
var283 = standard___standard__Int___Discrete__successor(var_j, 1l);
}
var_j = var283;
} else {
goto BREAK_label284;
}
}
BREAK_label284: (void)0;
if (unlikely(varonce285==NULL)) {
var286 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce287!=NULL)) {
var288 = varonce287;
} else {
var289 = "\t";
var290 = standard___standard__NativeString___to_s_with_length(var289, 1l);
var288 = var290;
varonce287 = var288;
}
((struct instance_standard__NativeArray*)var286)->values[0]=var288;
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "\n\t";
var294 = standard___standard__NativeString___to_s_with_length(var293, 2l);
var292 = var294;
varonce291 = var292;
}
((struct instance_standard__NativeArray*)var286)->values[6]=var292;
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "^";
var298 = standard___standard__NativeString___to_s_with_length(var297, 1l);
var296 = var298;
varonce295 = var296;
}
((struct instance_standard__NativeArray*)var286)->values[8]=var296;
} else {
var286 = varonce285;
varonce285 = NULL;
}
((struct instance_standard__NativeArray*)var286)->values[1]=var_lstart;
((struct instance_standard__NativeArray*)var286)->values[2]=var_col;
((struct instance_standard__NativeArray*)var286)->values[3]=var_lmid;
((struct instance_standard__NativeArray*)var286)->values[4]=var_def;
((struct instance_standard__NativeArray*)var286)->values[5]=var_lend;
{
var299 = ((val*(*)(val* self))(var_indent->class->vft[COLOR_standard__string__Object__to_s]))(var_indent); /* to_s on <var_indent:FlatBuffer>*/
}
((struct instance_standard__NativeArray*)var286)->values[7]=var299;
{
var300 = ((val*(*)(val* self))(var286->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var286); /* native_to_s on <var286:NativeArray[String]>*/
}
varonce285 = var286;
var = var300;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#init for (self: Location) */
void nit___nit__Location___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Location___standard__kernel__Object__init]))(self); /* init on <self:Location>*/
}
RET_LABEL:;
}
