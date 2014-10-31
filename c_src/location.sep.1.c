#include "location.sep.0.h"
/* method location#SourceFile#filename for (self: SourceFile): String */
val* location__SourceFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#filename for (self: Object): String */
val* VIRTUAL_location__SourceFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline location#SourceFile#filename (self) on <self:Object(SourceFile)> */
var3 = self->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <self:Object(SourceFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#filename= for (self: SourceFile, String) */
void location__SourceFile__filename_61d(val* self, val* p0) {
self->attrs[COLOR_location__SourceFile___filename].val = p0; /* _filename on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#filename= for (self: Object, String) */
void VIRTUAL_location__SourceFile__filename_61d(val* self, val* p0) {
{ /* Inline location#SourceFile#filename= (self,p0) on <self:Object(SourceFile)> */
self->attrs[COLOR_location__SourceFile___filename].val = p0; /* _filename on <self:Object(SourceFile)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#SourceFile#string for (self: SourceFile): String */
val* location__SourceFile__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_location__SourceFile___string].val; /* _string on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#string for (self: Object): String */
val* VIRTUAL_location__SourceFile__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline location#SourceFile#string (self) on <self:Object(SourceFile)> */
var3 = self->attrs[COLOR_location__SourceFile___string].val; /* _string on <self:Object(SourceFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 25);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#string= for (self: SourceFile, String) */
void location__SourceFile__string_61d(val* self, val* p0) {
self->attrs[COLOR_location__SourceFile___string].val = p0; /* _string on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#string= for (self: Object, String) */
void VIRTUAL_location__SourceFile__string_61d(val* self, val* p0) {
{ /* Inline location#SourceFile#string= (self,p0) on <self:Object(SourceFile)> */
self->attrs[COLOR_location__SourceFile___string].val = p0; /* _string on <self:Object(SourceFile)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#SourceFile#init for (self: SourceFile, String, IStream) */
void location__SourceFile__init(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_stream /* var stream: IStream */;
val* var /* : String */;
val* var3 /* : Array[Int] */;
val* var5 /* : Array[Int] */;
long var6 /* : Int */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
var_filename = p0;
var_stream = p1;
{
{ /* Inline location#SourceFile#filename= (self,var_filename) on <self:SourceFile> */
self->attrs[COLOR_location__SourceFile___filename].val = var_filename; /* _filename on <self:SourceFile> */
RET_LABEL1:(void)0;
}
}
{
var = stream__BufferedIStream__read_all(var_stream);
}
{
{ /* Inline location#SourceFile#string= (self,var) on <self:SourceFile> */
self->attrs[COLOR_location__SourceFile___string].val = var; /* _string on <self:SourceFile> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline location#SourceFile#line_starts (self) on <self:SourceFile> */
var5 = self->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
var7 = 0;
{
var8 = BOX_kernel__Int(var7); /* autobox from Int to nullable Object */
array__Array___91d_93d_61d(var3, var6, var8); /* Direct call array#Array#[]= on <var3:Array[Int]>*/
}
RET_LABEL:;
}
/* method location#SourceFile#init for (self: Object, String, IStream) */
void VIRTUAL_location__SourceFile__init(val* self, val* p0, val* p1) {
location__SourceFile__init(self, p0, p1); /* Direct call location#SourceFile#init on <self:Object(SourceFile)>*/
RET_LABEL:;
}
/* method location#SourceFile#line_starts for (self: SourceFile): Array[Int] */
val* location__SourceFile__line_starts(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#line_starts for (self: Object): Array[Int] */
val* VIRTUAL_location__SourceFile__line_starts(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
val* var3 /* : Array[Int] */;
{ /* Inline location#SourceFile#line_starts (self) on <self:Object(SourceFile)> */
var3 = self->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <self:Object(SourceFile)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file for (self: Location): nullable SourceFile */
val* location__Location__file(val* self) {
val* var /* : nullable SourceFile */;
val* var1 /* : nullable SourceFile */;
var1 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file for (self: Object): nullable SourceFile */
val* VIRTUAL_location__Location__file(val* self) {
val* var /* : nullable SourceFile */;
val* var1 /* : nullable SourceFile */;
val* var3 /* : nullable SourceFile */;
{ /* Inline location#Location#file (self) on <self:Object(Location)> */
var3 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Object(Location)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file= for (self: Location, nullable SourceFile) */
void location__Location__file_61d(val* self, val* p0) {
self->attrs[COLOR_location__Location___file].val = p0; /* _file on <self:Location> */
RET_LABEL:;
}
/* method location#Location#file= for (self: Object, nullable SourceFile) */
void VIRTUAL_location__Location__file_61d(val* self, val* p0) {
{ /* Inline location#Location#file= (self,p0) on <self:Object(Location)> */
self->attrs[COLOR_location__Location___file].val = p0; /* _file on <self:Object(Location)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#Location#line_start for (self: Location): Int */
long location__Location__line_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_start for (self: Object): Int */
long VIRTUAL_location__Location__line_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline location#Location#line_start (self) on <self:Object(Location)> */
var3 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Object(Location)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_start= for (self: Location, Int) */
void location__Location__line_start_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___line_start].l = p0; /* _line_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_start= for (self: Object, Int) */
void VIRTUAL_location__Location__line_start_61d(val* self, long p0) {
{ /* Inline location#Location#line_start= (self,p0) on <self:Object(Location)> */
self->attrs[COLOR_location__Location___line_start].l = p0; /* _line_start on <self:Object(Location)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#Location#line_end for (self: Location): Int */
long location__Location__line_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_end for (self: Object): Int */
long VIRTUAL_location__Location__line_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline location#Location#line_end (self) on <self:Object(Location)> */
var3 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Object(Location)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_end= for (self: Location, Int) */
void location__Location__line_end_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___line_end].l = p0; /* _line_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_end= for (self: Object, Int) */
void VIRTUAL_location__Location__line_end_61d(val* self, long p0) {
{ /* Inline location#Location#line_end= (self,p0) on <self:Object(Location)> */
self->attrs[COLOR_location__Location___line_end].l = p0; /* _line_end on <self:Object(Location)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#Location#column_start for (self: Location): Int */
long location__Location__column_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_start for (self: Object): Int */
long VIRTUAL_location__Location__column_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline location#Location#column_start (self) on <self:Object(Location)> */
var3 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Object(Location)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_start= for (self: Location, Int) */
void location__Location__column_start_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___column_start].l = p0; /* _column_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_start= for (self: Object, Int) */
void VIRTUAL_location__Location__column_start_61d(val* self, long p0) {
{ /* Inline location#Location#column_start= (self,p0) on <self:Object(Location)> */
self->attrs[COLOR_location__Location___column_start].l = p0; /* _column_start on <self:Object(Location)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#Location#column_end for (self: Location): Int */
long location__Location__column_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_end for (self: Object): Int */
long VIRTUAL_location__Location__column_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline location#Location#column_end (self) on <self:Object(Location)> */
var3 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Object(Location)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_end= for (self: Location, Int) */
void location__Location__column_end_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___column_end].l = p0; /* _column_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_end= for (self: Object, Int) */
void VIRTUAL_location__Location__column_end_61d(val* self, long p0) {
{ /* Inline location#Location#column_end= (self,p0) on <self:Object(Location)> */
self->attrs[COLOR_location__Location___column_end].l = p0; /* _column_end on <self:Object(Location)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#Location#init for (self: Location, nullable SourceFile, Int, Int, Int, Int) */
void location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4) {
val* var_f /* var f: nullable SourceFile */;
long var_line_s /* var line_s: Int */;
long var_line_e /* var line_e: Int */;
long var_column_s /* var column_s: Int */;
long var_column_e /* var column_e: Int */;
var_f = p0;
var_line_s = p1;
var_line_e = p2;
var_column_s = p3;
var_column_e = p4;
{
{ /* Inline location#Location#file= (self,var_f) on <self:Location> */
self->attrs[COLOR_location__Location___file].val = var_f; /* _file on <self:Location> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline location#Location#line_start= (self,var_line_s) on <self:Location> */
self->attrs[COLOR_location__Location___line_start].l = var_line_s; /* _line_start on <self:Location> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline location#Location#line_end= (self,var_line_e) on <self:Location> */
self->attrs[COLOR_location__Location___line_end].l = var_line_e; /* _line_end on <self:Location> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline location#Location#column_start= (self,var_column_s) on <self:Location> */
self->attrs[COLOR_location__Location___column_start].l = var_column_s; /* _column_start on <self:Location> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline location#Location#column_end= (self,var_column_e) on <self:Location> */
self->attrs[COLOR_location__Location___column_end].l = var_column_e; /* _column_end on <self:Location> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method location#Location#init for (self: Object, nullable SourceFile, Int, Int, Int, Int) */
void VIRTUAL_location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4) {
location__Location__init(self, p0, p1, p2, p3, p4); /* Direct call location#Location#init on <self:Object(Location)>*/
RET_LABEL:;
}
/* method location#Location#pstart for (self: Location): Int */
long location__Location__pstart(val* self) {
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
var3 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 68);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var9 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var14 = var7 - var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = array__Array___91d_93d(var4, var11);
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var18 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
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
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var25 = ((struct instance_kernel__Int*)var15)->value; /* autounbox from nullable Object to Int */;
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
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
/* method location#Location#pstart for (self: Object): Int */
long VIRTUAL_location__Location__pstart(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = location__Location__pstart(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#pend for (self: Location): Int */
long location__Location__pend(val* self) {
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
var3 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 71);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var9 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var14 = var7 - var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = array__Array___91d_93d(var4, var11);
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var18 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
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
var_class_name24 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var25 = ((struct instance_kernel__Int*)var15)->value; /* autounbox from nullable Object to Int */;
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
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
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
/* method location#Location#pend for (self: Object): Int */
long VIRTUAL_location__Location__pend(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = location__Location__pend(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text for (self: Location): String */
val* location__Location__text(val* self) {
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
short int var10 /* : Bool */;
val* var_l /* var l: Location */;
long var11 /* : Int */;
long var_pstart /* var pstart: Int */;
long var12 /* : Int */;
long var_pend /* var pend: Int */;
val* var13 /* : nullable SourceFile */;
val* var15 /* : nullable SourceFile */;
val* var16 /* : String */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var31 /* : String */;
{
{ /* Inline location#Location#text_cache (self) on <self:Location> */
var3 = self->attrs[COLOR_location__Location___text_cache].val; /* _text_cache on <self:Location> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
var11 = location__Location__pstart(self);
}
var_pstart = var11;
{
var12 = location__Location__pend(self);
}
var_pend = var12;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var15 = var_l->attrs[COLOR_location__Location___file].val; /* _file on <var_l:Location> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 81);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#string (var13) on <var13:nullable SourceFile> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 25);
show_backtrace(1);
}
var18 = var13->attrs[COLOR_location__SourceFile___string].val; /* _string on <var13:nullable SourceFile> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 25);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_pend,var_pstart) on <var_pend:Int> */
/* Covariant cast for argument 0 (i) <var_pstart:Int> isa OTHER */
/* <var_pstart:Int> isa OTHER */
var21 = 1; /* easy <var_pstart:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var22 = var_pend - var_pstart;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var23 = 1;
{
{ /* Inline kernel#Int#+ (var19,var23) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var30 = var19 + var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var31 = string__FlatString__substring(var16, var_pstart, var24);
}
var_res = var31;
{
{ /* Inline location#Location#text_cache= (self,var_res) on <self:Location> */
self->attrs[COLOR_location__Location___text_cache].val = var_res; /* _text_cache on <self:Location> */
RET_LABEL32:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#text for (self: Object): String */
val* VIRTUAL_location__Location__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = location__Location__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache for (self: Location): nullable String */
val* location__Location__text_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_location__Location___text_cache].val; /* _text_cache on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache for (self: Object): nullable String */
val* VIRTUAL_location__Location__text_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline location#Location#text_cache (self) on <self:Object(Location)> */
var3 = self->attrs[COLOR_location__Location___text_cache].val; /* _text_cache on <self:Object(Location)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache= for (self: Location, nullable String) */
void location__Location__text_cache_61d(val* self, val* p0) {
self->attrs[COLOR_location__Location___text_cache].val = p0; /* _text_cache on <self:Location> */
RET_LABEL:;
}
/* method location#Location#text_cache= for (self: Object, nullable String) */
void VIRTUAL_location__Location__text_cache_61d(val* self, val* p0) {
{ /* Inline location#Location#text_cache= (self,p0) on <self:Object(Location)> */
self->attrs[COLOR_location__Location___text_cache].val = p0; /* _text_cache on <self:Object(Location)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method location#Location#== for (self: Location, nullable Object): Bool */
short int location__Location___61d_61d(val* self, val* p0) {
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
short int var21 /* : Bool */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
var_other = p0;
var1 = NULL;
if (var_other == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Object___61d_61d]))(var_other, var1) /* == on <var_other:nullable Object>*/;
var2 = var3;
}
if (var2){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Object)> isa Location */
cltype = type_location__Location.color;
idtype = type_location__Location.id;
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
var10 = var_other->attrs[COLOR_location__Location___file].val; /* _file on <var_other:nullable Object(Location)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline location#Location#file (self) on <self:Location> */
var13 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Location> */
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
var19 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var_other17) /* == on <var8:nullable SourceFile(SourceFile)>*/;
var18 = var19;
}
var20 = !var18;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var21 = 0;
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:nullable Object(Location)> */
var24 = var_other->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_other:nullable Object(Location)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var27 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var22,var25) on <var22:Int> */
var31 = var22 == var25;
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
var33 = 0;
var = var33;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:nullable Object(Location)> */
var36 = var_other->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_other:nullable Object(Location)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var39 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var34,var37) on <var34:Int> */
var43 = var34 == var37;
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
var45 = 0;
var = var45;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:nullable Object(Location)> */
var48 = var_other->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_other:nullable Object(Location)> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var51 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var46,var49) on <var46:Int> */
var55 = var46 == var49;
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
var57 = 0;
var = var57;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_end (var_other) on <var_other:nullable Object(Location)> */
var60 = var_other->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_other:nullable Object(Location)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var63 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var58,var61) on <var58:Int> */
var67 = var58 == var61;
var68 = !var67;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
var69 = 0;
var = var69;
goto RET_LABEL;
} else {
}
var70 = 1;
var = var70;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_location__Location___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = location__Location___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#located_in for (self: Location, nullable Location): Bool */
short int location__Location__located_in(val* self, val* p0) {
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
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
long var83 /* : Int */;
long var85 /* : Int */;
long var86 /* : Int */;
long var88 /* : Int */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var_ /* var : Bool */;
long var93 /* : Int */;
long var95 /* : Int */;
long var96 /* : Int */;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
var_loc = p0;
var1 = NULL;
if (var_loc == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = location__Location___61d_61d(var_loc, var1);
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
var7 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:nullable Location(Location)> */
var10 = var_loc->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
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
var18 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var21 = var_loc->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
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
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
var32 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var35 = var_loc->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
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
var_class_name41 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
var46 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:nullable Location(Location)> */
var49 = var_loc->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var44,var47) on <var44:Int> */
var53 = var44 == var47;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var56 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_loc) on <var_loc:nullable Location(Location)> */
var59 = var_loc->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_loc:nullable Location(Location)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var54,var57) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var57:Int> isa OTHER */
/* <var57:Int> isa OTHER */
var62 = 1; /* easy <var57:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var66 = var54 < var57;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
var67 = 0;
var = var67;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var70 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_loc) on <var_loc:nullable Location(Location)> */
var73 = var_loc->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var68,var71) on <var68:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var76 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var80 = var68 > var71;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
var81 = 0;
var = var81;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var85 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_loc) on <var_loc:nullable Location(Location)> */
var88 = var_loc->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var83,var86) on <var83:Int> */
var92 = var83 == var86;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var89 = var90;
}
var_ = var89;
if (var89){
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var95 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_loc) on <var_loc:nullable Location(Location)> */
var98 = var_loc->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var93,var96) on <var93:Int> */
/* Covariant cast for argument 0 (i) <var96:Int> isa OTHER */
/* <var96:Int> isa OTHER */
var101 = 1; /* easy <var96:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var105 = var93 > var96;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var82 = var99;
} else {
var82 = var_;
}
if (var82){
var106 = 0;
var = var106;
goto RET_LABEL;
} else {
}
var107 = 1;
var = var107;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#located_in for (self: Object, nullable Location): Bool */
short int VIRTUAL_location__Location__located_in(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = location__Location__located_in(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#to_s for (self: Location): String */
val* location__Location__to_s(val* self) {
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
short int var14 /* : Bool */;
val* var15 /* : nullable SourceFile */;
val* var17 /* : nullable SourceFile */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : nullable SourceFile */;
val* var23 /* : nullable SourceFile */;
val* var24 /* : String */;
val* var26 /* : String */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var63 /* : Int */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
long var69 /* : Int */;
long var71 /* : Int */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : Object */;
val* var76 /* : Object */;
val* var77 /* : String */;
long var78 /* : Int */;
long var80 /* : Int */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
long var86 /* : Int */;
long var88 /* : Int */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
long var94 /* : Int */;
long var96 /* : Int */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : Object */;
val* var101 /* : Object */;
val* var102 /* : Object */;
val* var103 /* : String */;
long var104 /* : Int */;
long var106 /* : Int */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
long var112 /* : Int */;
long var114 /* : Int */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
long var120 /* : Int */;
long var122 /* : Int */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
long var128 /* : Int */;
long var130 /* : Int */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : Object */;
val* var135 /* : Object */;
val* var136 /* : Object */;
val* var137 /* : Object */;
val* var138 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var_file_part = var1;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var7 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Location> */
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
var13 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_other) /* == on <var5:nullable SourceFile(SourceFile)>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline location#Location#file (self) on <self:Location> */
var17 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 125);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var15) on <var15:nullable SourceFile> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var20 = var15->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var15:nullable SourceFile> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_file_part = var18;
{
{ /* Inline location#Location#file (self) on <self:Location> */
var23 = self->attrs[COLOR_location__Location___file].val; /* _file on <self:Location> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 126);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var21) on <var21:nullable SourceFile> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var21:nullable SourceFile> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var24) on <var24:String> */
var29 = var24->attrs[COLOR_string__FlatText___length].l; /* _length on <var24:String> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = 0;
{
{ /* Inline kernel#Int#> (var27,var30) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var34 = var27 > var30;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
if (varonce35) {
var36 = varonce35;
} else {
var37 = ":";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
var40 = string__FlatString___43d(var_file_part, var36);
}
var_file_part = var40;
} else {
}
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var43 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var46 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var41,var44) on <var41:Int> */
var50 = var41 == var44;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var53 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var56 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var51,var54) on <var51:Int> */
var60 = var51 == var54;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var63 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ",";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var71 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 4;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var_file_part;
var75 = BOX_kernel__Int(var61); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var75;
((struct instance_array__NativeArray*)var74)->values[2] = (val*) var65;
var76 = BOX_kernel__Int(var69); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var74)->values[3] = (val*) var76;
{
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
var = var77;
goto RET_LABEL;
} else {
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var80 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = ",";
var84 = 1;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var88 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = "--";
var92 = 2;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var96 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 6;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var_file_part;
var100 = BOX_kernel__Int(var78); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var100;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var82;
var101 = BOX_kernel__Int(var86); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var99)->values[3] = (val*) var101;
((struct instance_array__NativeArray*)var99)->values[4] = (val*) var90;
var102 = BOX_kernel__Int(var94); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var99)->values[5] = (val*) var102;
{
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
}
{
var103 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
}
var = var103;
goto RET_LABEL;
}
} else {
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var106 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ",";
var110 = 1;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var114 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = "--";
var118 = 2;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var122 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = ",";
var126 = 1;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var130 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 8;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var_file_part;
var134 = BOX_kernel__Int(var104); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var133)->values[1] = (val*) var134;
((struct instance_array__NativeArray*)var133)->values[2] = (val*) var108;
var135 = BOX_kernel__Int(var112); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var133)->values[3] = (val*) var135;
((struct instance_array__NativeArray*)var133)->values[4] = (val*) var116;
var136 = BOX_kernel__Int(var120); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var133)->values[5] = (val*) var136;
((struct instance_array__NativeArray*)var133)->values[6] = (val*) var124;
var137 = BOX_kernel__Int(var128); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var133)->values[7] = (val*) var137;
{
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
}
var = var138;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method location#Location#to_s for (self: Object): String */
val* VIRTUAL_location__Location__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = location__Location__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#< for (self: Location, Location): Bool */
short int location__Location___60d(val* self, val* p0) {
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
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
long var57 /* : Int */;
long var59 /* : Int */;
long var60 /* : Int */;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
short int var80 /* : Bool */;
long var81 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
long var86 /* : Int */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
short int var93 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Location> isa OTHER */
/* <p0:Location> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
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
PRINT_ERROR(" (%s:%d)\n", "location.nit", 153);
show_backtrace(1);
}
var_other = p0;
{
var3 = location__Location___61d_61d(self, var_other);
var2 = var3;
}
if (var2){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = location__Location__located_in(self, var_other);
}
if (var5){
var6 = 1;
var = var6;
goto RET_LABEL;
} else {
}
{
var7 = location__Location__located_in(var_other, self);
}
if (var7){
var8 = 0;
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var11 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:Location> */
var14 = var_other->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_other:Location> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var9,var12) on <var9:Int> */
var18 = var9 == var12;
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline location#Location#line_start (self) on <self:Location> */
var22 = self->attrs[COLOR_location__Location___line_start].l; /* _line_start on <self:Location> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var_other) on <var_other:Location> */
var25 = var_other->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_other:Location> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var20,var23) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var28 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var32 = var20 < var23;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var35 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:Location> */
var38 = var_other->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_other:Location> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var33,var36) on <var33:Int> */
var42 = var33 == var36;
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
{ /* Inline location#Location#column_start (self) on <self:Location> */
var46 = self->attrs[COLOR_location__Location___column_start].l; /* _column_start on <self:Location> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_other) on <var_other:Location> */
var49 = var_other->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_other:Location> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var44,var47) on <var44:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var52 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var56 = var44 < var47;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var = var50;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var59 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:Location> */
var62 = var_other->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_other:Location> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var57,var60) on <var57:Int> */
var66 = var57 == var60;
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
{
{ /* Inline location#Location#line_end (self) on <self:Location> */
var70 = self->attrs[COLOR_location__Location___line_end].l; /* _line_end on <self:Location> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline location#Location#line_end (var_other) on <var_other:Location> */
var73 = var_other->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_other:Location> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var68,var71) on <var68:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var76 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var80 = var68 < var71;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var = var74;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#column_end (self) on <self:Location> */
var83 = self->attrs[COLOR_location__Location___column_end].l; /* _column_end on <self:Location> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline location#Location#column_end (var_other) on <var_other:Location> */
var86 = var_other->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_other:Location> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var81,var84) on <var81:Int> */
/* Covariant cast for argument 0 (i) <var84:Int> isa OTHER */
/* <var84:Int> isa OTHER */
var89 = 1; /* easy <var84:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var93 = var81 < var84;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var = var87;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#< for (self: Object, Comparable): Bool */
short int VIRTUAL_location__Location___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = location__Location___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#colored_line for (self: Location, String): String */
val* location__Location__colored_line(val* self, val* p0) {
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
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
short int var_ /* var : Bool */;
val* var71 /* : SequenceRead[Char] */;
val* var73 /* : SequenceRead[Char] */;
long var74 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
val* var82 /* : nullable Object */;
char var83 /* : Char */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
char var88 /* : Char */;
short int var89 /* : Bool */;
short int var_90 /* var : Bool */;
val* var91 /* : SequenceRead[Char] */;
val* var93 /* : SequenceRead[Char] */;
long var94 /* : Int */;
long var95 /* : Int */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
long var101 /* : Int */;
val* var102 /* : nullable Object */;
char var103 /* : Char */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
char var108 /* : Char */;
short int var109 /* : Bool */;
long var110 /* : Int */;
long var111 /* : Int */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
const char* var_class_name116;
long var117 /* : Int */;
long var118 /* : Int */;
long var120 /* : Int */;
long var121 /* : Int */;
long var122 /* : Int */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
long var128 /* : Int */;
val* var129 /* : String */;
val* var_lstart /* var lstart: String */;
long var130 /* : Int */;
long var132 /* : Int */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
long var138 /* : Int */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
long var144 /* : Int */;
long var145 /* : Int */;
long var146 /* : Int */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const char* var_class_name151;
long var152 /* : Int */;
val* var153 /* : nullable Object */;
val* var_cend /* var cend: nullable Object */;
long var154 /* : Int */;
long var156 /* : Int */;
val* var157 /* : nullable Object */;
long var158 /* : Int */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name163;
long var164 /* : Int */;
long var165 /* : Int */;
long var166 /* : Int */;
long var168 /* : Int */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
int cltype172;
int idtype173;
const char* var_class_name174;
short int var175 /* : Bool */;
long var176 /* : Int */;
long var178 /* : Int */;
long var179 /* : Int */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
long var185 /* : Int */;
long var186 /* : Int */;
long var187 /* : Int */;
short int var189 /* : Bool */;
int cltype190;
int idtype191;
const char* var_class_name192;
long var193 /* : Int */;
long var194 /* : Int */;
long var196 /* : Int */;
long var197 /* : Int */;
short int var199 /* : Bool */;
int cltype200;
int idtype201;
const char* var_class_name202;
long var203 /* : Int */;
long var204 /* : Int */;
long var205 /* : Int */;
long var206 /* : Int */;
short int var208 /* : Bool */;
int cltype209;
int idtype210;
const char* var_class_name211;
long var212 /* : Int */;
val* var213 /* : String */;
val* var_lmid /* var lmid: nullable Object */;
long var214 /* : Int */;
short int var216 /* : Bool */;
int cltype217;
int idtype218;
const char* var_class_name219;
long var220 /* : Int */;
long var221 /* : Int */;
long var222 /* : Int */;
short int var224 /* : Bool */;
int cltype225;
int idtype226;
const char* var_class_name227;
long var228 /* : Int */;
long var229 /* : Int */;
short int var231 /* : Bool */;
int cltype232;
int idtype233;
const char* var_class_name234;
long var235 /* : Int */;
long var236 /* : Int */;
long var237 /* : Int */;
long var238 /* : Int */;
short int var240 /* : Bool */;
int cltype241;
int idtype242;
const char* var_class_name243;
long var244 /* : Int */;
val* var245 /* : String */;
val* var_lend /* var lend: nullable Object */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
long var249 /* : Int */;
val* var250 /* : FlatString */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
long var254 /* : Int */;
val* var255 /* : FlatString */;
val* var256 /* : FlatBuffer */;
val* var_indent /* var indent: FlatBuffer */;
long var_j /* var j: Int */;
long var257 /* : Int */;
long var259 /* : Int */;
long var260 /* : Int */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
const char* var_class_name265;
long var266 /* : Int */;
long var267 /* : Int */;
long var268 /* : Int */;
short int var270 /* : Bool */;
int cltype271;
int idtype272;
const char* var_class_name273;
long var274 /* : Int */;
long var_275 /* var : Int */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
int cltype279;
int idtype280;
const char* var_class_name281;
short int var282 /* : Bool */;
val* var283 /* : SequenceRead[Char] */;
val* var285 /* : SequenceRead[Char] */;
val* var286 /* : nullable Object */;
char var287 /* : Char */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var291 /* : Bool */;
char var292 /* : Char */;
char var293 /* : Char */;
char var294 /* : Char */;
long var295 /* : Int */;
long var296 /* : Int */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : FlatString */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
val* var313 /* : Array[Object] */;
long var314 /* : Int */;
val* var315 /* : NativeArray[Object] */;
val* var316 /* : String */;
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
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
var12 = BOX_kernel__Char(var_esc); /* autobox from Char to Object */
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
var_def = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "[";
var17 = 1;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "m";
var22 = 1;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 4;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
var27 = BOX_kernel__Char(var_esc); /* autobox from Char to Object */
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var_color;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
var_col = var28;
var_l = self;
{
{ /* Inline location#Location#line_start (var_l) on <var_l:Location> */
var31 = var_l->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var_l:Location> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_i = var29;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var34 = var_l->attrs[COLOR_location__Location___file].val; /* _file on <var_l:Location> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 178);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#line_starts (var32) on <var32:nullable SourceFile> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var37 = var32->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var32:nullable SourceFile> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var42 = var_i - var38;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var43 = array__Array___91d_93d(var35, var39);
}
var44 = ((struct instance_kernel__Int*)var43)->value; /* autounbox from nullable Object to Int */;
var_line_start = var44;
var_line_end = var_line_start;
{
{ /* Inline location#Location#file (var_l) on <var_l:Location> */
var47 = var_l->attrs[COLOR_location__Location___file].val; /* _file on <var_l:Location> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 180);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#string (var45) on <var45:nullable SourceFile> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 25);
show_backtrace(1);
}
var50 = var45->attrs[COLOR_location__SourceFile___string].val; /* _string on <var45:nullable SourceFile> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 25);
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
var_class_name59 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var60 = var_line_end + var53;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_string) on <var_string:String> */
var63 = var_string->attrs[COLOR_string__FlatText___length].l; /* _length on <var_string:String> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var54,var61) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var61:Int> isa OTHER */
/* <var61:Int> isa OTHER */
var66 = 1; /* easy <var61:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var70 = var54 < var61;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_ = var64;
if (var64){
{
{ /* Inline string#FlatString#chars (var_string) on <var_string:String> */
var73 = var_string->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_string:String> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
var74 = 1;
{
{ /* Inline kernel#Int#+ (var_line_end,var74) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var74:Int> isa OTHER */
/* <var74:Int> isa OTHER */
var77 = 1; /* easy <var74:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var81 = var_line_end + var74;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
var82 = ((val* (*)(val*, long))(var71->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var71, var75) /* [] on <var71:SequenceRead[Char]>*/;
}
var83 = '\n';
{
{ /* Inline kernel#Char#!= (var82,var83) on <var82:nullable Object(Char)> */
var87 = (var82 != NULL) && (var82->class == &class_kernel__Char);
if (var87) {
var88 = ((struct instance_kernel__Char*)var82)->value; /* autounbox from nullable Object to Char */;
var87 = (var88 == var83);
}
var89 = !var87;
var85 = var89;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
var52 = var84;
} else {
var52 = var_;
}
var_90 = var52;
if (var52){
{
{ /* Inline string#FlatString#chars (var_string) on <var_string:String> */
var93 = var_string->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_string:String> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
var94 = 1;
{
{ /* Inline kernel#Int#+ (var_line_end,var94) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var94:Int> isa OTHER */
/* <var94:Int> isa OTHER */
var97 = 1; /* easy <var94:Int> isa OTHER*/
if (unlikely(!var97)) {
var_class_name100 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var101 = var_line_end + var94;
var95 = var101;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
{
var102 = ((val* (*)(val*, long))(var91->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var91, var95) /* [] on <var91:SequenceRead[Char]>*/;
}
var103 = '\15';
{
{ /* Inline kernel#Char#!= (var102,var103) on <var102:nullable Object(Char)> */
var107 = (var102 != NULL) && (var102->class == &class_kernel__Char);
if (var107) {
var108 = ((struct instance_kernel__Char*)var102)->value; /* autounbox from nullable Object to Char */;
var107 = (var108 == var103);
}
var109 = !var107;
var105 = var109;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
var51 = var104;
} else {
var51 = var_90;
}
if (var51){
var110 = 1;
{
{ /* Inline kernel#Int#+ (var_line_end,var110) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var110:Int> isa OTHER */
/* <var110:Int> isa OTHER */
var113 = 1; /* easy <var110:Int> isa OTHER*/
if (unlikely(!var113)) {
var_class_name116 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var117 = var_line_end + var110;
var111 = var117;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
var_line_end = var111;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var120 = var_l->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_l:Location> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
var121 = 1;
{
{ /* Inline kernel#Int#- (var118,var121) on <var118:Int> */
/* Covariant cast for argument 0 (i) <var121:Int> isa OTHER */
/* <var121:Int> isa OTHER */
var124 = 1; /* easy <var121:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var128 = var118 - var121;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
var129 = string__FlatString__substring(var_string, var_line_start, var122);
}
var_lstart = var129;
{
{ /* Inline location#Location#line_end (var_l) on <var_l:Location> */
var132 = var_l->attrs[COLOR_location__Location___line_end].l; /* _line_end on <var_l:Location> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_i,var130) on <var_i:Int> */
var136 = var_i == var130;
var137 = !var136;
var134 = var137;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
var133 = var134;
}
if (var133){
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var140 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var144 = var_line_end - var_line_start;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var145 = 1;
{
{ /* Inline kernel#Int#+ (var138,var145) on <var138:Int> */
/* Covariant cast for argument 0 (i) <var145:Int> isa OTHER */
/* <var145:Int> isa OTHER */
var148 = 1; /* easy <var145:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name151 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var152 = var138 + var145;
var146 = var152;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var153 = BOX_kernel__Int(var146); /* autobox from Int to nullable Object */
var_cend = var153;
} else {
{
{ /* Inline location#Location#column_end (var_l) on <var_l:Location> */
var156 = var_l->attrs[COLOR_location__Location___column_end].l; /* _column_end on <var_l:Location> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
var157 = BOX_kernel__Int(var154); /* autobox from Int to nullable Object */
var_cend = var157;
}
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var160 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var160)) {
var_class_name163 = var_cend == NULL ? "null" : var_cend->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name163);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var164 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var165 = var_line_start + var164;
var158 = var165;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline string#FlatText#length (var_string) on <var_string:String> */
var168 = var_string->attrs[COLOR_string__FlatText___length].l; /* _length on <var_string:String> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var158,var166) on <var158:Int> */
/* Covariant cast for argument 0 (i) <var166:Int> isa OTHER */
/* <var166:Int> isa OTHER */
var171 = 1; /* easy <var166:Int> isa OTHER*/
if (unlikely(!var171)) {
var_class_name174 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name174);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var175 = var158 <= var166;
var169 = var175;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
}
if (var169){
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var178 = var_l->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_l:Location> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_line_start,var176) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var176:Int> isa OTHER */
/* <var176:Int> isa OTHER */
var181 = 1; /* easy <var176:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var185 = var_line_start + var176;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var186 = 1;
{
{ /* Inline kernel#Int#- (var179,var186) on <var179:Int> */
/* Covariant cast for argument 0 (i) <var186:Int> isa OTHER */
/* <var186:Int> isa OTHER */
var189 = 1; /* easy <var186:Int> isa OTHER*/
if (unlikely(!var189)) {
var_class_name192 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name192);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var193 = var179 - var186;
var187 = var193;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var196 = var_l->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_l:Location> */
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_cend,var194) on <var_cend:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var194:Int> isa OTHER */
/* <var194:Int> isa OTHER */
var199 = 1; /* easy <var194:Int> isa OTHER*/
if (unlikely(!var199)) {
var_class_name202 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name202);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var203 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var204 = var203 - var194;
var197 = var204;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
var205 = 1;
{
{ /* Inline kernel#Int#+ (var197,var205) on <var197:Int> */
/* Covariant cast for argument 0 (i) <var205:Int> isa OTHER */
/* <var205:Int> isa OTHER */
var208 = 1; /* easy <var205:Int> isa OTHER*/
if (unlikely(!var208)) {
var_class_name211 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name211);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var212 = var197 + var205;
var206 = var212;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
{
var213 = string__FlatString__substring(var_string, var187, var206);
}
var_lmid = var213;
{
{ /* Inline kernel#Int#+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var216 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var216)) {
var_class_name219 = var_cend == NULL ? "null" : var_cend->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name219);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var220 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var221 = var_line_start + var220;
var214 = var221;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var224 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var224)) {
var_class_name227 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name227);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var228 = var_line_end - var_line_start;
var222 = var228;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var222,var_cend) on <var222:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var231 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var231)) {
var_class_name234 = var_cend == NULL ? "null" : var_cend->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name234);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var235 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var236 = var222 - var235;
var229 = var236;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
}
var237 = 1;
{
{ /* Inline kernel#Int#+ (var229,var237) on <var229:Int> */
/* Covariant cast for argument 0 (i) <var237:Int> isa OTHER */
/* <var237:Int> isa OTHER */
var240 = 1; /* easy <var237:Int> isa OTHER*/
if (unlikely(!var240)) {
var_class_name243 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name243);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var244 = var229 + var237;
var238 = var244;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
}
{
var245 = string__FlatString__substring(var_string, var214, var238);
}
var_lend = var245;
} else {
if (varonce246) {
var247 = varonce246;
} else {
var248 = "";
var249 = 0;
var250 = string__NativeString__to_s_with_length(var248, var249);
var247 = var250;
varonce246 = var247;
}
var_lmid = var247;
if (varonce251) {
var252 = varonce251;
} else {
var253 = "";
var254 = 0;
var255 = string__NativeString__to_s_with_length(var253, var254);
var252 = var255;
varonce251 = var252;
}
var_lend = var252;
}
var256 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
((void (*)(val*))(var256->class->vft[COLOR_kernel__Object__init]))(var256) /* init on <var256:FlatBuffer>*/;
}
var_indent = var256;
var_j = var_line_start;
{
{ /* Inline location#Location#column_start (var_l) on <var_l:Location> */
var259 = var_l->attrs[COLOR_location__Location___column_start].l; /* _column_start on <var_l:Location> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_line_start,var257) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var257:Int> isa OTHER */
/* <var257:Int> isa OTHER */
var262 = 1; /* easy <var257:Int> isa OTHER*/
if (unlikely(!var262)) {
var_class_name265 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name265);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var266 = var_line_start + var257;
var260 = var266;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
}
var267 = 1;
{
{ /* Inline kernel#Int#- (var260,var267) on <var260:Int> */
/* Covariant cast for argument 0 (i) <var267:Int> isa OTHER */
/* <var267:Int> isa OTHER */
var270 = 1; /* easy <var267:Int> isa OTHER*/
if (unlikely(!var270)) {
var_class_name273 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name273);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var274 = var260 - var267;
var268 = var274;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
var_275 = var268;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_275) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_275:Int> isa OTHER */
/* <var_275:Int> isa OTHER */
var278 = 1; /* easy <var_275:Int> isa OTHER*/
if (unlikely(!var278)) {
var_class_name281 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name281);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var282 = var_j < var_275;
var276 = var282;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
if (var276){
{
{ /* Inline string#FlatString#chars (var_string) on <var_string:String> */
var285 = var_string->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_string:String> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var286 = ((val* (*)(val*, long))(var283->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var283, var_j) /* [] on <var283:SequenceRead[Char]>*/;
}
var287 = '\11';
{
{ /* Inline kernel#Char#== (var286,var287) on <var286:nullable Object(Char)> */
var291 = (var286 != NULL) && (var286->class == &class_kernel__Char);
if (var291) {
var292 = ((struct instance_kernel__Char*)var286)->value; /* autounbox from nullable Object to Char */;
var291 = (var292 == var287);
}
var289 = var291;
goto RET_LABEL290;
RET_LABEL290:(void)0;
}
var288 = var289;
}
if (var288){
var293 = '\11';
{
string__FlatBuffer__add(var_indent, var293); /* Direct call string#FlatBuffer#add on <var_indent:FlatBuffer>*/
}
} else {
var294 = ' ';
{
string__FlatBuffer__add(var_indent, var294); /* Direct call string#FlatBuffer#add on <var_indent:FlatBuffer>*/
}
}
var295 = 1;
{
var296 = kernel__Int__successor(var_j, var295);
}
var_j = var296;
} else {
goto BREAK_label297;
}
}
BREAK_label297: (void)0;
if (varonce298) {
var299 = varonce298;
} else {
var300 = "\11";
var301 = 1;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = "\n\11";
var306 = 2;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
if (varonce308) {
var309 = varonce308;
} else {
var310 = "^";
var311 = 1;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
var313 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var313 = array_instance Array[Object] */
var314 = 9;
var315 = NEW_array__NativeArray(var314, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var315)->values[0] = (val*) var299;
((struct instance_array__NativeArray*)var315)->values[1] = (val*) var_lstart;
((struct instance_array__NativeArray*)var315)->values[2] = (val*) var_col;
((struct instance_array__NativeArray*)var315)->values[3] = (val*) var_lmid;
((struct instance_array__NativeArray*)var315)->values[4] = (val*) var_def;
((struct instance_array__NativeArray*)var315)->values[5] = (val*) var_lend;
((struct instance_array__NativeArray*)var315)->values[6] = (val*) var304;
((struct instance_array__NativeArray*)var315)->values[7] = (val*) var_indent;
((struct instance_array__NativeArray*)var315)->values[8] = (val*) var309;
{
((void (*)(val*, val*, long))(var313->class->vft[COLOR_array__Array__with_native]))(var313, var315, var314) /* with_native on <var313:Array[Object]>*/;
}
}
{
var316 = ((val* (*)(val*))(var313->class->vft[COLOR_string__Object__to_s]))(var313) /* to_s on <var313:Array[Object]>*/;
}
var = var316;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#colored_line for (self: Object, String): String */
val* VIRTUAL_location__Location__colored_line(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = location__Location__colored_line(self, p0);
var = var1;
RET_LABEL:;
return var;
}
