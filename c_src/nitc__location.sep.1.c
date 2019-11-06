#include "nitc__location.sep.0.h"
/* method location$SourceFile$filename for (self: SourceFile): String */
val* nitc___nitc__SourceFile___filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location$SourceFile$filename= for (self: SourceFile, String) */
void nitc___nitc__SourceFile___filename_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__location__SourceFile___filename].val = p0; /* _filename on <self:SourceFile> */
RET_LABEL:;
}
/* method location$SourceFile$string for (self: SourceFile): String */
val* nitc___nitc__SourceFile___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__location__SourceFile___string].val; /* _string on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location$SourceFile$string= for (self: SourceFile, String) */
void nitc___nitc__SourceFile___string_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__location__SourceFile___string].val = p0; /* _string on <self:SourceFile> */
RET_LABEL:;
}
/* method location$SourceFile$stream for (self: SourceFile): Reader */
val* nitc___nitc__SourceFile___stream(val* self) {
val* var /* : Reader */;
val* var1 /* : Reader */;
var1 = self->attrs[COLOR_nitc__location__SourceFile___stream].val; /* _stream on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location$SourceFile$stream= for (self: SourceFile, Reader) */
void nitc___nitc__SourceFile___stream_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__location__SourceFile___stream].val = p0; /* _stream on <self:SourceFile> */
RET_LABEL:;
}
/* method location$SourceFile$init for (self: SourceFile) */
void nitc___nitc__SourceFile___core__kernel__Object__init(val* self) {
val* var /* : Reader */;
val* var2 /* : Reader */;
val* var3 /* : String */;
val* var5 /* : Array[Int] */;
val* var7 /* : Array[Int] */;
val* var8 /* : nullable Object */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SourceFile___core__kernel__Object__init]))(self); /* init on <self:SourceFile>*/
}
{
{ /* Inline location$SourceFile$stream (self) on <self:SourceFile> */
var2 = self->attrs[COLOR_nitc__location__SourceFile___stream].val; /* _stream on <self:SourceFile> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 28);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__Reader___read_all(var);
}
{
{ /* Inline location$SourceFile$string= (self,var3) on <self:SourceFile> */
self->attrs[COLOR_nitc__location__SourceFile___string].val = var3; /* _string on <self:SourceFile> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline location$SourceFile$line_starts (self) on <self:SourceFile> */
var7 = self->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = (val*)(0l<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var5, 0l, var8); /* Direct call array$Array$[]= on <var5:Array[Int]>*/
}
RET_LABEL:;
}
/* method location$SourceFile$from_string for (self: SourceFile, String, String) */
void nitc___nitc__SourceFile___from_string(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_string /* var string: String */;
val* var /* : Array[Int] */;
val* var4 /* : Array[Int] */;
val* var5 /* : nullable Object */;
var_filename = p0;
var_string = p1;
{
{ /* Inline location$SourceFile$filename= (self,var_filename) on <self:SourceFile> */
self->attrs[COLOR_nitc__location__SourceFile___filename].val = var_filename; /* _filename on <self:SourceFile> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline location$SourceFile$string= (self,var_string) on <self:SourceFile> */
self->attrs[COLOR_nitc__location__SourceFile___string].val = var_string; /* _string on <self:SourceFile> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline location$SourceFile$line_starts (self) on <self:SourceFile> */
var4 = self->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = (val*)(0l<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var, 0l, var5); /* Direct call array$Array$[]= on <var:Array[Int]>*/
}
RET_LABEL:;
}
/* method location$SourceFile$line_starts for (self: SourceFile): Array[Int] */
val* nitc___nitc__SourceFile___line_starts(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method location$Location$file for (self: Location): nullable SourceFile */
val* nitc___nitc__Location___file(val* self) {
val* var /* : nullable SourceFile */;
val* var1 /* : nullable SourceFile */;
var1 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location$Location$file= for (self: Location, nullable SourceFile) */
void nitc___nitc__Location___file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__location__Location___file].val = p0; /* _file on <self:Location> */
RET_LABEL:;
}
/* method location$Location$line_start for (self: Location): Int */
long nitc___nitc__Location___line_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location$Location$line_start= for (self: Location, Int) */
void nitc___nitc__Location___line_start_61d(val* self, long p0) {
self->attrs[COLOR_nitc__location__Location___line_start].l = p0; /* _line_start on <self:Location> */
RET_LABEL:;
}
/* method location$Location$line_end for (self: Location): Int */
long nitc___nitc__Location___line_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location$Location$line_end= for (self: Location, Int) */
void nitc___nitc__Location___line_end_61d(val* self, long p0) {
self->attrs[COLOR_nitc__location__Location___line_end].l = p0; /* _line_end on <self:Location> */
RET_LABEL:;
}
/* method location$Location$column_start for (self: Location): Int */
long nitc___nitc__Location___column_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location$Location$column_start= for (self: Location, Int) */
void nitc___nitc__Location___column_start_61d(val* self, long p0) {
self->attrs[COLOR_nitc__location__Location___column_start].l = p0; /* _column_start on <self:Location> */
RET_LABEL:;
}
/* method location$Location$column_end for (self: Location): Int */
long nitc___nitc__Location___column_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location$Location$column_end= for (self: Location, Int) */
void nitc___nitc__Location___column_end_61d(val* self, long p0) {
self->attrs[COLOR_nitc__location__Location___column_end].l = p0; /* _column_end on <self:Location> */
RET_LABEL:;
}
/* method location$Location$opaque_file for (self: Location, String) */
void nitc___nitc__Location___opaque_file(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : SourceFile */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var_source /* var source: SourceFile */;
var_path = p0;
var = NEW_nitc__SourceFile(&type_nitc__SourceFile);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var4 = (val*)(0l<<2|1);
var5 = (val*)(0l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__SourceFile___from_string(var, var_path, var1); /* Direct call location$SourceFile$from_string on <var:SourceFile>*/
}
var_source = var;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__location__Location__file_61d]))(self, var_source); /* file= on <self:Location>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nitc__location__Location__line_start_61d]))(self, 0l); /* line_start= on <self:Location>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nitc__location__Location__line_end_61d]))(self, 0l); /* line_end= on <self:Location>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nitc__location__Location__column_start_61d]))(self, 0l); /* column_start= on <self:Location>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_nitc__location__Location__column_end_61d]))(self, 0l); /* column_end= on <self:Location>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Location>*/
}
RET_LABEL:;
}
/* method location$Location$pstart for (self: Location): Int */
long nitc___nitc__Location___pstart(val* self) {
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
{ /* Inline location$Location$file (self) on <self:Location> */
var3 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 167);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var9 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var7 - 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var14 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var4, var10);
}
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var17 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var14,var15) on <var14:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
{ /* Inline kernel$Int$- (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
/* method location$Location$pend for (self: Location): Int */
long nitc___nitc__Location___pend(val* self) {
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
{ /* Inline location$Location$file (self) on <self:Location> */
var3 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 170);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$line_starts (var1) on <var1:nullable SourceFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var1:nullable SourceFile> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline location$Location$line_end (self) on <self:Location> */
var9 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var7 - 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var14 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var4, var10);
}
{
{ /* Inline location$Location$column_end (self) on <self:Location> */
var17 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var14,var15) on <var14:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var20 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
{ /* Inline kernel$Int$- (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
/* method location$Location$text for (self: Location): String */
val* nitc___nitc__Location___text(val* self) {
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
{ /* Inline location$Location$text_cache (self) on <self:Location> */
var3 = self->attrs[COLOR_nitc__location__Location___text_cache].val; /* _text_cache on <self:Location> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
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
var9 = nitc___nitc__Location___pstart(self);
}
var_pstart = var9;
{
var10 = nitc___nitc__Location___pend(self);
}
var_pend = var10;
{
{ /* Inline location$Location$file (var_l) on <var_l:Location> */
var13 = var_l->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_l:Location> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 180);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$string (var11) on <var11:nullable SourceFile> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 25);
fatal_exit(1);
}
var16 = var11->attrs[COLOR_nitc__location__SourceFile___string].val; /* _string on <var11:nullable SourceFile> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 25);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_pend,var_pstart) on <var_pend:Int> */
/* Covariant cast for argument 0 (i) <var_pstart:Int> isa OTHER */
/* <var_pstart:Int> isa OTHER */
var19 = 1; /* easy <var_pstart:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var20 = var_pend - var_pstart;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var17,1l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var27 = var17 + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = ((val*(*)(val* self, long p0, long p1))(var14->class->vft[COLOR_core__abstract_text__Text__substring]))(var14, var_pstart, var21); /* substring on <var14:String>*/
}
var_res = var28;
{
{ /* Inline location$Location$text_cache= (self,var_res) on <self:Location> */
self->attrs[COLOR_nitc__location__Location___text_cache].val = var_res; /* _text_cache on <self:Location> */
RET_LABEL29:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location$Location$text_cache for (self: Location): nullable String */
val* nitc___nitc__Location___text_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__location__Location___text_cache].val; /* _text_cache on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location$Location$text_cache= for (self: Location, nullable String) */
void nitc___nitc__Location___text_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__location__Location___text_cache].val = p0; /* _text_cache on <self:Location> */
RET_LABEL:;
}
/* method location$Location$== for (self: Location, nullable Object): Bool */
short int nitc___nitc__Location___core__kernel__Object___61d_61d(val* self, val* p0) {
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
var2 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_other, ((val*)NULL)); /* == on <var_other:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Object)> isa Location */
cltype = type_nitc__Location.color;
idtype = type_nitc__Location.id;
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
{ /* Inline location$Location$file (var_other) on <var_other:nullable Object(Location)> */
var7 = var_other->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_other:nullable Object(Location)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline location$Location$file (self) on <self:Location> */
var10 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var5 == NULL) {
var11 = (var8 != NULL);
} else {
{ /* Inline kernel$Object$!= (var5,var8) on <var5:nullable SourceFile> */
var_other14 = var8;
{
var15 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other14); /* == on <var5:nullable SourceFile(SourceFile)>*/
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
{ /* Inline location$Location$line_start (var_other) on <var_other:nullable Object(Location)> */
var19 = var_other->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_other:nullable Object(Location)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var22 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var17,var20) on <var17:Int> */
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
{ /* Inline location$Location$line_end (var_other) on <var_other:nullable Object(Location)> */
var29 = var_other->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_other:nullable Object(Location)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline location$Location$line_end (self) on <self:Location> */
var32 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var27,var30) on <var27:Int> */
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
{ /* Inline location$Location$column_start (var_other) on <var_other:nullable Object(Location)> */
var39 = var_other->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_other:nullable Object(Location)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var42 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var37,var40) on <var37:Int> */
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
{ /* Inline location$Location$column_end (var_other) on <var_other:nullable Object(Location)> */
var49 = var_other->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_other:nullable Object(Location)> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline location$Location$column_end (self) on <self:Location> */
var52 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var47,var50) on <var47:Int> */
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
/* method location$Location$located_in for (self: Location, nullable Location): Bool */
short int nitc___nitc__Location___located_in(val* self, val* p0) {
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
var2 = nitc___nitc__Location___core__kernel__Object___61d_61d(var_loc, ((val*)NULL));
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var5 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var_loc) on <var_loc:nullable Location(Location)> */
var8 = var_loc->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var3,var6) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var11 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline location$Location$line_start (self) on <self:Location> */
var15 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_loc) on <var_loc:nullable Location(Location)> */
var18 = var_loc->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var13,var16) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var21 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline location$Location$line_end (self) on <self:Location> */
var28 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_loc) on <var_loc:nullable Location(Location)> */
var31 = var_loc->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var26,var29) on <var26:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var34 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline location$Location$line_start (self) on <self:Location> */
var41 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var_loc) on <var_loc:nullable Location(Location)> */
var44 = var_loc->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_loc:nullable Location(Location)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var39,var42) on <var39:Int> */
var47 = var39 == var42;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var50 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline location$Location$column_start (var_loc) on <var_loc:nullable Location(Location)> */
var53 = var_loc->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_loc:nullable Location(Location)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var48,var51) on <var48:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var56 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline location$Location$column_start (self) on <self:Location> */
var63 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline location$Location$column_end (var_loc) on <var_loc:nullable Location(Location)> */
var66 = var_loc->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var61,var64) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var69 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline location$Location$line_end (self) on <self:Location> */
var77 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_loc) on <var_loc:nullable Location(Location)> */
var80 = var_loc->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_loc:nullable Location(Location)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var75,var78) on <var75:Int> */
var83 = var75 == var78;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_ = var81;
if (var81){
{
{ /* Inline location$Location$column_end (self) on <self:Location> */
var86 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline location$Location$column_end (var_loc) on <var_loc:nullable Location(Location)> */
var89 = var_loc->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_loc:nullable Location(Location)> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var84,var87) on <var84:Int> */
/* Covariant cast for argument 0 (i) <var87:Int> isa OTHER */
/* <var87:Int> isa OTHER */
var92 = 1; /* easy <var87:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
/* method location$Location$to_s for (self: Location): String */
val* nitc___nitc__Location___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var_file_part /* var file_part: String */;
val* var8 /* : nullable SourceFile */;
val* var10 /* : nullable SourceFile */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable SourceFile */;
val* var18 /* : nullable SourceFile */;
val* var19 /* : String */;
val* var21 /* : String */;
long var22 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable SourceFile */;
val* var32 /* : nullable SourceFile */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : nullable SourceFile */;
val* var40 /* : nullable SourceFile */;
val* var41 /* : String */;
val* var43 /* : String */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
val* var60 /* : Text */;
long var61 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
long var89 /* : Int */;
long var91 /* : Int */;
val* var92 /* : String */;
long var93 /* : Int */;
long var95 /* : Int */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Bool */;
val* var115 /* : nullable Bool */;
long var116 /* : Int */;
long var118 /* : Int */;
val* var119 /* : String */;
long var120 /* : Int */;
long var122 /* : Int */;
val* var123 /* : String */;
long var124 /* : Int */;
long var126 /* : Int */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : CString */;
val* var150 /* : String */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Bool */;
val* var154 /* : nullable Bool */;
long var155 /* : Int */;
long var157 /* : Int */;
val* var158 /* : String */;
long var159 /* : Int */;
long var161 /* : Int */;
val* var162 /* : String */;
long var163 /* : Int */;
long var165 /* : Int */;
val* var166 /* : String */;
long var167 /* : Int */;
long var169 /* : Int */;
val* var170 /* : String */;
val* var171 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var4 = (val*)(0l<<2|1);
var5 = (val*)(0l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var_file_part = var1;
{
{ /* Inline location$Location$file (self) on <self:Location> */
var10 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var8,((val*)NULL)) on <var8:nullable SourceFile> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var_other); /* == on <var8:nullable SourceFile(SourceFile)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline location$Location$file (self) on <self:Location> */
var18 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 222);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var16) on <var16:nullable SourceFile> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var16:nullable SourceFile> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_file_part = var19;
} else {
}
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var24 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var22,0l) on <var22:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var27 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var28 = var22 <= 0l;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var = var_file_part;
goto RET_LABEL;
} else {
}
{
{ /* Inline location$Location$file (self) on <self:Location> */
var32 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var30,((val*)NULL)) on <var30:nullable SourceFile> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var30->class->vft[COLOR_core__kernel__Object___61d_61d]))(var30, var_other); /* == on <var30:nullable SourceFile(SourceFile)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
var_ = var33;
if (var33){
{
{ /* Inline location$Location$file (self) on <self:Location> */
var40 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 227);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$filename (var38) on <var38:nullable SourceFile> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var43 = var38->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var38:nullable SourceFile> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = ((long(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__Text__length]))(var41); /* length on <var41:String>*/
}
{
{ /* Inline kernel$Int$> (var44,0l) on <var44:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var47 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var51 = var44 > 0l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var29 = var45;
} else {
var29 = var_;
}
if (var29){
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = ":";
var56 = (val*)(1l<<2|1);
var57 = (val*)(1l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
{
var60 = ((val*(*)(val* self, val* p0))(var_file_part->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file_part, var53); /* + on <var_file_part:String>*/
}
var_file_part = var60;
} else {
}
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var63 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline location$Location$line_end (self) on <self:Location> */
var66 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var61,var64) on <var61:Int> */
var69 = var61 == var64;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var72 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline location$Location$column_end (self) on <self:Location> */
var75 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var70,var73) on <var70:Int> */
var78 = var70 == var73;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = ",";
var85 = (val*)(1l<<2|1);
var86 = (val*)(1l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[2]=var82;
} else {
var80 = varonce79;
varonce79 = NULL;
}
((struct instance_core__NativeArray*)var80)->values[0]=var_file_part;
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var91 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = core__flat___Int___core__abstract_text__Object__to_s(var89);
((struct instance_core__NativeArray*)var80)->values[1]=var92;
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var95 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = core__flat___Int___core__abstract_text__Object__to_s(var93);
((struct instance_core__NativeArray*)var80)->values[3]=var96;
{
var97 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
var = var97;
goto RET_LABEL;
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = ",";
var104 = (val*)(1l<<2|1);
var105 = (val*)(1l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[2]=var101;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "--";
var112 = (val*)(2l<<2|1);
var113 = (val*)(2l<<2|1);
var114 = (val*)((long)(0)<<2|3);
var115 = (val*)((long)(0)<<2|3);
var111 = core__flat___CString___to_s_unsafe(var110, var112, var113, var114, var115);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[4]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[0]=var_file_part;
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var118 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
var119 = core__flat___Int___core__abstract_text__Object__to_s(var116);
((struct instance_core__NativeArray*)var99)->values[1]=var119;
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var122 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
var123 = core__flat___Int___core__abstract_text__Object__to_s(var120);
((struct instance_core__NativeArray*)var99)->values[3]=var123;
{
{ /* Inline location$Location$column_end (self) on <self:Location> */
var126 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
var127 = core__flat___Int___core__abstract_text__Object__to_s(var124);
((struct instance_core__NativeArray*)var99)->values[5]=var127;
{
var128 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
var = var128;
goto RET_LABEL;
}
} else {
if (unlikely(varonce129==NULL)) {
var130 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ",";
var135 = (val*)(1l<<2|1);
var136 = (val*)(1l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var130)->values[2]=var132;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "--";
var143 = (val*)(2l<<2|1);
var144 = (val*)(2l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var130)->values[4]=var140;
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = ",";
var151 = (val*)(1l<<2|1);
var152 = (val*)(1l<<2|1);
var153 = (val*)((long)(0)<<2|3);
var154 = (val*)((long)(0)<<2|3);
var150 = core__flat___CString___to_s_unsafe(var149, var151, var152, var153, var154);
var148 = var150;
varonce147 = var148;
}
((struct instance_core__NativeArray*)var130)->values[6]=var148;
} else {
var130 = varonce129;
varonce129 = NULL;
}
((struct instance_core__NativeArray*)var130)->values[0]=var_file_part;
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var157 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
var158 = core__flat___Int___core__abstract_text__Object__to_s(var155);
((struct instance_core__NativeArray*)var130)->values[1]=var158;
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var161 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
var162 = core__flat___Int___core__abstract_text__Object__to_s(var159);
((struct instance_core__NativeArray*)var130)->values[3]=var162;
{
{ /* Inline location$Location$line_end (self) on <self:Location> */
var165 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
var166 = core__flat___Int___core__abstract_text__Object__to_s(var163);
((struct instance_core__NativeArray*)var130)->values[5]=var166;
{
{ /* Inline location$Location$column_end (self) on <self:Location> */
var169 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
var170 = core__flat___Int___core__abstract_text__Object__to_s(var167);
((struct instance_core__NativeArray*)var130)->values[7]=var170;
{
var171 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
var = var171;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method location$Location$< for (self: Location, Location): Bool */
short int nitc___nitc__Location___core__kernel__Comparable___60d(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 253);
fatal_exit(1);
}
var_other = p0;
{
var2 = nitc___nitc__Location___core__kernel__Object___61d_61d(self, var_other);
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = nitc___nitc__Location___located_in(self, var_other);
}
if (var3){
var = 1;
goto RET_LABEL;
} else {
}
{
var4 = nitc___nitc__Location___located_in(var_other, self);
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var7 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var_other) on <var_other:Location> */
var10 = var_other->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_other:Location> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var5,var8) on <var5:Int> */
var13 = var5 == var8;
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline location$Location$line_start (self) on <self:Location> */
var17 = self->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <self:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var_other) on <var_other:Location> */
var20 = var_other->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_other:Location> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var15,var18) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var23 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline location$Location$column_start (self) on <self:Location> */
var30 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline location$Location$column_start (var_other) on <var_other:Location> */
var33 = var_other->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_other:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var28,var31) on <var28:Int> */
var36 = var28 == var31;
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
{
{ /* Inline location$Location$column_start (self) on <self:Location> */
var40 = self->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <self:Location> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline location$Location$column_start (var_other) on <var_other:Location> */
var43 = var_other->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_other:Location> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var38,var41) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var46 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline location$Location$line_end (self) on <self:Location> */
var53 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_other) on <var_other:Location> */
var56 = var_other->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_other:Location> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var51,var54) on <var51:Int> */
var59 = var51 == var54;
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline location$Location$line_end (self) on <self:Location> */
var63 = self->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <self:Location> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline location$Location$line_end (var_other) on <var_other:Location> */
var66 = var_other->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_other:Location> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var61,var64) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var69 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline location$Location$column_end (self) on <self:Location> */
var76 = self->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <self:Location> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline location$Location$column_end (var_other) on <var_other:Location> */
var79 = var_other->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_other:Location> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var74,var77) on <var74:Int> */
/* Covariant cast for argument 0 (i) <var77:Int> isa OTHER */
/* <var77:Int> isa OTHER */
var82 = 1; /* easy <var77:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
/* method location$Location$colored_line for (self: Location, String): String */
val* nitc___nitc__Location___colored_line(val* self, val* p0) {
val* var /* : String */;
val* var_color /* var color: String */;
uint32_t var1 /* : Char */;
uint32_t var3 /* : Char */;
uint32_t var_esc /* var esc: Char */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_def /* var def: String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var_col /* var col: String */;
val* var_l /* var l: Location */;
long var35 /* : Int */;
long var37 /* : Int */;
long var_i /* var i: Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable SourceFile */;
val* var52 /* : nullable SourceFile */;
val* var53 /* : Array[Int] */;
val* var55 /* : Array[Int] */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
val* var63 /* : nullable Object */;
long var64 /* : Int */;
long var_line_start /* var line_start: Int */;
long var_line_end /* var line_end: Int */;
val* var65 /* : nullable SourceFile */;
val* var67 /* : nullable SourceFile */;
val* var68 /* : String */;
val* var70 /* : String */;
val* var_string /* var string: String */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var80 /* : Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
short int var87 /* : Bool */;
short int var_ /* var : Bool */;
val* var88 /* : SequenceRead[Char] */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
val* var96 /* : nullable Object */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
uint32_t var100 /* : Char */;
short int var101 /* : Bool */;
short int var_102 /* var : Bool */;
val* var103 /* : SequenceRead[Char] */;
long var104 /* : Int */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
const char* var_class_name109;
long var110 /* : Int */;
val* var111 /* : nullable Object */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
uint32_t var115 /* : Char */;
short int var116 /* : Bool */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
long var124 /* : Int */;
long var126 /* : Int */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
short int var133 /* : Bool */;
long var134 /* : Int */;
long var136 /* : Int */;
long var137 /* : Int */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
long var143 /* : Int */;
val* var144 /* : Text */;
val* var_lstart /* var lstart: nullable Object */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
long var153 /* : Int */;
long var155 /* : Int */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
long var160 /* : Int */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
long var166 /* : Int */;
long var167 /* : Int */;
short int var169 /* : Bool */;
int cltype170;
int idtype171;
const char* var_class_name172;
long var173 /* : Int */;
val* var174 /* : nullable Object */;
val* var_cend /* var cend: nullable Object */;
long var175 /* : Int */;
long var177 /* : Int */;
val* var178 /* : nullable Object */;
long var179 /* : Int */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
long var185 /* : Int */;
long var186 /* : Int */;
long var187 /* : Int */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
short int var194 /* : Bool */;
long var195 /* : Int */;
long var197 /* : Int */;
long var198 /* : Int */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
long var204 /* : Int */;
long var205 /* : Int */;
short int var207 /* : Bool */;
int cltype208;
int idtype209;
const char* var_class_name210;
long var211 /* : Int */;
long var212 /* : Int */;
long var214 /* : Int */;
long var215 /* : Int */;
short int var217 /* : Bool */;
int cltype218;
int idtype219;
const char* var_class_name220;
long var221 /* : Int */;
long var222 /* : Int */;
long var223 /* : Int */;
short int var225 /* : Bool */;
int cltype226;
int idtype227;
const char* var_class_name228;
long var229 /* : Int */;
val* var230 /* : Text */;
val* var_lmid /* var lmid: nullable Object */;
long var231 /* : Int */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
long var237 /* : Int */;
long var238 /* : Int */;
long var239 /* : Int */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
const char* var_class_name244;
long var245 /* : Int */;
long var246 /* : Int */;
short int var248 /* : Bool */;
int cltype249;
int idtype250;
const char* var_class_name251;
long var252 /* : Int */;
long var253 /* : Int */;
long var254 /* : Int */;
short int var256 /* : Bool */;
int cltype257;
int idtype258;
const char* var_class_name259;
long var260 /* : Int */;
val* var261 /* : Text */;
val* var_lend /* var lend: nullable Object */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : CString */;
val* var265 /* : String */;
val* var266 /* : nullable Int */;
val* var267 /* : nullable Int */;
val* var268 /* : nullable Bool */;
val* var269 /* : nullable Bool */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : CString */;
val* var273 /* : String */;
val* var274 /* : nullable Int */;
val* var275 /* : nullable Int */;
val* var276 /* : nullable Bool */;
val* var277 /* : nullable Bool */;
val* var278 /* : FlatBuffer */;
val* var_indent /* var indent: FlatBuffer */;
long var_j /* var j: Int */;
long var280 /* : Int */;
long var282 /* : Int */;
long var283 /* : Int */;
short int var285 /* : Bool */;
int cltype286;
int idtype287;
const char* var_class_name288;
long var289 /* : Int */;
long var290 /* : Int */;
short int var292 /* : Bool */;
int cltype293;
int idtype294;
const char* var_class_name295;
long var296 /* : Int */;
long var_297 /* var : Int */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
int cltype301;
int idtype302;
const char* var_class_name303;
short int var304 /* : Bool */;
val* var306 /* : SequenceRead[Char] */;
val* var307 /* : nullable Object */;
short int var308 /* : Bool */;
short int var310 /* : Bool */;
uint32_t var311 /* : Char */;
long var312 /* : Int */;
val* var314 /* : NativeArray[String] */;
static val* varonce313;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : CString */;
val* var318 /* : String */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Bool */;
val* var322 /* : nullable Bool */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Bool */;
val* var330 /* : nullable Bool */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : CString */;
val* var334 /* : String */;
val* var335 /* : nullable Int */;
val* var336 /* : nullable Int */;
val* var337 /* : nullable Bool */;
val* var338 /* : nullable Bool */;
val* var339 /* : String */;
val* var340 /* : String */;
var_color = p0;
{
{ /* Inline kernel$Int$code_point (27l) on <27l:Int> */
var3 = (uint32_t)27l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_esc = var1;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "[0m";
var9 = (val*)(3l<<2|1);
var10 = (val*)(3l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
var13 = core__abstract_text___Char___Object__to_s(var_esc);
((struct instance_core__NativeArray*)var4)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_def = var14;
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "[";
var21 = (val*)(1l<<2|1);
var22 = (val*)(1l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[1]=var18;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "m";
var29 = (val*)(1l<<2|1);
var30 = (val*)(1l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var16)->values[3]=var26;
} else {
var16 = varonce15;
varonce15 = NULL;
}
var33 = core__abstract_text___Char___Object__to_s(var_esc);
((struct instance_core__NativeArray*)var16)->values[0]=var33;
((struct instance_core__NativeArray*)var16)->values[2]=var_color;
{
var34 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_col = var34;
var_l = self;
{
{ /* Inline location$Location$line_start (var_l) on <var_l:Location> */
var37 = var_l->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_l:Location> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_i = var35;
{
{ /* Inline kernel$Int$<= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var40 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var41 = var_i <= 0l;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "";
var46 = (val*)(0l<<2|1);
var47 = (val*)(0l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
var = var43;
goto RET_LABEL;
} else {
}
{
{ /* Inline location$Location$file (var_l) on <var_l:Location> */
var52 = var_l->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_l:Location> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (var50 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 280);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$line_starts (var50) on <var50:nullable SourceFile> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var55 = var50->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var50:nullable SourceFile> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var62 = var_i - 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
var63 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var53, var56);
}
var64 = (long)(var63)>>2;
var_line_start = var64;
var_line_end = var_line_start;
{
{ /* Inline location$Location$file (var_l) on <var_l:Location> */
var67 = var_l->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_l:Location> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var65 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 282);
fatal_exit(1);
} else {
{ /* Inline location$SourceFile$string (var65) on <var65:nullable SourceFile> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 25);
fatal_exit(1);
}
var70 = var65->attrs[COLOR_nitc__location__SourceFile___string].val; /* _string on <var65:nullable SourceFile> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 25);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_string = var68;
for(;;) {
{
{ /* Inline kernel$Int$+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var79 = var_line_end + 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
var80 = ((long(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
{ /* Inline kernel$Int$< (var73,var80) on <var73:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var83 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var87 = var73 < var80;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_ = var81;
if (var81){
{
var88 = ((val*(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
{ /* Inline kernel$Int$+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var91 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var95 = var_line_end + 1l;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
var96 = ((val*(*)(val* self, long p0))((((long)var88&3)?class_info[((long)var88&3)]:var88->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var88, var89); /* [] on <var88:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$!= (var96,'\n') on <var96:nullable Object(Char)> */
var100 = (uint32_t)((long)(var96)>>2);
var99 = var100 == '\n';
var101 = !var99;
var97 = var101;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var72 = var97;
} else {
var72 = var_;
}
var_102 = var72;
if (var72){
{
var103 = ((val*(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
{ /* Inline kernel$Int$+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var106 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var106)) {
var_class_name109 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name109);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var110 = var_line_end + 1l;
var104 = var110;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
{
var111 = ((val*(*)(val* self, long p0))((((long)var103&3)?class_info[((long)var103&3)]:var103->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var103, var104); /* [] on <var103:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$!= (var111,'\015') on <var111:nullable Object(Char)> */
var115 = (uint32_t)((long)(var111)>>2);
var114 = var115 == '\015';
var116 = !var114;
var112 = var116;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var71 = var112;
} else {
var71 = var_102;
}
if (var71){
{
{ /* Inline kernel$Int$+ (var_line_end,1l) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var119 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var123 = var_line_end + 1l;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_line_end = var117;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline location$Location$column_start (var_l) on <var_l:Location> */
var126 = var_l->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var124,0l) on <var124:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var129 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var133 = var124 > 0l;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
if (var127){
{
{ /* Inline location$Location$column_start (var_l) on <var_l:Location> */
var136 = var_l->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var134,1l) on <var134:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var139 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name142 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var143 = var134 - 1l;
var137 = var143;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
{
var144 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_core__abstract_text__Text__substring]))(var_string, var_line_start, var137); /* substring on <var_string:String>*/
}
var_lstart = var144;
} else {
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "";
var149 = (val*)(0l<<2|1);
var150 = (val*)(0l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
var_lstart = var146;
}
{
{ /* Inline location$Location$line_end (var_l) on <var_l:Location> */
var155 = var_l->attrs[COLOR_nitc__location__Location___line_end].l; /* _line_end on <var_l:Location> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_i,var153) on <var_i:Int> */
var158 = var_i == var153;
var159 = !var158;
var156 = var159;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
if (var156){
{
{ /* Inline kernel$Int$- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var162 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var166 = var_line_end - var_line_start;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var160,1l) on <var160:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var169 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var169)) {
var_class_name172 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name172);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var173 = var160 + 1l;
var167 = var173;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var174 = (val*)(var167<<2|1);
var_cend = var174;
} else {
{
{ /* Inline location$Location$column_end (var_l) on <var_l:Location> */
var177 = var_l->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_l:Location> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
var178 = (val*)(var175<<2|1);
var_cend = var178;
}
{
{ /* Inline kernel$Int$+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var181 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var185 = (long)(var_cend)>>2;
var186 = var_line_start + var185;
var179 = var186;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
{
var187 = ((long(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
{ /* Inline kernel$Int$<= (var179,var187) on <var179:Int> */
/* Covariant cast for argument 0 (i) <var187:Int> isa OTHER */
/* <var187:Int> isa OTHER */
var190 = 1; /* easy <var187:Int> isa OTHER*/
if (unlikely(!var190)) {
var_class_name193 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name193);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var194 = var179 <= var187;
var188 = var194;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
}
if (var188){
{
{ /* Inline location$Location$column_start (var_l) on <var_l:Location> */
var197 = var_l->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_line_start,var195) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var195:Int> isa OTHER */
/* <var195:Int> isa OTHER */
var200 = 1; /* easy <var195:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var204 = var_line_start + var195;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var198,1l) on <var198:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var207 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var207)) {
var_class_name210 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name210);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var211 = var198 - 1l;
var205 = var211;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline location$Location$column_start (var_l) on <var_l:Location> */
var214 = var_l->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_cend,var212) on <var_cend:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var212:Int> isa OTHER */
/* <var212:Int> isa OTHER */
var217 = 1; /* easy <var212:Int> isa OTHER*/
if (unlikely(!var217)) {
var_class_name220 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name220);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var221 = (long)(var_cend)>>2;
var222 = var221 - var212;
var215 = var222;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var215,1l) on <var215:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var225 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var225)) {
var_class_name228 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name228);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var229 = var215 + 1l;
var223 = var229;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
}
{
var230 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_core__abstract_text__Text__substring]))(var_string, var205, var223); /* substring on <var_string:String>*/
}
var_lmid = var230;
{
{ /* Inline kernel$Int$+ (var_line_start,var_cend) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var233 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var233)) {
var_class_name236 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var237 = (long)(var_cend)>>2;
var238 = var_line_start + var237;
var231 = var238;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_line_end,var_line_start) on <var_line_end:Int> */
/* Covariant cast for argument 0 (i) <var_line_start:Int> isa OTHER */
/* <var_line_start:Int> isa OTHER */
var241 = 1; /* easy <var_line_start:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name244 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var245 = var_line_end - var_line_start;
var239 = var245;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var239,var_cend) on <var239:Int> */
/* Covariant cast for argument 0 (i) <var_cend:nullable Object(Int)> isa OTHER */
/* <var_cend:nullable Object(Int)> isa OTHER */
var248 = 1; /* easy <var_cend:nullable Object(Int)> isa OTHER*/
if (unlikely(!var248)) {
var_class_name251 = var_cend == NULL ? "null" : (((long)var_cend&3)?type_info[((long)var_cend&3)]:var_cend->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name251);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var252 = (long)(var_cend)>>2;
var253 = var239 - var252;
var246 = var253;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var246,1l) on <var246:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var256 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var256)) {
var_class_name259 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name259);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var260 = var246 + 1l;
var254 = var260;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
{
var261 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_core__abstract_text__Text__substring]))(var_string, var231, var254); /* substring on <var_string:String>*/
}
var_lend = var261;
} else {
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "";
var266 = (val*)(0l<<2|1);
var267 = (val*)(0l<<2|1);
var268 = (val*)((long)(0)<<2|3);
var269 = (val*)((long)(0)<<2|3);
var265 = core__flat___CString___to_s_unsafe(var264, var266, var267, var268, var269);
var263 = var265;
varonce262 = var263;
}
var_lmid = var263;
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = "";
var274 = (val*)(0l<<2|1);
var275 = (val*)(0l<<2|1);
var276 = (val*)((long)(0)<<2|3);
var277 = (val*)((long)(0)<<2|3);
var273 = core__flat___CString___to_s_unsafe(var272, var274, var275, var276, var277);
var271 = var273;
varonce270 = var271;
}
var_lend = var271;
}
var278 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var278) on <var278:FlatBuffer> */
{
((void(*)(val* self))(var278->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var278); /* init on <var278:FlatBuffer>*/
}
RET_LABEL279:(void)0;
}
}
var_indent = var278;
var_j = var_line_start;
{
{ /* Inline location$Location$column_start (var_l) on <var_l:Location> */
var282 = var_l->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_l:Location> */
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_line_start,var280) on <var_line_start:Int> */
/* Covariant cast for argument 0 (i) <var280:Int> isa OTHER */
/* <var280:Int> isa OTHER */
var285 = 1; /* easy <var280:Int> isa OTHER*/
if (unlikely(!var285)) {
var_class_name288 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name288);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var289 = var_line_start + var280;
var283 = var289;
goto RET_LABEL284;
RET_LABEL284:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var283,1l) on <var283:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var292 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var292)) {
var_class_name295 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name295);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var296 = var283 - 1l;
var290 = var296;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
var_297 = var290;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_297) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_297:Int> isa OTHER */
/* <var_297:Int> isa OTHER */
var300 = 1; /* easy <var_297:Int> isa OTHER*/
if (unlikely(!var300)) {
var_class_name303 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name303);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var304 = var_j < var_297;
var298 = var304;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
}
if (var298){
} else {
goto BREAK_label305;
}
{
var306 = ((val*(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__chars]))(var_string); /* chars on <var_string:String>*/
}
{
var307 = ((val*(*)(val* self, long p0))((((long)var306&3)?class_info[((long)var306&3)]:var306->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var306, var_j); /* [] on <var306:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var307,'\t') on <var307:nullable Object(Char)> */
var311 = (uint32_t)((long)(var307)>>2);
var310 = var311 == '\t';
var308 = var310;
goto RET_LABEL309;
RET_LABEL309:(void)0;
}
}
if (var308){
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_indent, '\t'); /* Direct call flat$FlatBuffer$add on <var_indent:FlatBuffer>*/
}
} else {
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_indent, ' '); /* Direct call flat$FlatBuffer$add on <var_indent:FlatBuffer>*/
}
}
{
var312 = core___core__Int___Discrete__successor(var_j, 1l);
}
var_j = var312;
}
BREAK_label305: (void)0;
if (unlikely(varonce313==NULL)) {
var314 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = "\t";
var319 = (val*)(1l<<2|1);
var320 = (val*)(1l<<2|1);
var321 = (val*)((long)(0)<<2|3);
var322 = (val*)((long)(0)<<2|3);
var318 = core__flat___CString___to_s_unsafe(var317, var319, var320, var321, var322);
var316 = var318;
varonce315 = var316;
}
((struct instance_core__NativeArray*)var314)->values[0]=var316;
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "\n\t";
var327 = (val*)(2l<<2|1);
var328 = (val*)(2l<<2|1);
var329 = (val*)((long)(0)<<2|3);
var330 = (val*)((long)(0)<<2|3);
var326 = core__flat___CString___to_s_unsafe(var325, var327, var328, var329, var330);
var324 = var326;
varonce323 = var324;
}
((struct instance_core__NativeArray*)var314)->values[6]=var324;
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = "^";
var335 = (val*)(1l<<2|1);
var336 = (val*)(1l<<2|1);
var337 = (val*)((long)(0)<<2|3);
var338 = (val*)((long)(0)<<2|3);
var334 = core__flat___CString___to_s_unsafe(var333, var335, var336, var337, var338);
var332 = var334;
varonce331 = var332;
}
((struct instance_core__NativeArray*)var314)->values[8]=var332;
} else {
var314 = varonce313;
varonce313 = NULL;
}
((struct instance_core__NativeArray*)var314)->values[1]=var_lstart;
((struct instance_core__NativeArray*)var314)->values[2]=var_col;
((struct instance_core__NativeArray*)var314)->values[3]=var_lmid;
((struct instance_core__NativeArray*)var314)->values[4]=var_def;
((struct instance_core__NativeArray*)var314)->values[5]=var_lend;
{
var339 = ((val*(*)(val* self))(var_indent->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_indent); /* to_s on <var_indent:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var314)->values[7]=var339;
{
var340 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var314); /* native_to_s on <var314:NativeArray[String]>*/
}
varonce313 = var314;
var = var340;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location$Location$init for (self: Location) */
void nitc___nitc__Location___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Location___core__kernel__Object__init]))(self); /* init on <self:Location>*/
}
RET_LABEL:;
}
