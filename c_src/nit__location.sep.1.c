#include "nit__location.sep.0.h"
/* method location#SourceFile#filename for (self: SourceFile): String */
val* nit___nit__SourceFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
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
show_backtrace(1);
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
/* method location#SourceFile#stream for (self: SourceFile): IStream */
val* nit___nit__SourceFile___stream(val* self) {
val* var /* : IStream */;
val* var1 /* : IStream */;
var1 = self->attrs[COLOR_nit__location__SourceFile___stream].val; /* _stream on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#stream= for (self: SourceFile, IStream) */
void nit___nit__SourceFile___stream_61d(val* self, val* p0) {
self->attrs[COLOR_nit__location__SourceFile___stream].val = p0; /* _stream on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#init for (self: SourceFile) */
void nit___nit__SourceFile___standard__kernel__Object__init(val* self) {
val* var /* : IStream */;
val* var2 /* : IStream */;
val* var3 /* : String */;
val* var5 /* : Array[Int] */;
val* var7 /* : Array[Int] */;
long var8 /* : Int */;
long var9 /* : Int */;
val* var10 /* : nullable Object */;
{
{ /* Inline location#SourceFile#stream (self) on <self:SourceFile> */
var2 = self->attrs[COLOR_nit__location__SourceFile___stream].val; /* _stream on <self:SourceFile> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 28);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__BufferedIStream___IStream__read_all(var);
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
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = 0;
var9 = 0;
{
var10 = BOX_standard__Int(var9); /* autobox from Int to nullable Object */
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var5, var8, var10); /* Direct call array#Array#[]= on <var5:Array[Int]>*/
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
show_backtrace(1);
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
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var15 /* : nullable Object */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var3 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 76);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
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
var10 = 1;
{
{ /* Inline kernel#Int#- (var7,var10) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var14 = var7 - var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var4, var11);
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var18 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var15,var16) on <var15:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var21 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var25 = ((struct instance_standard__Int*)var15)->value; /* autounbox from nullable Object to Int */;
var26 = var25 + var16;
var19 = var26;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var27 = 1;
{
{ /* Inline kernel#Int#- (var19,var27) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var34 = var19 - var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var = var28;
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
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var15 /* : nullable Object */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var3 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 79);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
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
var10 = 1;
{
{ /* Inline kernel#Int#- (var7,var10) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var14 = var7 - var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var4, var11);
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var18 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var15,var16) on <var15:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var21 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var25 = ((struct instance_standard__Int*)var15)->value; /* autounbox from nullable Object to Int */;
var26 = var25 + var16;
var19 = var26;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var27 = 1;
{
{ /* Inline kernel#Int#- (var19,var27) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var34 = var19 - var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var = var28;
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
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_l /* var l: Location */;
long var10 /* : Int */;
long var_pstart /* var pstart: Int */;
long var11 /* : Int */;
long var_pend /* var pend: Int */;
val* var12 /* : nullable SourceFile */;
val* var14 /* : nullable SourceFile */;
val* var15 /* : String */;
val* var17 /* : String */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
val* var30 /* : Text */;
{
{ /* Inline location#Location#text_cache (self) on <self:Location> */
var3 = self->attrs[COLOR_nit__location__Location___text_cache].val; /* _text_cache on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
var_l = self;
{
var10 = nit___nit__Location___pstart(self);
}
var_pstart = var10;
{
var11 = nit___nit__Location___pend(self);
}
var_pend = var11;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var14 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:Location> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 89);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#string (var12) on <var12:nullable SourceFile> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
show_backtrace(1);
}
var17 = var12->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <var12:nullable SourceFile> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pend,var_pstart) on <var_pend:Int> */
/* Covariant cast for argument 0 (i) <var_pstart:Int> isa OTHER */
/* <var_pstart:Int> isa OTHER */
var20 = 1; /* easy <var_pstart:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var21 = var_pend - var_pstart;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var22 = 1;
{
{ /* Inline kernel#Int#+ (var18,var22) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var29 = var18 + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
var30 = ((val* (*)(val* self, long p0, long p1))(var15->class->vft[COLOR_standard__string__Text__substring]))(var15, var_pstart, var23) /* substring on <var15:String>*/;
}
var_res = var30;
{
{ /* Inline location#Location#text_cache= (self,var_res) on <self:Location> */
self->attrs[COLOR_nit__location__Location___text_cache].val = var_res; /* _text_cache on <self:Location> */
RET_LABEL31:(void)0;
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
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable SourceFile */;
val* var10 /* : nullable SourceFile */;
val* var11 /* : nullable SourceFile */;
val* var13 /* : nullable SourceFile */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
var_other = p0;
var1 = NULL;
if (var_other == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int (*)(val* self, val* p0))(var_other->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other, var1) /* == on <var_other:nullable Object>*/;
var2 = var3;
}
if (var2){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Object)> isa Location */
cltype = type_nit__Location.color;
idtype = type_nit__Location.id;
if(cltype >= var_other->type->table_size) {
var5 = 0;
} else {
var5 = var_other->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#file (var_other) on <var_other:nullable Object(Location)> */
var10 = var_other->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_other:nullable Object(Location)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline location#Location#file (self) on <self:Location> */
var13 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var8 == NULL) {
var14 = (var11 != NULL);
} else {
{ /* Inline kernel#Object#!= (var8,var11) on <var8:nullable SourceFile> */
var_other17 = var11;
{
var18 = ((short int (*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var8, var_other17) /* == on <var8:nullable SourceFile(SourceFile)>*/;
}
var19 = !var18;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var20 = 0;
var = var20;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:nullable Object(Location)> */
var23 = var_other->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_other:nullable Object(Location)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var26 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var21,var24) on <var21:Int> */
var29 = var21 == var24;
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var31 = 0;
var = var31;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:nullable Object(Location)> */
var34 = var_other->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_other:nullable Object(Location)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var37 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var32,var35) on <var32:Int> */
var40 = var32 == var35;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:nullable Object(Location)> */
var45 = var_other->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_other:nullable Object(Location)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var48 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var43,var46) on <var43:Int> */
var51 = var43 == var46;
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
var53 = 0;
var = var53;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_end (var_other) on <var_other:nullable Object(Location)> */
var56 = var_other->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_other:nullable Object(Location)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var59 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var54,var57) on <var54:Int> */
var62 = var54 == var57;
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
var64 = 0;
var = var64;
goto RET_LABEL;
} else {
}
var65 = 1;
var = var65;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#located_in for (self: Location, nullable Location): Bool */
short int nit___nit__Location___located_in(val* self, val* p0) {
short int var /* : Bool */;
val* var_loc /* var loc: nullable Location */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
long var67 /* : Int */;
long var69 /* : Int */;
long var70 /* : Int */;
long var72 /* : Int */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
long var82 /* : Int */;
long var84 /* : Int */;
long var85 /* : Int */;
long var87 /* : Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var_ /* var : Bool */;
long var91 /* : Int */;
long var93 /* : Int */;
long var94 /* : Int */;
long var96 /* : Int */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
var_loc = p0;
var1 = NULL;
if (var_loc == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = nit___nit__Location___standard__kernel__Object___61d_61d(var_loc, var1);
var2 = var3;
}
if (var2){
var4 = 0;
var = var4;
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
{ /* Inline location#Location#line_start (var_loc) on <var_loc:nullable Location(Location)> */
var10 = var_loc->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var13 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var14 = var5 < var8;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var18 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var21 = var_loc->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var16,var19) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var24 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var28 = var16 > var19;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var29 = 0;
var = var29;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var32 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var35 = var_loc->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var30,var33) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var38 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var42 = var30 > var33;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var43 = 0;
var = var43;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var46 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:nullable Location(Location)> */
var49 = var_loc->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var44,var47) on <var44:Int> */
var52 = var44 == var47;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var55 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_loc) on <var_loc:nullable Location(Location)> */
var58 = var_loc->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_loc:nullable Location(Location)> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var53,var56) on <var53:Int> */
/* Covariant cast for argument 0 (i) <var56:Int> isa OTHER */
/* <var56:Int> isa OTHER */
var61 = 1; /* easy <var56:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var65 = var53 < var56;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
var66 = 0;
var = var66;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var69 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_loc) on <var_loc:nullable Location(Location)> */
var72 = var_loc->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var67,var70) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var75 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var79 = var67 > var70;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
if (var73){
var80 = 0;
var = var80;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var84 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var87 = var_loc->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var82,var85) on <var82:Int> */
var90 = var82 == var85;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_ = var88;
if (var88){
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var93 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_loc) on <var_loc:nullable Location(Location)> */
var96 = var_loc->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var91,var94) on <var91:Int> */
/* Covariant cast for argument 0 (i) <var94:Int> isa OTHER */
/* <var94:Int> isa OTHER */
var99 = 1; /* easy <var94:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var103 = var91 > var94;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var81 = var97;
} else {
var81 = var_;
}
if (var81){
var104 = 0;
var = var104;
goto RET_LABEL;
} else {
}
var105 = 1;
var = var105;
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
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var_file_part /* var file_part: String */;
val* var5 /* : nullable SourceFile */;
val* var7 /* : nullable SourceFile */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable SourceFile */;
val* var16 /* : nullable SourceFile */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : nullable SourceFile */;
val* var22 /* : nullable SourceFile */;
val* var23 /* : String */;
val* var25 /* : String */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
long var38 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var56 /* : Int */;
long var58 /* : Int */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
long var64 /* : Int */;
long var66 /* : Int */;
val* var67 /* : Array[Object] */;
long var68 /* : Int */;
val* var69 /* : NativeArray[Object] */;
val* var70 /* : Object */;
val* var71 /* : Object */;
val* var72 /* : String */;
long var73 /* : Int */;
long var75 /* : Int */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
long var81 /* : Int */;
long var83 /* : Int */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
long var89 /* : Int */;
long var91 /* : Int */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : Object */;
val* var96 /* : Object */;
val* var97 /* : Object */;
val* var98 /* : String */;
long var99 /* : Int */;
long var101 /* : Int */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
long var107 /* : Int */;
long var109 /* : Int */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
long var115 /* : Int */;
long var117 /* : Int */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
long var123 /* : Int */;
long var125 /* : Int */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : Object */;
val* var130 /* : Object */;
val* var131 /* : Object */;
val* var132 /* : Object */;
val* var133 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var_file_part = var1;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var7 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = NULL;
if (var5 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var5,var8) on <var5:nullable SourceFile> */
var_other = var8;
{
var12 = ((short int (*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:nullable SourceFile(SourceFile)>*/;
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline location#Location#file (self) on <self:Location> */
var16 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 131);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var14) on <var14:nullable SourceFile> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var19 = var14->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var14:nullable SourceFile> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_file_part = var17;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var22 = self->attrs[COLOR_nit__location__Location___file].val; /* _file on <self:Location> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 132);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var20) on <var20:nullable SourceFile> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var25 = var20->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var20:nullable SourceFile> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((long (*)(val* self))(var23->class->vft[COLOR_standard__string__Text__length]))(var23) /* length on <var23:String>*/;
}
var27 = 0;
{
{ /* Inline kernel#Int#> (var26,var27) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var31 = var26 > var27;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
if (varonce32) {
var33 = varonce32;
} else {
var34 = ":";
var35 = 1;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
var37 = ((val* (*)(val* self, val* p0))(var_file_part->class->vft[COLOR_standard__string__String___43d]))(var_file_part, var33) /* + on <var_file_part:String>*/;
}
var_file_part = var37;
} else {
}
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var40 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var43 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var38,var41) on <var38:Int> */
var46 = var38 == var41;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var49 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
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
{ /* Inline kernel#Int#== (var47,var50) on <var47:Int> */
var55 = var47 == var50;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var58 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ",";
var62 = 1;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var66 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var67 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var67 = array_instance Array[Object] */
var68 = 4;
var69 = NEW_standard__NativeArray(var68, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var69)->values[0] = (val*) var_file_part;
var70 = BOX_standard__Int(var56); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var69)->values[1] = (val*) var70;
((struct instance_standard__NativeArray*)var69)->values[2] = (val*) var60;
var71 = BOX_standard__Int(var64); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var69)->values[3] = (val*) var71;
{
((void (*)(val* self, val* p0, long p1))(var67->class->vft[COLOR_standard__array__Array__with_native]))(var67, var69, var68) /* with_native on <var67:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var67->class->vft[COLOR_standard__string__Object__to_s]))(var67) /* to_s on <var67:Array[Object]>*/;
}
var = var72;
goto RET_LABEL;
} else {
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var75 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = ",";
var79 = 1;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var83 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "--";
var87 = 2;
var88 = standard___standard__NativeString___to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var91 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 6;
var94 = NEW_standard__NativeArray(var93, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var94)->values[0] = (val*) var_file_part;
var95 = BOX_standard__Int(var73); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var94)->values[1] = (val*) var95;
((struct instance_standard__NativeArray*)var94)->values[2] = (val*) var77;
var96 = BOX_standard__Int(var81); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var94)->values[3] = (val*) var96;
((struct instance_standard__NativeArray*)var94)->values[4] = (val*) var85;
var97 = BOX_standard__Int(var89); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var94)->values[5] = (val*) var97;
{
((void (*)(val* self, val* p0, long p1))(var92->class->vft[COLOR_standard__array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
}
{
var98 = ((val* (*)(val* self))(var92->class->vft[COLOR_standard__string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
}
var = var98;
goto RET_LABEL;
}
} else {
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var101 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = ",";
var105 = 1;
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var109 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = "--";
var113 = 2;
var114 = standard___standard__NativeString___to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var117 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = ",";
var121 = 1;
var122 = standard___standard__NativeString___to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var125 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
var126 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 8;
var128 = NEW_standard__NativeArray(var127, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var128)->values[0] = (val*) var_file_part;
var129 = BOX_standard__Int(var99); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var128)->values[1] = (val*) var129;
((struct instance_standard__NativeArray*)var128)->values[2] = (val*) var103;
var130 = BOX_standard__Int(var107); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var128)->values[3] = (val*) var130;
((struct instance_standard__NativeArray*)var128)->values[4] = (val*) var111;
var131 = BOX_standard__Int(var115); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var128)->values[5] = (val*) var131;
((struct instance_standard__NativeArray*)var128)->values[6] = (val*) var119;
var132 = BOX_standard__Int(var123); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var128)->values[7] = (val*) var132;
{
((void (*)(val* self, val* p0, long p1))(var126->class->vft[COLOR_standard__array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var133 = ((val* (*)(val* self))(var126->class->vft[COLOR_standard__string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
var = var133;
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
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
long var54 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
long var64 /* : Int */;
long var66 /* : Int */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
long var77 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
long var82 /* : Int */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 159);
show_backtrace(1);
}
var_other = p0;
{
var2 = nit___nit__Location___standard__kernel__Object___61d_61d(self, var_other);
}
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = nit___nit__Location___located_in(self, var_other);
}
if (var4){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
{
var6 = nit___nit__Location___located_in(var_other, self);
}
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var10 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:Location> */
var13 = var_other->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_other:Location> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var8,var11) on <var8:Int> */
var16 = var8 == var11;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var20 = self->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <self:Location> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:Location> */
var23 = var_other->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_other:Location> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var18,var21) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var26 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var30 = var18 < var21;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var = var24;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var33 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:Location> */
var36 = var_other->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_other:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var31,var34) on <var31:Int> */
var39 = var31 == var34;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var43 = self->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <self:Location> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:Location> */
var46 = var_other->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_other:Location> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var41,var44) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var49 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var53 = var41 < var44;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var = var47;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var56 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:Location> */
var59 = var_other->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_other:Location> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var54,var57) on <var54:Int> */
var62 = var54 == var57;
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var66 = self->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <self:Location> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:Location> */
var69 = var_other->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_other:Location> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var64,var67) on <var64:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var72 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var76 = var64 < var67;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var = var70;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var79 = self->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <self:Location> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_other) on <var_other:Location> */
var82 = var_other->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_other:Location> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var77,var80) on <var77:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var85 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var89 = var77 < var80;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var = var83;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#colored_line for (self: Location, String): String */
val* nit___nit__Location___colored_line(val* self, val* p0) {
val* var /* : String */;
val* var_color /* var color: String */;
long var1 /* : Int */;
char var2 /* : Char */;
char var4 /* : Char */;
char var_esc /* var esc: Char */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : Object */;
val* var13 /* : String */;
val* var_def /* var def: String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : Object */;
val* var28 /* : String */;
val* var_col /* var col: String */;
val* var_l /* var l: Location */;
long var29 /* : Int */;
long var31 /* : Int */;
long var_i /* var i: Int */;
val* var32 /* : nullable SourceFile */;
val* var34 /* : nullable SourceFile */;
val* var35 /* : Array[Int] */;
val* var37 /* : Array[Int] */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var42 /* : Int */;
val* var43 /* : nullable Object */;
long var44 /* : Int */;
long var_line_start /* var line_start: Int */;
long var_line_end /* var line_end: Int */;
val* var45 /* : nullable SourceFile */;
val* var47 /* : nullable SourceFile */;
val* var48 /* : String */;
val* var50 /* : String */;
val* var_string /* var string: String */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
short int var68 /* : Bool */;
short int var_ /* var : Bool */;
val* var69 /* : SequenceRead[Char] */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
val* var78 /* : nullable Object */;
char var79 /* : Char */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
char var83 /* : Char */;
short int var84 /* : Bool */;
short int var_85 /* var : Bool */;
val* var86 /* : SequenceRead[Char] */;
long var87 /* : Int */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
val* var95 /* : nullable Object */;
char var96 /* : Char */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
char var100 /* : Char */;
short int var101 /* : Bool */;
long var102 /* : Int */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
long var110 /* : Int */;
long var112 /* : Int */;
long var113 /* : Int */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
short int var120 /* : Bool */;
long var121 /* : Int */;
long var123 /* : Int */;
long var124 /* : Int */;
long var125 /* : Int */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
long var131 /* : Int */;
val* var132 /* : Text */;
val* var_lstart /* var lstart: nullable Object */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
long var138 /* : Int */;
long var140 /* : Int */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
long var145 /* : Int */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const char* var_class_name150;
long var151 /* : Int */;
long var152 /* : Int */;
long var153 /* : Int */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
long var159 /* : Int */;
val* var160 /* : nullable Object */;
val* var_cend /* var cend: nullable Object */;
long var161 /* : Int */;
long var163 /* : Int */;
val* var164 /* : nullable Object */;
long var165 /* : Int */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
const char* var_class_name170;
long var171 /* : Int */;
long var172 /* : Int */;
long var173 /* : Int */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
const char* var_class_name179;
short int var180 /* : Bool */;
long var181 /* : Int */;
long var183 /* : Int */;
long var184 /* : Int */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
const char* var_class_name189;
long var190 /* : Int */;
long var191 /* : Int */;
long var192 /* : Int */;
short int var194 /* : Bool */;
int cltype195;
int idtype196;
const char* var_class_name197;
long var198 /* : Int */;
long var199 /* : Int */;
long var201 /* : Int */;
long var202 /* : Int */;
short int var204 /* : Bool */;
int cltype205;
int idtype206;
const char* var_class_name207;
long var208 /* : Int */;
long var209 /* : Int */;
long var210 /* : Int */;
long var211 /* : Int */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
const char* var_class_name216;
long var217 /* : Int */;
val* var218 /* : Text */;
val* var_lmid /* var lmid: nullable Object */;
long var219 /* : Int */;
short int var221 /* : Bool */;
int cltype222;
int idtype223;
const char* var_class_name224;
long var225 /* : Int */;
long var226 /* : Int */;
long var227 /* : Int */;
short int var229 /* : Bool */;
int cltype230;
int idtype231;
const char* var_class_name232;
long var233 /* : Int */;
long var234 /* : Int */;
short int var236 /* : Bool */;
int cltype237;
int idtype238;
const char* var_class_name239;
long var240 /* : Int */;
long var241 /* : Int */;
long var242 /* : Int */;
long var243 /* : Int */;
short int var245 /* : Bool */;
int cltype246;
int idtype247;
const char* var_class_name248;
long var249 /* : Int */;
val* var250 /* : Text */;
val* var_lend /* var lend: nullable Object */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : FlatString */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : NativeString */;
long var259 /* : Int */;
val* var260 /* : FlatString */;
val* var261 /* : FlatBuffer */;
val* var_indent /* var indent: FlatBuffer */;
long var_j /* var j: Int */;
long var263 /* : Int */;
long var265 /* : Int */;
long var266 /* : Int */;
short int var268 /* : Bool */;
int cltype269;
int idtype270;
const char* var_class_name271;
long var272 /* : Int */;
long var273 /* : Int */;
long var274 /* : Int */;
short int var276 /* : Bool */;
int cltype277;
int idtype278;
const char* var_class_name279;
long var280 /* : Int */;
long var_281 /* var : Int */;
short int var282 /* : Bool */;
short int var284 /* : Bool */;
int cltype285;
int idtype286;
const char* var_class_name287;
short int var288 /* : Bool */;
val* var289 /* : SequenceRead[Char] */;
val* var290 /* : nullable Object */;
char var291 /* : Char */;
short int var292 /* : Bool */;
short int var294 /* : Bool */;
char var295 /* : Char */;
char var296 /* : Char */;
char var297 /* : Char */;
long var298 /* : Int */;
long var299 /* : Int */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
long var314 /* : Int */;
val* var315 /* : FlatString */;
val* var316 /* : Array[Object] */;
long var317 /* : Int */;
val* var318 /* : NativeArray[Object] */;
val* var319 /* : String */;
var_color = p0;
var1 = 27;
{
{ /* Inline kernel#Int#ascii (var1) on <var1:Int> */
var4 = var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_esc = var2;
if (varonce) {
var5 = varonce;
} else {
var6 = "[0m";
var7 = 3;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__standard__Object);
var12 = BOX_standard__Char(var_esc); /* autobox from Char to Object */
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var12;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var5;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val* self))(var9->class->vft[COLOR_standard__string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
var_def = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "[";
var17 = 1;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "m";
var22 = 1;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 4;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__standard__Object);
var27 = BOX_standard__Char(var_esc); /* autobox from Char to Object */
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) var27;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var15;
((struct instance_standard__NativeArray*)var26)->values[2] = (val*) var_color;
((struct instance_standard__NativeArray*)var26)->values[3] = (val*) var20;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
var_col = var28;
var_l = self;
{
{ /* Inline location#Location#line_start (var_l) on <var_l:Location> */
var31 = var_l->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var_l:Location> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_i = var29;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var34 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:Location> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 184);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#line_starts (var32) on <var32:nullable SourceFile> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
}
var37 = var32->attrs[COLOR_nit__location__SourceFile___line_starts].val; /* _line_starts on <var32:nullable SourceFile> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 45);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var38 = 1;
{
{ /* Inline kernel#Int#- (var_i,var38) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var42 = var_i - var38;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var43 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var35, var39);
}
var44 = ((struct instance_standard__Int*)var43)->value; /* autounbox from nullable Object to Int */;
var_line_start = var44;
var_line_end = var_line_start;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var47 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:Location> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 186);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#string (var45) on <var45:nullable SourceFile> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
show_backtrace(1);
}
var50 = var45->attrs[COLOR_nit__location__SourceFile___string].val; /* _string on <var45:nullable SourceFile> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 25);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_string = var48;
for(;;) {
var53 = 1;
{
{ /* Inline kernel#Int#+ (var_line_end,var53) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var56 = 1; /* easy <var53:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var60 = var_line_end + var53;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = ((long (*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string) /* length on <var_string:String>*/;
}
{
{ /* Inline kernel#Int#< (var54,var61) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var64 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var68 = var54 < var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_ = var62;
if (var62){
{
var69 = ((val* (*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string) /* chars on <var_string:String>*/;
}
var70 = 1;
{
{ /* Inline kernel#Int#+ (var_line_end,var70) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var77 = var_line_end + var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
var78 = ((val* (*)(val* self, long p0))(var69->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var69, var71) /* [] on <var69:SequenceRead[Char]>*/;
}
var79 = '\n';
{
{ /* Inline kernel#Char#!= (var78,var79) on <var78:nullable Object(Char)> */
var82 = (var78 != NULL) && (var78->class == &class_standard__Char);
if (var82) {
var83 = ((struct instance_standard__Char*)var78)->value; /* autounbox from nullable Object to Char */;
var82 = (var83 == var79);
}
var84 = !var82;
var80 = var84;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var52 = var80;
} else {
var52 = var_;
}
var_85 = var52;
if (var52){
{
var86 = ((val* (*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string) /* chars on <var_string:String>*/;
}
var87 = 1;
{
{ /* Inline kernel#Int#+ (var_line_end,var87) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var87:Int> isa OTHER */
/* <var87:Int> isa OTHER */
var90 = 1; /* easy <var87:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var94 = var_line_end + var87;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
var95 = ((val* (*)(val* self, long p0))(var86->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var86, var88) /* [] on <var86:SequenceRead[Char]>*/;
}
var96 = '\15';
{
{ /* Inline kernel#Char#!= (var95,var96) on <var95:nullable Object(Char)> */
var99 = (var95 != NULL) && (var95->class == &class_standard__Char);
if (var99) {
var100 = ((struct instance_standard__Char*)var95)->value; /* autounbox from nullable Object to Char */;
var99 = (var100 == var96);
}
var101 = !var99;
var97 = var101;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var51 = var97;
} else {
var51 = var_85;
}
if (var51){
var102 = 1;
{
{ /* Inline kernel#Int#+ (var_line_end,var102) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var102:Int> isa OTHER */
/* <var102:Int> isa OTHER */
var105 = 1; /* easy <var102:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var109 = var_line_end + var102;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_line_end = var103;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var112 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
var113 = 0;
{
{ /* Inline kernel#Int#> (var110,var113) on <var110:Int> */
/* Covariant cast for argument 0 (i) <var113:Int> isa OTHER */
/* <var113:Int> isa OTHER */
var116 = 1; /* easy <var113:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var120 = var110 > var113;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
if (var114){
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var123 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
var124 = 1;
{
{ /* Inline kernel#Int#- (var121,var124) on <var121:Int> */
/* Covariant cast for argument 0 (i) <var124:Int> isa OTHER */
/* <var124:Int> isa OTHER */
var127 = 1; /* easy <var124:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var131 = var121 - var124;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
{
var132 = ((val* (*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var_line_start, var125) /* substring on <var_string:String>*/;
}
var_lstart = var132;
} else {
if (varonce133) {
var134 = varonce133;
} else {
var135 = "";
var136 = 0;
var137 = standard___standard__NativeString___to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var_lstart = var134;
}
{
{ /* Inline location#Location#line_end (var_l) on <var_l:Location> */
var140 = var_l->attrs[COLOR_nit__location__Location___line_end].l; /* _line_end on <var_l:Location> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_i,var138) on <var_i:Int> */
var143 = var_i == var138;
var144 = !var143;
var141 = var144;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
if (var141){
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var147 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var147)) {
var_class_name150 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name150);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var151 = var_line_end - var_line_start;
var145 = var151;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var152 = 1;
{
{ /* Inline kernel#Int#+ (var145,var152) on <var145:Int> */
/* Covariant cast for argument 0 (i) <var152:Int> isa OTHER */
/* <var152:Int> isa OTHER */
var155 = 1; /* easy <var152:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var159 = var145 + var152;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var160 = BOX_standard__Int(var153); /* autobox from Int to nullable Object */
var_cend = var160;
} else {
{
{ /* Inline location#Location#column_end (var_l) on <var_l:Location> */
var163 = var_l->attrs[COLOR_nit__location__Location___column_end].l; /* _column_end on <var_l:Location> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
var164 = BOX_standard__Int(var161); /* autobox from Int to nullable Object */
var_cend = var164;
}
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var167 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var167)) {
var_class_name170 = var_cend == NULL ? "null" : var_cend->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name170);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var171 = ((struct instance_standard__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var172 = var_line_start + var171;
var165 = var172;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
{
var173 = ((long (*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string) /* length on <var_string:String>*/;
}
{
{ /* Inline kernel#Int#<= (var165,var173) on <var165:Int> */
/* Covariant cast for argument 0 (i) <var173:Int> isa OTHER */
/* <var173:Int> isa OTHER */
var176 = 1; /* easy <var173:Int> isa OTHER*/
if (unlikely(!var176)) {
var_class_name179 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name179);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var180 = var165 <= var173;
var174 = var180;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
if (var174){
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var183 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_line_start,var181) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var181:Int> isa OTHER */
/* <var181:Int> isa OTHER */
var186 = 1; /* easy <var181:Int> isa OTHER*/
if (unlikely(!var186)) {
var_class_name189 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name189);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var190 = var_line_start + var181;
var184 = var190;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
var191 = 1;
{
{ /* Inline kernel#Int#- (var184,var191) on <var184:Int> */
/* Covariant cast for argument 0 (i) <var191:Int> isa OTHER */
/* <var191:Int> isa OTHER */
var194 = 1; /* easy <var191:Int> isa OTHER*/
if (unlikely(!var194)) {
var_class_name197 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name197);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var198 = var184 - var191;
var192 = var198;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var201 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_cend,var199) on <var_cend:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var199:Int> isa OTHER */
/* <var199:Int> isa OTHER */
var204 = 1; /* easy <var199:Int> isa OTHER*/
if (unlikely(!var204)) {
var_class_name207 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name207);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var208 = ((struct instance_standard__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var209 = var208 - var199;
var202 = var209;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
var210 = 1;
{
{ /* Inline kernel#Int#+ (var202,var210) on <var202:Int> */
/* Covariant cast for argument 0 (i) <var210:Int> isa OTHER */
/* <var210:Int> isa OTHER */
var213 = 1; /* easy <var210:Int> isa OTHER*/
if (unlikely(!var213)) {
var_class_name216 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name216);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var217 = var202 + var210;
var211 = var217;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
}
{
var218 = ((val* (*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var192, var211) /* substring on <var_string:String>*/;
}
var_lmid = var218;
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var221 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var221)) {
var_class_name224 = var_cend == NULL ? "null" : var_cend->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name224);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var225 = ((struct instance_standard__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var226 = var_line_start + var225;
var219 = var226;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var229 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var229)) {
var_class_name232 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name232);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var233 = var_line_end - var_line_start;
var227 = var233;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var227,var_cend) on <var227:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var236 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var236)) {
var_class_name239 = var_cend == NULL ? "null" : var_cend->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name239);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var240 = ((struct instance_standard__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var241 = var227 - var240;
var234 = var241;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
var242 = 1;
{
{ /* Inline kernel#Int#+ (var234,var242) on <var234:Int> */
/* Covariant cast for argument 0 (i) <var242:Int> isa OTHER */
/* <var242:Int> isa OTHER */
var245 = 1; /* easy <var242:Int> isa OTHER*/
if (unlikely(!var245)) {
var_class_name248 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name248);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var249 = var234 + var242;
var243 = var249;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
{
var250 = ((val* (*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_standard__string__Text__substring]))(var_string, var219, var243) /* substring on <var_string:String>*/;
}
var_lend = var250;
} else {
if (varonce251) {
var252 = varonce251;
} else {
var253 = "";
var254 = 0;
var255 = standard___standard__NativeString___to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
var_lmid = var252;
if (varonce256) {
var257 = varonce256;
} else {
var258 = "";
var259 = 0;
var260 = standard___standard__NativeString___to_s_with_length(var258, var259);
var257 = var260;
varonce256 = var257;
}
var_lend = var257;
}
var261 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
{
{ /* Inline string#FlatBuffer#init (var261) on <var261:FlatBuffer> */
{
((void (*)(val* self))(var261->class->vft[COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init]))(var261) /* init on <var261:FlatBuffer>*/;
}
RET_LABEL262:(void)0;
}
}
var_indent = var261;
var_j = var_line_start;
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var265 = var_l->attrs[COLOR_nit__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_line_start,var263) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var263:Int> isa OTHER */
/* <var263:Int> isa OTHER */
var268 = 1; /* easy <var263:Int> isa OTHER*/
if (unlikely(!var268)) {
var_class_name271 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name271);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var272 = var_line_start + var263;
var266 = var272;
goto RET_LABEL267;
RET_LABEL267:(void)0;
}
}
var273 = 1;
{
{ /* Inline kernel#Int#- (var266,var273) on <var266:Int> */
/* Covariant cast for argument 0 (i) <var273:Int> isa OTHER */
/* <var273:Int> isa OTHER */
var276 = 1; /* easy <var273:Int> isa OTHER*/
if (unlikely(!var276)) {
var_class_name279 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name279);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var280 = var266 - var273;
var274 = var280;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
}
var_281 = var274;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_281) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_281:Int> isa OTHER */
/* <var_281:Int> isa OTHER */
var284 = 1; /* easy <var_281:Int> isa OTHER*/
if (unlikely(!var284)) {
var_class_name287 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name287);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var288 = var_j < var_281;
var282 = var288;
goto RET_LABEL283;
RET_LABEL283:(void)0;
}
}
if (var282){
{
var289 = ((val* (*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__chars]))(var_string) /* chars on <var_string:String>*/;
}
{
var290 = ((val* (*)(val* self, long p0))(var289->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var289, var_j) /* [] on <var289:SequenceRead[Char]>*/;
}
var291 = '\11';
{
{ /* Inline kernel#Char#== (var290,var291) on <var290:nullable Object(Char)> */
var294 = (var290 != NULL) && (var290->class == &class_standard__Char);
if (var294) {
var295 = ((struct instance_standard__Char*)var290)->value; /* autounbox from nullable Object to Char */;
var294 = (var295 == var291);
}
var292 = var294;
goto RET_LABEL293;
RET_LABEL293:(void)0;
}
}
if (var292){
var296 = '\11';
{
standard___standard__FlatBuffer___Buffer__add(var_indent, var296); /* Direct call string#FlatBuffer#add on <var_indent:FlatBuffer>*/
}
} else {
var297 = ' ';
{
standard___standard__FlatBuffer___Buffer__add(var_indent, var297); /* Direct call string#FlatBuffer#add on <var_indent:FlatBuffer>*/
}
}
var298 = 1;
{
var299 = standard___standard__Int___Discrete__successor(var_j, var298);
}
var_j = var299;
} else {
goto BREAK_label300;
}
}
BREAK_label300: (void)0;
if (varonce301) {
var302 = varonce301;
} else {
var303 = "\11";
var304 = 1;
var305 = standard___standard__NativeString___to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = "\n\11";
var309 = 2;
var310 = standard___standard__NativeString___to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
if (varonce311) {
var312 = varonce311;
} else {
var313 = "^";
var314 = 1;
var315 = standard___standard__NativeString___to_s_with_length(var313, var314);
var312 = var315;
varonce311 = var312;
}
var316 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var316 = array_instance Array[Object] */
var317 = 9;
var318 = NEW_standard__NativeArray(var317, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var318)->values[0] = (val*) var302;
((struct instance_standard__NativeArray*)var318)->values[1] = (val*) var_lstart;
((struct instance_standard__NativeArray*)var318)->values[2] = (val*) var_col;
((struct instance_standard__NativeArray*)var318)->values[3] = (val*) var_lmid;
((struct instance_standard__NativeArray*)var318)->values[4] = (val*) var_def;
((struct instance_standard__NativeArray*)var318)->values[5] = (val*) var_lend;
((struct instance_standard__NativeArray*)var318)->values[6] = (val*) var307;
((struct instance_standard__NativeArray*)var318)->values[7] = (val*) var_indent;
((struct instance_standard__NativeArray*)var318)->values[8] = (val*) var312;
{
((void (*)(val* self, val* p0, long p1))(var316->class->vft[COLOR_standard__array__Array__with_native]))(var316, var318, var317) /* with_native on <var316:Array[Object]>*/;
}
}
{
var319 = ((val* (*)(val* self))(var316->class->vft[COLOR_standard__string__Object__to_s]))(var316) /* to_s on <var316:Array[Object]>*/;
}
var = var319;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#init for (self: Location) */
void nit___nit__Location___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__Location___standard__kernel__Object__init]))(self) /* init on <self:Location>*/;
}
RET_LABEL:;
}
