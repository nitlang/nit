#include "string.sep.0.h"
/* method string#AbstractString#items for (self: AbstractString): NativeString */
char* string__AbstractString__items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:AbstractString> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#items for (self: Object): NativeString */
char* VIRTUAL_string__AbstractString__items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string__AbstractString__items(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#[] for (self: AbstractString, Int): Char */
char string__AbstractString___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
char* var1 /* : NativeString */;
char var2 /* : Char */;
char var4 /* : Char */;
var_index = p0;
var1 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:AbstractString> */
{ /* Inline string#NativeString#[] (var1,var_index) */
var4 = var1[var_index];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_string__AbstractString___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__AbstractString___91d_93d(self, p0);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#AbstractString#substring for (self: AbstractString, Int, Int): String */
val* string__AbstractString__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
short int var30 /* : Bool */;
val* var31 /* : Buffer */;
long var32 /* : Int */;
long var34 /* : Int */;
val* var_r /* var r: Buffer */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
short int var40 /* : Bool */;
char* var41 /* : NativeString */;
char var42 /* : Char */;
char var44 /* : Char */;
val* var45 /* : nullable Object */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
var_from = p0;
var_count = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_count,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var5 = var_count >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 50);
exit(1);
}
{ /* Inline kernel#Int#+ (var_count,var_from) */
var8 = var_count + var_from;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_count = var6;
var9 = 0;
{ /* Inline kernel#Int#< (var_from,var9) */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var15 = var_from < var9;
var10 = var15;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var16 = 0;
var_from = var16;
} else {
}
var17 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
{ /* Inline kernel#Int#> (var_count,var17) */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var23 = var_count > var17;
var18 = var23;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (var18){
var24 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
var_count = var24;
} else {
}
{ /* Inline kernel#Int#< (var_from,var_count) */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var27 = 1; /* easy <var_count:Int> isa OTHER*/
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var30 = var_from < var_count;
var25 = var30;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
var31 = NEW_string__Buffer(&type_string__Buffer);
{ /* Inline kernel#Int#- (var_count,var_from) */
var34 = var_count - var_from;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
((void (*)(val*, long))(var31->class->vft[COLOR_string__Buffer__with_capacity]))(var31, var32) /* with_capacity on <var31:Buffer>*/;
CHECK_NEW_string__Buffer(var31);
var_r = var31;
for(;;) {
{ /* Inline kernel#Int#< (var_from,var_count) */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var37 = 1; /* easy <var_count:Int> isa OTHER*/
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var40 = var_from < var_count;
var35 = var40;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (!var35) break;
var41 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:AbstractString> */
{ /* Inline string#NativeString#[] (var41,var_from) */
var44 = var41[var_from];
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var45 = BOX_kernel__Char(var42); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_r->class->vft[COLOR_abstract_collection__Sequence__push]))(var_r, var45) /* push on <var_r:Buffer>*/;
var46 = 1;
{ /* Inline kernel#Int#+ (var_from,var46) */
var49 = var_from + var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var_from = var47;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var50 = ((val* (*)(val*))(var_r->class->vft[COLOR_string__Object__to_s]))(var_r) /* to_s on <var_r:Buffer>*/;
var = var50;
goto RET_LABEL;
} else {
if (varonce) {
var51 = varonce;
} else {
var52 = "";
var53 = 0;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce = var51;
}
var = var51;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#AbstractString#substring for (self: Object, Int, Int): String */
val* VIRTUAL_string__AbstractString__substring(val* self, long p0, long p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__substring(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#substring_from for (self: AbstractString, Int): String */
val* string__AbstractString__substring_from(val* self, long p0) {
val* var /* : String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var10 /* : String */;
var_from = p0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
{ /* Inline kernel#Int#< (var_from,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var5 = var_from < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 75);
exit(1);
}
var6 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
{ /* Inline kernel#Int#- (var6,var_from) */
var9 = var6 - var_from;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var10 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var_from, var7) /* substring on <self:AbstractString>*/;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#substring_from for (self: Object, Int): String */
val* VIRTUAL_string__AbstractString__substring_from(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__substring_from(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#has_substring for (self: AbstractString, String, Int): Bool */
short int string__AbstractString__has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_itsindex /* var itsindex: Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var_myindex /* var myindex: Int */;
char* var9 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
char* var10 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var_its_index_from /* var its_index_from: Int */;
long var25 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
short int var33 /* : Bool */;
char var34 /* : Char */;
char var36 /* : Char */;
char var37 /* : Char */;
char var39 /* : Char */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
long var45 /* : Int */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
var_str = p0;
var_pos = p1;
var1 = ((long (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__length]))(var_str) /* length on <var_str:String>*/;
var2 = 1;
{ /* Inline kernel#Int#- (var1,var2) */
var5 = var1 - var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_itsindex = var3;
{ /* Inline kernel#Int#+ (var_pos,var_itsindex) */
var8 = var_pos + var_itsindex;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_myindex = var6;
var9 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:AbstractString> */
var_myitems = var9;
var10 = var_str->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_str:String> */
var_itsitems = var10;
var12 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
{ /* Inline kernel#Int#> (var_myindex,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var16 = var_myindex > var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_ = var13;
if (var13){
var11 = var_;
} else {
{ /* Inline kernel#Int#> (var_itsindex,var_myindex) */
/* Covariant cast for argument 0 (i) <var_myindex:Int> isa OTHER */
/* <var_myindex:Int> isa OTHER */
var19 = 1; /* easy <var_myindex:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var22 = var_itsindex > var_myindex;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var11 = var17;
}
if (var11){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
var24 = var_str->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_str:String> */
var_its_index_from = var24;
{ /* Inline kernel#Int#+ (var_itsindex,var_its_index_from) */
var27 = var_itsindex + var_its_index_from;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_itsindex = var25;
for(;;) {
{ /* Inline kernel#Int#>= (var_itsindex,var_its_index_from) */
/* Covariant cast for argument 0 (i) <var_its_index_from:Int> isa OTHER */
/* <var_its_index_from:Int> isa OTHER */
var30 = 1; /* easy <var_its_index_from:Int> isa OTHER*/
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var33 = var_itsindex >= var_its_index_from;
var28 = var33;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
if (!var28) break;
{ /* Inline string#NativeString#[] (var_myitems,var_myindex) */
var36 = var_myitems[var_myindex];
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
{ /* Inline string#NativeString#[] (var_itsitems,var_itsindex) */
var39 = var_itsitems[var_itsindex];
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
{ /* Inline kernel#Char#!= (var34,var37) */
var42 = var34 == var37;
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
if (var40){
var44 = 0;
var = var44;
goto RET_LABEL;
} else {
}
var45 = 1;
{ /* Inline kernel#Int#- (var_myindex,var45) */
var48 = var_myindex - var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var_myindex = var46;
var49 = 1;
{ /* Inline kernel#Int#- (var_itsindex,var49) */
var52 = var_itsindex - var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var_itsindex = var50;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var53 = 1;
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#has_substring for (self: Object, String, Int): Bool */
short int VIRTUAL_string__AbstractString__has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__AbstractString__has_substring(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#has_prefix for (self: AbstractString, String): Bool */
short int string__AbstractString__has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var_prefix = p0;
var1 = 0;
var2 = ((short int (*)(val*, val*, long))(self->class->vft[COLOR_string__AbstractString__has_substring]))(self, var_prefix, var1) /* has_substring on <self:AbstractString>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#has_prefix for (self: Object, String): Bool */
short int VIRTUAL_string__AbstractString__has_prefix(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__AbstractString__has_prefix(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#has_suffix for (self: AbstractString, String): Bool */
short int string__AbstractString__has_suffix(val* self, val* p0) {
short int var /* : Bool */;
val* var_suffix /* var suffix: String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
var_suffix = p0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
var2 = ((long (*)(val*))(var_suffix->class->vft[COLOR_abstract_collection__Collection__length]))(var_suffix) /* length on <var_suffix:String>*/;
{ /* Inline kernel#Int#- (var1,var2) */
var5 = var1 - var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var6 = ((short int (*)(val*, val*, long))(self->class->vft[COLOR_string__AbstractString__has_substring]))(self, var_suffix, var3) /* has_substring on <self:AbstractString>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#has_suffix for (self: Object, String): Bool */
short int VIRTUAL_string__AbstractString__has_suffix(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__AbstractString__has_suffix(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_i for (self: AbstractString): Int */
long string__AbstractString__to_i(val* self) {
long var /* : Int */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var5 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:AbstractString>*/;
var2 = ((char* (*)(val*))(var1->class->vft[COLOR_string__String__to_cstring]))(var1) /* to_cstring on <var1:String>*/;
{ /* Inline string#NativeString#atoi (var2) */
var5 = atoi(var2);;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_i for (self: Object): Int */
long VIRTUAL_string__AbstractString__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__AbstractString__to_i(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_f for (self: AbstractString): Float */
double string__AbstractString__to_f(val* self) {
double var /* : Float */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
double var3 /* : Float */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:AbstractString>*/;
var2 = ((char* (*)(val*))(var1->class->vft[COLOR_string__String__to_cstring]))(var1) /* to_cstring on <var1:String>*/;
var3 = string__NativeString__atof(var2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_f for (self: Object): Float */
double VIRTUAL_string__AbstractString__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = string__AbstractString__to_f(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_hex for (self: AbstractString): Int */
long string__AbstractString__to_hex(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var1 = 16;
var2 = ((long (*)(val*, long))(self->class->vft[COLOR_string__AbstractString__a_to]))(self, var1) /* a_to on <self:AbstractString>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_hex for (self: Object): Int */
long VIRTUAL_string__AbstractString__to_hex(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__AbstractString__to_hex(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#a_to for (self: AbstractString, Int): Int */
long string__AbstractString__a_to(val* self, long p0) {
long var /* : Int */;
long var_base /* var base: Int */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
short int var_neg /* var neg: Bool */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
char var_c /* var c: Char */;
char var6 /* : Char */;
long var7 /* : Int */;
long var_v /* var v: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
var_base = p0;
var1 = 0;
var_i = var1;
var2 = 0;
var_neg = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:AbstractString>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var6 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var_c = var6;
var7 = kernel__Char__to_i(var_c);
var_v = var7;
{ /* Inline kernel#Int#> (var_v,var_base) */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var10 = 1; /* easy <var_base:Int> isa OTHER*/
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var11 = var_v > var_base;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
if (var_neg){
{ /* Inline kernel#Int#unary - (var_i) */
var14 = -var_i;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var = var12;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
var15 = 0;
{ /* Inline kernel#Int#< (var_v,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var21 = var_v < var15;
var16 = var21;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (var16){
var22 = 1;
var_neg = var22;
} else {
{ /* Inline kernel#Int#* (var_i,var_base) */
var25 = var_i * var_base;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
{ /* Inline kernel#Int#+ (var23,var_v) */
var28 = var23 + var_v;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_i = var26;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_neg){
{ /* Inline kernel#Int#unary - (var_i) */
var31 = -var_i;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var = var29;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#AbstractString#a_to for (self: Object, Int): Int */
long VIRTUAL_string__AbstractString__a_to(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__AbstractString__a_to(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#is_numeric for (self: AbstractString): Bool */
short int string__AbstractString__is_numeric(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_has_point_or_comma /* var has_point_or_comma: Bool */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
char var_i /* var i: Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
char var10 /* : Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
char var14 /* : Char */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var1 = 0;
var_has_point_or_comma = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:AbstractString>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var5 = ((struct instance_kernel__Char*)var4)->value; /* autounbox from nullable Object to Char */;
var_i = var5;
var6 = string__Char__is_numeric(var_i);
var7 = !var6;
if (var7){
var10 = '.';
{ /* Inline kernel#Char#== (var_i,var10) */
var13 = var_i == var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var_ = var11;
if (var11){
var9 = var_;
} else {
var14 = ',';
{ /* Inline kernel#Char#== (var_i,var14) */
var17 = var_i == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var9 = var15;
}
var_18 = var9;
if (var9){
var19 = !var_has_point_or_comma;
var8 = var19;
} else {
var8 = var_18;
}
if (var8){
var20 = 1;
var_has_point_or_comma = var20;
} else {
var21 = 0;
var = var21;
goto RET_LABEL;
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var22 = 1;
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#is_numeric for (self: Object): Bool */
short int VIRTUAL_string__AbstractString__is_numeric(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__AbstractString__is_numeric(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_upper for (self: AbstractString): String */
val* string__AbstractString__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
long var2 /* : Int */;
val* var_s /* var s: Buffer */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
char var_i /* var i: Char */;
char var6 /* : Char */;
char var7 /* : Char */;
val* var8 /* : nullable Object */;
val* var9 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var2) /* with_capacity on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_s = var1;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:AbstractString>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var6 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var_i = var6;
var7 = kernel__Char__to_upper(var_i);
var8 = BOX_kernel__Char(var7); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var8) /* add on <var_s:Buffer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var9 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_upper for (self: Object): String */
val* VIRTUAL_string__AbstractString__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__to_upper(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_lower for (self: AbstractString): String */
val* string__AbstractString__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
long var2 /* : Int */;
val* var_s /* var s: Buffer */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
char var_i /* var i: Char */;
char var6 /* : Char */;
char var7 /* : Char */;
val* var8 /* : nullable Object */;
val* var9 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var2) /* with_capacity on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_s = var1;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:AbstractString>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var6 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var_i = var6;
var7 = kernel__Char__to_lower(var_i);
var8 = BOX_kernel__Char(var7); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var8) /* add on <var_s:Buffer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var9 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_lower for (self: Object): String */
val* VIRTUAL_string__AbstractString__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__to_lower(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#trim for (self: AbstractString): String */
val* string__AbstractString__trim(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : String */;
long var7 /* : Int */;
long var_start_pos /* var start_pos: Int */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
char var11 /* : Char */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
long var30 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
long var_end_pos /* var end_pos: Int */;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
char var38 /* : Char */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
char var56 /* : Char */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
long var64 /* : Int */;
val* var65 /* : String */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractString> */
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:AbstractString>*/;
var = var6;
goto RET_LABEL;
} else {
}
var7 = 0;
var_start_pos = var7;
for(;;) {
var8 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_start_pos) /* [] on <self:AbstractString>*/;
{ /* Inline kernel#Char#ascii (var8) */
var11 = ((struct instance_kernel__Char*)var8)->value; /* autounbox from nullable Object to Char */;
var12 = (unsigned char)var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var13 = 32;
{ /* Inline kernel#Int#<= (var9,var13) */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var17 = var9 <= var13;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
if (!var14) break;
var18 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var18) */
var21 = var_start_pos + var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_start_pos = var19;
var22 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractString> */
{ /* Inline kernel#Int#== (var_start_pos,var22) */
var25 = var_start_pos == var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (var23){
if (varonce) {
var26 = varonce;
} else {
var27 = "";
var28 = 0;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce = var26;
}
var = var26;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var30 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
var31 = 1;
{ /* Inline kernel#Int#- (var30,var31) */
var34 = var30 - var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var_end_pos = var32;
for(;;) {
var35 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_end_pos) /* [] on <self:AbstractString>*/;
{ /* Inline kernel#Char#ascii (var35) */
var38 = ((struct instance_kernel__Char*)var35)->value; /* autounbox from nullable Object to Char */;
var39 = (unsigned char)var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var40 = 32;
{ /* Inline kernel#Int#<= (var36,var40) */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (!var43) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var46 = var36 <= var40;
var41 = var46;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
if (!var41) break;
var47 = 1;
{ /* Inline kernel#Int#- (var_end_pos,var47) */
var50 = var_end_pos - var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var_end_pos = var48;
{ /* Inline kernel#Int#== (var_end_pos,var_start_pos) */
var53 = var_end_pos == var_start_pos;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
if (var51){
var54 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_start_pos) /* [] on <self:AbstractString>*/;
var56 = ((struct instance_kernel__Char*)var54)->value; /* autounbox from nullable Object to Char */;
var55 = string__Char__to_s(var56);
var = var55;
goto RET_LABEL;
} else {
}
CONTINUE_label57: (void)0;
}
BREAK_label57: (void)0;
{ /* Inline kernel#Int#- (var_end_pos,var_start_pos) */
var60 = var_end_pos - var_start_pos;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var61 = 1;
{ /* Inline kernel#Int#+ (var58,var61) */
var64 = var58 + var61;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var65 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var_start_pos, var62) /* substring on <self:AbstractString>*/;
var = var65;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#trim for (self: Object): String */
val* VIRTUAL_string__AbstractString__trim(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__trim(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#output for (self: AbstractString) */
void string__AbstractString__output(val* self) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
char var7 /* : Char */;
char var9 /* : Char */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
var = 0;
var_i = var;
for(;;) {
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
{ /* Inline kernel#Int#< (var_i,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var5 = var_i < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
var6 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:AbstractString> */
{ /* Inline string#NativeString#[] (var6,var_i) */
var9 = var6[var_i];
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
{ /* Inline kernel#Char#output (var7) */
printf("%c", var7);
RET_LABEL10:(void)0;
}
var11 = 1;
{ /* Inline kernel#Int#+ (var_i,var11) */
var14 = var_i + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_i = var12;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#AbstractString#output for (self: Object) */
void VIRTUAL_string__AbstractString__output(val* self) {
string__AbstractString__output(self);
RET_LABEL:;
}
/* method string#AbstractString#to_cmangle for (self: AbstractString): String */
val* string__AbstractString__to_cmangle(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var2 /* : Bool */;
short int var_underscore /* var underscore: Bool */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
char var_c /* var c: Char */;
char var6 /* : Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
char var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
char var14 /* : Char */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
short int var22 /* : Bool */;
char var23 /* : Char */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
char var31 /* : Char */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
char var40 /* : Char */;
long var41 /* : Int */;
long var43 /* : Int */;
val* var44 /* : String */;
char var45 /* : Char */;
val* var46 /* : nullable Object */;
short int var47 /* : Bool */;
char var48 /* : Char */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
char var56 /* : Char */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
short int var64 /* : Bool */;
char var65 /* : Char */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : nullable Object */;
short int var70 /* : Bool */;
char var71 /* : Char */;
val* var72 /* : nullable Object */;
long var73 /* : Int */;
long var75 /* : Int */;
val* var76 /* : String */;
char var77 /* : Char */;
val* var78 /* : nullable Object */;
short int var79 /* : Bool */;
val* var80 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_res = var1;
var2 = 0;
var_underscore = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:AbstractString>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var6 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var_c = var6;
var9 = 'a';
{ /* Inline kernel#Char#>= (var_c,var9) */
/* Covariant cast for argument 0 (i) <var9:Char> isa OTHER */
/* <var9:Char> isa OTHER */
var12 = 1; /* easy <var9:Char> isa OTHER*/
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
}
var13 = var_c >= var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var_ = var10;
if (var10){
var14 = 'z';
{ /* Inline kernel#Char#<= (var_c,var14) */
/* Covariant cast for argument 0 (i) <var14:Char> isa OTHER */
/* <var14:Char> isa OTHER */
var17 = 1; /* easy <var14:Char> isa OTHER*/
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var20 = var_c <= var14;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var8 = var15;
} else {
var8 = var_;
}
var_21 = var8;
if (var8){
var7 = var_21;
} else {
var23 = 'A';
{ /* Inline kernel#Char#>= (var_c,var23) */
/* Covariant cast for argument 0 (i) <var23:Char> isa OTHER */
/* <var23:Char> isa OTHER */
var26 = 1; /* easy <var23:Char> isa OTHER*/
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
}
var29 = var_c >= var23;
var24 = var29;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var_30 = var24;
if (var24){
var31 = 'Z';
{ /* Inline kernel#Char#<= (var_c,var31) */
/* Covariant cast for argument 0 (i) <var31:Char> isa OTHER */
/* <var31:Char> isa OTHER */
var34 = 1; /* easy <var31:Char> isa OTHER*/
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var37 = var_c <= var31;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var22 = var32;
} else {
var22 = var_30;
}
var7 = var22;
}
if (var7){
var38 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var38) /* add on <var_res:Buffer>*/;
var39 = 0;
var_underscore = var39;
goto CONTINUE_label;
} else {
}
if (var_underscore){
var40 = '_';
{ /* Inline kernel#Char#ascii (var40) */
var43 = (unsigned char)var40;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var44 = string__Int__to_s(var41);
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__Sequence__append]))(var_res, var44) /* append on <var_res:Buffer>*/;
var45 = 'd';
var46 = BOX_kernel__Char(var45); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var46) /* add on <var_res:Buffer>*/;
} else {
}
var48 = '0';
{ /* Inline kernel#Char#>= (var_c,var48) */
/* Covariant cast for argument 0 (i) <var48:Char> isa OTHER */
/* <var48:Char> isa OTHER */
var51 = 1; /* easy <var48:Char> isa OTHER*/
if (!var51) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
}
var54 = var_c >= var48;
var49 = var54;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var_55 = var49;
if (var49){
var56 = '9';
{ /* Inline kernel#Char#<= (var_c,var56) */
/* Covariant cast for argument 0 (i) <var56:Char> isa OTHER */
/* <var56:Char> isa OTHER */
var59 = 1; /* easy <var56:Char> isa OTHER*/
if (!var59) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var62 = var_c <= var56;
var57 = var62;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var47 = var57;
} else {
var47 = var_55;
}
if (var47){
var63 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var63) /* add on <var_res:Buffer>*/;
var64 = 0;
var_underscore = var64;
} else {
var65 = '_';
{ /* Inline kernel#Char#== (var_c,var65) */
var68 = var_c == var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
if (var66){
var69 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var69) /* add on <var_res:Buffer>*/;
var70 = 1;
var_underscore = var70;
} else {
var71 = '_';
var72 = BOX_kernel__Char(var71); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var72) /* add on <var_res:Buffer>*/;
{ /* Inline kernel#Char#ascii (var_c) */
var75 = (unsigned char)var_c;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var76 = string__Int__to_s(var73);
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__Sequence__append]))(var_res, var76) /* append on <var_res:Buffer>*/;
var77 = 'd';
var78 = BOX_kernel__Char(var77); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var78) /* add on <var_res:Buffer>*/;
var79 = 0;
var_underscore = var79;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var80 = ((val* (*)(val*))(var_res->class->vft[COLOR_string__Object__to_s]))(var_res) /* to_s on <var_res:Buffer>*/;
var = var80;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#to_cmangle for (self: Object): String */
val* VIRTUAL_string__AbstractString__to_cmangle(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__to_cmangle(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#escape_to_c for (self: AbstractString): String */
val* string__AbstractString__escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
char var_c /* var c: Char */;
char var5 /* : Char */;
char var6 /* : Char */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
char var14 /* : Char */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
char var23 /* : Char */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
char var32 /* : Char */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
char var41 /* : Char */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
long var50 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype;
int idtype;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
long var63 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
val* var68 /* : String */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
val* var73 /* : nullable Object */;
val* var74 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_b = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:AbstractString>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var5 = ((struct instance_kernel__Char*)var4)->value; /* autounbox from nullable Object to Char */;
var_c = var5;
var6 = '\n';
{ /* Inline kernel#Char#== (var_c,var6) */
var9 = var_c == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
if (varonce) {
var10 = varonce;
} else {
var11 = "\\n";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var10) /* append on <var_b:Buffer>*/;
} else {
var14 = '\0';
{ /* Inline kernel#Char#== (var_c,var14) */
var17 = var_c == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
if (varonce18) {
var19 = varonce18;
} else {
var20 = "\\0";
var21 = 2;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var19) /* append on <var_b:Buffer>*/;
} else {
var23 = '\"';
{ /* Inline kernel#Char#== (var_c,var23) */
var26 = var_c == var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
if (var24){
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\\\"";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var28) /* append on <var_b:Buffer>*/;
} else {
var32 = '\'';
{ /* Inline kernel#Char#== (var_c,var32) */
var35 = var_c == var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (var33){
if (varonce36) {
var37 = varonce36;
} else {
var38 = "\\\'";
var39 = 2;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var37) /* append on <var_b:Buffer>*/;
} else {
var41 = '\\';
{ /* Inline kernel#Char#== (var_c,var41) */
var44 = var_c == var41;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
if (var42){
if (varonce45) {
var46 = varonce45;
} else {
var47 = "\\\\";
var48 = 2;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var46) /* append on <var_b:Buffer>*/;
} else {
{ /* Inline kernel#Char#ascii (var_c) */
var52 = (unsigned char)var_c;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var53 = 32;
{ /* Inline kernel#Int#< (var50,var53) */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var56 = 1; /* easy <var53:Int> isa OTHER*/
if (!var56) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var57 = var50 < var53;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
if (var54){
if (varonce58) {
var59 = varonce58;
} else {
var60 = "\\";
var61 = 1;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{ /* Inline kernel#Char#ascii (var_c) */
var65 = (unsigned char)var_c;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var66 = 8;
var67 = 0;
var68 = string__Int__to_base(var63, var66, var67);
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 2;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var68;
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
CHECK_NEW_array__Array(var69);
}
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var72) /* append on <var_b:Buffer>*/;
} else {
var73 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_b, var73) /* add on <var_b:Buffer>*/;
}
}
}
}
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var74 = ((val* (*)(val*))(var_b->class->vft[COLOR_string__Object__to_s]))(var_b) /* to_s on <var_b:Buffer>*/;
var = var74;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#escape_to_c for (self: Object): String */
val* VIRTUAL_string__AbstractString__escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__escape_to_c(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#escape_more_to_c for (self: AbstractString, String): String */
val* string__AbstractString__escape_more_to_c(val* self, val* p0) {
val* var /* : String */;
val* var_chars /* var chars: String */;
val* var1 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var2 /* : String */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
char var_c /* var c: Char */;
char var6 /* : Char */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
var_chars = p0;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_b = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__escape_to_c]))(self) /* escape_to_c on <self:AbstractString>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:String>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var6 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var_c = var6;
var8 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
var7 = ((short int (*)(val*, val*))(var_chars->class->vft[COLOR_abstract_collection__Collection__has]))(var_chars, var8) /* has on <var_chars:String>*/;
if (var7){
var9 = '\\';
var10 = BOX_kernel__Char(var9); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_b, var10) /* add on <var_b:Buffer>*/;
} else {
}
var11 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_b, var11) /* add on <var_b:Buffer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*))(var_b->class->vft[COLOR_string__Object__to_s]))(var_b) /* to_s on <var_b:Buffer>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#escape_more_to_c for (self: Object, String): String */
val* VIRTUAL_string__AbstractString__escape_more_to_c(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__escape_more_to_c(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#escape_to_nit for (self: AbstractString): String */
val* string__AbstractString__escape_to_nit(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "{}";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_string__AbstractString__escape_more_to_c]))(self, var1) /* escape_more_to_c on <self:AbstractString>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#escape_to_nit for (self: Object): String */
val* VIRTUAL_string__AbstractString__escape_to_nit(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__escape_to_nit(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#unescape_nit for (self: AbstractString): String */
val* string__AbstractString__unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
long var2 /* : Int */;
val* var_res /* var res: Buffer */;
short int var3 /* : Bool */;
short int var_was_slash /* var was_slash: Bool */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
char var_c /* var c: Char */;
char var7 /* : Char */;
short int var8 /* : Bool */;
char var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
char var16 /* : Char */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
char var20 /* : Char */;
val* var21 /* : nullable Object */;
char var22 /* : Char */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
char var26 /* : Char */;
val* var27 /* : nullable Object */;
char var28 /* : Char */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
char var32 /* : Char */;
val* var33 /* : nullable Object */;
char var34 /* : Char */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
char var38 /* : Char */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable Object */;
val* var41 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var2) /* with_capacity on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_res = var1;
var3 = 0;
var_was_slash = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:AbstractString>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var_c = var7;
var8 = !var_was_slash;
if (var8){
var9 = '\\';
{ /* Inline kernel#Char#== (var_c,var9) */
var12 = var_c == var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var13 = 1;
var_was_slash = var13;
} else {
var14 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var14) /* add on <var_res:Buffer>*/;
}
goto CONTINUE_label;
} else {
}
var15 = 0;
var_was_slash = var15;
var16 = 'n';
{ /* Inline kernel#Char#== (var_c,var16) */
var19 = var_c == var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var20 = '\n';
var21 = BOX_kernel__Char(var20); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var21) /* add on <var_res:Buffer>*/;
} else {
var22 = 'r';
{ /* Inline kernel#Char#== (var_c,var22) */
var25 = var_c == var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (var23){
var26 = '\15';
var27 = BOX_kernel__Char(var26); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var27) /* add on <var_res:Buffer>*/;
} else {
var28 = 't';
{ /* Inline kernel#Char#== (var_c,var28) */
var31 = var_c == var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
var32 = '\11';
var33 = BOX_kernel__Char(var32); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var33) /* add on <var_res:Buffer>*/;
} else {
var34 = '0';
{ /* Inline kernel#Char#== (var_c,var34) */
var37 = var_c == var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (var35){
var38 = '\0';
var39 = BOX_kernel__Char(var38); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var39) /* add on <var_res:Buffer>*/;
} else {
var40 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var40) /* add on <var_res:Buffer>*/;
}
}
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var41 = ((val* (*)(val*))(var_res->class->vft[COLOR_string__Object__to_s]))(var_res) /* to_s on <var_res:Buffer>*/;
var = var41;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AbstractString#unescape_nit for (self: Object): String */
val* VIRTUAL_string__AbstractString__unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__AbstractString__unescape_nit(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AbstractString#init for (self: AbstractString) */
void string__AbstractString__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArrayRead__init]))(self) /* init on <self:AbstractString>*/;
RET_LABEL:;
}
/* method string#AbstractString#init for (self: Object) */
void VIRTUAL_string__AbstractString__init(val* self) {
string__AbstractString__init(self);
RET_LABEL:;
}
/* method string#String#index_from for (self: String): Int */
long string__String__index_from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#index_from for (self: Object): Int */
long VIRTUAL_string__String__index_from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__String__index_from(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#index_to for (self: String): Int */
long string__String__index_to(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#index_to for (self: Object): Int */
long VIRTUAL_string__String__index_to(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__String__index_to(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#[] for (self: String, Int): Char */
char string__String___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var16 /* : Bool */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
char var22 /* : Char */;
char var24 /* : Char */;
var_index = p0;
var1 = 0;
{ /* Inline kernel#Int#>= (var_index,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var5 = var_index >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 379);
exit(1);
}
var6 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
{ /* Inline kernel#Int#+ (var_index,var6) */
var9 = var_index + var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var10 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
{ /* Inline kernel#Int#<= (var7,var10) */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var16 = var7 <= var10;
var11 = var16;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 382);
exit(1);
}
var17 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var18 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
{ /* Inline kernel#Int#+ (var_index,var18) */
var21 = var_index + var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
{ /* Inline string#NativeString#[] (var17,var19) */
var24 = var17[var19];
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_string__String___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__String___91d_93d(self, p0);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#String#substring for (self: String, Int, Int): String */
val* string__String__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
long var_realFrom /* var realFrom: Int */;
long var29 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
short int var38 /* : Bool */;
val* var39 /* : String */;
long var40 /* : Int */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : String */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var57 /* : Int */;
char* var58 /* : NativeString */;
var_from = p0;
var_count = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_count,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var5 = var_count >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 388);
exit(1);
}
var6 = 0;
{ /* Inline kernel#Int#< (var_from,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var12 = var_from < var6;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
{ /* Inline kernel#Int#+ (var_count,var_from) */
var15 = var_count + var_from;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_count = var13;
var16 = 0;
{ /* Inline kernel#Int#< (var_count,var16) */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var22 = var_count < var16;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var23 = 0;
var_count = var23;
} else {
}
var24 = 0;
var_from = var24;
} else {
}
var25 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
{ /* Inline kernel#Int#+ (var25,var_from) */
var28 = var25 + var_from;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_realFrom = var26;
{ /* Inline kernel#Int#+ (var_realFrom,var_count) */
var31 = var_realFrom + var_count;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var32 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
{ /* Inline kernel#Int#> (var29,var32) */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var35 = 1; /* easy <var32:Int> isa OTHER*/
if (!var35) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var38 = var29 > var32;
var33 = var38;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (var33){
var39 = NEW_string__String(&type_string__String);
var40 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var41 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
((void (*)(val*, long, long, char*))(var39->class->vft[COLOR_string__String__from_substring]))(var39, var_realFrom, var40, var41) /* from_substring on <var39:String>*/;
CHECK_NEW_string__String(var39);
var = var39;
goto RET_LABEL;
} else {
}
var42 = 0;
{ /* Inline kernel#Int#== (var_count,var42) */
var45 = var_count == var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
if (var43){
if (varonce) {
var46 = varonce;
} else {
var47 = "";
var48 = 0;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce = var46;
}
var = var46;
goto RET_LABEL;
} else {
}
var50 = NEW_string__String(&type_string__String);
{ /* Inline kernel#Int#+ (var_realFrom,var_count) */
var53 = var_realFrom + var_count;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var54 = 1;
{ /* Inline kernel#Int#- (var51,var54) */
var57 = var51 - var54;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var58 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
((void (*)(val*, long, long, char*))(var50->class->vft[COLOR_string__String__from_substring]))(var50, var_realFrom, var55, var58) /* from_substring on <var50:String>*/;
CHECK_NEW_string__String(var50);
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#substring for (self: Object, Int, Int): String */
val* VIRTUAL_string__String__substring(val* self, long p0, long p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String__substring(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#substring_from for (self: String, Int): String */
val* string__String__substring_from(val* self, long p0) {
val* var /* : String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
val* var19 /* : String */;
var_from = p0;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
{ /* Inline kernel#Int#> (var_from,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var5 = var_from > var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
var10 = 0;
{ /* Inline kernel#Int#< (var_from,var10) */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var16 = var_from < var10;
var11 = var16;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (var11){
var17 = 0;
var_from = var17;
} else {
}
var18 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var19 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var_from, var18) /* substring on <self:String>*/;
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#substring_from for (self: Object, Int): String */
val* VIRTUAL_string__String__substring_from(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String__substring_from(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#has_substring for (self: String, String, Int): Bool */
short int string__String__has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_itsindex /* var itsindex: Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var_myindex /* var myindex: Int */;
char* var9 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
char* var10 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
long var_itsindexfrom /* var itsindexfrom: Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
char var38 /* : Char */;
char var40 /* : Char */;
char var41 /* : Char */;
char var43 /* : Char */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
var_str = p0;
var_pos = p1;
var1 = var_str->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_str:String> */
var2 = 1;
{ /* Inline kernel#Int#- (var1,var2) */
var5 = var1 - var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_itsindex = var3;
{ /* Inline kernel#Int#+ (var_pos,var_itsindex) */
var8 = var_pos + var_itsindex;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_myindex = var6;
var9 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_myitems = var9;
var10 = var_str->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_str:String> */
var_itsitems = var10;
var12 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
{ /* Inline kernel#Int#> (var_myindex,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var16 = var_myindex > var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_ = var13;
if (var13){
var11 = var_;
} else {
{ /* Inline kernel#Int#> (var_itsindex,var_myindex) */
/* Covariant cast for argument 0 (i) <var_myindex:Int> isa OTHER */
/* <var_myindex:Int> isa OTHER */
var19 = 1; /* easy <var_myindex:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var22 = var_itsindex > var_myindex;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var11 = var17;
}
if (var11){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
var24 = ((long (*)(val*))(var_str->class->vft[COLOR_string__String__index_from]))(var_str) /* index_from on <var_str:String>*/;
var_itsindexfrom = var24;
{ /* Inline kernel#Int#+ (var_itsindex,var_itsindexfrom) */
var27 = var_itsindex + var_itsindexfrom;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_itsindex = var25;
var28 = ((long (*)(val*))(self->class->vft[COLOR_string__String__index_from]))(self) /* index_from on <self:String>*/;
{ /* Inline kernel#Int#+ (var_myindex,var28) */
var31 = var_myindex + var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_myindex = var29;
for(;;) {
{ /* Inline kernel#Int#>= (var_itsindex,var_itsindexfrom) */
/* Covariant cast for argument 0 (i) <var_itsindexfrom:Int> isa OTHER */
/* <var_itsindexfrom:Int> isa OTHER */
var34 = 1; /* easy <var_itsindexfrom:Int> isa OTHER*/
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var37 = var_itsindex >= var_itsindexfrom;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
if (!var32) break;
{ /* Inline string#NativeString#[] (var_myitems,var_myindex) */
var40 = var_myitems[var_myindex];
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
{ /* Inline string#NativeString#[] (var_itsitems,var_itsindex) */
var43 = var_itsitems[var_itsindex];
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
{ /* Inline kernel#Char#!= (var38,var41) */
var46 = var38 == var41;
var47 = !var46;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
if (var44){
var48 = 0;
var = var48;
goto RET_LABEL;
} else {
}
var49 = 1;
{ /* Inline kernel#Int#- (var_myindex,var49) */
var52 = var_myindex - var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var_myindex = var50;
var53 = 1;
{ /* Inline kernel#Int#- (var_itsindex,var53) */
var56 = var_itsindex - var53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var_itsindex = var54;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var57 = 1;
var = var57;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#has_substring for (self: Object, String, Int): Bool */
short int VIRTUAL_string__String__has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__String__has_substring(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#to_upper for (self: String): String */
val* string__String__to_upper(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var7 /* : Int */;
long var_out_index /* var out_index: Int */;
char* var8 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var9 /* : Int */;
long var_index_from /* var index_from: Int */;
long var10 /* : Int */;
long var_max /* var max: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
char var15 /* : Char */;
char var17 /* : Char */;
char var18 /* : Char */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
char var29 /* : Char */;
long var31 /* : Int */;
val* var32 /* : String */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var2 = 1;
{ /* Inline kernel#Int#+ (var1,var2) */
var5 = var1 + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var6 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var3) /* calloc_string on <self:String>*/;
var_outstr = var6;
var7 = 0;
var_out_index = var7;
var8 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_myitems = var8;
var9 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_index_from = var9;
var10 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var_max = var10;
for(;;) {
{ /* Inline kernel#Int#<= (var_index_from,var_max) */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var13 = 1; /* easy <var_max:Int> isa OTHER*/
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var14 = var_index_from <= var_max;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (!var11) break;
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) */
var17 = var_myitems[var_index_from];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var18 = kernel__Char__to_upper(var15);
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var18) */
var_outstr[var_out_index]=var18;
RET_LABEL19:(void)0;
}
var20 = 1;
{ /* Inline kernel#Int#+ (var_out_index,var20) */
var23 = var_out_index + var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var_out_index = var21;
var24 = 1;
{ /* Inline kernel#Int#+ (var_index_from,var24) */
var27 = var_index_from + var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_index_from = var25;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var28 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
var29 = '\0';
{ /* Inline string#NativeString#[]= (var_outstr,var28,var29) */
var_outstr[var28]=var29;
RET_LABEL30:(void)0;
}
var31 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var32 = string__NativeString__to_s_with_length(var_outstr, var31);
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#to_upper for (self: Object): String */
val* VIRTUAL_string__String__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String__to_upper(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#to_lower for (self: String): String */
val* string__String__to_lower(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
char* var_outstr /* var outstr: NativeString */;
long var7 /* : Int */;
long var_out_index /* var out_index: Int */;
char* var8 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var9 /* : Int */;
long var_index_from /* var index_from: Int */;
long var10 /* : Int */;
long var_max /* var max: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var14 /* : Bool */;
char var15 /* : Char */;
char var17 /* : Char */;
char var18 /* : Char */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
char var29 /* : Char */;
long var31 /* : Int */;
val* var32 /* : String */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var2 = 1;
{ /* Inline kernel#Int#+ (var1,var2) */
var5 = var1 + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var6 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var3) /* calloc_string on <self:String>*/;
var_outstr = var6;
var7 = 0;
var_out_index = var7;
var8 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_myitems = var8;
var9 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_index_from = var9;
var10 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var_max = var10;
for(;;) {
{ /* Inline kernel#Int#<= (var_index_from,var_max) */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var13 = 1; /* easy <var_max:Int> isa OTHER*/
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var14 = var_index_from <= var_max;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (!var11) break;
{ /* Inline string#NativeString#[] (var_myitems,var_index_from) */
var17 = var_myitems[var_index_from];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var18 = kernel__Char__to_lower(var15);
{ /* Inline string#NativeString#[]= (var_outstr,var_out_index,var18) */
var_outstr[var_out_index]=var18;
RET_LABEL19:(void)0;
}
var20 = 1;
{ /* Inline kernel#Int#+ (var_out_index,var20) */
var23 = var_out_index + var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var_out_index = var21;
var24 = 1;
{ /* Inline kernel#Int#+ (var_index_from,var24) */
var27 = var_index_from + var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_index_from = var25;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var28 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
var29 = '\0';
{ /* Inline string#NativeString#[]= (var_outstr,var28,var29) */
var_outstr[var28]=var29;
RET_LABEL30:(void)0;
}
var31 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var32 = string__NativeString__to_s_with_length(var_outstr, var31);
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#to_lower for (self: Object): String */
val* VIRTUAL_string__String__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String__to_lower(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#trim for (self: String): String */
val* string__String__trim(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var_start_pos /* var start_pos: Int */;
char* var7 /* : NativeString */;
char var8 /* : Char */;
char var10 /* : Char */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
long var35 /* : Int */;
long var_end_pos /* var end_pos: Int */;
char* var36 /* : NativeString */;
char var37 /* : Char */;
char var39 /* : Char */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
char* var57 /* : NativeString */;
char var58 /* : Char */;
char var60 /* : Char */;
val* var61 /* : String */;
long var63 /* : Int */;
long var64 /* : Int */;
long var66 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
long var77 /* : Int */;
val* var78 /* : String */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var = self;
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_start_pos = var6;
for(;;) {
var7 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
{ /* Inline string#NativeString#[] (var7,var_start_pos) */
var10 = var7[var_start_pos];
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
{ /* Inline kernel#Char#ascii (var8) */
var13 = (unsigned char)var8;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var14 = 32;
{ /* Inline kernel#Int#<= (var11,var14) */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var18 = var11 <= var14;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
var19 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var19) */
var22 = var_start_pos + var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_start_pos = var20;
var23 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var24 = 1;
{ /* Inline kernel#Int#+ (var23,var24) */
var27 = var23 + var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
{ /* Inline kernel#Int#== (var_start_pos,var25) */
var30 = var_start_pos == var25;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
if (var28){
if (varonce) {
var31 = varonce;
} else {
var32 = "";
var33 = 0;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
var = var31;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var35 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var_end_pos = var35;
for(;;) {
var36 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
{ /* Inline string#NativeString#[] (var36,var_end_pos) */
var39 = var36[var_end_pos];
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
{ /* Inline kernel#Char#ascii (var37) */
var42 = (unsigned char)var37;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var43 = 32;
{ /* Inline kernel#Int#<= (var40,var43) */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (!var46) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var49 = var40 <= var43;
var44 = var49;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
if (!var44) break;
var50 = 1;
{ /* Inline kernel#Int#- (var_end_pos,var50) */
var53 = var_end_pos - var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var_end_pos = var51;
{ /* Inline kernel#Int#== (var_end_pos,var_start_pos) */
var56 = var_end_pos == var_start_pos;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
if (var54){
var57 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
{ /* Inline string#NativeString#[] (var57,var_start_pos) */
var60 = var57[var_start_pos];
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var61 = string__Char__to_s(var58);
var = var61;
goto RET_LABEL;
} else {
}
CONTINUE_label62: (void)0;
}
BREAK_label62: (void)0;
var63 = ((long (*)(val*))(self->class->vft[COLOR_string__String__index_from]))(self) /* index_from on <self:String>*/;
{ /* Inline kernel#Int#- (var_start_pos,var63) */
var66 = var_start_pos - var63;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var_start_pos = var64;
var67 = ((long (*)(val*))(self->class->vft[COLOR_string__String__index_from]))(self) /* index_from on <self:String>*/;
{ /* Inline kernel#Int#- (var_end_pos,var67) */
var70 = var_end_pos - var67;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var_end_pos = var68;
{ /* Inline kernel#Int#- (var_end_pos,var_start_pos) */
var73 = var_end_pos - var_start_pos;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var74 = 1;
{ /* Inline kernel#Int#+ (var71,var74) */
var77 = var71 + var74;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var78 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var_start_pos, var75) /* substring on <self:String>*/;
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#trim for (self: Object): String */
val* VIRTUAL_string__String__trim(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String__trim(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#output for (self: String) */
void string__String__output(val* self) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_imax /* var imax: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
char var7 /* : Char */;
char var9 /* : Char */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
var = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_i = var;
var1 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var_imax = var1;
for(;;) {
{ /* Inline kernel#Int#<= (var_i,var_imax) */
/* Covariant cast for argument 0 (i) <var_imax:Int> isa OTHER */
/* <var_imax:Int> isa OTHER */
var4 = 1; /* easy <var_imax:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var5 = var_i <= var_imax;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
var6 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
{ /* Inline string#NativeString#[] (var6,var_i) */
var9 = var6[var_i];
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
{ /* Inline kernel#Char#output (var7) */
printf("%c", var7);
RET_LABEL10:(void)0;
}
var11 = 1;
{ /* Inline kernel#Int#+ (var_i,var11) */
var14 = var_i + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_i = var12;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#String#output for (self: Object) */
void VIRTUAL_string__String__output(val* self) {
string__String__output(self);
RET_LABEL:;
}
/* method string#String#from_substring for (self: String, Int, Int, NativeString) */
void string__String__from_substring(val* self, long p0, long p1, char* p2) {
long var_from /* var from: Int */;
long var_to /* var to: Int */;
char* var_internalString /* var internalString: NativeString */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
var_from = p0;
var_to = p1;
var_internalString = p2;
((void (*)(val*))(self->class->vft[COLOR_string__AbstractString__init]))(self) /* init on <self:String>*/;
self->attrs[COLOR_string__AbstractString___items].str = var_internalString; /* _items on <self:String> */
self->attrs[COLOR_string__String___index_from].l = var_from; /* _index_from on <self:String> */
self->attrs[COLOR_string__String___index_to].l = var_to; /* _index_to on <self:String> */
{ /* Inline kernel#Int#- (var_to,var_from) */
var2 = var_to - var_from;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
var3 = 1;
{ /* Inline kernel#Int#+ (var,var3) */
var6 = var + var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var4; /* _length on <self:String> */
RET_LABEL:;
}
/* method string#String#from_substring for (self: Object, Int, Int, NativeString) */
void VIRTUAL_string__String__from_substring(val* self, long p0, long p1, char* p2) {
string__String__from_substring(self, p0, p1, p2);
RET_LABEL:;
}
/* method string#String#with_infos for (self: String, NativeString, Int, Int, Int) */
void string__String__with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_len /* var len: Int */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
var_items = p0;
var_len = p1;
var_from = p2;
var_to = p3;
((void (*)(val*))(self->class->vft[COLOR_string__AbstractString__init]))(self) /* init on <self:String>*/;
self->attrs[COLOR_string__AbstractString___items].str = var_items; /* _items on <self:String> */
self->attrs[COLOR_array__AbstractArrayRead___length].l = var_len; /* _length on <self:String> */
self->attrs[COLOR_string__String___index_from].l = var_from; /* _index_from on <self:String> */
self->attrs[COLOR_string__String___index_to].l = var_to; /* _index_to on <self:String> */
RET_LABEL:;
}
/* method string#String#with_infos for (self: Object, NativeString, Int, Int, Int) */
void VIRTUAL_string__String__with_infos(val* self, char* p0, long p1, long p2, long p3) {
string__String__with_infos(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method string#String#to_cstring for (self: String): NativeString */
char* string__String__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
long var8 /* : Int */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
char* var24 /* : NativeString */;
char* var_newItems /* var newItems: NativeString */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
char var31 /* : Char */;
char* var33 /* : NativeString */;
var2 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var3 = 0;
{ /* Inline kernel#Int#> (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var7 = var2 > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var_ = var4;
if (var4){
var1 = var_;
} else {
var8 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
var9 = ((char* (*)(val*))(self->class->vft[COLOR_string__AbstractString__items]))(self) /* items on <self:String>*/;
var10 = string__NativeString__cstring_length(var9);
var11 = 1;
{ /* Inline kernel#Int#- (var10,var11) */
var14 = var10 - var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
{ /* Inline kernel#Int#!= (var8,var12) */
var17 = var8 == var12;
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var1 = var15;
}
if (var1){
var19 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var20 = 1;
{ /* Inline kernel#Int#+ (var19,var20) */
var23 = var19 + var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var24 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var21) /* calloc_string on <self:String>*/;
var_newItems = var24;
var25 = ((char* (*)(val*))(self->class->vft[COLOR_string__AbstractString__items]))(self) /* items on <self:String>*/;
var26 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var27 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var28 = 0;
{ /* Inline string#NativeString#copy_to (var25,var_newItems,var26,var27,var28) */
memcpy(var_newItems+var28,var25+var27,var26);
RET_LABEL29:(void)0;
}
var30 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
var31 = '\0';
{ /* Inline string#NativeString#[]= (var_newItems,var30,var31) */
var_newItems[var30]=var31;
RET_LABEL32:(void)0;
}
var = var_newItems;
goto RET_LABEL;
} else {
}
var33 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#to_cstring for (self: Object): NativeString */
char* VIRTUAL_string__String__to_cstring(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string__String__to_cstring(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#== for (self: String, nullable Object): Bool */
short int string__String___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var_my_length /* var my_length: Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var_my_index /* var my_index: Int */;
long var21 /* : Int */;
long var_its_index /* var its_index: Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var25 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
char* var26 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
short int var32 /* : Bool */;
char var33 /* : Char */;
char var35 /* : Char */;
char var36 /* : Char */;
char var38 /* : Char */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa String */
cltype = type_string__String.color;
idtype = type_string__String.id;
if(var_other == NULL) {
var2 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype] == idtype;
}
}
var3 = !var2;
var_ = var3;
if (var3){
var1 = var_;
} else {
var4 = NULL;
var5 = var_other == var4;
var1 = var5;
}
if (var1){
var6 = 0;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:String>*/;
var8 = ((long (*)(val*))(var_other->class->vft[COLOR_kernel__Object__object_id]))(var_other) /* object_id on <var_other:nullable Object(String)>*/;
{ /* Inline kernel#Int#== (var7,var8) */
var11 = var7 == var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (var9){
var12 = 1;
var = var12;
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var_my_length = var13;
var14 = var_other->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_other:nullable Object(String)> */
{ /* Inline kernel#Int#!= (var14,var_my_length) */
var17 = var14 == var_my_length;
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
var19 = 0;
var = var19;
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_my_index = var20;
var21 = var_other->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_other:nullable Object(String)> */
var_its_index = var21;
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) */
var24 = var_my_index + var_my_length;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var_last_iteration = var22;
var25 = var_other->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_other:nullable Object(String)> */
var_itsitems = var25;
var26 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_myitems = var26;
for(;;) {
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var29 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var32 = var_my_index < var_last_iteration;
var27 = var32;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
if (!var27) break;
{ /* Inline string#NativeString#[] (var_myitems,var_my_index) */
var35 = var_myitems[var_my_index];
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
{ /* Inline string#NativeString#[] (var_itsitems,var_its_index) */
var38 = var_itsitems[var_its_index];
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
{ /* Inline kernel#Char#!= (var33,var36) */
var41 = var33 == var36;
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
if (var39){
var43 = 0;
var = var43;
goto RET_LABEL;
} else {
}
var44 = 1;
{ /* Inline kernel#Int#+ (var_my_index,var44) */
var47 = var_my_index + var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var_my_index = var45;
var48 = 1;
{ /* Inline kernel#Int#+ (var_its_index,var48) */
var51 = var_its_index + var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var_its_index = var49;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var52 = 1;
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_string__String___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__String___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#< for (self: String, String): Bool */
short int string__String___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_other /* var other: String */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var_curr_id_self /* var curr_id_self: Int */;
long var9 /* : Int */;
long var_curr_id_other /* var curr_id_other: Int */;
char* var10 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
char* var11 /* : NativeString */;
char* var_its_items /* var its_items: NativeString */;
long var12 /* : Int */;
long var_my_length /* var my_length: Int */;
long var13 /* : Int */;
long var_its_length /* var its_length: Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_max_iterations /* var max_iterations: Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
char var23 /* : Char */;
char var25 /* : Char */;
char var_my_curr_char /* var my_curr_char: Char */;
char var26 /* : Char */;
char var28 /* : Char */;
char var_its_curr_char /* var its_curr_char: Char */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
short int var54 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:String> isa OTHER */
/* <p0:String> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/string.nit", 571);
exit(1);
}
var_other = p0;
var2 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:String>*/;
var3 = ((long (*)(val*))(var_other->class->vft[COLOR_kernel__Object__object_id]))(var_other) /* object_id on <var_other:String>*/;
{ /* Inline kernel#Int#== (var2,var3) */
var6 = var2 == var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_curr_id_self = var8;
var9 = var_other->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_other:String> */
var_curr_id_other = var9;
var10 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_my_items = var10;
var11 = var_other->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_other:String> */
var_its_items = var11;
var12 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var_my_length = var12;
var13 = var_other->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_other:String> */
var_its_length = var13;
{ /* Inline kernel#Int#+ (var_curr_id_self,var_my_length) */
var16 = var_curr_id_self + var_my_length;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_max_iterations = var14;
for(;;) {
{ /* Inline kernel#Int#< (var_curr_id_self,var_max_iterations) */
/* Covariant cast for argument 0 (i) <var_max_iterations:Int> isa OTHER */
/* <var_max_iterations:Int> isa OTHER */
var19 = 1; /* easy <var_max_iterations:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var22 = var_curr_id_self < var_max_iterations;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (!var17) break;
{ /* Inline string#NativeString#[] (var_my_items,var_curr_id_self) */
var25 = var_my_items[var_curr_id_self];
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var_my_curr_char = var23;
{ /* Inline string#NativeString#[] (var_its_items,var_curr_id_other) */
var28 = var_its_items[var_curr_id_other];
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_its_curr_char = var26;
{ /* Inline kernel#Char#!= (var_my_curr_char,var_its_curr_char) */
var31 = var_my_curr_char == var_its_curr_char;
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
{ /* Inline kernel#Char#< (var_my_curr_char,var_its_curr_char) */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Char> isa OTHER */
/* <var_its_curr_char:Char> isa OTHER */
var35 = 1; /* easy <var_its_curr_char:Char> isa OTHER*/
if (!var35) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 455);
exit(1);
}
var38 = var_my_curr_char < var_its_curr_char;
var33 = var38;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (var33){
var39 = 1;
var = var39;
goto RET_LABEL;
} else {
}
var40 = 0;
var = var40;
goto RET_LABEL;
} else {
}
var41 = 1;
{ /* Inline kernel#Int#+ (var_curr_id_self,var41) */
var44 = var_curr_id_self + var41;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var_curr_id_self = var42;
var45 = 1;
{ /* Inline kernel#Int#+ (var_curr_id_other,var45) */
var48 = var_curr_id_other + var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var_curr_id_other = var46;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#< (var_my_length,var_its_length) */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var51 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (!var51) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var54 = var_my_length < var_its_length;
var49 = var54;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var = var49;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#< for (self: Object, Comparable): Bool */
short int VIRTUAL_string__String___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__String___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#+ for (self: String, String): String */
val* string__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: String */;
long var1 /* : Int */;
long var_my_length /* var my_length: Int */;
long var2 /* : Int */;
long var_its_length /* var its_length: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_total_length /* var total_length: Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
long var16 /* : Int */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
char var21 /* : Char */;
val* var23 /* : String */;
var_s = p0;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var_my_length = var1;
var2 = var_s->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_s:String> */
var_its_length = var2;
{ /* Inline kernel#Int#+ (var_my_length,var_its_length) */
var5 = var_my_length + var_its_length;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_total_length = var3;
{ /* Inline kernel#Int#+ (var_my_length,var_its_length) */
var8 = var_my_length + var_its_length;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var9 = 1;
{ /* Inline kernel#Int#+ (var6,var9) */
var12 = var6 + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var13 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var10) /* calloc_string on <self:String>*/;
var_target_string = var13;
var14 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var15 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var16 = 0;
{ /* Inline string#NativeString#copy_to (var14,var_target_string,var_my_length,var15,var16) */
memcpy(var_target_string+var16,var14+var15,var_my_length);
RET_LABEL17:(void)0;
}
var18 = var_s->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_s:String> */
var19 = var_s->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_s:String> */
{ /* Inline string#NativeString#copy_to (var18,var_target_string,var_its_length,var19,var_my_length) */
memcpy(var_target_string+var_my_length,var18+var19,var_its_length);
RET_LABEL20:(void)0;
}
var21 = '\0';
{ /* Inline string#NativeString#[]= (var_target_string,var_total_length,var21) */
var_target_string[var_total_length]=var21;
RET_LABEL22:(void)0;
}
var23 = string__NativeString__to_s_with_length(var_target_string, var_total_length);
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#+ for (self: Object, String): String */
val* VIRTUAL_string__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String___43d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#* for (self: String, Int): String */
val* string__String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var_my_length /* var my_length: Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_final_length /* var final_length: Int */;
char* var10 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
char* var15 /* : NativeString */;
char* var_target_string /* var target_string: NativeString */;
char var16 /* : Char */;
long var18 /* : Int */;
long var_current_last /* var current_last: Int */;
val* var19 /* : Range[Int] */;
long var20 /* : Int */;
val* var21 /* : Discrete */;
val* var22 /* : Discrete */;
val* var23 /* : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
long var_iteration /* var iteration: Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
val* var32 /* : String */;
var_i = p0;
var1 = 0;
{ /* Inline kernel#Int#>= (var_i,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var5 = var_i >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 635);
exit(1);
}
var6 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var_my_length = var6;
{ /* Inline kernel#Int#* (var_my_length,var_i) */
var9 = var_my_length * var_i;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var_final_length = var7;
var10 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_my_items = var10;
var11 = 1;
{ /* Inline kernel#Int#+ (var_final_length,var11) */
var14 = var_final_length + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var15 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var12) /* calloc_string on <self:String>*/;
var_target_string = var15;
var16 = '\0';
{ /* Inline string#NativeString#[]= (var_target_string,var_final_length,var16) */
var_target_string[var_final_length]=var16;
RET_LABEL17:(void)0;
}
var18 = 0;
var_current_last = var18;
var19 = NEW_range__Range(&type_range__Rangekernel__Int);
var20 = 1;
var21 = BOX_kernel__Int(var20); /* autobox from Int to Discrete */
var22 = BOX_kernel__Int(var_i); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var19->class->vft[COLOR_range__Range__init]))(var19, var21, var22) /* init on <var19:Range[Int]>*/;
CHECK_NEW_range__Range(var19);
var23 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__iterator]))(var19) /* iterator on <var19:Range[Int]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var23) /* is_ok on <var23:Iterator[nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__item]))(var23) /* item on <var23:Iterator[nullable Object]>*/;
var26 = ((struct instance_kernel__Int*)var25)->value; /* autounbox from nullable Object to Int */;
var_iteration = var26;
var27 = 0;
{ /* Inline string#NativeString#copy_to (var_my_items,var_target_string,var_my_length,var27,var_current_last) */
memcpy(var_target_string+var_current_last,var_my_items+var27,var_my_length);
RET_LABEL28:(void)0;
}
{ /* Inline kernel#Int#+ (var_current_last,var_my_length) */
var31 = var_current_last + var_my_length;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_current_last = var29;
CONTINUE_label: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__next]))(var23) /* next on <var23:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var32 = string__NativeString__to_s_with_length(var_target_string, var_final_length);
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#* for (self: Object, Int): String */
val* VIRTUAL_string__String___42d(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String___42d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#to_s for (self: String): String */
val* string__String__to_s(val* self) {
val* var /* : String */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#to_s for (self: Object): String */
val* VIRTUAL_string__String__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__String__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#hash for (self: String): Int */
long string__String__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_h /* var h: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_i /* var i: Int */;
char* var7 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
long var8 /* : Int */;
long var_strStart /* var strStart: Int */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
char* var23 /* : NativeString */;
char var24 /* : Char */;
char var26 /* : Char */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
var1 = 5381;
var_h = var1;
var2 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var3 = 1;
{ /* Inline kernel#Int#- (var2,var3) */
var6 = var2 - var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var_i = var4;
var7 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_myitems = var7;
var8 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_strStart = var8;
{ /* Inline kernel#Int#+ (var_i,var_strStart) */
var11 = var_i + var_strStart;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_i = var9;
for(;;) {
{ /* Inline kernel#Int#>= (var_i,var_strStart) */
/* Covariant cast for argument 0 (i) <var_strStart:Int> isa OTHER */
/* <var_strStart:Int> isa OTHER */
var14 = 1; /* easy <var_strStart:Int> isa OTHER*/
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var15 = var_i >= var_strStart;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (!var12) break;
var16 = 32;
{ /* Inline kernel#Int#* (var_h,var16) */
var19 = var_h * var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
{ /* Inline kernel#Int#+ (var17,var_h) */
var22 = var17 + var_h;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var23 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
{ /* Inline string#NativeString#[] (var23,var_i) */
var26 = var23[var_i];
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
{ /* Inline kernel#Char#ascii (var24) */
var29 = (unsigned char)var24;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
{ /* Inline kernel#Int#+ (var20,var27) */
var32 = var20 + var27;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var_h = var30;
var33 = 1;
{ /* Inline kernel#Int#- (var_i,var33) */
var36 = var_i - var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var_i = var34;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_h;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#String#hash for (self: Object): Int */
long VIRTUAL_string__String__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__String__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#[]= for (self: Buffer, Int, Char) */
void string__Buffer___91d_93d_61d(val* self, long p0, char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
long var_index /* var index: Int */;
char var_item /* var item: Char */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
char* var21 /* : NativeString */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Sequence#0 */
/* <p1:Char> isa Sequence#0 */
var = 1; /* easy <p1:Char> isa Sequence#0*/
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/string.nit", 688);
exit(1);
}
var_index = p0;
var_item = p1;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
{ /* Inline kernel#Int#== (var_index,var1) */
var4 = var_index == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var5 = BOX_kernel__Char(var_item); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(self, var5) /* add on <self:Buffer>*/;
goto RET_LABEL;
} else {
}
var7 = 0;
{ /* Inline kernel#Int#>= (var_index,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var13 = var_index >= var7;
var8 = var13;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_ = var8;
if (var8){
var14 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
{ /* Inline kernel#Int#< (var_index,var14) */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var20 = var_index < var14;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var6 = var15;
} else {
var6 = var_;
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 694);
exit(1);
}
var21 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
{ /* Inline string#NativeString#[]= (var21,var_index,var_item) */
var21[var_index]=var_item;
RET_LABEL22:(void)0;
}
RET_LABEL:;
}
/* method string#Buffer#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_string__Buffer___91d_93d_61d(val* self, long p0, val* p1) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p1)->value; /* autounbox from nullable Object to Char */;
string__Buffer___91d_93d_61d(self, p0, var);
RET_LABEL:;
}
/* method string#Buffer#add for (self: Buffer, Char) */
void string__Buffer__add(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
char var_c /* var c: Char */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var_ /* var : Buffer */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Char> isa SimpleCollection#0 */
/* <p0:Char> isa SimpleCollection#0 */
var = 1; /* easy <p0:Char> isa SimpleCollection#0*/
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/string.nit", 698);
exit(1);
}
var_c = p0;
var1 = self->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <self:Buffer> */
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
{ /* Inline kernel#Int#<= (var1,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var8 = var1 <= var2;
var3 = var8;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var9 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var10 = 5;
{ /* Inline kernel#Int#+ (var9,var10) */
var13 = var9 + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var11) /* enlarge on <self:Buffer>*/;
} else {
}
var14 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var15 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
{ /* Inline string#NativeString#[]= (var14,var15,var_c) */
var14[var15]=var_c;
RET_LABEL16:(void)0;
}
var_ = self;
var17 = var_->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_:Buffer> */
var18 = 1;
{ /* Inline kernel#Int#+ (var17,var18) */
var21 = var17 + var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_->attrs[COLOR_array__AbstractArrayRead___length].l = var19; /* _length on <var_:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#add for (self: Object, nullable Object) */
void VIRTUAL_string__Buffer__add(val* self, val* p0) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
string__Buffer__add(self, var);
RET_LABEL:;
}
/* method string#Buffer#enlarge for (self: Buffer, Int) */
void string__Buffer__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_c /* var c: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
char* var23 /* : NativeString */;
char* var_a /* var a: NativeString */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
var_cap = p0;
var = self->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <self:Buffer> */
var_c = var;
{ /* Inline kernel#Int#<= (var_cap,var_c) */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var4 = var_cap <= var_c;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (var1){
goto RET_LABEL;
} else {
}
for(;;) {
{ /* Inline kernel#Int#<= (var_c,var_cap) */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var7 = 1; /* easy <var_cap:Int> isa OTHER*/
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var10 = var_c <= var_cap;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (!var5) break;
var11 = 2;
{ /* Inline kernel#Int#* (var_c,var11) */
var14 = var_c * var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var15 = 2;
{ /* Inline kernel#Int#+ (var12,var15) */
var18 = var12 + var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var_c = var16;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var19 = 1;
{ /* Inline kernel#Int#+ (var_c,var19) */
var22 = var_c + var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var23 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var20) /* calloc_string on <self:Buffer>*/;
var_a = var23;
var24 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var25 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var26 = 0;
var27 = 0;
{ /* Inline string#NativeString#copy_to (var24,var_a,var25,var26,var27) */
memcpy(var_a+var27,var24+var26,var25);
RET_LABEL28:(void)0;
}
self->attrs[COLOR_string__AbstractString___items].str = var_a; /* _items on <self:Buffer> */
self->attrs[COLOR_string__Buffer___capacity].l = var_c; /* _capacity on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#enlarge for (self: Object, Int) */
void VIRTUAL_string__Buffer__enlarge(val* self, long p0) {
string__Buffer__enlarge(self, p0);
RET_LABEL:;
}
/* method string#Buffer#append for (self: Buffer, Collection[Char]) */
void string__Buffer__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
val* var_s /* var s: Collection[Char] */;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
long var4 /* : Int */;
long var_sl /* var sl: Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
char* var20 /* : NativeString */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
long var23 /* : Int */;
val* var_ /* var : Buffer */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Sequence#0] */
/* <p0:Collection[Char]> isa Collection[Sequence#0] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Sequence#0]*/
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/string.nit", 716);
exit(1);
}
var_s = p0;
/* <var_s:Collection[Char]> isa String */
cltype2 = type_string__String.color;
idtype3 = type_string__String.id;
if(cltype2 >= var_s->type->table_size) {
var1 = 0;
} else {
var1 = var_s->type->type_table[cltype2] == idtype3;
}
if (var1){
var4 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:Collection[Char](String)>*/;
var_sl = var4;
var5 = self->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <self:Buffer> */
var6 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Buffer> */
{ /* Inline kernel#Int#+ (var6,var_sl) */
var9 = var6 + var_sl;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
{ /* Inline kernel#Int#< (var5,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var15 = var5 < var7;
var10 = var15;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var16 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Buffer> */
{ /* Inline kernel#Int#+ (var16,var_sl) */
var19 = var16 + var_sl;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var17) /* enlarge on <self:Buffer>*/;
} else {
}
var20 = ((char* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__items]))(var_s) /* items on <var_s:Collection[Char](String)>*/;
var21 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var22 = var_s->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_s:Collection[Char](String)> */
var23 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Buffer> */
{ /* Inline string#NativeString#copy_to (var20,var21,var_sl,var22,var23) */
memcpy(var21+var23,var20+var22,var_sl);
RET_LABEL24:(void)0;
}
var_ = self;
var25 = var_->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_:Buffer> */
{ /* Inline kernel#Int#+ (var25,var_sl) */
var28 = var25 + var_sl;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_->attrs[COLOR_array__AbstractArrayRead___length].l = var26; /* _length on <var_:Buffer> */
} else {
((void (*)(val*, val*))(self->class->vft[COLOR_string__Buffer__append]))(self, p0) /* append on <self:Buffer>*/;
}
RET_LABEL:;
}
/* method string#Buffer#append for (self: Object, Collection[nullable Object]) */
void VIRTUAL_string__Buffer__append(val* self, val* p0) {
string__Buffer__append(self, p0);
RET_LABEL:;
}
/* method string#Buffer#to_s for (self: Buffer): String */
val* string__Buffer__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_l /* var l: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
char* var_a /* var a: NativeString */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
char var12 /* : Char */;
long var14 /* : Int */;
val* var15 /* : String */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var_l = var1;
var2 = 1;
{ /* Inline kernel#Int#+ (var_l,var2) */
var5 = var_l + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var6 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var3) /* calloc_string on <self:Buffer>*/;
var_a = var6;
var7 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var8 = 0;
var9 = 0;
{ /* Inline string#NativeString#copy_to (var7,var_a,var_l,var8,var9) */
memcpy(var_a+var9,var7+var8,var_l);
RET_LABEL10:(void)0;
}
var11 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var12 = '\0';
{ /* Inline string#NativeString#[]= (var_a,var11,var12) */
var_a[var11]=var12;
RET_LABEL13:(void)0;
}
var14 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var15 = string__NativeString__to_s_with_length(var_a, var14);
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#to_s for (self: Object): String */
val* VIRTUAL_string__Buffer__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Buffer__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#< for (self: Buffer, String): Bool */
short int string__Buffer___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_l1 /* var l1: Int */;
long var4 /* : Int */;
long var_l2 /* var l2: Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
long var19 /* : Int */;
char var21 /* : Char */;
long var22 /* : Int */;
long var_c1 /* var c1: Int */;
val* var23 /* : nullable Object */;
long var24 /* : Int */;
char var26 /* : Char */;
long var27 /* : Int */;
long var_c2 /* var c2: Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
/* Covariant cast for argument 0 (s) <p0:String> isa OTHER */
/* <p0:String> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/string.nit", 740);
exit(1);
}
var_s = p0;
var2 = 0;
var_i = var2;
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var_l1 = var3;
var4 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var_l2 = var4;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l1) */
/* Covariant cast for argument 0 (i) <var_l1:Int> isa OTHER */
/* <var_l1:Int> isa OTHER */
var8 = 1; /* easy <var_l1:Int> isa OTHER*/
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var11 = var_i < var_l1;
var6 = var11;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
{ /* Inline kernel#Int#< (var_i,var_l2) */
/* Covariant cast for argument 0 (i) <var_l2:Int> isa OTHER */
/* <var_l2:Int> isa OTHER */
var14 = 1; /* easy <var_l2:Int> isa OTHER*/
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var17 = var_i < var_l2;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var5 = var12;
} else {
var5 = var_;
}
if (!var5) break;
var18 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:Buffer>*/;
{ /* Inline kernel#Char#ascii (var18) */
var21 = ((struct instance_kernel__Char*)var18)->value; /* autounbox from nullable Object to Char */;
var22 = (unsigned char)var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_c1 = var19;
var23 = ((val* (*)(val*, long))(var_s->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_s, var_i) /* [] on <var_s:String>*/;
{ /* Inline kernel#Char#ascii (var23) */
var26 = ((struct instance_kernel__Char*)var23)->value; /* autounbox from nullable Object to Char */;
var27 = (unsigned char)var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var_c2 = var24;
{ /* Inline kernel#Int#< (var_c1,var_c2) */
/* Covariant cast for argument 0 (i) <var_c2:Int> isa OTHER */
/* <var_c2:Int> isa OTHER */
var30 = 1; /* easy <var_c2:Int> isa OTHER*/
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var33 = var_c1 < var_c2;
var28 = var33;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
if (var28){
var34 = 1;
var = var34;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#< (var_c2,var_c1) */
/* Covariant cast for argument 0 (i) <var_c1:Int> isa OTHER */
/* <var_c1:Int> isa OTHER */
var37 = 1; /* easy <var_c1:Int> isa OTHER*/
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var40 = var_c2 < var_c1;
var35 = var40;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (var35){
var41 = 0;
var = var41;
goto RET_LABEL;
} else {
}
}
var42 = 1;
{ /* Inline kernel#Int#+ (var_i,var42) */
var45 = var_i + var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var_i = var43;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#< (var_l1,var_l2) */
/* Covariant cast for argument 0 (i) <var_l2:Int> isa OTHER */
/* <var_l2:Int> isa OTHER */
var48 = 1; /* easy <var_l2:Int> isa OTHER*/
if (!var48) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var51 = var_l1 < var_l2;
var46 = var51;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
if (var46){
var52 = 1;
var = var52;
goto RET_LABEL;
} else {
var53 = 0;
var = var53;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string#Buffer#< for (self: Object, Comparable): Bool */
short int VIRTUAL_string__Buffer___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Buffer___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#init for (self: Buffer) */
void string__Buffer__init(val* self) {
long var /* : Int */;
var = 5;
((void (*)(val*, long))(self->class->vft[COLOR_string__Buffer__with_capacity]))(self, var) /* with_capacity on <self:Buffer>*/;
RET_LABEL:;
}
/* method string#Buffer#init for (self: Object) */
void VIRTUAL_string__Buffer__init(val* self) {
string__Buffer__init(self);
RET_LABEL:;
}
/* method string#Buffer#from for (self: Buffer, String) */
void string__Buffer__from(val* self, val* p0) {
val* var_s /* var s: String */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var8 /* : NativeString */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
var_s = p0;
((void (*)(val*))(self->class->vft[COLOR_string__AbstractString__init]))(self) /* init on <self:Buffer>*/;
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArray__init]))(self) /* init on <self:Buffer>*/;
var = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var1 = 1;
{ /* Inline kernel#Int#+ (var,var1) */
var4 = var + var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
self->attrs[COLOR_string__Buffer___capacity].l = var2; /* _capacity on <self:Buffer> */
var5 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var5; /* _length on <self:Buffer> */
var6 = self->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <self:Buffer> */
var7 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var6) /* calloc_string on <self:Buffer>*/;
self->attrs[COLOR_string__AbstractString___items].str = var7; /* _items on <self:Buffer> */
var8 = ((char* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__items]))(var_s) /* items on <var_s:String>*/;
var9 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var10 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Buffer> */
var11 = var_s->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_s:String> */
var12 = 0;
{ /* Inline string#NativeString#copy_to (var8,var9,var10,var11,var12) */
memcpy(var9+var12,var8+var11,var10);
RET_LABEL13:(void)0;
}
RET_LABEL:;
}
/* method string#Buffer#from for (self: Object, String) */
void VIRTUAL_string__Buffer__from(val* self, val* p0) {
string__Buffer__from(self, p0);
RET_LABEL:;
}
/* method string#Buffer#with_capacity for (self: Buffer, Int) */
void string__Buffer__with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
var_cap = p0;
((void (*)(val*))(self->class->vft[COLOR_string__AbstractString__init]))(self) /* init on <self:Buffer>*/;
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArray__init]))(self) /* init on <self:Buffer>*/;
var = 0;
{ /* Inline kernel#Int#>= (var_cap,var) */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var4 = var_cap >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 779);
exit(1);
}
var5 = 1;
{ /* Inline kernel#Int#+ (var_cap,var5) */
var8 = var_cap + var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var9 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var6) /* calloc_string on <self:Buffer>*/;
self->attrs[COLOR_string__AbstractString___items].str = var9; /* _items on <self:Buffer> */
self->attrs[COLOR_string__Buffer___capacity].l = var_cap; /* _capacity on <self:Buffer> */
var10 = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var10; /* _length on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#with_capacity for (self: Object, Int) */
void VIRTUAL_string__Buffer__with_capacity(val* self, long p0) {
string__Buffer__with_capacity(self, p0);
RET_LABEL:;
}
/* method string#Buffer#== for (self: Buffer, nullable Object): Bool */
short int string__Buffer___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var_l /* var l: Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_i /* var i: Int */;
char* var15 /* : NativeString */;
char* var_it /* var it: NativeString */;
char* var16 /* : NativeString */;
char* var_oit /* var oit: NativeString */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
char var23 /* : Char */;
char var25 /* : Char */;
char var26 /* : Char */;
char var28 /* : Char */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa Buffer */
cltype = type_string__Buffer.color;
idtype = type_string__Buffer.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var2 = 0;
} else {
var2 = var_o->type->type_table[cltype] == idtype;
}
}
var3 = !var2;
var_ = var3;
if (var3){
var1 = var_;
} else {
var4 = NULL;
var5 = var_o == var4;
var1 = var5;
}
if (var1){
var6 = 0;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var_l = var7;
var8 = ((long (*)(val*))(var_o->class->vft[COLOR_abstract_collection__Collection__length]))(var_o) /* length on <var_o:nullable Object(Buffer)>*/;
{ /* Inline kernel#Int#!= (var8,var_l) */
var11 = var8 == var_l;
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (var9){
var13 = 0;
var = var13;
goto RET_LABEL;
} else {
}
var14 = 0;
var_i = var14;
var15 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var_it = var15;
var16 = var_o->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_o:nullable Object(Buffer)> */
var_oit = var16;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var19 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var22 = var_i < var_l;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (!var17) break;
{ /* Inline string#NativeString#[] (var_it,var_i) */
var25 = var_it[var_i];
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
{ /* Inline string#NativeString#[] (var_oit,var_i) */
var28 = var_oit[var_i];
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
{ /* Inline kernel#Char#!= (var23,var26) */
var31 = var23 == var26;
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
var33 = 0;
var = var33;
goto RET_LABEL;
} else {
}
var34 = 1;
{ /* Inline kernel#Int#+ (var_i,var34) */
var37 = var_i + var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var_i = var35;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var38 = 1;
var = var38;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Buffer#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_string__Buffer___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__Buffer___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#capacity for (self: Buffer): Int */
long string__Buffer__capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#capacity for (self: Object): Int */
long VIRTUAL_string__Buffer__capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__Buffer__capacity(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Object#to_s for (self: Object): String */
val* string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__inspect]))(self) /* inspect on <self:Object>*/;
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
{ /* Inline string#Object#native_class_name (self) */
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
val* var2 /* : String */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__Object__native_class_name]))(self) /* native_class_name on <self:Object>*/;
var2 = string__NativeString__to_s(var1);
var = var2;
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
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "<";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__inspect_head]))(self) /* inspect_head on <self:Object>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = ">";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var13;
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
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
long var13 /* : Int */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 5;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "";
var5 = 0;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:Object>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
if (varonce8) {
var9 = varonce8;
} else {
var10 = ":#";
var11 = 2;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var9) /* add on <var_:Array[Object]>*/;
var13 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:Object>*/;
var14 = string__Int__to_hex(var13);
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "";
var18 = 0;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var20;
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
val* var2 /* : Sequence[String] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_kernel__Object__sys]))(self) /* sys on <self:Object>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__Object__args]))(var1) /* args on <var1:Sys>*/;
var = var2;
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
val* var6 /* : String */;
static val* varonce7;
static int varonce7_guard;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
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
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_n /* var n: Int */;
long var8 /* : Int */;
char var9 /* : Char */;
val* var10 /* : nullable Object */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
char var16 /* : Char */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_pos /* var pos: Int */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
short int var30 /* : Bool */;
short int var_ /* var : Bool */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
char var41 /* : Char */;
val* var42 /* : nullable Object */;
long var43 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
var_s = p0;
var_base = p1;
var_signed = p2;
var = 0;
{ /* Inline kernel#Int#< (self,var) */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var4 = self < var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (var1){
{ /* Inline kernel#Int#unary - (self) */
var7 = -self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var_n = var5;
var8 = 0;
var9 = '-';
var10 = BOX_kernel__Char(var9); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_s, var8, var10) /* []= on <var_s:Buffer>*/;
} else {
var11 = 0;
{ /* Inline kernel#Int#== (self,var11) */
var14 = self == var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var15 = 0;
var16 = '0';
var17 = BOX_kernel__Char(var16); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_s, var15, var17) /* []= on <var_s:Buffer>*/;
goto RET_LABEL;
} else {
var_n = self;
}
}
var18 = kernel__Int__digit_count(self, var_base);
var19 = 1;
{ /* Inline kernel#Int#- (var18,var19) */
var22 = var18 - var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_pos = var20;
for(;;) {
var24 = 0;
{ /* Inline kernel#Int#>= (var_pos,var24) */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var30 = var_pos >= var24;
var25 = var30;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_ = var25;
if (var25){
var31 = 0;
{ /* Inline kernel#Int#> (var_n,var31) */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var37 = var_n > var31;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var23 = var32;
} else {
var23 = var_;
}
if (!var23) break;
{ /* Inline kernel#Int#% (var_n,var_base) */
var40 = var_n % var_base;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var41 = kernel__Int__to_c(var38);
var42 = BOX_kernel__Char(var41); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_s, var_pos, var42) /* []= on <var_s:Buffer>*/;
{ /* Inline kernel#Int#/ (var_n,var_base) */
var45 = var_n / var_base;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var_n = var43;
var46 = 1;
{ /* Inline kernel#Int#- (var_pos,var46) */
var49 = var_pos - var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var_pos = var47;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string#Int#fill_buffer for (self: Object, Buffer, Int, Bool) */
void VIRTUAL_string__Int__fill_buffer(val* self, val* p0, long p1, short int p2) {
long var /* : Int */;
var = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
string__Int__fill_buffer(var, p0, p1, p2);
RET_LABEL:;
}
/* method string#Int#native_int_to_s for (self: Int, Int): NativeString */
char* string__Int__native_int_to_s(long self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = native_int_to_s(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Int#native_int_to_s for (self: Object, Int): NativeString */
char* VIRTUAL_string__Int__native_int_to_s(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = string__Int__native_int_to_s(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Int#to_s for (self: Int): String */
val* string__Int__to_s(long self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var_len /* var len: Int */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
var1 = 10;
var2 = kernel__Int__digit_count(self, var1);
var_len = var2;
var3 = string__Int__native_int_to_s(self, var_len);
var4 = string__NativeString__to_s_with_length(var3, var_len);
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
var3 = string__Int__to_base(self, var1, var2);
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
val* var2 /* : Buffer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var_s /* var s: Buffer */;
val* var8 /* : String */;
var_base = p0;
var_signed = p1;
var1 = kernel__Int__digit_count(self, var_base);
var_l = var1;
var2 = NEW_string__Buffer(&type_string__Buffer);
if (varonce) {
var3 = varonce;
} else {
var4 = " ";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((val* (*)(val*, long))(var3->class->vft[COLOR_string__String___42d]))(var3, var_l) /* * on <var3:String>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_string__Buffer__from]))(var2, var7) /* from on <var2:Buffer>*/;
CHECK_NEW_string__Buffer(var2);
var_s = var2;
string__Int__fill_buffer(self, var_s, var_base, var_signed);
var8 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
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
long var3 /* : Int */;
long var_len /* var len: Int */;
val* var4 /* : Range[Int] */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
val* var10 /* : Discrete */;
val* var11 /* : Discrete */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
long var_i /* var i: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_j /* var j: Int */;
val* var23 /* : nullable Object */;
char var24 /* : Char */;
char var_c /* var c: Char */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
char var29 /* : Char */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : String */;
long var39 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var43 /* : Int */;
val* var44 /* : String */;
var1 = 3;
var2 = string__Float__to_precision(self, var1);
var_str = var2;
var3 = ((long (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__length]))(var_str) /* length on <var_str:String>*/;
var_len = var3;
var4 = NEW_range__Range(&type_range__Rangekernel__Int);
var5 = 0;
var6 = 1;
{ /* Inline kernel#Int#- (var_len,var6) */
var9 = var_len - var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var10 = BOX_kernel__Int(var5); /* autobox from Int to Discrete */
var11 = BOX_kernel__Int(var7); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_range__Range__init]))(var4, var10, var11) /* init on <var4:Range[Int]>*/;
CHECK_NEW_range__Range(var4);
var12 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:Range[Int]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var15 = ((struct instance_kernel__Int*)var14)->value; /* autounbox from nullable Object to Int */;
var_i = var15;
var16 = 1;
{ /* Inline kernel#Int#- (var_len,var16) */
var19 = var_len - var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
{ /* Inline kernel#Int#- (var17,var_i) */
var22 = var17 - var_i;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_j = var20;
var23 = ((val* (*)(val*, long))(var_str->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_str, var_j) /* [] on <var_str:String>*/;
var24 = ((struct instance_kernel__Char*)var23)->value; /* autounbox from nullable Object to Char */;
var_c = var24;
var25 = '0';
{ /* Inline kernel#Char#== (var_c,var25) */
var28 = var_c == var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
if (var26){
goto CONTINUE_label;
} else {
var29 = '.';
{ /* Inline kernel#Char#== (var_c,var29) */
var32 = var_c == var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
if (var30){
var33 = 0;
var34 = 2;
{ /* Inline kernel#Int#+ (var_j,var34) */
var37 = var_j + var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var38 = ((val* (*)(val*, long, long))(var_str->class->vft[COLOR_string__AbstractString__substring]))(var_str, var33, var35) /* substring on <var_str:String>*/;
var = var38;
goto RET_LABEL;
} else {
var39 = 0;
var40 = 1;
{ /* Inline kernel#Int#+ (var_j,var40) */
var43 = var_j + var40;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var44 = ((val* (*)(val*, long, long))(var_str->class->vft[COLOR_string__AbstractString__substring]))(var_str, var39, var41) /* substring on <var_str:String>*/;
var = var44;
goto RET_LABEL;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
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
long var_nb /* var nb: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
val* var8 /* : String */;
double var_f /* var f: Float */;
val* var9 /* : Range[Int] */;
long var10 /* : Int */;
val* var11 /* : Discrete */;
val* var12 /* : Discrete */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
long var_i /* var i: Int */;
long var16 /* : Int */;
double var17 /* : Float */;
double var18 /* : Float */;
double var20 /* : Float */;
double var21 /* : Float */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
double var25 /* : Float */;
double var26 /* : Float */;
double var28 /* : Float */;
double var29 /* : Float */;
double var30 /* : Float */;
double var32 /* : Float */;
long var33 /* : Int */;
long var35 /* : Int */;
long var_i36 /* var i: Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var_s /* var s: String */;
long var46 /* : Int */;
long var_sl /* var sl: Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype;
int idtype;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var_p1 /* var p1: String */;
long var57 /* : Int */;
long var58 /* : Int */;
long var60 /* : Int */;
val* var61 /* : String */;
val* var_p2 /* var p2: String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : String */;
long var79 /* : Int */;
long var81 /* : Int */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
var_nb = p0;
var1 = 0;
{ /* Inline kernel#Int#== (var_nb,var1) */
var4 = var_nb == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
{ /* Inline kernel#Float#to_i (self) */
var7 = (long)self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var8 = string__Int__to_s(var5);
var = var8;
goto RET_LABEL;
} else {
}
var_f = self;
var9 = NEW_range__Range(&type_range__Rangekernel__Int);
var10 = 0;
var11 = BOX_kernel__Int(var10); /* autobox from Int to Discrete */
var12 = BOX_kernel__Int(var_nb); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_range__Range__without_last]))(var9, var11, var12) /* without_last on <var9:Range[Int]>*/;
CHECK_NEW_range__Range(var9);
var13 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Range[Int]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var16 = ((struct instance_kernel__Int*)var15)->value; /* autounbox from nullable Object to Int */;
var_i = var16;
var17 = 10.0;
{ /* Inline kernel#Float#* (var_f,var17) */
var20 = var_f * var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var_f = var18;
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var21 = 0.0;
{ /* Inline kernel#Float#> (self,var21) */
var24 = self > var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
if (var22){
var25 = 0.5;
{ /* Inline kernel#Float#+ (var_f,var25) */
var28 = var_f + var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_f = var26;
} else {
var29 = 0.5;
{ /* Inline kernel#Float#- (var_f,var29) */
var32 = var_f - var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var_f = var30;
}
{ /* Inline kernel#Float#to_i (var_f) */
var35 = (long)var_f;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var_i36 = var33;
var37 = 0;
{ /* Inline kernel#Int#== (var_i36,var37) */
var40 = var_i36 == var37;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
if (var38){
if (varonce) {
var41 = varonce;
} else {
var42 = "0.0";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
}
var45 = string__Int__to_s(var_i36);
var_s = var45;
var46 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var_sl = var46;
{ /* Inline kernel#Int#> (var_sl,var_nb) */
/* Covariant cast for argument 0 (i) <var_nb:Int> isa OTHER */
/* <var_nb:Int> isa OTHER */
var49 = 1; /* easy <var_nb:Int> isa OTHER*/
if (!var49) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var50 = var_sl > var_nb;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
if (var47){
var51 = 0;
var52 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#- (var52,var_nb) */
var55 = var52 - var_nb;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var56 = ((val* (*)(val*, long, long))(var_s->class->vft[COLOR_string__AbstractString__substring]))(var_s, var51, var53) /* substring on <var_s:String>*/;
var_p1 = var56;
var57 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#- (var57,var_nb) */
var60 = var57 - var_nb;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var61 = ((val* (*)(val*, long, long))(var_s->class->vft[COLOR_string__AbstractString__substring]))(var_s, var58, var_nb) /* substring on <var_s:String>*/;
var_p2 = var61;
if (varonce62) {
var63 = varonce62;
} else {
var64 = ".";
var65 = 1;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = ((val* (*)(val*, val*))(var_p1->class->vft[COLOR_string__String___43d]))(var_p1, var63) /* + on <var_p1:String>*/;
var68 = ((val* (*)(val*, val*))(var67->class->vft[COLOR_string__String___43d]))(var67, var_p2) /* + on <var67:String>*/;
var = var68;
goto RET_LABEL;
} else {
if (varonce69) {
var70 = varonce69;
} else {
var71 = "0.";
var72 = 2;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "0";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{ /* Inline kernel#Int#- (var_nb,var_sl) */
var81 = var_nb - var_sl;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var82 = ((val* (*)(val*, long))(var75->class->vft[COLOR_string__String___42d]))(var75, var79) /* * on <var75:String>*/;
var83 = ((val* (*)(val*, val*))(var70->class->vft[COLOR_string__String___43d]))(var70, var82) /* + on <var70:String>*/;
var84 = ((val* (*)(val*, val*))(var83->class->vft[COLOR_string__String___43d]))(var83, var_s) /* + on <var83:String>*/;
var = var84;
goto RET_LABEL;
}
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
/* method string#Float#to_precision_native for (self: Float, Int): String */
val* string__Float__to_precision_native(double self, long p0) {
val* var /* : String */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for string#Float#to_precision_native at lib/standard/string.nit:946,2--955,3\n");
exit(1);
RET_LABEL:;
return var;
}
/* method string#Float#to_precision_native for (self: Object, Int): String */
val* VIRTUAL_string__Float__to_precision_native(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var1 = string__Float__to_precision_native(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#to_s for (self: Char): String */
val* string__Char__to_s(char self) {
val* var /* : String */;
val* var1 /* : Buffer */;
long var2 /* : Int */;
val* var_s /* var s: Buffer */;
long var3 /* : Int */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
var2 = 1;
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var2) /* with_capacity on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_s = var1;
var3 = 0;
var4 = BOX_kernel__Char(self); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_s, var3, var4) /* []= on <var_s:Buffer>*/;
var5 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var5;
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
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var2 = '0';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = '9';
{ /* Inline kernel#Char#<= (self,var7) */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var13 = self <= var7;
var8 = var13;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (var1){
var14 = 1;
var = var14;
goto RET_LABEL;
} else {
}
var15 = 0;
var = var15;
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
/* method string#Char#is_alpha for (self: Char): Bool */
short int string__Char__is_alpha(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
char var3 /* : Char */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
char var8 /* : Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
short int var16 /* : Bool */;
char var17 /* : Char */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
var3 = 'a';
{ /* Inline kernel#Char#>= (self,var3) */
/* Covariant cast for argument 0 (i) <var3:Char> isa OTHER */
/* <var3:Char> isa OTHER */
var6 = 1; /* easy <var3:Char> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
}
var7 = self >= var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var_ = var4;
if (var4){
var8 = 'z';
{ /* Inline kernel#Char#<= (self,var8) */
/* Covariant cast for argument 0 (i) <var8:Char> isa OTHER */
/* <var8:Char> isa OTHER */
var11 = 1; /* easy <var8:Char> isa OTHER*/
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var14 = self <= var8;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var2 = var9;
} else {
var2 = var_;
}
var_15 = var2;
if (var2){
var1 = var_15;
} else {
var17 = 'A';
{ /* Inline kernel#Char#>= (self,var17) */
/* Covariant cast for argument 0 (i) <var17:Char> isa OTHER */
/* <var17:Char> isa OTHER */
var20 = 1; /* easy <var17:Char> isa OTHER*/
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
}
var23 = self >= var17;
var18 = var23;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var_24 = var18;
if (var18){
var25 = 'Z';
{ /* Inline kernel#Char#<= (self,var25) */
/* Covariant cast for argument 0 (i) <var25:Char> isa OTHER */
/* <var25:Char> isa OTHER */
var28 = 1; /* easy <var25:Char> isa OTHER*/
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var31 = self <= var25;
var26 = var31;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var16 = var26;
} else {
var16 = var_24;
}
var1 = var16;
}
if (var1){
var32 = 1;
var = var32;
goto RET_LABEL;
} else {
}
var33 = 0;
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#is_alpha for (self: Object): Bool */
short int VIRTUAL_string__Char__is_alpha(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string__Char__is_alpha(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Char#is_alphanumeric for (self: Char): Bool */
short int string__Char__is_alphanumeric(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var2 = string__Char__is_numeric(self);
var_ = var2;
if (var2){
var1 = var_;
} else {
var3 = string__Char__is_alpha(self);
var1 = var3;
}
if (var1){
var4 = 1;
var = var4;
goto RET_LABEL;
} else {
}
var5 = 0;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Char#is_alphanumeric for (self: Object): Bool */
short int VIRTUAL_string__Char__is_alphanumeric(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string__Char__is_alphanumeric(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Collection#to_s for (self: Collection[nullable Object]): String */
val* string__Collection__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var8 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_s = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_e = var4;
var5 = NULL;
if (var_e == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
if (var_e == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/string.nit", 997);
exit(1);
} else {
var7 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var7) /* append on <var_s:Buffer>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var8;
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
/* method string#Collection#join for (self: Collection[nullable Object], String): String */
val* string__Collection__join(val* self, val* p0) {
val* var /* : String */;
val* var_sep /* var sep: String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var7 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : String */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : String */;
val* var17 /* : String */;
var_sep = p0;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:Collection[nullable Object]>*/;
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
var6 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var6->class->vft[COLOR_string__Buffer__init]))(var6) /* init on <var6:Buffer>*/;
CHECK_NEW_string__Buffer(var6);
var_s = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
var_i = var7;
var8 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
var_e = var8;
var9 = NULL;
if (var_e == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
if (var_e == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/string.nit", 1014);
exit(1);
} else {
var11 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var11) /* append on <var_s:Buffer>*/;
} else {
}
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
for(;;) {
var12 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_i) /* is_ok on <var_i:Iterator[nullable Object]>*/;
if (!var12) break;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var_sep) /* append on <var_s:Buffer>*/;
var13 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__item]))(var_i) /* item on <var_i:Iterator[nullable Object]>*/;
var_e = var13;
var14 = NULL;
if (var_e == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
if (var_e == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/string.nit", 1021);
exit(1);
} else {
var16 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var16) /* append on <var_s:Buffer>*/;
} else {
}
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Iterator__next]))(var_i) /* next on <var_i:Iterator[nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var17 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Collection#join for (self: Object, String): String */
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
val* var1 /* : Buffer */;
val* var_s /* var s: Buffer */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : String */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
val* var16 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
CHECK_NEW_string__Buffer(var1);
var_s = var1;
var2 = 0;
var_i = var2;
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Array[nullable Object]>*/;
var_l = var3;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var6 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = var_i < var_l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var8 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:Array[nullable Object]>*/;
var_e = var8;
var9 = NULL;
if (var_e == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
if (var_e == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/string.nit", 1037);
exit(1);
} else {
var11 = ((val* (*)(val*))(var_e->class->vft[COLOR_string__Object__to_s]))(var_e) /* to_s on <var_e:nullable Object>*/;
}
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var11) /* append on <var_s:Buffer>*/;
} else {
}
var12 = 1;
{ /* Inline kernel#Int#+ (var_i,var12) */
var15 = var_i + var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_i = var13;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var16 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var16;
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
/* method string#Map#join for (self: Map[Object, nullable Object], String, String): String */
val* string__Map__join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_sep /* var sep: String */;
val* var_couple_sep /* var couple_sep: String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var7 /* : MapIterator[Object, nullable Object] */;
val* var_i /* var i: MapIterator[Object, nullable Object] */;
val* var8 /* : Object */;
val* var_k /* var k: Object */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : String */;
short int var16 /* : Bool */;
val* var17 /* : Object */;
val* var18 /* : nullable Object */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
val* var25 /* : String */;
var_sep = p0;
var_couple_sep = p1;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__MapRead__is_empty]))(self) /* is_empty on <self:Map[Object, nullable Object]>*/;
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
var6 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var6->class->vft[COLOR_string__Buffer__init]))(var6) /* init on <var6:Buffer>*/;
CHECK_NEW_string__Buffer(var6);
var_s = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapRead__iterator]))(self) /* iterator on <self:Map[Object, nullable Object]>*/;
var_i = var7;
var8 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_i) /* key on <var_i:MapIterator[Object, nullable Object]>*/;
var_k = var8;
var9 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_i) /* item on <var_i:MapIterator[Object, nullable Object]>*/;
var_e = var9;
var10 = NULL;
if (var_e == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 3;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var_k;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var_couple_sep;
((struct instance_array__NativeArray*)var14)->values[2] = (val*) var_e;
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
}
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var15) /* append on <var_s:Buffer>*/;
} else {
}
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_i) /* next on <var_i:MapIterator[Object, nullable Object]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_i) /* is_ok on <var_i:MapIterator[Object, nullable Object]>*/;
if (!var16) break;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var_sep) /* append on <var_s:Buffer>*/;
var17 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_i) /* key on <var_i:MapIterator[Object, nullable Object]>*/;
var_k = var17;
var18 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_i) /* item on <var_i:MapIterator[Object, nullable Object]>*/;
var_e = var18;
var19 = NULL;
if (var_e == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var_k;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var_couple_sep;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var_e;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
CHECK_NEW_array__Array(var21);
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var24) /* append on <var_s:Buffer>*/;
} else {
}
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_i) /* next on <var_i:MapIterator[Object, nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var25 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Map#join for (self: Object, String, String): String */
val* VIRTUAL_string__Map__join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__Map__join(self, p0, p1);
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
{ /* Inline string#NativeString#[] (self,p0) */
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
{ /* Inline string#NativeString#[]= (self,p0,p1) */
var = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var[p0]=p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: NativeString, NativeString, Int, Int, Int) */
void string__NativeString__copy_to(char* self, char* p0, long p1, long p2, long p3) {
memcpy(p0+p3,self+p2,p1);
RET_LABEL:;
}
/* method string#NativeString#copy_to for (self: Object, NativeString, Int, Int, Int) */
void VIRTUAL_string__NativeString__copy_to(val* self, char* p0, long p1, long p2, long p3) {
char* var /* : NativeString */;
{ /* Inline string#NativeString#copy_to (self,p0,p1,p2,p3) */
var = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
memcpy(p0+p3,var+p2,p1);
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
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
var1 = 0;
var_l = var1;
for(;;) {
{ /* Inline string#NativeString#[] (self,var_l) */
var4 = self[var_l];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var5 = '\0';
{ /* Inline kernel#Char#!= (var2,var5) */
var8 = var2 == var5;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (!var6) break;
var10 = 1;
{ /* Inline kernel#Int#+ (var_l,var10) */
var13 = var_l + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var_l = var11;
CONTINUE_label: (void)0;
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
{ /* Inline string#NativeString#atoi (self) */
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
double var1 /* : Float */;
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
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__atof(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s for (self: NativeString): String */
val* string__NativeString__to_s(char* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
var1 = string__NativeString__cstring_length(self);
var2 = string__NativeString__to_s_with_length(self, var1);
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
/* method string#NativeString#to_s_with_length for (self: NativeString, Int): String */
val* string__NativeString__to_s_with_length(char* self, long p0) {
val* var /* : String */;
long var_length /* var length: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
val* var6 /* : String */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
var_length = p0;
var1 = 0;
{ /* Inline kernel#Int#>= (var_length,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var5 = var_length >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string.nit", 1107);
exit(1);
}
var6 = NEW_string__String(&type_string__String);
var7 = 0;
var8 = 1;
{ /* Inline kernel#Int#- (var_length,var8) */
var11 = var_length - var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
((void (*)(val*, char*, long, long, long))(var6->class->vft[COLOR_string__String__with_infos]))(var6, self, var_length, var7, var9) /* with_infos on <var6:String>*/;
CHECK_NEW_string__String(var6);
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_length for (self: Object, Int): String */
val* VIRTUAL_string__NativeString__to_s_with_length(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s_with_length(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: NativeString): String */
val* string__NativeString__to_s_with_copy(char* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_length /* var length: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
val* var8 /* : StringCapable */;
char* var9 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
long var10 /* : Int */;
long var11 /* : Int */;
val* var13 /* : String */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
var1 = string__NativeString__cstring_length(self);
var_length = var1;
var2 = 1;
{ /* Inline kernel#Int#+ (var_length,var2) */
var5 = var_length + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
{ /* Inline string#StringCapable#calloc_string (self,var3) */
var8 = BOX_string__NativeString(self); /* autobox from NativeString to StringCapable */
var9 = (char*)nit_alloc(var3);
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_new_self = var6;
var10 = 0;
var11 = 0;
{ /* Inline string#NativeString#copy_to (self,var_new_self,var_length,var10,var11) */
memcpy(var_new_self+var11,self+var10,var_length);
RET_LABEL12:(void)0;
}
var13 = NEW_string__String(&type_string__String);
var14 = 0;
var15 = 1;
{ /* Inline kernel#Int#- (var_length,var15) */
var18 = var_length - var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
((void (*)(val*, char*, long, long, long))(var13->class->vft[COLOR_string__String__with_infos]))(var13, var_new_self, var_length, var14, var16) /* with_infos on <var13:String>*/;
CHECK_NEW_string__String(var13);
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#NativeString#to_s_with_copy for (self: Object): String */
val* VIRTUAL_string__NativeString__to_s_with_copy(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = string__NativeString__to_s_with_copy(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method string#NativeString#init for (self: NativeString) */
void string__NativeString__init(char* self) {
RET_LABEL:;
}
/* method string#NativeString#init for (self: Object) */
void VIRTUAL_string__NativeString__init(val* self) {
char* var /* : NativeString */;
var = ((struct instance_string__NativeString*)self)->value; /* autounbox from Object to NativeString */;
string__NativeString__init(var);
RET_LABEL:;
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
{ /* Inline string#StringCapable#calloc_string (self,p0) */
var3 = (char*)nit_alloc(p0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#args for (self: Sys): Sequence[String] */
val* string__Sys__args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
((void (*)(val*))(self->class->vft[COLOR_string__Sys__init_args]))(self) /* init_args on <self:Sys>*/;
} else {
}
var4 = self->attrs[COLOR_string__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/string.nit", 1132);
exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Sys#args for (self: Object): Sequence[String] */
val* VIRTUAL_string__Sys__args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sequence[String] */;
var1 = string__Sys__args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Sys#program_name for (self: Sys): String */
val* string__Sys__program_name(val* self) {
val* var /* : String */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
var1 = 0;
var2 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__Sys__native_argv]))(self, var1) /* native_argv on <self:Sys>*/;
var3 = string__NativeString__to_s(var2);
var = var3;
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
long var_argc /* var argc: Int */;
val* var1 /* : Array[String] */;
long var2 /* : Int */;
val* var_args /* var args: Array[String] */;
long var3 /* : Int */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
var = ((long (*)(val*))(self->class->vft[COLOR_string__Sys__native_argc]))(self) /* native_argc on <self:Sys>*/;
var_argc = var;
var1 = NEW_array__Array(&type_array__Arraystring__String);
var2 = 0;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[String]>*/;
CHECK_NEW_array__Array(var1);
var_args = var1;
var3 = 1;
var_i = var3;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_argc) */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var6 = 1; /* easy <var_argc:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = var_i < var_argc;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var8 = 1;
{ /* Inline kernel#Int#- (var_i,var8) */
var11 = var_i - var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var12 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__Sys__native_argv]))(self, var_i) /* native_argv on <self:Sys>*/;
var13 = string__NativeString__to_s(var12);
((void (*)(val*, long, val*))(var_args->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_args, var9, var13) /* []= on <var_args:Array[String]>*/;
var14 = 1;
{ /* Inline kernel#Int#+ (var_i,var14) */
var17 = var_i + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_i = var15;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
self->attrs[COLOR_string__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method string#Sys#init_args for (self: Object) */
void VIRTUAL_string__Sys__init_args(val* self) {
string__Sys__init_args(self);
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
{ /* Inline string#Sys#native_argc (self) */
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
{ /* Inline string#Sys#native_argv (self,p0) */
var3 = glob_argv[p0];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
