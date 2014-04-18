#include "location.sep.0.h"
/* method location#SourceFile#filename for (self: SourceFile): String */
val* location__SourceFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_location__SourceFile___64dfilename].val; /* @filename on <self:SourceFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @filename");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 22);
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
var1 = location__SourceFile__filename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#filename= for (self: SourceFile, String) */
void location__SourceFile__filename_61d(val* self, val* p0) {
self->attrs[COLOR_location__SourceFile___64dfilename].val = p0; /* @filename on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#filename= for (self: Object, String) */
void VIRTUAL_location__SourceFile__filename_61d(val* self, val* p0) {
location__SourceFile__filename_61d(self, p0);
RET_LABEL:;
}
/* method location#SourceFile#string for (self: SourceFile): String */
val* location__SourceFile__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_location__SourceFile___64dstring].val; /* @string on <self:SourceFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @string");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 25);
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
var1 = location__SourceFile__string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#string= for (self: SourceFile, String) */
void location__SourceFile__string_61d(val* self, val* p0) {
self->attrs[COLOR_location__SourceFile___64dstring].val = p0; /* @string on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#string= for (self: Object, String) */
void VIRTUAL_location__SourceFile__string_61d(val* self, val* p0) {
location__SourceFile__string_61d(self, p0);
RET_LABEL:;
}
/* method location#SourceFile#init for (self: SourceFile, String, IStream) */
void location__SourceFile__init(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_stream /* var stream: IStream */;
val* var /* : String */;
val* var1 /* : Array[Int] */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
var_filename = p0;
var_stream = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_location__SourceFile__filename_61d]))(self, var_filename) /* filename= on <self:SourceFile>*/;
var = ((val* (*)(val*))(var_stream->class->vft[COLOR_stream__IStream__read_all]))(var_stream) /* read_all on <var_stream:IStream>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_location__SourceFile__string_61d]))(self, var) /* string= on <self:SourceFile>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_location__SourceFile__line_starts]))(self) /* line_starts on <self:SourceFile>*/;
var2 = 0;
var3 = 0;
var4 = BOX_kernel__Int(var3); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var1->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var1, var2, var4) /* []= on <var1:Array[Int]>*/;
RET_LABEL:;
}
/* method location#SourceFile#init for (self: Object, String, IStream) */
void VIRTUAL_location__SourceFile__init(val* self, val* p0, val* p1) {
location__SourceFile__init(self, p0, p1);
RET_LABEL:;
}
/* method location#SourceFile#from_string for (self: SourceFile, String, String) */
void location__SourceFile__from_string(val* self, val* p0, val* p1) {
val* var_filename /* var filename: String */;
val* var_string /* var string: String */;
val* var /* : Array[Int] */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
var_filename = p0;
var_string = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_location__SourceFile__filename_61d]))(self, var_filename) /* filename= on <self:SourceFile>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_location__SourceFile__string_61d]))(self, var_string) /* string= on <self:SourceFile>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_location__SourceFile__line_starts]))(self) /* line_starts on <self:SourceFile>*/;
var1 = 0;
var2 = 0;
var3 = BOX_kernel__Int(var2); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var, var1, var3) /* []= on <var:Array[Int]>*/;
RET_LABEL:;
}
/* method location#SourceFile#from_string for (self: Object, String, String) */
void VIRTUAL_location__SourceFile__from_string(val* self, val* p0, val* p1) {
location__SourceFile__from_string(self, p0, p1);
RET_LABEL:;
}
/* method location#SourceFile#line_starts for (self: SourceFile): Array[Int] */
val* location__SourceFile__line_starts(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_location__SourceFile___64dline_starts].val; /* @line_starts on <self:SourceFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @line_starts");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 44);
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
var1 = location__SourceFile__line_starts(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#SourceFile#line_starts= for (self: SourceFile, Array[Int]) */
void location__SourceFile__line_starts_61d(val* self, val* p0) {
self->attrs[COLOR_location__SourceFile___64dline_starts].val = p0; /* @line_starts on <self:SourceFile> */
RET_LABEL:;
}
/* method location#SourceFile#line_starts= for (self: Object, Array[Int]) */
void VIRTUAL_location__SourceFile__line_starts_61d(val* self, val* p0) {
location__SourceFile__line_starts_61d(self, p0);
RET_LABEL:;
}
/* method location#Location#file for (self: Location): nullable SourceFile */
val* location__Location__file(val* self) {
val* var /* : nullable SourceFile */;
val* var1 /* : nullable SourceFile */;
var1 = self->attrs[COLOR_location__Location___64dfile].val; /* @file on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file for (self: Object): nullable SourceFile */
val* VIRTUAL_location__Location__file(val* self) {
val* var /* : nullable SourceFile */;
val* var1 /* : nullable SourceFile */;
var1 = location__Location__file(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#file= for (self: Location, nullable SourceFile) */
void location__Location__file_61d(val* self, val* p0) {
self->attrs[COLOR_location__Location___64dfile].val = p0; /* @file on <self:Location> */
RET_LABEL:;
}
/* method location#Location#file= for (self: Object, nullable SourceFile) */
void VIRTUAL_location__Location__file_61d(val* self, val* p0) {
location__Location__file_61d(self, p0);
RET_LABEL:;
}
/* method location#Location#line_start for (self: Location): Int */
long location__Location__line_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___64dline_start].l; /* @line_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_start for (self: Object): Int */
long VIRTUAL_location__Location__line_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = location__Location__line_start(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_start= for (self: Location, Int) */
void location__Location__line_start_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___64dline_start].l = p0; /* @line_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_start= for (self: Object, Int) */
void VIRTUAL_location__Location__line_start_61d(val* self, long p0) {
location__Location__line_start_61d(self, p0);
RET_LABEL:;
}
/* method location#Location#line_end for (self: Location): Int */
long location__Location__line_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___64dline_end].l; /* @line_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_end for (self: Object): Int */
long VIRTUAL_location__Location__line_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = location__Location__line_end(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#line_end= for (self: Location, Int) */
void location__Location__line_end_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___64dline_end].l = p0; /* @line_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#line_end= for (self: Object, Int) */
void VIRTUAL_location__Location__line_end_61d(val* self, long p0) {
location__Location__line_end_61d(self, p0);
RET_LABEL:;
}
/* method location#Location#column_start for (self: Location): Int */
long location__Location__column_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___64dcolumn_start].l; /* @column_start on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_start for (self: Object): Int */
long VIRTUAL_location__Location__column_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = location__Location__column_start(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_start= for (self: Location, Int) */
void location__Location__column_start_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___64dcolumn_start].l = p0; /* @column_start on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_start= for (self: Object, Int) */
void VIRTUAL_location__Location__column_start_61d(val* self, long p0) {
location__Location__column_start_61d(self, p0);
RET_LABEL:;
}
/* method location#Location#column_end for (self: Location): Int */
long location__Location__column_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_location__Location___64dcolumn_end].l; /* @column_end on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_end for (self: Object): Int */
long VIRTUAL_location__Location__column_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = location__Location__column_end(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#column_end= for (self: Location, Int) */
void location__Location__column_end_61d(val* self, long p0) {
self->attrs[COLOR_location__Location___64dcolumn_end].l = p0; /* @column_end on <self:Location> */
RET_LABEL:;
}
/* method location#Location#column_end= for (self: Object, Int) */
void VIRTUAL_location__Location__column_end_61d(val* self, long p0) {
location__Location__column_end_61d(self, p0);
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
((void (*)(val*, val*))(self->class->vft[COLOR_location__Location__file_61d]))(self, var_f) /* file= on <self:Location>*/;
((void (*)(val*, long))(self->class->vft[COLOR_location__Location__line_start_61d]))(self, var_line_s) /* line_start= on <self:Location>*/;
((void (*)(val*, long))(self->class->vft[COLOR_location__Location__line_end_61d]))(self, var_line_e) /* line_end= on <self:Location>*/;
((void (*)(val*, long))(self->class->vft[COLOR_location__Location__column_start_61d]))(self, var_column_s) /* column_start= on <self:Location>*/;
((void (*)(val*, long))(self->class->vft[COLOR_location__Location__column_end_61d]))(self, var_column_e) /* column_end= on <self:Location>*/;
RET_LABEL:;
}
/* method location#Location#init for (self: Object, nullable SourceFile, Int, Int, Int, Int) */
void VIRTUAL_location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4) {
location__Location__init(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method location#Location#pstart for (self: Location): Int */
long location__Location__pstart(val* self) {
long var /* : Int */;
val* var1 /* : nullable SourceFile */;
val* var2 /* : Array[Int] */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 68);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_location__SourceFile__line_starts]))(var1) /* line_starts on <var1:nullable SourceFile>*/;
}
var3 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var4 = 1;
{ /* Inline kernel#Int#- (var3,var4) */
var7 = var3 - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var8 = ((val* (*)(val*, long))(var2->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var2, var5) /* [] on <var2:Array[Int]>*/;
var9 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
{ /* Inline kernel#Int#+ (var8,var9) */
var12 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var13 = var12 + var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var14 = 1;
{ /* Inline kernel#Int#- (var10,var14) */
var17 = var10 - var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var = var15;
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
val* var2 /* : Array[Int] */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 71);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_location__SourceFile__line_starts]))(var1) /* line_starts on <var1:nullable SourceFile>*/;
}
var3 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var4 = 1;
{ /* Inline kernel#Int#- (var3,var4) */
var7 = var3 - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var8 = ((val* (*)(val*, long))(var2->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var2, var5) /* [] on <var2:Array[Int]>*/;
var9 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
{ /* Inline kernel#Int#+ (var8,var9) */
var12 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var13 = var12 + var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var14 = 1;
{ /* Inline kernel#Int#- (var10,var14) */
var17 = var10 - var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var = var15;
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
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var_l /* var l: Location */;
long var4 /* : Int */;
long var_pstart /* var pstart: Int */;
long var5 /* : Int */;
long var_pend /* var pend: Int */;
val* var6 /* : nullable SourceFile */;
val* var7 /* : String */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
val* var15 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__text_cache]))(self) /* text_cache on <self:Location>*/;
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
var_l = self;
var4 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__pstart]))(self) /* pstart on <self:Location>*/;
var_pstart = var4;
var5 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__pend]))(self) /* pend on <self:Location>*/;
var_pend = var5;
var6 = ((val* (*)(val*))(var_l->class->vft[COLOR_location__Location__file]))(var_l) /* file on <var_l:Location>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 81);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_location__SourceFile__string]))(var6) /* string on <var6:nullable SourceFile>*/;
}
{ /* Inline kernel#Int#- (var_pend,var_pstart) */
var10 = var_pend - var_pstart;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var11 = 1;
{ /* Inline kernel#Int#+ (var8,var11) */
var14 = var8 + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var15 = ((val* (*)(val*, long, long))(var7->class->vft[COLOR_string__AbstractString__substring]))(var7, var_pstart, var12) /* substring on <var7:String>*/;
var_res = var15;
((void (*)(val*, val*))(self->class->vft[COLOR_location__Location__text_cache_61d]))(self, var_res) /* text_cache= on <self:Location>*/;
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
var1 = self->attrs[COLOR_location__Location___64dtext_cache].val; /* @text_cache on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache for (self: Object): nullable String */
val* VIRTUAL_location__Location__text_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = location__Location__text_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method location#Location#text_cache= for (self: Location, nullable String) */
void location__Location__text_cache_61d(val* self, val* p0) {
self->attrs[COLOR_location__Location___64dtext_cache].val = p0; /* @text_cache on <self:Location> */
RET_LABEL:;
}
/* method location#Location#text_cache= for (self: Object, nullable String) */
void VIRTUAL_location__Location__text_cache_61d(val* self, val* p0) {
location__Location__text_cache_61d(self, p0);
RET_LABEL:;
}
/* method location#Location#with_file for (self: Location, SourceFile) */
void location__Location__with_file(val* self, val* p0) {
val* var_f /* var f: SourceFile */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var_f = p0;
var = 0;
var1 = 0;
var2 = 0;
var3 = 0;
((void (*)(val*, val*, long, long, long, long))(self->class->vft[COLOR_location__Location__init]))(self, var_f, var, var1, var2, var3) /* init on <self:Location>*/;
RET_LABEL:;
}
/* method location#Location#with_file for (self: Object, SourceFile) */
void VIRTUAL_location__Location__with_file(val* self, val* p0) {
location__Location__with_file(self, p0);
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
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable SourceFile */;
val* var8 /* : nullable SourceFile */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
var_other = p0;
var1 = NULL;
if (var_other == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
/* <var_other:nullable Object(Object)> isa Location */
cltype = type_location__Location.color;
idtype = type_location__Location.id;
if(cltype >= var_other->type->table_size) {
var4 = 0;
} else {
var4 = var_other->type->type_table[cltype] == idtype;
}
var5 = !var4;
if (var5){
var6 = 0;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_other->class->vft[COLOR_location__Location__file]))(var_other) /* file on <var_other:nullable Object(Location)>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var7 == NULL) {
var9 = (var8 != NULL);
} else {
var9 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___33d_61d]))(var7, var8) /* != on <var7:nullable SourceFile>*/;
}
if (var9){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
var11 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_start]))(var_other) /* line_start on <var_other:nullable Object(Location)>*/;
var12 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
{ /* Inline kernel#Int#!= (var11,var12) */
var15 = var11 == var12;
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var17 = 0;
var = var17;
goto RET_LABEL;
} else {
}
var18 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_end]))(var_other) /* line_end on <var_other:nullable Object(Location)>*/;
var19 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
{ /* Inline kernel#Int#!= (var18,var19) */
var22 = var18 == var19;
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
if (var20){
var24 = 0;
var = var24;
goto RET_LABEL;
} else {
}
var25 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_start]))(var_other) /* column_start on <var_other:nullable Object(Location)>*/;
var26 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
{ /* Inline kernel#Int#!= (var25,var26) */
var29 = var25 == var26;
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
if (var27){
var31 = 0;
var = var31;
goto RET_LABEL;
} else {
}
var32 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_end]))(var_other) /* column_end on <var_other:nullable Object(Location)>*/;
var33 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
{ /* Inline kernel#Int#!= (var32,var33) */
var36 = var32 == var33;
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
if (var34){
var38 = 0;
var = var38;
goto RET_LABEL;
} else {
}
var39 = 1;
var = var39;
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
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
long var57 /* : Int */;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var_ /* var : Bool */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
var_loc = p0;
var1 = NULL;
if (var_loc == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var5 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_start]))(var_loc) /* line_start on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#< (var4,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var9 = var4 < var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
var11 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var12 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_end]))(var_loc) /* line_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#> (var11,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (!var15) {
var_class_name18 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var19 = var11 > var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var20 = 0;
var = var20;
goto RET_LABEL;
} else {
}
var21 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var22 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_end]))(var_loc) /* line_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#> (var21,var22) */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (!var25) {
var_class_name28 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var29 = var21 > var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (var23){
var30 = 0;
var = var30;
goto RET_LABEL;
} else {
}
var31 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var32 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_start]))(var_loc) /* line_start on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#== (var31,var32) */
var35 = var31 == var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (var33){
var36 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var37 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_start]))(var_loc) /* column_start on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#< (var36,var37) */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var40 = 1; /* easy <var37:Int> isa OTHER*/
if (!var40) {
var_class_name43 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var44 = var36 < var37;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
if (var38){
var45 = 0;
var = var45;
goto RET_LABEL;
} else {
}
var46 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var47 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_end]))(var_loc) /* column_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#> (var46,var47) */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (!var50) {
var_class_name53 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var54 = var46 > var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
if (var48){
var55 = 0;
var = var55;
goto RET_LABEL;
} else {
}
} else {
}
var57 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var58 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_end]))(var_loc) /* line_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#== (var57,var58) */
var61 = var57 == var58;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var_ = var59;
if (var59){
var62 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
var63 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_end]))(var_loc) /* column_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#> (var62,var63) */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var66 = 1; /* easy <var63:Int> isa OTHER*/
if (!var66) {
var_class_name69 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var70 = var62 > var63;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var56 = var64;
} else {
var56 = var_;
}
if (var56){
var71 = 0;
var = var71;
goto RET_LABEL;
} else {
}
var72 = 1;
var = var72;
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
val* var4 /* : String */;
val* var_file_part /* var file_part: String */;
val* var5 /* : nullable SourceFile */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable SourceFile */;
val* var9 /* : String */;
val* var10 /* : nullable SourceFile */;
val* var11 /* : String */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
long var46 /* : Int */;
val* var47 /* : nullable Object */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
long var53 /* : Int */;
val* var54 /* : nullable Object */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var_63 /* var : Array[Object] */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
long var81 /* : Int */;
val* var82 /* : nullable Object */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
long var88 /* : Int */;
val* var89 /* : nullable Object */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : Array[Object] */;
long var97 /* : Int */;
val* var_98 /* var : Array[Object] */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
long var109 /* : Int */;
val* var110 /* : nullable Object */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
long var116 /* : Int */;
val* var117 /* : nullable Object */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
long var123 /* : Int */;
val* var124 /* : nullable Object */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : String */;
long var130 /* : Int */;
val* var131 /* : nullable Object */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
val* var137 /* : String */;
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
var5 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 124);
show_backtrace(1);
} else {
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_location__SourceFile__filename]))(var8) /* filename on <var8:nullable SourceFile>*/;
}
var_file_part = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 125);
show_backtrace(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_location__SourceFile__filename]))(var10) /* filename on <var10:nullable SourceFile>*/;
}
var12 = ((long (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__length]))(var11) /* length on <var11:String>*/;
var13 = 0;
{ /* Inline kernel#Int#> (var12,var13) */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (!var16) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var17 = var12 > var13;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
if (var14){
if (varonce18) {
var19 = varonce18;
} else {
var20 = ":";
var21 = 1;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*, val*))(var_file_part->class->vft[COLOR_string__String___43d]))(var_file_part, var19) /* + on <var_file_part:String>*/;
var_file_part = var23;
} else {
}
} else {
}
var24 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var25 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
{ /* Inline kernel#Int#== (var24,var25) */
var28 = var24 == var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
if (var26){
var29 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var30 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
{ /* Inline kernel#Int#== (var29,var30) */
var33 = var29 == var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
if (var31){
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
var35 = 7;
((void (*)(val*, long))(var34->class->vft[COLOR_array__Array__with_capacity]))(var34, var35) /* with_capacity on <var34:Array[Object]>*/;
var_ = var34;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "";
var39 = 0;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var37) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_file_part) /* add on <var_:Array[Object]>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "";
var44 = 0;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var42) /* add on <var_:Array[Object]>*/;
var46 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var47 = BOX_kernel__Int(var46); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var47) /* add on <var_:Array[Object]>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = ",";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var49) /* add on <var_:Array[Object]>*/;
var53 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var54 = BOX_kernel__Int(var53); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var54) /* add on <var_:Array[Object]>*/;
if (varonce55) {
var56 = varonce55;
} else {
var57 = "";
var58 = 0;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var56) /* add on <var_:Array[Object]>*/;
var60 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var60;
goto RET_LABEL;
} else {
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
var62 = 9;
((void (*)(val*, long))(var61->class->vft[COLOR_array__Array__with_capacity]))(var61, var62) /* with_capacity on <var61:Array[Object]>*/;
var_63 = var61;
if (varonce64) {
var65 = varonce64;
} else {
var66 = "";
var67 = 0;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var65) /* add on <var_63:Array[Object]>*/;
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var_file_part) /* add on <var_63:Array[Object]>*/;
if (varonce69) {
var70 = varonce69;
} else {
var71 = "";
var72 = 0;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var70) /* add on <var_63:Array[Object]>*/;
var74 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var75 = BOX_kernel__Int(var74); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var75) /* add on <var_63:Array[Object]>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = ",";
var79 = 1;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var77) /* add on <var_63:Array[Object]>*/;
var81 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var82 = BOX_kernel__Int(var81); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var82) /* add on <var_63:Array[Object]>*/;
if (varonce83) {
var84 = varonce83;
} else {
var85 = "--";
var86 = 2;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var84) /* add on <var_63:Array[Object]>*/;
var88 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
var89 = BOX_kernel__Int(var88); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var89) /* add on <var_63:Array[Object]>*/;
if (varonce90) {
var91 = varonce90;
} else {
var92 = "";
var93 = 0;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
((void (*)(val*, val*))(var_63->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_63, var91) /* add on <var_63:Array[Object]>*/;
var95 = ((val* (*)(val*))(var_63->class->vft[COLOR_string__Object__to_s]))(var_63) /* to_s on <var_63:Array[Object]>*/;
var = var95;
goto RET_LABEL;
}
} else {
var96 = NEW_array__Array(&type_array__Arraykernel__Object);
var97 = 11;
((void (*)(val*, long))(var96->class->vft[COLOR_array__Array__with_capacity]))(var96, var97) /* with_capacity on <var96:Array[Object]>*/;
var_98 = var96;
if (varonce99) {
var100 = varonce99;
} else {
var101 = "";
var102 = 0;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var100) /* add on <var_98:Array[Object]>*/;
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var_file_part) /* add on <var_98:Array[Object]>*/;
if (varonce104) {
var105 = varonce104;
} else {
var106 = "";
var107 = 0;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var105) /* add on <var_98:Array[Object]>*/;
var109 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var110 = BOX_kernel__Int(var109); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var110) /* add on <var_98:Array[Object]>*/;
if (varonce111) {
var112 = varonce111;
} else {
var113 = ",";
var114 = 1;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var112) /* add on <var_98:Array[Object]>*/;
var116 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var117 = BOX_kernel__Int(var116); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var117) /* add on <var_98:Array[Object]>*/;
if (varonce118) {
var119 = varonce118;
} else {
var120 = "--";
var121 = 2;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var119) /* add on <var_98:Array[Object]>*/;
var123 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var124 = BOX_kernel__Int(var123); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var124) /* add on <var_98:Array[Object]>*/;
if (varonce125) {
var126 = varonce125;
} else {
var127 = ",";
var128 = 1;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var126) /* add on <var_98:Array[Object]>*/;
var130 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
var131 = BOX_kernel__Int(var130); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var131) /* add on <var_98:Array[Object]>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "";
var135 = 0;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
((void (*)(val*, val*))(var_98->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_98, var133) /* add on <var_98:Array[Object]>*/;
var137 = ((val* (*)(val*))(var_98->class->vft[COLOR_string__Object__to_s]))(var_98) /* to_s on <var_98:Array[Object]>*/;
var = var137;
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
/* method location#Location#relative_to for (self: Location, nullable Location): String */
val* location__Location__relative_to(val* self, val* p0) {
val* var /* : String */;
val* var_loc /* var loc: nullable Location */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable SourceFile */;
val* var5 /* : nullable SourceFile */;
short int var6 /* : Bool */;
val* var7 /* : Location */;
val* var8 /* : null */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
val* var_relative /* var relative: Location */;
val* var13 /* : Location */;
val* var14 /* : nullable SourceFile */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
val* var19 /* : String */;
var_loc = p0;
var2 = NULL;
if (var_loc == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (!var3) {
var1 = 0;
} else {
var4 = ((val* (*)(val*))(var_loc->class->vft[COLOR_location__Location__file]))(var_loc) /* file on <var_loc:nullable Location(Location)>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var4 == NULL) {
var6 = (var5 == NULL);
} else {
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:nullable SourceFile>*/;
}
var1 = var6;
}
if (var1){
var7 = NEW_location__Location(&type_location__Location);
var8 = NULL;
var9 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var10 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var11 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var12 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
((void (*)(val*, val*, long, long, long, long))(var7->class->vft[COLOR_location__Location__init]))(var7, var8, var9, var10, var11, var12) /* init on <var7:Location>*/;
var_relative = var7;
} else {
var13 = NEW_location__Location(&type_location__Location);
var14 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
var15 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var16 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var17 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var18 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
((void (*)(val*, val*, long, long, long, long))(var13->class->vft[COLOR_location__Location__init]))(var13, var14, var15, var16, var17, var18) /* init on <var13:Location>*/;
var_relative = var13;
}
var19 = ((val* (*)(val*))(var_relative->class->vft[COLOR_string__Object__to_s]))(var_relative) /* to_s on <var_relative:Location>*/;
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method location#Location#relative_to for (self: Object, nullable Location): String */
val* VIRTUAL_location__Location__relative_to(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = location__Location__relative_to(self, p0);
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
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
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
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 149);
show_backtrace(1);
}
var_other = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Object___61d_61d]))(self, var_other) /* == on <self:Location>*/;
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((short int (*)(val*, val*))(self->class->vft[COLOR_location__Location__located_in]))(self, var_other) /* located_in on <self:Location>*/;
if (var4){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
var6 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_location__Location__located_in]))(var_other, self) /* located_in on <var_other:Location>*/;
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
var8 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var9 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_start]))(var_other) /* line_start on <var_other:Location>*/;
{ /* Inline kernel#Int#!= (var8,var9) */
var12 = var8 == var9;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var14 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var15 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_start]))(var_other) /* line_start on <var_other:Location>*/;
{ /* Inline kernel#Int#< (var14,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
var_class_name21 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var22 = var14 < var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var = var16;
goto RET_LABEL;
} else {
}
var23 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var24 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_start]))(var_other) /* column_start on <var_other:Location>*/;
{ /* Inline kernel#Int#!= (var23,var24) */
var27 = var23 == var24;
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
var29 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var30 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_start]))(var_other) /* column_start on <var_other:Location>*/;
{ /* Inline kernel#Int#< (var29,var30) */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (!var33) {
var_class_name36 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var37 = var29 < var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var = var31;
goto RET_LABEL;
} else {
}
var38 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var39 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_end]))(var_other) /* line_end on <var_other:Location>*/;
{ /* Inline kernel#Int#!= (var38,var39) */
var42 = var38 == var39;
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
if (var40){
var44 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var45 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_end]))(var_other) /* line_end on <var_other:Location>*/;
{ /* Inline kernel#Int#< (var44,var45) */
/* Covariant cast for argument 0 (i) <var45:Int> isa OTHER */
/* <var45:Int> isa OTHER */
var48 = 1; /* easy <var45:Int> isa OTHER*/
if (!var48) {
var_class_name51 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var52 = var44 < var45;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var = var46;
goto RET_LABEL;
} else {
}
var53 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
var54 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_end]))(var_other) /* column_end on <var_other:Location>*/;
{ /* Inline kernel#Int#< (var53,var54) */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (!var57) {
var_class_name60 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var61 = var53 < var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var = var55;
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
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : nullable Object */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var_def /* var def: String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var_20 /* var : Array[Object] */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : nullable Object */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var_col /* var col: String */;
val* var_l /* var l: Location */;
long var38 /* : Int */;
long var_i /* var i: Int */;
val* var39 /* : nullable SourceFile */;
val* var40 /* : Array[Int] */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
long var46 /* : Int */;
long var_line_start /* var line_start: Int */;
long var_line_end /* var line_end: Int */;
val* var47 /* : nullable SourceFile */;
val* var48 /* : String */;
val* var_string /* var string: String */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
val* var61 /* : StringCharView */;
long var62 /* : Int */;
long var63 /* : Int */;
long var65 /* : Int */;
val* var66 /* : nullable Object */;
char var67 /* : Char */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
char var71 /* : Char */;
short int var72 /* : Bool */;
short int var_73 /* var : Bool */;
val* var74 /* : StringCharView */;
long var75 /* : Int */;
long var76 /* : Int */;
long var78 /* : Int */;
val* var79 /* : nullable Object */;
char var80 /* : Char */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
char var84 /* : Char */;
short int var85 /* : Bool */;
long var86 /* : Int */;
long var87 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
long var92 /* : Int */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var_lstart /* var lstart: String */;
long var96 /* : Int */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
long var101 /* : Int */;
long var103 /* : Int */;
long var104 /* : Int */;
long var105 /* : Int */;
long var107 /* : Int */;
val* var108 /* : nullable Object */;
val* var_cend /* var cend: nullable Object */;
long var109 /* : Int */;
val* var110 /* : nullable Object */;
long var111 /* : Int */;
long var113 /* : Int */;
long var114 /* : Int */;
long var115 /* : Int */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
short int var122 /* : Bool */;
long var123 /* : Int */;
long var124 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
long var128 /* : Int */;
long var130 /* : Int */;
long var131 /* : Int */;
long var132 /* : Int */;
long var134 /* : Int */;
long var135 /* : Int */;
long var136 /* : Int */;
long var137 /* : Int */;
long var139 /* : Int */;
val* var140 /* : String */;
val* var_lmid /* var lmid: nullable Object */;
long var141 /* : Int */;
long var143 /* : Int */;
long var144 /* : Int */;
long var145 /* : Int */;
long var147 /* : Int */;
long var148 /* : Int */;
long var150 /* : Int */;
long var151 /* : Int */;
long var152 /* : Int */;
long var153 /* : Int */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var_lend /* var lend: nullable Object */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : String */;
val* var167 /* : Buffer */;
val* var_indent /* var indent: Buffer */;
val* var168 /* : Range[Int] */;
long var169 /* : Int */;
long var170 /* : Int */;
long var172 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
long var176 /* : Int */;
val* var177 /* : Discrete */;
val* var178 /* : Discrete */;
val* var179 /* : Iterator[nullable Object] */;
short int var180 /* : Bool */;
val* var181 /* : nullable Object */;
long var_j /* var j: Int */;
long var182 /* : Int */;
val* var183 /* : StringCharView */;
val* var184 /* : nullable Object */;
char var185 /* : Char */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
char var189 /* : Char */;
char var190 /* : Char */;
val* var191 /* : nullable Object */;
char var192 /* : Char */;
val* var193 /* : nullable Object */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var_197 /* var : Array[Object] */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : String */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
long var211 /* : Int */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : String */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : String */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : String */;
val* var233 /* : String */;
var_color = p0;
var1 = 27;
{ /* Inline kernel#Int#ascii (var1) */
var4 = var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var_esc = var2;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
var6 = 3;
((void (*)(val*, long))(var5->class->vft[COLOR_array__Array__with_capacity]))(var5, var6) /* with_capacity on <var5:Array[Object]>*/;
var_ = var5;
if (varonce) {
var7 = varonce;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
var11 = BOX_kernel__Char(var_esc); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "[0m";
var15 = 3;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_def = var17;
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
var19 = 5;
((void (*)(val*, long))(var18->class->vft[COLOR_array__Array__with_capacity]))(var18, var19) /* with_capacity on <var18:Array[Object]>*/;
var_20 = var18;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "";
var24 = 0;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
((void (*)(val*, val*))(var_20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_20, var22) /* add on <var_20:Array[Object]>*/;
var26 = BOX_kernel__Char(var_esc); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_20, var26) /* add on <var_20:Array[Object]>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "[";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_20, var28) /* add on <var_20:Array[Object]>*/;
((void (*)(val*, val*))(var_20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_20, var_color) /* add on <var_20:Array[Object]>*/;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "m";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var_20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_20, var33) /* add on <var_20:Array[Object]>*/;
var37 = ((val* (*)(val*))(var_20->class->vft[COLOR_string__Object__to_s]))(var_20) /* to_s on <var_20:Array[Object]>*/;
var_col = var37;
var_l = self;
var38 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__line_start]))(var_l) /* line_start on <var_l:Location>*/;
var_i = var38;
var39 = ((val* (*)(val*))(var_l->class->vft[COLOR_location__Location__file]))(var_l) /* file on <var_l:Location>*/;
if (var39 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 174);
show_backtrace(1);
} else {
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_location__SourceFile__line_starts]))(var39) /* line_starts on <var39:nullable SourceFile>*/;
}
var41 = 1;
{ /* Inline kernel#Int#- (var_i,var41) */
var44 = var_i - var41;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var45 = ((val* (*)(val*, long))(var40->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var40, var42) /* [] on <var40:Array[Int]>*/;
var46 = ((struct instance_kernel__Int*)var45)->value; /* autounbox from nullable Object to Int */;
var_line_start = var46;
var_line_end = var_line_start;
var47 = ((val* (*)(val*))(var_l->class->vft[COLOR_location__Location__file]))(var_l) /* file on <var_l:Location>*/;
if (var47 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/location.nit", 176);
show_backtrace(1);
} else {
var48 = ((val* (*)(val*))(var47->class->vft[COLOR_location__SourceFile__string]))(var47) /* string on <var47:nullable SourceFile>*/;
}
var_string = var48;
for(;;) {
var51 = 1;
{ /* Inline kernel#Int#+ (var_line_end,var51) */
var54 = var_line_end + var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var55 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
{ /* Inline kernel#Int#< (var52,var55) */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var58 = 1; /* easy <var55:Int> isa OTHER*/
if (!var58) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var59 = var52 < var55;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var_60 = var56;
if (var56){
var61 = ((val* (*)(val*))(var_string->class->vft[COLOR_string__AbstractString__chars]))(var_string) /* chars on <var_string:String>*/;
var62 = 1;
{ /* Inline kernel#Int#+ (var_line_end,var62) */
var65 = var_line_end + var62;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var66 = ((val* (*)(val*, long))(var61->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var61, var63) /* [] on <var61:StringCharView>*/;
var67 = '\n';
{ /* Inline kernel#Char#!= (var66,var67) */
var70 = (var66 != NULL) && (var66->class == &class_kernel__Char);
if (var70) {
var71 = ((struct instance_kernel__Char*)var66)->value; /* autounbox from nullable Object to Char */;
var70 = (var71 == var67);
}
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var50 = var68;
} else {
var50 = var_60;
}
var_73 = var50;
if (var50){
var74 = ((val* (*)(val*))(var_string->class->vft[COLOR_string__AbstractString__chars]))(var_string) /* chars on <var_string:String>*/;
var75 = 1;
{ /* Inline kernel#Int#+ (var_line_end,var75) */
var78 = var_line_end + var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var79 = ((val* (*)(val*, long))(var74->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var74, var76) /* [] on <var74:StringCharView>*/;
var80 = '\15';
{ /* Inline kernel#Char#!= (var79,var80) */
var83 = (var79 != NULL) && (var79->class == &class_kernel__Char);
if (var83) {
var84 = ((struct instance_kernel__Char*)var79)->value; /* autounbox from nullable Object to Char */;
var83 = (var84 == var80);
}
var85 = !var83;
var81 = var85;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var49 = var81;
} else {
var49 = var_73;
}
if (!var49) break;
var86 = 1;
{ /* Inline kernel#Int#+ (var_line_end,var86) */
var89 = var_line_end + var86;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var_line_end = var87;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var90 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
var91 = 1;
{ /* Inline kernel#Int#- (var90,var91) */
var94 = var90 - var91;
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var95 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var_line_start, var92) /* substring on <var_string:String>*/;
var_lstart = var95;
var96 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__line_end]))(var_l) /* line_end on <var_l:Location>*/;
{ /* Inline kernel#Int#!= (var_i,var96) */
var99 = var_i == var96;
var100 = !var99;
var97 = var100;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
if (var97){
{ /* Inline kernel#Int#- (var_line_end,var_line_start) */
var103 = var_line_end - var_line_start;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var104 = 1;
{ /* Inline kernel#Int#+ (var101,var104) */
var107 = var101 + var104;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var108 = BOX_kernel__Int(var105); /* autobox from Int to nullable Object */
var_cend = var108;
} else {
var109 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_end]))(var_l) /* column_end on <var_l:Location>*/;
var110 = BOX_kernel__Int(var109); /* autobox from Int to nullable Object */
var_cend = var110;
}
{ /* Inline kernel#Int#+ (var_line_start,var_cend) */
var113 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var114 = var_line_start + var113;
var111 = var114;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var115 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
{ /* Inline kernel#Int#<= (var111,var115) */
/* Covariant cast for argument 0 (i) <var115:Int> isa OTHER */
/* <var115:Int> isa OTHER */
var118 = 1; /* easy <var115:Int> isa OTHER*/
if (!var118) {
var_class_name121 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var122 = var111 <= var115;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
if (var116){
var123 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
{ /* Inline kernel#Int#+ (var_line_start,var123) */
var126 = var_line_start + var123;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var127 = 1;
{ /* Inline kernel#Int#- (var124,var127) */
var130 = var124 - var127;
var128 = var130;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
var131 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
{ /* Inline kernel#Int#- (var_cend,var131) */
var134 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var135 = var134 - var131;
var132 = var135;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var136 = 1;
{ /* Inline kernel#Int#+ (var132,var136) */
var139 = var132 + var136;
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var140 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var128, var137) /* substring on <var_string:String>*/;
var_lmid = var140;
{ /* Inline kernel#Int#+ (var_line_start,var_cend) */
var143 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var144 = var_line_start + var143;
var141 = var144;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
{ /* Inline kernel#Int#- (var_line_end,var_line_start) */
var147 = var_line_end - var_line_start;
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
{ /* Inline kernel#Int#- (var145,var_cend) */
var150 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var151 = var145 - var150;
var148 = var151;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var152 = 1;
{ /* Inline kernel#Int#+ (var148,var152) */
var155 = var148 + var152;
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var156 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var141, var153) /* substring on <var_string:String>*/;
var_lend = var156;
} else {
if (varonce157) {
var158 = varonce157;
} else {
var159 = "";
var160 = 0;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var_lmid = var158;
if (varonce162) {
var163 = varonce162;
} else {
var164 = "";
var165 = 0;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var_lend = var163;
}
var167 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var167->class->vft[COLOR_string__Buffer__init]))(var167) /* init on <var167:Buffer>*/;
var_indent = var167;
var168 = NEW_range__Range(&type_range__Rangekernel__Int);
var169 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
{ /* Inline kernel#Int#+ (var_line_start,var169) */
var172 = var_line_start + var169;
var170 = var172;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var173 = 1;
{ /* Inline kernel#Int#- (var170,var173) */
var176 = var170 - var173;
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var177 = BOX_kernel__Int(var_line_start); /* autobox from Int to Discrete */
var178 = BOX_kernel__Int(var174); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var168->class->vft[COLOR_range__Range__without_last]))(var168, var177, var178) /* without_last on <var168:Range[Int]>*/;
var179 = ((val* (*)(val*))(var168->class->vft[COLOR_abstract_collection__Collection__iterator]))(var168) /* iterator on <var168:Range[Int]>*/;
for(;;) {
var180 = ((short int (*)(val*))(var179->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var179) /* is_ok on <var179:Iterator[nullable Object]>*/;
if(!var180) break;
var181 = ((val* (*)(val*))(var179->class->vft[COLOR_abstract_collection__Iterator__item]))(var179) /* item on <var179:Iterator[nullable Object]>*/;
var182 = ((struct instance_kernel__Int*)var181)->value; /* autounbox from nullable Object to Int */;
var_j = var182;
var183 = ((val* (*)(val*))(var_string->class->vft[COLOR_string__AbstractString__chars]))(var_string) /* chars on <var_string:String>*/;
var184 = ((val* (*)(val*, long))(var183->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var183, var_j) /* [] on <var183:StringCharView>*/;
var185 = '\11';
{ /* Inline kernel#Char#== (var184,var185) */
var188 = (var184 != NULL) && (var184->class == &class_kernel__Char);
if (var188) {
var189 = ((struct instance_kernel__Char*)var184)->value; /* autounbox from nullable Object to Char */;
var188 = (var189 == var185);
}
var186 = var188;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
if (var186){
var190 = '\11';
var191 = BOX_kernel__Char(var190); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_indent->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_indent, var191) /* add on <var_indent:Buffer>*/;
} else {
var192 = ' ';
var193 = BOX_kernel__Char(var192); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_indent->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_indent, var193) /* add on <var_indent:Buffer>*/;
}
CONTINUE_label194: (void)0;
((void (*)(val*))(var179->class->vft[COLOR_abstract_collection__Iterator__next]))(var179) /* next on <var179:Iterator[nullable Object]>*/;
}
BREAK_label194: (void)0;
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
var196 = 13;
((void (*)(val*, long))(var195->class->vft[COLOR_array__Array__with_capacity]))(var195, var196) /* with_capacity on <var195:Array[Object]>*/;
var_197 = var195;
if (varonce198) {
var199 = varonce198;
} else {
var200 = "\11";
var201 = 1;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var199) /* add on <var_197:Array[Object]>*/;
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var_lstart) /* add on <var_197:Array[Object]>*/;
if (varonce203) {
var204 = varonce203;
} else {
var205 = "";
var206 = 0;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var204) /* add on <var_197:Array[Object]>*/;
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var_col) /* add on <var_197:Array[Object]>*/;
if (varonce208) {
var209 = varonce208;
} else {
var210 = "";
var211 = 0;
var212 = string__NativeString__to_s_with_length(var210, var211);
var209 = var212;
varonce208 = var209;
}
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var209) /* add on <var_197:Array[Object]>*/;
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var_lmid) /* add on <var_197:Array[Object]>*/;
if (varonce213) {
var214 = varonce213;
} else {
var215 = "";
var216 = 0;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var214) /* add on <var_197:Array[Object]>*/;
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var_def) /* add on <var_197:Array[Object]>*/;
if (varonce218) {
var219 = varonce218;
} else {
var220 = "";
var221 = 0;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var219) /* add on <var_197:Array[Object]>*/;
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var_lend) /* add on <var_197:Array[Object]>*/;
if (varonce223) {
var224 = varonce223;
} else {
var225 = "\n\11";
var226 = 2;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var224) /* add on <var_197:Array[Object]>*/;
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var_indent) /* add on <var_197:Array[Object]>*/;
if (varonce228) {
var229 = varonce228;
} else {
var230 = "^";
var231 = 1;
var232 = string__NativeString__to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
((void (*)(val*, val*))(var_197->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_197, var229) /* add on <var_197:Array[Object]>*/;
var233 = ((val* (*)(val*))(var_197->class->vft[COLOR_string__Object__to_s]))(var_197) /* to_s on <var_197:Array[Object]>*/;
var = var233;
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
