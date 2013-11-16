#include "location.sep.0.h"
/* method location#SourceFile#filename for (self: SourceFile): String */
val* location__SourceFile__filename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_location__SourceFile___64dfilename].val; /* @filename on <self:SourceFile> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @filename", "src/location.nit", 22);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @string", "src/location.nit", 25);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @line_starts", "src/location.nit", 44);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/location.nit", 68);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/location.nit", 71);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/location.nit", 81);
exit(1);
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
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var_ /* var : Bool */;
long var58 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var18 = var11 > var12;
var13 = var18;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var19 = 0;
var = var19;
goto RET_LABEL;
} else {
}
var20 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var21 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_end]))(var_loc) /* line_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#> (var20,var21) */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var27 = var20 > var21;
var22 = var27;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
if (var22){
var28 = 0;
var = var28;
goto RET_LABEL;
} else {
}
var29 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var30 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_start]))(var_loc) /* line_start on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#== (var29,var30) */
var33 = var29 == var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
if (var31){
var34 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var35 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_start]))(var_loc) /* column_start on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#< (var34,var35) */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (!var38) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var41 = var34 < var35;
var36 = var41;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
if (var36){
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
var43 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var44 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_end]))(var_loc) /* column_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#> (var43,var44) */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (!var47) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var50 = var43 > var44;
var45 = var50;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
if (var45){
var51 = 0;
var = var51;
goto RET_LABEL;
} else {
}
} else {
}
var53 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var54 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_end]))(var_loc) /* line_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#== (var53,var54) */
var57 = var53 == var54;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var_ = var55;
if (var55){
var58 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
var59 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_end]))(var_loc) /* column_end on <var_loc:nullable Location(Location)>*/;
{ /* Inline kernel#Int#> (var58,var59) */
/* Covariant cast for argument 0 (i) <var59:Int> isa OTHER */
/* <var59:Int> isa OTHER */
var62 = 1; /* easy <var59:Int> isa OTHER*/
if (!var62) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var65 = var58 > var59;
var60 = var65;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var52 = var60;
} else {
var52 = var_;
}
if (var52){
var66 = 0;
var = var66;
goto RET_LABEL;
} else {
}
var67 = 1;
var = var67;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/location.nit", 124);
exit(1);
} else {
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_location__SourceFile__filename]))(var8) /* filename on <var8:nullable SourceFile>*/;
}
var_file_part = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/location.nit", 125);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
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
CHECK_NEW_array__Array(var34);
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
CHECK_NEW_array__Array(var61);
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
CHECK_NEW_array__Array(var96);
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
CHECK_NEW_location__Location(var7);
var_relative = var7;
} else {
var13 = NEW_location__Location(&type_location__Location);
var14 = ((val* (*)(val*))(self->class->vft[COLOR_location__Location__file]))(self) /* file on <self:Location>*/;
var15 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_start]))(self) /* line_start on <self:Location>*/;
var16 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var17 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var18 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
((void (*)(val*, val*, long, long, long, long))(var13->class->vft[COLOR_location__Location__init]))(var13, var14, var15, var16, var17, var18) /* init on <var13:Location>*/;
CHECK_NEW_location__Location(var13);
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
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
short int var57 /* : Bool */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/location.nit", 149);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var21 = var14 < var15;
var16 = var21;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var = var16;
goto RET_LABEL;
} else {
}
var22 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var23 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_start]))(var_other) /* column_start on <var_other:Location>*/;
{ /* Inline kernel#Int#!= (var22,var23) */
var26 = var22 == var23;
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
if (var24){
var28 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_start]))(self) /* column_start on <self:Location>*/;
var29 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_start]))(var_other) /* column_start on <var_other:Location>*/;
{ /* Inline kernel#Int#< (var28,var29) */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var35 = var28 < var29;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var = var30;
goto RET_LABEL;
} else {
}
var36 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var37 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_end]))(var_other) /* line_end on <var_other:Location>*/;
{ /* Inline kernel#Int#!= (var36,var37) */
var40 = var36 == var37;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
if (var38){
var42 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__line_end]))(self) /* line_end on <self:Location>*/;
var43 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__line_end]))(var_other) /* line_end on <var_other:Location>*/;
{ /* Inline kernel#Int#< (var42,var43) */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (!var46) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var49 = var42 < var43;
var44 = var49;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var = var44;
goto RET_LABEL;
} else {
}
var50 = ((long (*)(val*))(self->class->vft[COLOR_location__Location__column_end]))(self) /* column_end on <self:Location>*/;
var51 = ((long (*)(val*))(var_other->class->vft[COLOR_location__Location__column_end]))(var_other) /* column_end on <var_other:Location>*/;
{ /* Inline kernel#Int#< (var50,var51) */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (!var54) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var57 = var50 < var51;
var52 = var57;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var = var52;
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
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
long var61 /* : Int */;
long var62 /* : Int */;
long var64 /* : Int */;
val* var65 /* : nullable Object */;
char var66 /* : Char */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
char var70 /* : Char */;
short int var71 /* : Bool */;
short int var_72 /* var : Bool */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
val* var77 /* : nullable Object */;
char var78 /* : Char */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
char var82 /* : Char */;
short int var83 /* : Bool */;
long var84 /* : Int */;
long var85 /* : Int */;
long var87 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var_lstart /* var lstart: String */;
long var94 /* : Int */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
long var99 /* : Int */;
long var101 /* : Int */;
long var102 /* : Int */;
long var103 /* : Int */;
long var105 /* : Int */;
val* var106 /* : nullable Object */;
val* var_cend /* var cend: nullable Object */;
long var107 /* : Int */;
val* var108 /* : nullable Object */;
long var109 /* : Int */;
long var111 /* : Int */;
long var112 /* : Int */;
long var113 /* : Int */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
short int var119 /* : Bool */;
long var120 /* : Int */;
long var121 /* : Int */;
long var123 /* : Int */;
long var124 /* : Int */;
long var125 /* : Int */;
long var127 /* : Int */;
long var128 /* : Int */;
long var129 /* : Int */;
long var131 /* : Int */;
long var132 /* : Int */;
long var133 /* : Int */;
long var134 /* : Int */;
long var136 /* : Int */;
val* var137 /* : String */;
val* var_lmid /* var lmid: nullable Object */;
long var138 /* : Int */;
long var140 /* : Int */;
long var141 /* : Int */;
long var142 /* : Int */;
long var144 /* : Int */;
long var145 /* : Int */;
long var147 /* : Int */;
long var148 /* : Int */;
long var149 /* : Int */;
long var150 /* : Int */;
long var152 /* : Int */;
val* var153 /* : String */;
val* var_lend /* var lend: nullable Object */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : Buffer */;
val* var_indent /* var indent: Buffer */;
val* var165 /* : Range[Int] */;
long var166 /* : Int */;
long var167 /* : Int */;
long var169 /* : Int */;
long var170 /* : Int */;
long var171 /* : Int */;
long var173 /* : Int */;
val* var174 /* : Discrete */;
val* var175 /* : Discrete */;
val* var176 /* : Iterator[nullable Object] */;
short int var177 /* : Bool */;
val* var178 /* : nullable Object */;
long var_j /* var j: Int */;
long var179 /* : Int */;
val* var180 /* : nullable Object */;
char var181 /* : Char */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
char var185 /* : Char */;
char var186 /* : Char */;
val* var187 /* : nullable Object */;
char var188 /* : Char */;
val* var189 /* : nullable Object */;
val* var191 /* : Array[Object] */;
long var192 /* : Int */;
val* var_193 /* var : Array[Object] */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : String */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
long var217 /* : Int */;
val* var218 /* : String */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
long var222 /* : Int */;
val* var223 /* : String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : String */;
val* var229 /* : String */;
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
CHECK_NEW_array__Array(var5);
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
CHECK_NEW_array__Array(var18);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/location.nit", 174);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/location.nit", 176);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var59 = var52 < var55;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var_60 = var56;
if (var56){
var61 = 1;
{ /* Inline kernel#Int#+ (var_line_end,var61) */
var64 = var_line_end + var61;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var65 = ((val* (*)(val*, long))(var_string->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_string, var62) /* [] on <var_string:String>*/;
var66 = '\n';
{ /* Inline kernel#Char#!= (var65,var66) */
var69 = (var65 != NULL) && (var65->class == &class_kernel__Char);
if (var69) {
var70 = ((struct instance_kernel__Char*)var65)->value; /* autounbox from nullable Object to Char */;
var69 = (var70 == var66);
}
var71 = !var69;
var67 = var71;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var50 = var67;
} else {
var50 = var_60;
}
var_72 = var50;
if (var50){
var73 = 1;
{ /* Inline kernel#Int#+ (var_line_end,var73) */
var76 = var_line_end + var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var77 = ((val* (*)(val*, long))(var_string->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_string, var74) /* [] on <var_string:String>*/;
var78 = '\15';
{ /* Inline kernel#Char#!= (var77,var78) */
var81 = (var77 != NULL) && (var77->class == &class_kernel__Char);
if (var81) {
var82 = ((struct instance_kernel__Char*)var77)->value; /* autounbox from nullable Object to Char */;
var81 = (var82 == var78);
}
var83 = !var81;
var79 = var83;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var49 = var79;
} else {
var49 = var_72;
}
if (!var49) break;
var84 = 1;
{ /* Inline kernel#Int#+ (var_line_end,var84) */
var87 = var_line_end + var84;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var_line_end = var85;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var88 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
var89 = 1;
{ /* Inline kernel#Int#- (var88,var89) */
var92 = var88 - var89;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var93 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var_line_start, var90) /* substring on <var_string:String>*/;
var_lstart = var93;
var94 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__line_end]))(var_l) /* line_end on <var_l:Location>*/;
{ /* Inline kernel#Int#!= (var_i,var94) */
var97 = var_i == var94;
var98 = !var97;
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
if (var95){
{ /* Inline kernel#Int#- (var_line_end,var_line_start) */
var101 = var_line_end - var_line_start;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
var102 = 1;
{ /* Inline kernel#Int#+ (var99,var102) */
var105 = var99 + var102;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var106 = BOX_kernel__Int(var103); /* autobox from Int to nullable Object */
var_cend = var106;
} else {
var107 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_end]))(var_l) /* column_end on <var_l:Location>*/;
var108 = BOX_kernel__Int(var107); /* autobox from Int to nullable Object */
var_cend = var108;
}
{ /* Inline kernel#Int#+ (var_line_start,var_cend) */
var111 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var112 = var_line_start + var111;
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var113 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
{ /* Inline kernel#Int#<= (var109,var113) */
/* Covariant cast for argument 0 (i) <var113:Int> isa OTHER */
/* <var113:Int> isa OTHER */
var116 = 1; /* easy <var113:Int> isa OTHER*/
if (!var116) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var119 = var109 <= var113;
var114 = var119;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
if (var114){
var120 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
{ /* Inline kernel#Int#+ (var_line_start,var120) */
var123 = var_line_start + var120;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
var124 = 1;
{ /* Inline kernel#Int#- (var121,var124) */
var127 = var121 - var124;
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var128 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
{ /* Inline kernel#Int#- (var_cend,var128) */
var131 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var132 = var131 - var128;
var129 = var132;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var133 = 1;
{ /* Inline kernel#Int#+ (var129,var133) */
var136 = var129 + var133;
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
var137 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var125, var134) /* substring on <var_string:String>*/;
var_lmid = var137;
{ /* Inline kernel#Int#+ (var_line_start,var_cend) */
var140 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var141 = var_line_start + var140;
var138 = var141;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
{ /* Inline kernel#Int#- (var_line_end,var_line_start) */
var144 = var_line_end - var_line_start;
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
{ /* Inline kernel#Int#- (var142,var_cend) */
var147 = ((struct instance_kernel__Int*)var_cend)->value; /* autounbox from nullable Object to Int */;
var148 = var142 - var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var149 = 1;
{ /* Inline kernel#Int#+ (var145,var149) */
var152 = var145 + var149;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var153 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var138, var150) /* substring on <var_string:String>*/;
var_lend = var153;
} else {
if (varonce154) {
var155 = varonce154;
} else {
var156 = "";
var157 = 0;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
var_lmid = var155;
if (varonce159) {
var160 = varonce159;
} else {
var161 = "";
var162 = 0;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var_lend = var160;
}
var164 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var164->class->vft[COLOR_string__Buffer__init]))(var164) /* init on <var164:Buffer>*/;
CHECK_NEW_string__Buffer(var164);
var_indent = var164;
var165 = NEW_range__Range(&type_range__Rangekernel__Int);
var166 = ((long (*)(val*))(var_l->class->vft[COLOR_location__Location__column_start]))(var_l) /* column_start on <var_l:Location>*/;
{ /* Inline kernel#Int#+ (var_line_start,var166) */
var169 = var_line_start + var166;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
var170 = 1;
{ /* Inline kernel#Int#- (var167,var170) */
var173 = var167 - var170;
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var174 = BOX_kernel__Int(var_line_start); /* autobox from Int to Discrete */
var175 = BOX_kernel__Int(var171); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var165->class->vft[COLOR_range__Range__without_last]))(var165, var174, var175) /* without_last on <var165:Range[Int]>*/;
CHECK_NEW_range__Range(var165);
var176 = ((val* (*)(val*))(var165->class->vft[COLOR_abstract_collection__Collection__iterator]))(var165) /* iterator on <var165:Range[Int]>*/;
for(;;) {
var177 = ((short int (*)(val*))(var176->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var176) /* is_ok on <var176:Iterator[nullable Object]>*/;
if(!var177) break;
var178 = ((val* (*)(val*))(var176->class->vft[COLOR_abstract_collection__Iterator__item]))(var176) /* item on <var176:Iterator[nullable Object]>*/;
var179 = ((struct instance_kernel__Int*)var178)->value; /* autounbox from nullable Object to Int */;
var_j = var179;
var180 = ((val* (*)(val*, long))(var_string->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_string, var_j) /* [] on <var_string:String>*/;
var181 = '\11';
{ /* Inline kernel#Char#== (var180,var181) */
var184 = (var180 != NULL) && (var180->class == &class_kernel__Char);
if (var184) {
var185 = ((struct instance_kernel__Char*)var180)->value; /* autounbox from nullable Object to Char */;
var184 = (var185 == var181);
}
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
if (var182){
var186 = '\11';
var187 = BOX_kernel__Char(var186); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_indent->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_indent, var187) /* add on <var_indent:Buffer>*/;
} else {
var188 = ' ';
var189 = BOX_kernel__Char(var188); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_indent->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_indent, var189) /* add on <var_indent:Buffer>*/;
}
CONTINUE_label190: (void)0;
((void (*)(val*))(var176->class->vft[COLOR_abstract_collection__Iterator__next]))(var176) /* next on <var176:Iterator[nullable Object]>*/;
}
BREAK_label190: (void)0;
var191 = NEW_array__Array(&type_array__Arraykernel__Object);
var192 = 13;
((void (*)(val*, long))(var191->class->vft[COLOR_array__Array__with_capacity]))(var191, var192) /* with_capacity on <var191:Array[Object]>*/;
CHECK_NEW_array__Array(var191);
var_193 = var191;
if (varonce194) {
var195 = varonce194;
} else {
var196 = "\11";
var197 = 1;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var195) /* add on <var_193:Array[Object]>*/;
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var_lstart) /* add on <var_193:Array[Object]>*/;
if (varonce199) {
var200 = varonce199;
} else {
var201 = "";
var202 = 0;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var200) /* add on <var_193:Array[Object]>*/;
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var_col) /* add on <var_193:Array[Object]>*/;
if (varonce204) {
var205 = varonce204;
} else {
var206 = "";
var207 = 0;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var205) /* add on <var_193:Array[Object]>*/;
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var_lmid) /* add on <var_193:Array[Object]>*/;
if (varonce209) {
var210 = varonce209;
} else {
var211 = "";
var212 = 0;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var210) /* add on <var_193:Array[Object]>*/;
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var_def) /* add on <var_193:Array[Object]>*/;
if (varonce214) {
var215 = varonce214;
} else {
var216 = "";
var217 = 0;
var218 = string__NativeString__to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var215) /* add on <var_193:Array[Object]>*/;
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var_lend) /* add on <var_193:Array[Object]>*/;
if (varonce219) {
var220 = varonce219;
} else {
var221 = "\n\11";
var222 = 2;
var223 = string__NativeString__to_s_with_length(var221, var222);
var220 = var223;
varonce219 = var220;
}
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var220) /* add on <var_193:Array[Object]>*/;
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var_indent) /* add on <var_193:Array[Object]>*/;
if (varonce224) {
var225 = varonce224;
} else {
var226 = "^";
var227 = 1;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
((void (*)(val*, val*))(var_193->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_193, var225) /* add on <var_193:Array[Object]>*/;
var229 = ((val* (*)(val*))(var_193->class->vft[COLOR_string__Object__to_s]))(var_193) /* to_s on <var_193:Array[Object]>*/;
var = var229;
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
