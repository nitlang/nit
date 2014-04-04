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
/* method string#AbstractString#chars for (self: AbstractString): StringCharView */
val* string__AbstractString__chars(val* self) {
val* var /* : StringCharView */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 34);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method string#AbstractString#chars for (self: Object): StringCharView */
val* VIRTUAL_string__AbstractString__chars(val* self) {
val* var /* : StringCharView */;
val* var1 /* : StringCharView */;
var1 = string__AbstractString__chars(self);
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
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
val* var34 /* : Buffer */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var_r /* var r: Buffer */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
val* var45 /* : StringCharView */;
char* var46 /* : NativeString */;
char var47 /* : Char */;
char var49 /* : Char */;
val* var50 /* : nullable Object */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
val* var55 /* : String */;
static val* varonce;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : String */;
var_from = p0;
var_count = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_count,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_count >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 53);
show_backtrace(1);
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
var_class_name15 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var16 = var_from < var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var17 = 0;
var_from = var17;
} else {
}
var18 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
{ /* Inline kernel#Int#> (var_count,var18) */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (!var21) {
var_class_name24 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var25 = var_count > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (var19){
var26 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
var_count = var26;
} else {
}
{ /* Inline kernel#Int#< (var_from,var_count) */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var29 = 1; /* easy <var_count:Int> isa OTHER*/
if (!var29) {
var_class_name32 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var33 = var_from < var_count;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
if (var27){
var34 = NEW_string__Buffer(&type_string__Buffer);
{ /* Inline kernel#Int#- (var_count,var_from) */
var37 = var_count - var_from;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
((void (*)(val*, long))(var34->class->vft[COLOR_string__Buffer__with_capacity]))(var34, var35) /* with_capacity on <var34:Buffer>*/;
var_r = var34;
for(;;) {
{ /* Inline kernel#Int#< (var_from,var_count) */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var40 = 1; /* easy <var_count:Int> isa OTHER*/
if (!var40) {
var_class_name43 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var44 = var_from < var_count;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
if (!var38) break;
var45 = ((val* (*)(val*))(var_r->class->vft[COLOR_string__AbstractString__chars]))(var_r) /* chars on <var_r:Buffer>*/;
var46 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:AbstractString> */
{ /* Inline string#NativeString#[] (var46,var_from) */
var49 = var46[var_from];
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var50 = BOX_kernel__Char(var47); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var45->class->vft[COLOR_abstract_collection__Sequence__push]))(var45, var50) /* push on <var45:StringCharView(BufferCharView)>*/;
var51 = 1;
{ /* Inline kernel#Int#+ (var_from,var51) */
var54 = var_from + var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var_from = var52;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var55 = ((val* (*)(val*))(var_r->class->vft[COLOR_string__Object__to_s]))(var_r) /* to_s on <var_r:Buffer>*/;
var = var55;
goto RET_LABEL;
} else {
if (varonce) {
var56 = varonce;
} else {
var57 = "";
var58 = 0;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce = var56;
}
var = var56;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var5 = var_from < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 78);
show_backtrace(1);
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
const char* var_class_name;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var_its_index_from /* var its_index_from: Int */;
long var26 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
char var36 /* : Char */;
char var38 /* : Char */;
char var39 /* : Char */;
char var41 /* : Char */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
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
var_class_name22 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var23 = var_itsindex > var_myindex;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var11 = var17;
}
if (var11){
var24 = 0;
var = var24;
goto RET_LABEL;
} else {
}
var25 = var_str->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_str:String> */
var_its_index_from = var25;
{ /* Inline kernel#Int#+ (var_itsindex,var_its_index_from) */
var28 = var_itsindex + var_its_index_from;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_itsindex = var26;
for(;;) {
{ /* Inline kernel#Int#>= (var_itsindex,var_its_index_from) */
/* Covariant cast for argument 0 (i) <var_its_index_from:Int> isa OTHER */
/* <var_its_index_from:Int> isa OTHER */
var31 = 1; /* easy <var_its_index_from:Int> isa OTHER*/
if (!var31) {
var_class_name34 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var35 = var_itsindex >= var_its_index_from;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (!var29) break;
{ /* Inline string#NativeString#[] (var_myitems,var_myindex) */
var38 = var_myitems[var_myindex];
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
{ /* Inline string#NativeString#[] (var_itsitems,var_itsindex) */
var41 = var_itsitems[var_itsindex];
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
{ /* Inline kernel#Char#!= (var36,var39) */
var44 = var36 == var39;
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
if (var42){
var46 = 0;
var = var46;
goto RET_LABEL;
} else {
}
var47 = 1;
{ /* Inline kernel#Int#- (var_myindex,var47) */
var50 = var_myindex - var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var_myindex = var48;
var51 = 1;
{ /* Inline kernel#Int#- (var_itsindex,var51) */
var54 = var_itsindex - var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var_itsindex = var52;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var55 = 1;
var = var55;
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
val* var3 /* : StringCharView */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
char var_c /* var c: Char */;
char var7 /* : Char */;
long var8 /* : Int */;
long var_v /* var v: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
var_base = p0;
var1 = 0;
var_i = var1;
var2 = 0;
var_neg = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:StringCharView>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var_c = var7;
var8 = kernel__Char__to_i(var_c);
var_v = var8;
{ /* Inline kernel#Int#> (var_v,var_base) */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var11 = 1; /* easy <var_base:Int> isa OTHER*/
if (!var11) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var12 = var_v > var_base;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (var9){
if (var_neg){
{ /* Inline kernel#Int#unary - (var_i) */
var15 = -var_i;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var = var13;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
var16 = 0;
{ /* Inline kernel#Int#< (var_v,var16) */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (!var19) {
var_class_name22 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var23 = var_v < var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var24 = 1;
var_neg = var24;
} else {
{ /* Inline kernel#Int#* (var_i,var_base) */
var27 = var_i * var_base;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
{ /* Inline kernel#Int#+ (var25,var_v) */
var30 = var25 + var_v;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_i = var28;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (var_neg){
{ /* Inline kernel#Int#unary - (var_i) */
var33 = -var_i;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var = var31;
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
val* var2 /* : StringCharView */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
char var_i /* var i: Char */;
char var6 /* : Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
char var11 /* : Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
var1 = 0;
var_has_point_or_comma = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:StringCharView>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var6 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var_i = var6;
var7 = string__Char__is_numeric(var_i);
var8 = !var7;
if (var8){
var11 = '.';
{ /* Inline kernel#Char#== (var_i,var11) */
var14 = var_i == var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_ = var12;
if (var12){
var10 = var_;
} else {
var15 = ',';
{ /* Inline kernel#Char#== (var_i,var15) */
var18 = var_i == var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var10 = var16;
}
var_19 = var10;
if (var10){
var20 = !var_has_point_or_comma;
var9 = var20;
} else {
var9 = var_19;
}
if (var9){
var21 = 1;
var_has_point_or_comma = var21;
} else {
var22 = 0;
var = var22;
goto RET_LABEL;
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var23 = 1;
var = var23;
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
val* var3 /* : StringCharView */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
char var_i /* var i: Char */;
char var7 /* : Char */;
char var8 /* : Char */;
val* var9 /* : nullable Object */;
val* var10 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var2) /* with_capacity on <var1:Buffer>*/;
var_s = var1;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:StringCharView>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var_i = var7;
var8 = kernel__Char__to_upper(var_i);
var9 = BOX_kernel__Char(var8); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var9) /* add on <var_s:Buffer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var10 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var10;
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
val* var3 /* : StringCharView */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
char var_i /* var i: Char */;
char var7 /* : Char */;
char var8 /* : Char */;
val* var9 /* : nullable Object */;
val* var10 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var2) /* with_capacity on <var1:Buffer>*/;
var_s = var1;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:StringCharView>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var_i = var7;
var8 = kernel__Char__to_lower(var_i);
var9 = BOX_kernel__Char(var8); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_s, var9) /* add on <var_s:Buffer>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var10 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var10;
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
val* var8 /* : StringCharView */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
char var12 /* : Char */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
long var_end_pos /* var end_pos: Int */;
val* var36 /* : StringCharView */;
val* var37 /* : nullable Object */;
long var38 /* : Int */;
char var40 /* : Char */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : StringCharView */;
val* var58 /* : nullable Object */;
val* var59 /* : String */;
char var60 /* : Char */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
long var68 /* : Int */;
val* var69 /* : String */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
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
var8 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var9 = ((val* (*)(val*, long))(var8->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var8, var_start_pos) /* [] on <var8:StringCharView>*/;
{ /* Inline kernel#Char#ascii (var9) */
var12 = ((struct instance_kernel__Char*)var9)->value; /* autounbox from nullable Object to Char */;
var13 = (unsigned char)var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var14 = 32;
{ /* Inline kernel#Int#<= (var10,var14) */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (!var17) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var18 = var10 <= var14;
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
var23 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
{ /* Inline kernel#Int#== (var_start_pos,var23) */
var26 = var_start_pos == var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
if (var24){
if (varonce) {
var27 = varonce;
} else {
var28 = "";
var29 = 0;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
var = var27;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var31 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractString>*/;
var32 = 1;
{ /* Inline kernel#Int#- (var31,var32) */
var35 = var31 - var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var_end_pos = var33;
for(;;) {
var36 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var37 = ((val* (*)(val*, long))(var36->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var36, var_end_pos) /* [] on <var36:StringCharView>*/;
{ /* Inline kernel#Char#ascii (var37) */
var40 = ((struct instance_kernel__Char*)var37)->value; /* autounbox from nullable Object to Char */;
var41 = (unsigned char)var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var42 = 32;
{ /* Inline kernel#Int#<= (var38,var42) */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (!var45) {
var_class_name48 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var49 = var38 <= var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
if (!var43) break;
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
var57 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var58 = ((val* (*)(val*, long))(var57->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var57, var_start_pos) /* [] on <var57:StringCharView>*/;
var60 = ((struct instance_kernel__Char*)var58)->value; /* autounbox from nullable Object to Char */;
var59 = string__Char__to_s(var60);
var = var59;
goto RET_LABEL;
} else {
}
CONTINUE_label61: (void)0;
}
BREAK_label61: (void)0;
{ /* Inline kernel#Int#- (var_end_pos,var_start_pos) */
var64 = var_end_pos - var_start_pos;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var65 = 1;
{ /* Inline kernel#Int#+ (var62,var65) */
var68 = var62 + var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var69 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var_start_pos, var66) /* substring on <self:AbstractString>*/;
var = var69;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
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
val* var3 /* : StringCharView */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
char var_c /* var c: Char */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
char var10 /* : Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
char var34 /* : Char */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
short int var43 /* : Bool */;
char var44 /* : Char */;
long var45 /* : Int */;
long var47 /* : Int */;
val* var48 /* : String */;
char var49 /* : Char */;
val* var50 /* : nullable Object */;
short int var51 /* : Bool */;
char var52 /* : Char */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
char var61 /* : Char */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
short int var68 /* : Bool */;
val* var69 /* : nullable Object */;
short int var70 /* : Bool */;
char var71 /* : Char */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
short int var76 /* : Bool */;
char var77 /* : Char */;
val* var78 /* : nullable Object */;
long var79 /* : Int */;
long var81 /* : Int */;
val* var82 /* : String */;
char var83 /* : Char */;
val* var84 /* : nullable Object */;
short int var85 /* : Bool */;
val* var86 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
var_res = var1;
var2 = 0;
var_underscore = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:StringCharView>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var7 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var_c = var7;
var10 = 'a';
{ /* Inline kernel#Char#>= (var_c,var10) */
/* Covariant cast for argument 0 (i) <var10:Char> isa OTHER */
/* <var10:Char> isa OTHER */
var13 = 1; /* easy <var10:Char> isa OTHER*/
if (!var13) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 442);
show_backtrace(1);
}
var14 = var_c >= var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var_ = var11;
if (var11){
var15 = 'z';
{ /* Inline kernel#Char#<= (var_c,var15) */
/* Covariant cast for argument 0 (i) <var15:Char> isa OTHER */
/* <var15:Char> isa OTHER */
var18 = 1; /* easy <var15:Char> isa OTHER*/
if (!var18) {
var_class_name21 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 440);
show_backtrace(1);
}
var22 = var_c <= var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var9 = var16;
} else {
var9 = var_;
}
var_23 = var9;
if (var9){
var8 = var_23;
} else {
var25 = 'A';
{ /* Inline kernel#Char#>= (var_c,var25) */
/* Covariant cast for argument 0 (i) <var25:Char> isa OTHER */
/* <var25:Char> isa OTHER */
var28 = 1; /* easy <var25:Char> isa OTHER*/
if (!var28) {
var_class_name31 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 442);
show_backtrace(1);
}
var32 = var_c >= var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_33 = var26;
if (var26){
var34 = 'Z';
{ /* Inline kernel#Char#<= (var_c,var34) */
/* Covariant cast for argument 0 (i) <var34:Char> isa OTHER */
/* <var34:Char> isa OTHER */
var37 = 1; /* easy <var34:Char> isa OTHER*/
if (!var37) {
var_class_name40 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 440);
show_backtrace(1);
}
var41 = var_c <= var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var24 = var35;
} else {
var24 = var_33;
}
var8 = var24;
}
if (var8){
var42 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var42) /* add on <var_res:Buffer>*/;
var43 = 0;
var_underscore = var43;
goto CONTINUE_label;
} else {
}
if (var_underscore){
var44 = '_';
{ /* Inline kernel#Char#ascii (var44) */
var47 = (unsigned char)var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var48 = string__Int__to_s(var45);
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__Sequence__append]))(var_res, var48) /* append on <var_res:Buffer>*/;
var49 = 'd';
var50 = BOX_kernel__Char(var49); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var50) /* add on <var_res:Buffer>*/;
} else {
}
var52 = '0';
{ /* Inline kernel#Char#>= (var_c,var52) */
/* Covariant cast for argument 0 (i) <var52:Char> isa OTHER */
/* <var52:Char> isa OTHER */
var55 = 1; /* easy <var52:Char> isa OTHER*/
if (!var55) {
var_class_name58 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 442);
show_backtrace(1);
}
var59 = var_c >= var52;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var_60 = var53;
if (var53){
var61 = '9';
{ /* Inline kernel#Char#<= (var_c,var61) */
/* Covariant cast for argument 0 (i) <var61:Char> isa OTHER */
/* <var61:Char> isa OTHER */
var64 = 1; /* easy <var61:Char> isa OTHER*/
if (!var64) {
var_class_name67 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 440);
show_backtrace(1);
}
var68 = var_c <= var61;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var51 = var62;
} else {
var51 = var_60;
}
if (var51){
var69 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var69) /* add on <var_res:Buffer>*/;
var70 = 0;
var_underscore = var70;
} else {
var71 = '_';
{ /* Inline kernel#Char#== (var_c,var71) */
var74 = var_c == var71;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
if (var72){
var75 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var75) /* add on <var_res:Buffer>*/;
var76 = 1;
var_underscore = var76;
} else {
var77 = '_';
var78 = BOX_kernel__Char(var77); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var78) /* add on <var_res:Buffer>*/;
{ /* Inline kernel#Char#ascii (var_c) */
var81 = (unsigned char)var_c;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var82 = string__Int__to_s(var79);
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__Sequence__append]))(var_res, var82) /* append on <var_res:Buffer>*/;
var83 = 'd';
var84 = BOX_kernel__Char(var83); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var84) /* add on <var_res:Buffer>*/;
var85 = 0;
var_underscore = var85;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var86 = ((val* (*)(val*))(var_res->class->vft[COLOR_string__Object__to_s]))(var_res) /* to_s on <var_res:Buffer>*/;
var = var86;
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
val* var2 /* : StringCharView */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
char var_c /* var c: Char */;
char var6 /* : Char */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
char var15 /* : Char */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
char var24 /* : Char */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
char var33 /* : Char */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
char var42 /* : Char */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : String */;
long var64 /* : Int */;
long var66 /* : Int */;
long var67 /* : Int */;
short int var68 /* : Bool */;
val* var69 /* : String */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
val* var74 /* : nullable Object */;
val* var75 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
((void (*)(val*))(var1->class->vft[COLOR_string__Buffer__init]))(var1) /* init on <var1:Buffer>*/;
var_b = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:AbstractString>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:StringCharView>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var6 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Object to Char */;
var_c = var6;
var7 = '\n';
{ /* Inline kernel#Char#== (var_c,var7) */
var10 = var_c == var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
if (varonce) {
var11 = varonce;
} else {
var12 = "\\n";
var13 = 2;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var11) /* append on <var_b:Buffer>*/;
} else {
var15 = '\0';
{ /* Inline kernel#Char#== (var_c,var15) */
var18 = var_c == var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (var16){
if (varonce19) {
var20 = varonce19;
} else {
var21 = "\\0";
var22 = 2;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var20) /* append on <var_b:Buffer>*/;
} else {
var24 = '\"';
{ /* Inline kernel#Char#== (var_c,var24) */
var27 = var_c == var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
if (varonce28) {
var29 = varonce28;
} else {
var30 = "\\\"";
var31 = 2;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var29) /* append on <var_b:Buffer>*/;
} else {
var33 = '\'';
{ /* Inline kernel#Char#== (var_c,var33) */
var36 = var_c == var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
if (var34){
if (varonce37) {
var38 = varonce37;
} else {
var39 = "\\\'";
var40 = 2;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var38) /* append on <var_b:Buffer>*/;
} else {
var42 = '\\';
{ /* Inline kernel#Char#== (var_c,var42) */
var45 = var_c == var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
if (var43){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "\\\\";
var49 = 2;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var47) /* append on <var_b:Buffer>*/;
} else {
{ /* Inline kernel#Char#ascii (var_c) */
var53 = (unsigned char)var_c;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var54 = 32;
{ /* Inline kernel#Int#< (var51,var54) */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var57 = 1; /* easy <var54:Int> isa OTHER*/
if (!var57) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var58 = var51 < var54;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
if (var55){
if (varonce59) {
var60 = varonce59;
} else {
var61 = "\\";
var62 = 1;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{ /* Inline kernel#Char#ascii (var_c) */
var66 = (unsigned char)var_c;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var67 = 8;
var68 = 0;
var69 = string__Int__to_base(var64, var67, var68);
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 2;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var60;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var69;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__Sequence__append]))(var_b, var73) /* append on <var_b:Buffer>*/;
} else {
var74 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_b->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_b, var74) /* add on <var_b:Buffer>*/;
}
}
}
}
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var75 = ((val* (*)(val*))(var_b->class->vft[COLOR_string__Object__to_s]))(var_b) /* to_s on <var_b:Buffer>*/;
var = var75;
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
/* method string#StringCharView#target for (self: StringCharView): AbstractString */
val* string__StringCharView__target(val* self) {
val* var /* : AbstractString */;
val* var1 /* : AbstractString */;
var1 = self->attrs[COLOR_string__StringCharView___64dtarget].val; /* @target on <self:StringCharView> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @target");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 370);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#target for (self: Object): AbstractString */
val* VIRTUAL_string__StringCharView__target(val* self) {
val* var /* : AbstractString */;
val* var1 /* : AbstractString */;
var1 = string__StringCharView__target(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#target= for (self: StringCharView, AbstractString) */
void string__StringCharView__target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:AbstractString> isa SELFTYPE */
/* <p0:AbstractString> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__StringCharView_VTSELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 370);
show_backtrace(1);
}
self->attrs[COLOR_string__StringCharView___64dtarget].val = p0; /* @target on <self:StringCharView> */
RET_LABEL:;
}
/* method string#StringCharView#target= for (self: Object, AbstractString) */
void VIRTUAL_string__StringCharView__target_61d(val* self, val* p0) {
string__StringCharView__target_61d(self, p0);
RET_LABEL:;
}
/* method string#StringCharView#init for (self: StringCharView, AbstractString) */
void string__StringCharView__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_tgt /* var tgt: AbstractString */;
/* Covariant cast for argument 0 (tgt) <p0:AbstractString> isa SELFTYPE */
/* <p0:AbstractString> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_string__StringCharView_VTSELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 372);
show_backtrace(1);
}
var_tgt = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_string__StringCharView__target_61d]))(self, var_tgt) /* target= on <self:StringCharView>*/;
RET_LABEL:;
}
/* method string#StringCharView#init for (self: Object, AbstractString) */
void VIRTUAL_string__StringCharView__init(val* self, val* p0) {
string__StringCharView__init(self, p0);
RET_LABEL:;
}
/* method string#StringCharView#is_empty for (self: StringCharView): Bool */
short int string__StringCharView__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : AbstractString */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:StringCharView>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:AbstractString>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#is_empty for (self: Object): Bool */
short int VIRTUAL_string__StringCharView__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__StringCharView__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#length for (self: StringCharView): Int */
long string__StringCharView__length(val* self) {
long var /* : Int */;
val* var1 /* : AbstractString */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:StringCharView>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:AbstractString>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#length for (self: Object): Int */
long VIRTUAL_string__StringCharView__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__StringCharView__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#StringCharView#has for (self: StringCharView, Char): Bool */
short int string__StringCharView__has(val* self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
char var_i /* var i: Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var1 = 1; /* easy <p0:Char> isa Char*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 381);
show_backtrace(1);
}
var_c = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:StringCharView>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var5 = ((struct instance_kernel__Char*)var4)->value; /* autounbox from nullable Object to Char */;
var_i = var5;
{ /* Inline kernel#Char#== (var_i,var_c) */
var8 = var_i == var_c;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var9 = 1;
var = var9;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var10 = 0;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#StringCharView#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_string__StringCharView__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = string__StringCharView__has(self, var2);
var = var1;
RET_LABEL:;
return var;
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
/* method string#String#chars for (self: String): StringCharView */
val* string__String__chars(val* self) {
val* var /* : StringCharView */;
val* var1 /* : StringCharView */;
var1 = self->attrs[COLOR_string__String___64dchars].val; /* @chars on <self:String> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @chars");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 415);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#chars for (self: Object): StringCharView */
val* VIRTUAL_string__String__chars(val* self) {
val* var /* : StringCharView */;
val* var1 /* : StringCharView */;
var1 = string__String__chars(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#String#chars= for (self: String, StringCharView) */
void string__String__chars_61d(val* self, val* p0) {
self->attrs[COLOR_string__String___64dchars].val = p0; /* @chars on <self:String> */
RET_LABEL:;
}
/* method string#String#chars= for (self: Object, StringCharView) */
void VIRTUAL_string__String__chars_61d(val* self, val* p0) {
string__String__chars_61d(self, p0);
RET_LABEL:;
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
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
char var23 /* : Char */;
char var25 /* : Char */;
var_index = p0;
var1 = 0;
{ /* Inline kernel#Int#>= (var_index,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_index >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 422);
show_backtrace(1);
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
var_class_name16 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var17 = var7 <= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 425);
show_backtrace(1);
}
var18 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var19 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
{ /* Inline kernel#Int#+ (var_index,var19) */
var22 = var_index + var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
{ /* Inline string#NativeString#[] (var18,var20) */
var25 = var18[var20];
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var = var23;
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
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var_realFrom /* var realFrom: Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
long var61 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
long var67 /* : Int */;
long var_to /* var to: Int */;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
var_from = p0;
var_count = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_count,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_count >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 431);
show_backtrace(1);
}
var6 = 0;
{ /* Inline kernel#Int#< (var_from,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
var_class_name12 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var13 = var_from < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
{ /* Inline kernel#Int#+ (var_count,var_from) */
var16 = var_count + var_from;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_count = var14;
var17 = 0;
{ /* Inline kernel#Int#< (var_count,var17) */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (!var20) {
var_class_name23 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var24 = var_count < var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (var18){
var25 = 0;
var_count = var25;
} else {
}
var26 = 0;
var_from = var26;
} else {
}
var27 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
{ /* Inline kernel#Int#+ (var27,var_from) */
var30 = var27 + var_from;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_realFrom = var28;
{ /* Inline kernel#Int#+ (var_realFrom,var_count) */
var33 = var_realFrom + var_count;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var34 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
{ /* Inline kernel#Int#> (var31,var34) */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (!var37) {
var_class_name40 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var41 = var31 > var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (var35){
var42 = NEW_string__String(&type_string__String);
var43 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var44 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
{ /* Inline kernel#Int#- (var44,var_realFrom) */
var47 = var44 - var_realFrom;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var48 = 1;
{ /* Inline kernel#Int#+ (var45,var48) */
var51 = var45 + var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var52 = self->attrs[COLOR_string__String___index_to].l; /* _index_to on <self:String> */
((void (*)(val*, char*, long, long, long))(var42->class->vft[COLOR_string__String__with_infos]))(var42, var43, var49, var_realFrom, var52) /* with_infos on <var42:String>*/;
var = var42;
goto RET_LABEL;
} else {
}
var53 = 0;
{ /* Inline kernel#Int#== (var_count,var53) */
var56 = var_count == var53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
if (var54){
if (varonce) {
var57 = varonce;
} else {
var58 = "";
var59 = 0;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce = var57;
}
var = var57;
goto RET_LABEL;
} else {
}
{ /* Inline kernel#Int#+ (var_realFrom,var_count) */
var63 = var_realFrom + var_count;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var64 = 1;
{ /* Inline kernel#Int#- (var61,var64) */
var67 = var61 - var64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var_to = var65;
var68 = NEW_string__String(&type_string__String);
var69 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
{ /* Inline kernel#Int#- (var_to,var_realFrom) */
var72 = var_to - var_realFrom;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var73 = 1;
{ /* Inline kernel#Int#+ (var70,var73) */
var76 = var70 + var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
((void (*)(val*, char*, long, long, long))(var68->class->vft[COLOR_string__String__with_infos]))(var68, var69, var74, var_realFrom, var_to) /* with_infos on <var68:String>*/;
var = var68;
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
const char* var_class_name;
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
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var19 /* : Int */;
val* var20 /* : String */;
var_from = p0;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
{ /* Inline kernel#Int#> (var_from,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
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
var_class_name16 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var17 = var_from < var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (var11){
var18 = 0;
var_from = var18;
} else {
}
var19 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var20 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var_from, var19) /* substring on <self:String>*/;
var = var20;
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
const char* var_class_name;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var_itsindexfrom /* var itsindexfrom: Int */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
char var40 /* : Char */;
char var42 /* : Char */;
char var43 /* : Char */;
char var45 /* : Char */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
short int var59 /* : Bool */;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
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
var_class_name22 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var23 = var_itsindex > var_myindex;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var11 = var17;
}
if (var11){
var24 = 0;
var = var24;
goto RET_LABEL;
} else {
}
var25 = ((long (*)(val*))(var_str->class->vft[COLOR_string__String__index_from]))(var_str) /* index_from on <var_str:String>*/;
var_itsindexfrom = var25;
{ /* Inline kernel#Int#+ (var_itsindex,var_itsindexfrom) */
var28 = var_itsindex + var_itsindexfrom;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var_itsindex = var26;
var29 = ((long (*)(val*))(self->class->vft[COLOR_string__String__index_from]))(self) /* index_from on <self:String>*/;
{ /* Inline kernel#Int#+ (var_myindex,var29) */
var32 = var_myindex + var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var_myindex = var30;
for(;;) {
{ /* Inline kernel#Int#>= (var_itsindex,var_itsindexfrom) */
/* Covariant cast for argument 0 (i) <var_itsindexfrom:Int> isa OTHER */
/* <var_itsindexfrom:Int> isa OTHER */
var35 = 1; /* easy <var_itsindexfrom:Int> isa OTHER*/
if (!var35) {
var_class_name38 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var39 = var_itsindex >= var_itsindexfrom;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
if (!var33) break;
{ /* Inline string#NativeString#[] (var_myitems,var_myindex) */
var42 = var_myitems[var_myindex];
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
{ /* Inline string#NativeString#[] (var_itsitems,var_itsindex) */
var45 = var_itsitems[var_itsindex];
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
{ /* Inline kernel#Char#!= (var40,var43) */
var48 = var40 == var43;
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
if (var46){
var50 = 0;
var = var50;
goto RET_LABEL;
} else {
}
var51 = 1;
{ /* Inline kernel#Int#- (var_myindex,var51) */
var54 = var_myindex - var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var_myindex = var52;
var55 = 1;
{ /* Inline kernel#Int#- (var_itsindex,var55) */
var58 = var_itsindex - var55;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var_itsindex = var56;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var59 = 1;
var = var59;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
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
const char* var_class_name;
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
const char* var_class_name49;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
char* var58 /* : NativeString */;
char var59 /* : Char */;
char var61 /* : Char */;
val* var62 /* : String */;
long var64 /* : Int */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
long var76 /* : Int */;
long var78 /* : Int */;
val* var79 /* : String */;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
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
var_class_name49 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var50 = var40 <= var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
if (!var44) break;
var51 = 1;
{ /* Inline kernel#Int#- (var_end_pos,var51) */
var54 = var_end_pos - var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var_end_pos = var52;
{ /* Inline kernel#Int#== (var_end_pos,var_start_pos) */
var57 = var_end_pos == var_start_pos;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
if (var55){
var58 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
{ /* Inline string#NativeString#[] (var58,var_start_pos) */
var61 = var58[var_start_pos];
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var62 = string__Char__to_s(var59);
var = var62;
goto RET_LABEL;
} else {
}
CONTINUE_label63: (void)0;
}
BREAK_label63: (void)0;
var64 = ((long (*)(val*))(self->class->vft[COLOR_string__String__index_from]))(self) /* index_from on <self:String>*/;
{ /* Inline kernel#Int#- (var_start_pos,var64) */
var67 = var_start_pos - var64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var_start_pos = var65;
var68 = ((long (*)(val*))(self->class->vft[COLOR_string__String__index_from]))(self) /* index_from on <self:String>*/;
{ /* Inline kernel#Int#- (var_end_pos,var68) */
var71 = var_end_pos - var68;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var_end_pos = var69;
{ /* Inline kernel#Int#- (var_end_pos,var_start_pos) */
var74 = var_end_pos - var_start_pos;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var75 = 1;
{ /* Inline kernel#Int#+ (var72,var75) */
var78 = var72 + var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var79 = ((val* (*)(val*, long, long))(self->class->vft[COLOR_string__AbstractString__substring]))(self, var_start_pos, var76) /* substring on <self:String>*/;
var = var79;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
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
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var_my_length /* var my_length: Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var_my_index /* var my_index: Int */;
long var18 /* : Int */;
long var_its_index /* var its_index: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var22 /* : NativeString */;
char* var_itsitems /* var itsitems: NativeString */;
char* var23 /* : NativeString */;
char* var_myitems /* var myitems: NativeString */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name;
short int var29 /* : Bool */;
char var30 /* : Char */;
char var32 /* : Char */;
char var33 /* : Char */;
char var35 /* : Char */;
short int var36 /* : Bool */;
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
var_other = p0;
/* <var_other:nullable Object> isa String */
cltype = type_string__String.color;
idtype = type_string__String.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= var_other->type->table_size) {
var1 = 0;
} else {
var1 = var_other->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:String>*/;
var5 = ((long (*)(val*))(var_other->class->vft[COLOR_kernel__Object__object_id]))(var_other) /* object_id on <var_other:nullable Object(String)>*/;
{ /* Inline kernel#Int#== (var4,var5) */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var9 = 1;
var = var9;
goto RET_LABEL;
} else {
}
var10 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:String> */
var_my_length = var10;
var11 = var_other->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_other:nullable Object(String)> */
{ /* Inline kernel#Int#!= (var11,var_my_length) */
var14 = var11 == var_my_length;
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var16 = 0;
var = var16;
goto RET_LABEL;
} else {
}
var17 = self->attrs[COLOR_string__String___index_from].l; /* _index_from on <self:String> */
var_my_index = var17;
var18 = var_other->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_other:nullable Object(String)> */
var_its_index = var18;
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) */
var21 = var_my_index + var_my_length;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_last_iteration = var19;
var22 = var_other->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_other:nullable Object(String)> */
var_itsitems = var22;
var23 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:String> */
var_myitems = var23;
for(;;) {
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var26 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (!var26) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var29 = var_my_index < var_last_iteration;
var24 = var29;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
if (!var24) break;
{ /* Inline string#NativeString#[] (var_myitems,var_my_index) */
var32 = var_myitems[var_my_index];
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
{ /* Inline string#NativeString#[] (var_itsitems,var_its_index) */
var35 = var_itsitems[var_its_index];
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
{ /* Inline kernel#Char#!= (var30,var33) */
var38 = var30 == var33;
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
if (var36){
var40 = 0;
var = var40;
goto RET_LABEL;
} else {
}
var41 = 1;
{ /* Inline kernel#Int#+ (var_my_index,var41) */
var44 = var_my_index + var41;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var_my_index = var42;
var45 = 1;
{ /* Inline kernel#Int#+ (var_its_index,var45) */
var48 = var_its_index + var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var_its_index = var46;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var49 = 1;
var = var49;
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
const char* var_class_name;
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
const char* var_class_name22;
short int var23 /* : Bool */;
char var24 /* : Char */;
char var26 /* : Char */;
char var_my_curr_char /* var my_curr_char: Char */;
char var27 /* : Char */;
char var29 /* : Char */;
char var_its_curr_char /* var its_curr_char: Char */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 602);
show_backtrace(1);
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
var_class_name22 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var23 = var_curr_id_self < var_max_iterations;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (!var17) break;
{ /* Inline string#NativeString#[] (var_my_items,var_curr_id_self) */
var26 = var_my_items[var_curr_id_self];
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var_my_curr_char = var24;
{ /* Inline string#NativeString#[] (var_its_items,var_curr_id_other) */
var29 = var_its_items[var_curr_id_other];
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var_its_curr_char = var27;
{ /* Inline kernel#Char#!= (var_my_curr_char,var_its_curr_char) */
var32 = var_my_curr_char == var_its_curr_char;
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
if (var30){
{ /* Inline kernel#Char#< (var_my_curr_char,var_its_curr_char) */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Char> isa OTHER */
/* <var_its_curr_char:Char> isa OTHER */
var36 = 1; /* easy <var_its_curr_char:Char> isa OTHER*/
if (!var36) {
var_class_name39 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 441);
show_backtrace(1);
}
var40 = var_my_curr_char < var_its_curr_char;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
if (var34){
var41 = 1;
var = var41;
goto RET_LABEL;
} else {
}
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
var43 = 1;
{ /* Inline kernel#Int#+ (var_curr_id_self,var43) */
var46 = var_curr_id_self + var43;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var_curr_id_self = var44;
var47 = 1;
{ /* Inline kernel#Int#+ (var_curr_id_other,var47) */
var50 = var_curr_id_other + var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var_curr_id_other = var48;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#< (var_my_length,var_its_length) */
/* Covariant cast for argument 0 (i) <var_its_length:Int> isa OTHER */
/* <var_its_length:Int> isa OTHER */
var53 = 1; /* easy <var_its_length:Int> isa OTHER*/
if (!var53) {
var_class_name56 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var57 = var_my_length < var_its_length;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var = var51;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_i >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 666);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
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
/* method string#FlatStringIterator#target for (self: FlatStringIterator): String */
val* string__FlatStringIterator__target(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_string__FlatStringIterator___64dtarget].val; /* @target on <self:FlatStringIterator> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @target");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 713);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target for (self: Object): String */
val* VIRTUAL_string__FlatStringIterator__target(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__FlatStringIterator__target(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target= for (self: FlatStringIterator, String) */
void string__FlatStringIterator__target_61d(val* self, val* p0) {
self->attrs[COLOR_string__FlatStringIterator___64dtarget].val = p0; /* @target on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#target= for (self: Object, String) */
void VIRTUAL_string__FlatStringIterator__target_61d(val* self, val* p0) {
string__FlatStringIterator__target_61d(self, p0);
RET_LABEL:;
}
/* method string#FlatStringIterator#target_items for (self: FlatStringIterator): NativeString */
char* string__FlatStringIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_string__FlatStringIterator___64dtarget_items].str; /* @target_items on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target_items for (self: Object): NativeString */
char* VIRTUAL_string__FlatStringIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string__FlatStringIterator__target_items(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#target_items= for (self: FlatStringIterator, NativeString) */
void string__FlatStringIterator__target_items_61d(val* self, char* p0) {
self->attrs[COLOR_string__FlatStringIterator___64dtarget_items].str = p0; /* @target_items on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#target_items= for (self: Object, NativeString) */
void VIRTUAL_string__FlatStringIterator__target_items_61d(val* self, char* p0) {
string__FlatStringIterator__target_items_61d(self, p0);
RET_LABEL:;
}
/* method string#FlatStringIterator#curr_pos for (self: FlatStringIterator): Int */
long string__FlatStringIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatStringIterator___64dcurr_pos].l; /* @curr_pos on <self:FlatStringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#curr_pos for (self: Object): Int */
long VIRTUAL_string__FlatStringIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__FlatStringIterator__curr_pos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#curr_pos= for (self: FlatStringIterator, Int) */
void string__FlatStringIterator__curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatStringIterator___64dcurr_pos].l = p0; /* @curr_pos on <self:FlatStringIterator> */
RET_LABEL:;
}
/* method string#FlatStringIterator#curr_pos= for (self: Object, Int) */
void VIRTUAL_string__FlatStringIterator__curr_pos_61d(val* self, long p0) {
string__FlatStringIterator__curr_pos_61d(self, p0);
RET_LABEL:;
}
/* method string#FlatStringIterator#with_pos for (self: FlatStringIterator, String, Int) */
void string__FlatStringIterator__with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: String */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
var_tgt = p0;
var_pos = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_string__FlatStringIterator__target_61d]))(self, var_tgt) /* target= on <self:FlatStringIterator>*/;
var = ((char* (*)(val*))(var_tgt->class->vft[COLOR_string__AbstractString__items]))(var_tgt) /* items on <var_tgt:String>*/;
((void (*)(val*, char*))(self->class->vft[COLOR_string__FlatStringIterator__target_items_61d]))(self, var) /* target_items= on <self:FlatStringIterator>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__target]))(self) /* target on <self:FlatStringIterator>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_string__String__index_from]))(var1) /* index_from on <var1:String>*/;
{ /* Inline kernel#Int#+ (var_pos,var2) */
var5 = var_pos + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_string__FlatStringIterator__curr_pos_61d]))(self, var3) /* curr_pos= on <self:FlatStringIterator>*/;
RET_LABEL:;
}
/* method string#FlatStringIterator#with_pos for (self: Object, String, Int) */
void VIRTUAL_string__FlatStringIterator__with_pos(val* self, val* p0, long p1) {
string__FlatStringIterator__with_pos(self, p0, p1);
RET_LABEL:;
}
/* method string#FlatStringIterator#is_ok for (self: FlatStringIterator): Bool */
short int string__FlatStringIterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__curr_pos]))(self) /* curr_pos on <self:FlatStringIterator>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__target]))(self) /* target on <self:FlatStringIterator>*/;
var3 = ((long (*)(val*))(var2->class->vft[COLOR_string__String__index_to]))(var2) /* index_to on <var2:String>*/;
{ /* Inline kernel#Int#<= (var1,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var7 = var1 <= var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_string__FlatStringIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string__FlatStringIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#item for (self: FlatStringIterator): Char */
char string__FlatStringIterator__item(val* self) {
char var /* : Char */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
char var3 /* : Char */;
char var5 /* : Char */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__target_items]))(self) /* target_items on <self:FlatStringIterator>*/;
var2 = ((long (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__curr_pos]))(self) /* curr_pos on <self:FlatStringIterator>*/;
{ /* Inline string#NativeString#[] (var1,var2) */
var5 = var1[var2];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#item for (self: Object): nullable Object */
val* VIRTUAL_string__FlatStringIterator__item(val* self) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__FlatStringIterator__item(self);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#next for (self: FlatStringIterator) */
void string__FlatStringIterator__next(val* self) {
val* var_ /* var : FlatStringIterator */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
var_ = self;
var = ((long (*)(val*))(var_->class->vft[COLOR_string__FlatStringIterator__curr_pos]))(var_) /* curr_pos on <var_:FlatStringIterator>*/;
var1 = 1;
{ /* Inline kernel#Int#+ (var,var1) */
var4 = var + var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
((void (*)(val*, long))(var_->class->vft[COLOR_string__FlatStringIterator__curr_pos_61d]))(var_, var2) /* curr_pos= on <var_:FlatStringIterator>*/;
RET_LABEL:;
}
/* method string#FlatStringIterator#next for (self: Object) */
void VIRTUAL_string__FlatStringIterator__next(val* self) {
string__FlatStringIterator__next(self);
RET_LABEL:;
}
/* method string#FlatStringIterator#index for (self: FlatStringIterator): Int */
long string__FlatStringIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__curr_pos]))(self) /* curr_pos on <self:FlatStringIterator>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__FlatStringIterator__target]))(self) /* target on <self:FlatStringIterator>*/;
var3 = ((long (*)(val*))(var2->class->vft[COLOR_string__String__index_from]))(var2) /* index_from on <var2:String>*/;
{ /* Inline kernel#Int#- (var1,var3) */
var6 = var1 - var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringIterator#index for (self: Object): Int */
long VIRTUAL_string__FlatStringIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__FlatStringIterator__index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
char string__FlatStringCharView___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : AbstractString */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
val* var11 /* : AbstractString */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
val* var20 /* : AbstractString */;
char* var21 /* : NativeString */;
val* var22 /* : AbstractString */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
char var27 /* : Char */;
char var29 /* : Char */;
var_index = p0;
var1 = 0;
{ /* Inline kernel#Int#>= (var_index,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_index >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 745);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatStringCharView>*/;
var7 = var6->attrs[COLOR_string__String___index_from].l; /* _index_from on <var6:AbstractString(String)> */
{ /* Inline kernel#Int#+ (var_index,var7) */
var10 = var_index + var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatStringCharView>*/;
var12 = var11->attrs[COLOR_string__String___index_to].l; /* _index_to on <var11:AbstractString(String)> */
{ /* Inline kernel#Int#<= (var8,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (!var15) {
var_class_name18 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var19 = var8 <= var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatStringCharView>*/;
var21 = var20->attrs[COLOR_string__AbstractString___items].str; /* _items on <var20:AbstractString(String)> */
var22 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatStringCharView>*/;
var23 = var22->attrs[COLOR_string__String___index_from].l; /* _index_from on <var22:AbstractString(String)> */
{ /* Inline kernel#Int#+ (var_index,var23) */
var26 = var_index + var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
{ /* Inline string#NativeString#[] (var21,var24) */
var29 = var21[var24];
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_string__FlatStringCharView___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__FlatStringCharView___91d_93d(self, p0);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#iterator for (self: FlatStringCharView): IndexedIterator[Char] */
val* string__FlatStringCharView__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : FlatStringIterator */;
val* var2 /* : AbstractString */;
long var3 /* : Int */;
var1 = NEW_string__FlatStringIterator(&type_string__FlatStringIterator);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatStringCharView>*/;
var3 = 0;
((void (*)(val*, val*, long))(var1->class->vft[COLOR_string__FlatStringIterator__with_pos]))(var1, var2, var3) /* with_pos on <var1:FlatStringIterator>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatStringCharView#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_string__FlatStringCharView__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = string__FlatStringCharView__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#chars for (self: Buffer): BufferCharView */
val* string__Buffer__chars(val* self) {
val* var /* : BufferCharView */;
val* var1 /* : BufferCharView */;
var1 = self->attrs[COLOR_string__Buffer___64dchars].val; /* @chars on <self:Buffer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @chars");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 763);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#chars for (self: Object): StringCharView */
val* VIRTUAL_string__Buffer__chars(val* self) {
val* var /* : StringCharView */;
val* var1 /* : BufferCharView */;
var1 = string__Buffer__chars(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#Buffer#chars= for (self: Buffer, BufferCharView) */
void string__Buffer__chars_61d(val* self, val* p0) {
self->attrs[COLOR_string__Buffer___64dchars].val = p0; /* @chars on <self:Buffer> */
RET_LABEL:;
}
/* method string#Buffer#chars= for (self: Object, BufferCharView) */
void VIRTUAL_string__Buffer__chars_61d(val* self, val* p0) {
string__Buffer__chars_61d(self, p0);
RET_LABEL:;
}
/* method string#Buffer#[]= for (self: Buffer, Int, Char) */
void string__Buffer___91d_93d_61d(val* self, long p0, char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
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
const char* var_class_name13;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
char* var23 /* : NativeString */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Sequence#0 */
/* <p1:Char> isa Sequence#0 */
var = 1; /* easy <p1:Char> isa Sequence#0*/
if (!var) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 765);
show_backtrace(1);
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
var_class_name13 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var14 = var_index >= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_ = var8;
if (var8){
var15 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
{ /* Inline kernel#Int#< (var_index,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
var_class_name21 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var22 = var_index < var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var6 = var16;
} else {
var6 = var_;
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 771);
show_backtrace(1);
}
var23 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
{ /* Inline string#NativeString#[]= (var23,var_index,var_item) */
var23[var_index]=var_item;
RET_LABEL24:(void)0;
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
const char* var_class_name;
char var_c /* var c: Char */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var_ /* var : Buffer */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Char> isa SimpleCollection#0 */
/* <p0:Char> isa SimpleCollection#0 */
var = 1; /* easy <p0:Char> isa SimpleCollection#0*/
if (!var) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 775);
show_backtrace(1);
}
var_c = p0;
var1 = self->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <self:Buffer> */
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
{ /* Inline kernel#Int#<= (var1,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name8 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var9 = var1 <= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var10 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var11 = 5;
{ /* Inline kernel#Int#+ (var10,var11) */
var14 = var10 + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var12) /* enlarge on <self:Buffer>*/;
} else {
}
var15 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var16 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
{ /* Inline string#NativeString#[]= (var15,var16,var_c) */
var15[var16]=var_c;
RET_LABEL17:(void)0;
}
var_ = self;
var18 = var_->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_:Buffer> */
var19 = 1;
{ /* Inline kernel#Int#+ (var18,var19) */
var22 = var18 + var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_->attrs[COLOR_array__AbstractArrayRead___length].l = var20; /* _length on <var_:Buffer> */
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
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
char* var24 /* : NativeString */;
char* var_a /* var a: NativeString */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
var_cap = p0;
var = self->attrs[COLOR_string__Buffer___capacity].l; /* _capacity on <self:Buffer> */
var_c = var;
{ /* Inline kernel#Int#<= (var_cap,var_c) */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (!var3) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
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
var_class_name10 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var11 = var_c <= var_cap;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (!var5) break;
var12 = 2;
{ /* Inline kernel#Int#* (var_c,var12) */
var15 = var_c * var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var16 = 2;
{ /* Inline kernel#Int#+ (var13,var16) */
var19 = var13 + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_c = var17;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var20 = 1;
{ /* Inline kernel#Int#+ (var_c,var20) */
var23 = var_c + var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var24 = ((char* (*)(val*, long))(self->class->vft[COLOR_string__StringCapable__calloc_string]))(self, var21) /* calloc_string on <self:Buffer>*/;
var_a = var24;
var25 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var26 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var27 = 0;
var28 = 0;
{ /* Inline string#NativeString#copy_to (var25,var_a,var26,var27,var28) */
memcpy(var_a+var28,var25+var27,var26);
RET_LABEL29:(void)0;
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
const char* var_class_name;
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
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
char* var21 /* : NativeString */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
long var24 /* : Int */;
val* var_ /* var : Buffer */;
long var26 /* : Int */;
long var27 /* : Int */;
long var29 /* : Int */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Sequence#0] */
/* <p0:Collection[Char]> isa Collection[Sequence#0] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Sequence#0]*/
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Sequence#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 793);
show_backtrace(1);
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
var_class_name15 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var16 = var5 < var7;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (var10){
var17 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Buffer> */
{ /* Inline kernel#Int#+ (var17,var_sl) */
var20 = var17 + var_sl;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var18) /* enlarge on <self:Buffer>*/;
} else {
}
var21 = ((char* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__items]))(var_s) /* items on <var_s:Collection[Char](String)>*/;
var22 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var23 = var_s->attrs[COLOR_string__String___index_from].l; /* _index_from on <var_s:Collection[Char](String)> */
var24 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Buffer> */
{ /* Inline string#NativeString#copy_to (var21,var22,var_sl,var23,var24) */
memcpy(var22+var24,var21+var23,var_sl);
RET_LABEL25:(void)0;
}
var_ = self;
var26 = var_->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_:Buffer> */
{ /* Inline kernel#Int#+ (var26,var_sl) */
var29 = var26 + var_sl;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var_->attrs[COLOR_array__AbstractArrayRead___length].l = var27; /* _length on <var_:Buffer> */
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
const char* var_class_name;
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
const char* var_class_name11;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
val* var20 /* : StringCharView */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
char var24 /* : Char */;
long var25 /* : Int */;
long var_c1 /* var c1: Int */;
val* var26 /* : StringCharView */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
char var30 /* : Char */;
long var31 /* : Int */;
long var_c2 /* var c2: Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
long var48 /* : Int */;
long var49 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 817);
show_backtrace(1);
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
var_class_name11 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var12 = var_i < var_l1;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
{ /* Inline kernel#Int#< (var_i,var_l2) */
/* Covariant cast for argument 0 (i) <var_l2:Int> isa OTHER */
/* <var_l2:Int> isa OTHER */
var15 = 1; /* easy <var_l2:Int> isa OTHER*/
if (!var15) {
var_class_name18 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var19 = var_i < var_l2;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var5 = var13;
} else {
var5 = var_;
}
if (!var5) break;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:Buffer>*/;
var21 = ((val* (*)(val*, long))(var20->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var20, var_i) /* [] on <var20:StringCharView(BufferCharView)>*/;
{ /* Inline kernel#Char#ascii (var21) */
var24 = ((struct instance_kernel__Char*)var21)->value; /* autounbox from nullable Object to Char */;
var25 = (unsigned char)var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var_c1 = var22;
var26 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:String>*/;
var27 = ((val* (*)(val*, long))(var26->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var26, var_i) /* [] on <var26:StringCharView>*/;
{ /* Inline kernel#Char#ascii (var27) */
var30 = ((struct instance_kernel__Char*)var27)->value; /* autounbox from nullable Object to Char */;
var31 = (unsigned char)var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_c2 = var28;
{ /* Inline kernel#Int#< (var_c1,var_c2) */
/* Covariant cast for argument 0 (i) <var_c2:Int> isa OTHER */
/* <var_c2:Int> isa OTHER */
var34 = 1; /* easy <var_c2:Int> isa OTHER*/
if (!var34) {
var_class_name37 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var38 = var_c1 < var_c2;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
if (var32){
var39 = 1;
var = var39;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#< (var_c2,var_c1) */
/* Covariant cast for argument 0 (i) <var_c1:Int> isa OTHER */
/* <var_c1:Int> isa OTHER */
var42 = 1; /* easy <var_c1:Int> isa OTHER*/
if (!var42) {
var_class_name45 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var46 = var_c2 < var_c1;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
if (var40){
var47 = 0;
var = var47;
goto RET_LABEL;
} else {
}
}
var48 = 1;
{ /* Inline kernel#Int#+ (var_i,var48) */
var51 = var_i + var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var_i = var49;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#< (var_l1,var_l2) */
/* Covariant cast for argument 0 (i) <var_l2:Int> isa OTHER */
/* <var_l2:Int> isa OTHER */
var54 = 1; /* easy <var_l2:Int> isa OTHER*/
if (!var54) {
var_class_name57 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var58 = var_l1 < var_l2;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
if (var52){
var59 = 1;
var = var59;
goto RET_LABEL;
} else {
var60 = 0;
var = var60;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var4 = var_cap >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 856);
show_backtrace(1);
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
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_l /* var l: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var_i /* var i: Int */;
char* var12 /* : NativeString */;
char* var_it /* var it: NativeString */;
char* var13 /* : NativeString */;
char* var_oit /* var oit: NativeString */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name;
short int var19 /* : Bool */;
char var20 /* : Char */;
char var22 /* : Char */;
char var23 /* : Char */;
char var25 /* : Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa Buffer */
cltype = type_string__Buffer.color;
idtype = type_string__Buffer.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var1 = 0;
} else {
var1 = var_o->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var3 = 0;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Buffer>*/;
var_l = var4;
var5 = ((long (*)(val*))(var_o->class->vft[COLOR_abstract_collection__Collection__length]))(var_o) /* length on <var_o:nullable Object(Buffer)>*/;
{ /* Inline kernel#Int#!= (var5,var_l) */
var8 = var5 == var_l;
var9 = !var8;
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
var11 = 0;
var_i = var11;
var12 = self->attrs[COLOR_string__AbstractString___items].str; /* _items on <self:Buffer> */
var_it = var12;
var13 = var_o->attrs[COLOR_string__AbstractString___items].str; /* _items on <var_o:nullable Object(Buffer)> */
var_oit = var13;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var16 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var16) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var19 = var_i < var_l;
var14 = var19;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
if (!var14) break;
{ /* Inline string#NativeString#[] (var_it,var_i) */
var22 = var_it[var_i];
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
{ /* Inline string#NativeString#[] (var_oit,var_i) */
var25 = var_oit[var_i];
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
{ /* Inline kernel#Char#!= (var20,var23) */
var28 = var20 == var23;
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
if (var26){
var30 = 0;
var = var30;
goto RET_LABEL;
} else {
}
var31 = 1;
{ /* Inline kernel#Int#+ (var_i,var31) */
var34 = var_i + var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var_i = var32;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var35 = 1;
var = var35;
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
/* method string#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
char string__FlatBufferCharView___91d_93d(val* self, long p0) {
char var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : AbstractString */;
char* var2 /* : NativeString */;
char var3 /* : Char */;
char var5 /* : Char */;
var_index = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var2 = var1->attrs[COLOR_string__AbstractString___items].str; /* _items on <var1:AbstractString(Buffer)> */
{ /* Inline string#NativeString#[] (var2,var_index) */
var5 = var2[var_index];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_string__FlatBufferCharView___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = string__FlatBufferCharView___91d_93d(self, p0);
var2 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void string__FlatBufferCharView___91d_93d_61d(val* self, long p0, char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_index /* var index: Int */;
char var_item /* var item: Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var23 /* : AbstractString */;
char* var24 /* : NativeString */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Sequence#0 */
/* <p1:Char> isa Sequence#0 */
var = 1; /* easy <p1:Char> isa Sequence#0*/
if (!var) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 889);
show_backtrace(1);
}
var_index = p0;
var_item = p1;
var2 = 0;
{ /* Inline kernel#Int#>= (var_index,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name8 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var9 = var_index >= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var10 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:FlatBufferCharView>*/;
{ /* Inline kernel#Int#<= (var_index,var10) */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (!var13) {
var_class_name16 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var17 = var_index <= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var1 = var11;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 891);
show_backtrace(1);
}
var18 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:FlatBufferCharView>*/;
{ /* Inline kernel#Int#== (var_index,var18) */
var21 = var_index == var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (var19){
var22 = BOX_kernel__Char(var_item); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(self, var22) /* add on <self:FlatBufferCharView>*/;
goto RET_LABEL;
} else {
}
var23 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var24 = var23->attrs[COLOR_string__AbstractString___items].str; /* _items on <var23:AbstractString(Buffer)> */
{ /* Inline string#NativeString#[]= (var24,var_index,var_item) */
var24[var_index]=var_item;
RET_LABEL25:(void)0;
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_string__FlatBufferCharView___91d_93d_61d(val* self, long p0, val* p1) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p1)->value; /* autounbox from nullable Object to Char */;
string__FlatBufferCharView___91d_93d_61d(self, p0, var);
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void string__FlatBufferCharView__push(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : AbstractString */;
val* var2 /* : nullable Object */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Sequence#0 */
/* <p0:Char> isa Sequence#0 */
var = 1; /* easy <p0:Char> isa Sequence#0*/
if (!var) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 899);
show_backtrace(1);
}
var_c = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var2 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var2) /* add on <var1:AbstractString(Buffer)>*/;
RET_LABEL:;
}
/* method string#FlatBufferCharView#push for (self: Object, nullable Object) */
void VIRTUAL_string__FlatBufferCharView__push(val* self, val* p0) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
string__FlatBufferCharView__push(self, var);
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void string__FlatBufferCharView__add(val* self, char p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
val* var1 /* : AbstractString */;
val* var2 /* : nullable Object */;
/* Covariant cast for argument 0 (c) <p0:Char> isa SimpleCollection#0 */
/* <p0:Char> isa SimpleCollection#0 */
var = 1; /* easy <p0:Char> isa SimpleCollection#0*/
if (!var) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 904);
show_backtrace(1);
}
var_c = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var2 = BOX_kernel__Char(var_c); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var2) /* add on <var1:AbstractString(Buffer)>*/;
RET_LABEL:;
}
/* method string#FlatBufferCharView#add for (self: Object, nullable Object) */
void VIRTUAL_string__FlatBufferCharView__add(val* self, val* p0) {
char var /* : Char */;
var = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
string__FlatBufferCharView__add(self, var);
RET_LABEL:;
}
/* method string#FlatBufferCharView#enlarge for (self: FlatBufferCharView, Int) */
void string__FlatBufferCharView__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : AbstractString */;
var_cap = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
((void (*)(val*, long))(var->class->vft[COLOR_array__AbstractArray__enlarge]))(var, var_cap) /* enlarge on <var:AbstractString(Buffer)>*/;
RET_LABEL:;
}
/* method string#FlatBufferCharView#enlarge for (self: Object, Int) */
void VIRTUAL_string__FlatBufferCharView__enlarge(val* self, long p0) {
string__FlatBufferCharView__enlarge(self, p0);
RET_LABEL:;
}
/* method string#FlatBufferCharView#append for (self: FlatBufferCharView, Collection[Char]) */
void string__FlatBufferCharView__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_s /* var s: Collection[Char] */;
val* var1 /* : AbstractString */;
char* var2 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
long var3 /* : Int */;
long var_s_length /* var s_length: Int */;
val* var4 /* : AbstractString */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : AbstractString */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Sequence#0] */
/* <p0:Collection[Char]> isa Collection[Sequence#0] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Sequence#0]*/
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Sequence#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 914);
show_backtrace(1);
}
var_s = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var2 = ((char* (*)(val*))(var1->class->vft[COLOR_string__AbstractString__items]))(var1) /* items on <var1:AbstractString(Buffer)>*/;
var_my_items = var2;
var3 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:Collection[Char]>*/;
var_s_length = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var5 = ((long (*)(val*))(var4->class->vft[COLOR_string__Buffer__capacity]))(var4) /* capacity on <var4:AbstractString(Buffer)>*/;
var6 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:Collection[Char]>*/;
{ /* Inline kernel#Int#< (var5,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
var_class_name12 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var13 = var5 < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var14 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var15 = ((long (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__length]))(var14) /* length on <var14:AbstractString(Buffer)>*/;
{ /* Inline kernel#Int#+ (var_s_length,var15) */
var18 = var_s_length + var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_string__FlatBufferCharView__enlarge]))(self, var16) /* enlarge on <self:FlatBufferCharView>*/;
} else {
}
RET_LABEL:;
}
/* method string#FlatBufferCharView#append for (self: Object, Collection[nullable Object]) */
void VIRTUAL_string__FlatBufferCharView__append(val* self, val* p0) {
string__FlatBufferCharView__append(self, p0);
RET_LABEL:;
}
/* method string#FlatBufferCharView#iterator for (self: FlatBufferCharView): IndexedIterator[Char] */
val* string__FlatBufferCharView__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : FlatBufferIterator */;
val* var2 /* : AbstractString */;
long var3 /* : Int */;
var1 = NEW_string__FlatBufferIterator(&type_string__FlatBufferIterator);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__StringCharView__target]))(self) /* target on <self:FlatBufferCharView>*/;
var3 = 0;
((void (*)(val*, val*, long))(var1->class->vft[COLOR_string__FlatBufferIterator__with_pos]))(var1, var2, var3) /* with_pos on <var1:FlatBufferIterator>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#FlatBufferCharView#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_string__FlatBufferCharView__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = string__FlatBufferCharView__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target for (self: FlatBufferIterator): Buffer */
val* string__FlatBufferIterator__target(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
var1 = self->attrs[COLOR_string__FlatBufferIterator___64dtarget].val; /* @target on <self:FlatBufferIterator> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @target");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 928);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target for (self: Object): Buffer */
val* VIRTUAL_string__FlatBufferIterator__target(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
var1 = string__FlatBufferIterator__target(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target= for (self: FlatBufferIterator, Buffer) */
void string__FlatBufferIterator__target_61d(val* self, val* p0) {
self->attrs[COLOR_string__FlatBufferIterator___64dtarget].val = p0; /* @target on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#target= for (self: Object, Buffer) */
void VIRTUAL_string__FlatBufferIterator__target_61d(val* self, val* p0) {
string__FlatBufferIterator__target_61d(self, p0);
RET_LABEL:;
}
/* method string#FlatBufferIterator#target_items for (self: FlatBufferIterator): NativeString */
char* string__FlatBufferIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_string__FlatBufferIterator___64dtarget_items].str; /* @target_items on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target_items for (self: Object): NativeString */
char* VIRTUAL_string__FlatBufferIterator__target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = string__FlatBufferIterator__target_items(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#target_items= for (self: FlatBufferIterator, NativeString) */
void string__FlatBufferIterator__target_items_61d(val* self, char* p0) {
self->attrs[COLOR_string__FlatBufferIterator___64dtarget_items].str = p0; /* @target_items on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#target_items= for (self: Object, NativeString) */
void VIRTUAL_string__FlatBufferIterator__target_items_61d(val* self, char* p0) {
string__FlatBufferIterator__target_items_61d(self, p0);
RET_LABEL:;
}
/* method string#FlatBufferIterator#curr_pos for (self: FlatBufferIterator): Int */
long string__FlatBufferIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string__FlatBufferIterator___64dcurr_pos].l; /* @curr_pos on <self:FlatBufferIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#curr_pos for (self: Object): Int */
long VIRTUAL_string__FlatBufferIterator__curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__FlatBufferIterator__curr_pos(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#FlatBufferIterator#curr_pos= for (self: FlatBufferIterator, Int) */
void string__FlatBufferIterator__curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_string__FlatBufferIterator___64dcurr_pos].l = p0; /* @curr_pos on <self:FlatBufferIterator> */
RET_LABEL:;
}
/* method string#FlatBufferIterator#curr_pos= for (self: Object, Int) */
void VIRTUAL_string__FlatBufferIterator__curr_pos_61d(val* self, long p0) {
string__FlatBufferIterator__curr_pos_61d(self, p0);
RET_LABEL:;
}
/* method string#FlatBufferIterator#with_pos for (self: FlatBufferIterator, Buffer, Int) */
void string__FlatBufferIterator__with_pos(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: Buffer */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
var_tgt = p0;
var_pos = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_string__FlatBufferIterator__target_61d]))(self, var_tgt) /* target= on <self:FlatBufferIterator>*/;
var = ((char* (*)(val*))(var_tgt->class->vft[COLOR_string__AbstractString__items]))(var_tgt) /* items on <var_tgt:Buffer>*/;
((void (*)(val*, char*))(self->class->vft[COLOR_string__FlatBufferIterator__target_items_61d]))(self, var) /* target_items= on <self:FlatBufferIterator>*/;
((void (*)(val*, long))(self->class->vft[COLOR_string__FlatBufferIterator__curr_pos_61d]))(self, var_pos) /* curr_pos= on <self:FlatBufferIterator>*/;
RET_LABEL:;
}
/* method string#FlatBufferIterator#with_pos for (self: Object, Buffer, Int) */
void VIRTUAL_string__FlatBufferIterator__with_pos(val* self, val* p0, long p1) {
string__FlatBufferIterator__with_pos(self, p0, p1);
RET_LABEL:;
}
/* method string#FlatBufferIterator#index for (self: FlatBufferIterator): Int */
long string__FlatBufferIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_string__FlatBufferIterator__curr_pos]))(self) /* curr_pos on <self:FlatBufferIterator>*/;
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
val* var2 /* : Buffer */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_string__FlatBufferIterator__curr_pos]))(self) /* curr_pos on <self:FlatBufferIterator>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string__FlatBufferIterator__target]))(self) /* target on <self:FlatBufferIterator>*/;
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:Buffer>*/;
{ /* Inline kernel#Int#< (var1,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var7 = var1 < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
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
long var2 /* : Int */;
char var3 /* : Char */;
char var5 /* : Char */;
var1 = ((char* (*)(val*))(self->class->vft[COLOR_string__FlatBufferIterator__target_items]))(self) /* target_items on <self:FlatBufferIterator>*/;
var2 = ((long (*)(val*))(self->class->vft[COLOR_string__FlatBufferIterator__curr_pos]))(self) /* curr_pos on <self:FlatBufferIterator>*/;
{ /* Inline string#NativeString#[] (var1,var2) */
var5 = var1[var2];
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
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
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
var_ = self;
var = ((long (*)(val*))(var_->class->vft[COLOR_string__FlatBufferIterator__curr_pos]))(var_) /* curr_pos on <var_:FlatBufferIterator>*/;
var1 = 1;
{ /* Inline kernel#Int#+ (var,var1) */
var4 = var + var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
((void (*)(val*, long))(var_->class->vft[COLOR_string__FlatBufferIterator__curr_pos_61d]))(var_, var2) /* curr_pos= on <var_:FlatBufferIterator>*/;
RET_LABEL:;
}
/* method string#FlatBufferIterator#next for (self: Object) */
void VIRTUAL_string__FlatBufferIterator__next(val* self) {
string__FlatBufferIterator__next(self);
RET_LABEL:;
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
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_n /* var n: Int */;
val* var8 /* : StringCharView */;
long var9 /* : Int */;
char var10 /* : Char */;
val* var11 /* : nullable Object */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : StringCharView */;
long var17 /* : Int */;
char var18 /* : Char */;
val* var19 /* : nullable Object */;
long var20 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_pos /* var pos: Int */;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : StringCharView */;
long var43 /* : Int */;
long var45 /* : Int */;
char var46 /* : Char */;
val* var47 /* : nullable Object */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
var_s = p0;
var_base = p1;
var_signed = p2;
var = 0;
{ /* Inline kernel#Int#< (self,var) */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (!var3) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
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
var8 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:Buffer>*/;
var9 = 0;
var10 = '-';
var11 = BOX_kernel__Char(var10); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var8->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var8, var9, var11) /* []= on <var8:StringCharView(BufferCharView)>*/;
} else {
var12 = 0;
{ /* Inline kernel#Int#== (self,var12) */
var15 = self == var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var16 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:Buffer>*/;
var17 = 0;
var18 = '0';
var19 = BOX_kernel__Char(var18); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var17, var19) /* []= on <var16:StringCharView(BufferCharView)>*/;
goto RET_LABEL;
} else {
var_n = self;
}
}
var20 = kernel__Int__digit_count(self, var_base);
var21 = 1;
{ /* Inline kernel#Int#- (var20,var21) */
var24 = var20 - var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var_pos = var22;
for(;;) {
var26 = 0;
{ /* Inline kernel#Int#>= (var_pos,var26) */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (!var29) {
var_class_name32 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var33 = var_pos >= var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var_ = var27;
if (var27){
var34 = 0;
{ /* Inline kernel#Int#> (var_n,var34) */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (!var37) {
var_class_name40 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var41 = var_n > var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var25 = var35;
} else {
var25 = var_;
}
if (!var25) break;
var42 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:Buffer>*/;
{ /* Inline kernel#Int#% (var_n,var_base) */
var45 = var_n % var_base;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var46 = kernel__Int__to_c(var43);
var47 = BOX_kernel__Char(var46); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var42->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var42, var_pos, var47) /* []= on <var42:StringCharView(BufferCharView)>*/;
{ /* Inline kernel#Int#/ (var_n,var_base) */
var50 = var_n / var_base;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var_n = var48;
var51 = 1;
{ /* Inline kernel#Int#- (var_pos,var51) */
var54 = var_pos - var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var_pos = var52;
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
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var_len /* var len: Int */;
val* var12 /* : Range[Int] */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
val* var18 /* : Discrete */;
val* var19 /* : Discrete */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
long var_i /* var i: Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var_j /* var j: Int */;
val* var31 /* : StringCharView */;
val* var32 /* : nullable Object */;
char var33 /* : Char */;
char var_c /* var c: Char */;
char var34 /* : Char */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
char var38 /* : Char */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
long var46 /* : Int */;
val* var47 /* : String */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
val* var53 /* : String */;
var1 = 3;
var2 = string__Float__to_precision(self, var1);
var_str = var2;
var4 = math__Float__is_inf(self);
var5 = 0;
{ /* Inline kernel#Int#!= (var4,var5) */
var8 = var4 == var5;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
var3 = var_;
} else {
var10 = math__Float__is_nan(self);
var3 = var10;
}
if (var3){
var = var_str;
goto RET_LABEL;
} else {
}
var11 = ((long (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__length]))(var_str) /* length on <var_str:String>*/;
var_len = var11;
var12 = NEW_range__Range(&type_range__Rangekernel__Int);
var13 = 0;
var14 = 1;
{ /* Inline kernel#Int#- (var_len,var14) */
var17 = var_len - var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var18 = BOX_kernel__Int(var13); /* autobox from Int to Discrete */
var19 = BOX_kernel__Int(var15); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_range__Range__init]))(var12, var18, var19) /* init on <var12:Range[Int]>*/;
var20 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__iterator]))(var12) /* iterator on <var12:Range[Int]>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var23 = ((struct instance_kernel__Int*)var22)->value; /* autounbox from nullable Object to Int */;
var_i = var23;
var24 = 1;
{ /* Inline kernel#Int#- (var_len,var24) */
var27 = var_len - var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
{ /* Inline kernel#Int#- (var25,var_i) */
var30 = var25 - var_i;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_j = var28;
var31 = ((val* (*)(val*))(var_str->class->vft[COLOR_string__AbstractString__chars]))(var_str) /* chars on <var_str:String>*/;
var32 = ((val* (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var31, var_j) /* [] on <var31:StringCharView>*/;
var33 = ((struct instance_kernel__Char*)var32)->value; /* autounbox from nullable Object to Char */;
var_c = var33;
var34 = '0';
{ /* Inline kernel#Char#== (var_c,var34) */
var37 = var_c == var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (var35){
goto CONTINUE_label;
} else {
var38 = '.';
{ /* Inline kernel#Char#== (var_c,var38) */
var41 = var_c == var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
if (var39){
var42 = 0;
var43 = 2;
{ /* Inline kernel#Int#+ (var_j,var43) */
var46 = var_j + var43;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var47 = ((val* (*)(val*, long, long))(var_str->class->vft[COLOR_string__AbstractString__substring]))(var_str, var42, var44) /* substring on <var_str:String>*/;
var = var47;
goto RET_LABEL;
} else {
var48 = 0;
var49 = 1;
{ /* Inline kernel#Int#+ (var_j,var49) */
var52 = var_j + var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var53 = ((val* (*)(val*, long, long))(var_str->class->vft[COLOR_string__AbstractString__substring]))(var_str, var48, var50) /* substring on <var_str:String>*/;
var = var53;
goto RET_LABEL;
}
}
CONTINUE_label: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
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
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
long var6 /* : Int */;
long var_isinf /* var isinf: Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var34 /* : Int */;
val* var35 /* : String */;
double var_f /* var f: Float */;
val* var36 /* : Range[Int] */;
long var37 /* : Int */;
val* var38 /* : Discrete */;
val* var39 /* : Discrete */;
val* var40 /* : Iterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
long var_i /* var i: Int */;
long var43 /* : Int */;
double var44 /* : Float */;
double var45 /* : Float */;
double var47 /* : Float */;
double var48 /* : Float */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var52 /* : Bool */;
double var53 /* : Float */;
double var54 /* : Float */;
double var56 /* : Float */;
double var57 /* : Float */;
double var58 /* : Float */;
double var60 /* : Float */;
long var61 /* : Int */;
long var63 /* : Int */;
long var_i64 /* var i: Int */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var_s /* var s: String */;
long var75 /* : Int */;
long var_sl /* var sl: Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
short int var82 /* : Bool */;
long var83 /* : Int */;
long var84 /* : Int */;
long var85 /* : Int */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var_p1 /* var p1: String */;
long var89 /* : Int */;
long var90 /* : Int */;
long var92 /* : Int */;
val* var93 /* : String */;
val* var_p2 /* var p2: String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
long var111 /* : Int */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var116 /* : String */;
var_nb = p0;
var1 = math__Float__is_nan(self);
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = "nan";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var6 = math__Float__is_inf(self);
var_isinf = var6;
var7 = 1;
{ /* Inline kernel#Int#== (var_isinf,var7) */
var10 = var_isinf == var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
if (varonce11) {
var12 = varonce11;
} else {
var13 = "inf";
var14 = 3;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var = var12;
goto RET_LABEL;
} else {
var16 = 1;
{ /* Inline kernel#Int#unary - (var16) */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
{ /* Inline kernel#Int#== (var_isinf,var17) */
var22 = var_isinf == var17;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
if (var20){
if (varonce23) {
var24 = varonce23;
} else {
var25 = "-inf";
var26 = 4;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var = var24;
goto RET_LABEL;
} else {
}
}
var28 = 0;
{ /* Inline kernel#Int#== (var_nb,var28) */
var31 = var_nb == var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
{ /* Inline kernel#Float#to_i (self) */
var34 = (long)self;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var35 = string__Int__to_s(var32);
var = var35;
goto RET_LABEL;
} else {
}
var_f = self;
var36 = NEW_range__Range(&type_range__Rangekernel__Int);
var37 = 0;
var38 = BOX_kernel__Int(var37); /* autobox from Int to Discrete */
var39 = BOX_kernel__Int(var_nb); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var36->class->vft[COLOR_range__Range__without_last]))(var36, var38, var39) /* without_last on <var36:Range[Int]>*/;
var40 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Collection__iterator]))(var36) /* iterator on <var36:Range[Int]>*/;
for(;;) {
var41 = ((short int (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var40) /* is_ok on <var40:Iterator[nullable Object]>*/;
if(!var41) break;
var42 = ((val* (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__item]))(var40) /* item on <var40:Iterator[nullable Object]>*/;
var43 = ((struct instance_kernel__Int*)var42)->value; /* autounbox from nullable Object to Int */;
var_i = var43;
var44 = 10.0;
{ /* Inline kernel#Float#* (var_f,var44) */
var47 = var_f * var44;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var_f = var45;
CONTINUE_label: (void)0;
((void (*)(val*))(var40->class->vft[COLOR_abstract_collection__Iterator__next]))(var40) /* next on <var40:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var48 = 0.0;
{ /* Inline kernel#Float#> (self,var48) */
/* Covariant cast for argument 0 (i) <var48:Float> isa OTHER */
/* <var48:Float> isa OTHER */
var51 = 1; /* easy <var48:Float> isa OTHER*/
if (!var51) {
var_class_name = type_kernel__Float.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 235);
show_backtrace(1);
}
var52 = self > var48;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
if (var49){
var53 = 0.5;
{ /* Inline kernel#Float#+ (var_f,var53) */
var56 = var_f + var53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var_f = var54;
} else {
var57 = 0.5;
{ /* Inline kernel#Float#- (var_f,var57) */
var60 = var_f - var57;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var_f = var58;
}
{ /* Inline kernel#Float#to_i (var_f) */
var63 = (long)var_f;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var_i64 = var61;
var65 = 0;
{ /* Inline kernel#Int#== (var_i64,var65) */
var68 = var_i64 == var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
if (var66){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "0.0";
var72 = 3;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var = var70;
goto RET_LABEL;
} else {
}
var74 = string__Int__to_s(var_i64);
var_s = var74;
var75 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var_sl = var75;
{ /* Inline kernel#Int#> (var_sl,var_nb) */
/* Covariant cast for argument 0 (i) <var_nb:Int> isa OTHER */
/* <var_nb:Int> isa OTHER */
var78 = 1; /* easy <var_nb:Int> isa OTHER*/
if (!var78) {
var_class_name81 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var82 = var_sl > var_nb;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
if (var76){
var83 = 0;
var84 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#- (var84,var_nb) */
var87 = var84 - var_nb;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var88 = ((val* (*)(val*, long, long))(var_s->class->vft[COLOR_string__AbstractString__substring]))(var_s, var83, var85) /* substring on <var_s:String>*/;
var_p1 = var88;
var89 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#- (var89,var_nb) */
var92 = var89 - var_nb;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var93 = ((val* (*)(val*, long, long))(var_s->class->vft[COLOR_string__AbstractString__substring]))(var_s, var90, var_nb) /* substring on <var_s:String>*/;
var_p2 = var93;
if (varonce94) {
var95 = varonce94;
} else {
var96 = ".";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = ((val* (*)(val*, val*))(var_p1->class->vft[COLOR_string__String___43d]))(var_p1, var95) /* + on <var_p1:String>*/;
var100 = ((val* (*)(val*, val*))(var99->class->vft[COLOR_string__String___43d]))(var99, var_p2) /* + on <var99:String>*/;
var = var100;
goto RET_LABEL;
} else {
if (varonce101) {
var102 = varonce101;
} else {
var103 = "0.";
var104 = 2;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "0";
var109 = 1;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{ /* Inline kernel#Int#- (var_nb,var_sl) */
var113 = var_nb - var_sl;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var114 = ((val* (*)(val*, long))(var107->class->vft[COLOR_string__String___42d]))(var107, var111) /* * on <var107:String>*/;
var115 = ((val* (*)(val*, val*))(var102->class->vft[COLOR_string__String___43d]))(var102, var114) /* + on <var102:String>*/;
var116 = ((val* (*)(val*, val*))(var115->class->vft[COLOR_string__String___43d]))(var115, var_s) /* + on <var115:String>*/;
var = var116;
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
val* var1 /* : String */;
struct nitni_instance* ret_var;
ret_var = string___Float_to_precision_native___impl(self, p0);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::string::Object::to_s */
struct nitni_instance * string___NativeString_to_s( char* recv ) {
val* var /* : String */;
var = string__NativeString__to_s(recv);
struct nitni_instance* ret_for_c;
ret_for_c = malloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
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
val* var3 /* : StringCharView */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
val* var6 /* : String */;
var1 = NEW_string__Buffer(&type_string__Buffer);
var2 = 1;
((void (*)(val*, long))(var1->class->vft[COLOR_string__Buffer__with_capacity]))(var1, var2) /* with_capacity on <var1:Buffer>*/;
var_s = var1;
var3 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:Buffer>*/;
var4 = 0;
var5 = BOX_kernel__Char(self); /* autobox from Char to nullable Object */
((void (*)(val*, long, val*))(var3->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var3, var4, var5) /* []= on <var3:StringCharView(BufferCharView)>*/;
var6 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var6;
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
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var2 = '0';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 442);
show_backtrace(1);
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
var_class_name13 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 440);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (var1){
var15 = 1;
var = var15;
goto RET_LABEL;
} else {
}
var16 = 0;
var = var16;
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
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
char var8 /* : Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
char var18 /* : Char */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
char var27 /* : Char */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
var3 = 'a';
{ /* Inline kernel#Char#>= (self,var3) */
/* Covariant cast for argument 0 (i) <var3:Char> isa OTHER */
/* <var3:Char> isa OTHER */
var6 = 1; /* easy <var3:Char> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 442);
show_backtrace(1);
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
var_class_name14 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 440);
show_backtrace(1);
}
var15 = self <= var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var2 = var9;
} else {
var2 = var_;
}
var_16 = var2;
if (var2){
var1 = var_16;
} else {
var18 = 'A';
{ /* Inline kernel#Char#>= (self,var18) */
/* Covariant cast for argument 0 (i) <var18:Char> isa OTHER */
/* <var18:Char> isa OTHER */
var21 = 1; /* easy <var18:Char> isa OTHER*/
if (!var21) {
var_class_name24 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 442);
show_backtrace(1);
}
var25 = self >= var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_26 = var19;
if (var19){
var27 = 'Z';
{ /* Inline kernel#Char#<= (self,var27) */
/* Covariant cast for argument 0 (i) <var27:Char> isa OTHER */
/* <var27:Char> isa OTHER */
var30 = 1; /* easy <var27:Char> isa OTHER*/
if (!var30) {
var_class_name33 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 440);
show_backtrace(1);
}
var34 = self <= var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var17 = var28;
} else {
var17 = var_26;
}
var1 = var17;
}
if (var1){
var35 = 1;
var = var35;
goto RET_LABEL;
} else {
}
var36 = 0;
var = var36;
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1154);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1171);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1178);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1194);
show_backtrace(1);
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
val* var10 /* : Object */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
short int var20 /* : Bool */;
val* var21 /* : Object */;
val* var22 /* : nullable Object */;
val* var23 /* : Object */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : String */;
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
var_s = var6;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__MapRead__iterator]))(self) /* iterator on <self:Map[Object, nullable Object]>*/;
var_i = var7;
var8 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_i) /* key on <var_i:MapIterator[Object, nullable Object]>*/;
var_k = var8;
var9 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_i) /* item on <var_i:MapIterator[Object, nullable Object]>*/;
var_e = var9;
if (var_e!=NULL) {
var10 = var_e;
} else {
if (varonce11) {
var12 = varonce11;
} else {
var13 = "<null>";
var14 = 6;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var10 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var_k;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_couple_sep;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var19) /* append on <var_s:Buffer>*/;
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_i) /* next on <var_i:MapIterator[Object, nullable Object]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var_i) /* is_ok on <var_i:MapIterator[Object, nullable Object]>*/;
if (!var20) break;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var_sep) /* append on <var_s:Buffer>*/;
var21 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__key]))(var_i) /* key on <var_i:MapIterator[Object, nullable Object]>*/;
var_k = var21;
var22 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__item]))(var_i) /* item on <var_i:MapIterator[Object, nullable Object]>*/;
var_e = var22;
if (var_e!=NULL) {
var23 = var_e;
} else {
if (varonce24) {
var25 = varonce24;
} else {
var26 = "<null>";
var27 = 6;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var23 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var_k;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_couple_sep;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var23;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*))(var_s->class->vft[COLOR_abstract_collection__Sequence__append]))(var_s, var32) /* append on <var_s:Buffer>*/;
((void (*)(val*))(var_i->class->vft[COLOR_abstract_collection__MapIterator__next]))(var_i) /* next on <var_i:MapIterator[Object, nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var33 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__Object__to_s]))(var_s) /* to_s on <var_s:Buffer>*/;
var = var33;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_length >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1264);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1289);
show_backtrace(1);
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
const char* var_class_name;
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
var_args = var1;
var3 = 1;
var_i = var3;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_argc) */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var6 = 1; /* easy <var_argc:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
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
/* method string#CachedAlphaComparator#cache for (self: CachedAlphaComparator): HashMap[Object, String] */
val* string__CachedAlphaComparator__cache(val* self) {
val* var /* : HashMap[Object, String] */;
val* var1 /* : HashMap[Object, String] */;
var1 = self->attrs[COLOR_string__CachedAlphaComparator___64dcache].val; /* @cache on <self:CachedAlphaComparator> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cache");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1333);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#cache for (self: Object): HashMap[Object, String] */
val* VIRTUAL_string__CachedAlphaComparator__cache(val* self) {
val* var /* : HashMap[Object, String] */;
val* var1 /* : HashMap[Object, String] */;
var1 = string__CachedAlphaComparator__cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#cache= for (self: CachedAlphaComparator, HashMap[Object, String]) */
void string__CachedAlphaComparator__cache_61d(val* self, val* p0) {
self->attrs[COLOR_string__CachedAlphaComparator___64dcache].val = p0; /* @cache on <self:CachedAlphaComparator> */
RET_LABEL:;
}
/* method string#CachedAlphaComparator#cache= for (self: Object, HashMap[Object, String]) */
void VIRTUAL_string__CachedAlphaComparator__cache_61d(val* self, val* p0) {
string__CachedAlphaComparator__cache_61d(self, p0);
RET_LABEL:;
}
/* method string#CachedAlphaComparator#do_to_s for (self: CachedAlphaComparator, Object): String */
val* string__CachedAlphaComparator__do_to_s(val* self, val* p0) {
val* var /* : String */;
val* var_a /* var a: Object */;
val* var1 /* : HashMap[Object, String] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[Object, String] */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var_res /* var res: String */;
val* var6 /* : HashMap[Object, String] */;
var_a = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__CachedAlphaComparator__cache]))(self) /* cache on <self:CachedAlphaComparator>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_a) /* has_key on <var1:HashMap[Object, String]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_string__CachedAlphaComparator__cache]))(self) /* cache on <self:CachedAlphaComparator>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_a) /* [] on <var3:HashMap[Object, String]>*/;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(var_a->class->vft[COLOR_string__Object__to_s]))(var_a) /* to_s on <var_a:Object>*/;
var_res = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_string__CachedAlphaComparator__cache]))(self) /* cache on <self:CachedAlphaComparator>*/;
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var6, var_a, var_res) /* []= on <var6:HashMap[Object, String]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#do_to_s for (self: Object, Object): String */
val* VIRTUAL_string__CachedAlphaComparator__do_to_s(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string__CachedAlphaComparator__do_to_s(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#compare for (self: CachedAlphaComparator, Object, Object): Int */
long string__CachedAlphaComparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var6 /* : String */;
val* var7 /* : String */;
long var8 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa AbstractSorter#0 */
/* <p0:Object> isa AbstractSorter#0 */
var1 = 1; /* easy <p0:Object> isa AbstractSorter#0*/
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1342);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa AbstractSorter#0 */
/* <p1:Object> isa AbstractSorter#0 */
var2 = 1; /* easy <p1:Object> isa AbstractSorter#0*/
if (!var2) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1342);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_string__CachedAlphaComparator__do_to_s]))(self, var_a) /* do_to_s on <self:CachedAlphaComparator>*/;
var7 = ((val* (*)(val*, val*))(self->class->vft[COLOR_string__CachedAlphaComparator__do_to_s]))(self, var_b) /* do_to_s on <self:CachedAlphaComparator>*/;
var8 = ((long (*)(val*, val*))(var6->class->vft[COLOR_kernel__Comparable___60d_61d_62d]))(var6, var7) /* <=> on <var6:String>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_string__CachedAlphaComparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__CachedAlphaComparator__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#CachedAlphaComparator#init for (self: CachedAlphaComparator) */
void string__CachedAlphaComparator__init(val* self) {
RET_LABEL:;
}
/* method string#CachedAlphaComparator#init for (self: Object) */
void VIRTUAL_string__CachedAlphaComparator__init(val* self) {
string__CachedAlphaComparator__init(self);
RET_LABEL:;
}
/* method string#AlphaComparator#compare for (self: AlphaComparator, Object, Object): Int */
long string__AlphaComparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var6 /* : String */;
val* var7 /* : String */;
long var8 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa AbstractSorter#0 */
/* <p0:Object> isa AbstractSorter#0 */
var1 = 1; /* easy <p0:Object> isa AbstractSorter#0*/
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1350);
show_backtrace(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa AbstractSorter#0 */
/* <p1:Object> isa AbstractSorter#0 */
var2 = 1; /* easy <p1:Object> isa AbstractSorter#0*/
if (!var2) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractSorter#0", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string.nit", 1350);
show_backtrace(1);
}
var_a = p0;
var_b = p1;
var6 = ((val* (*)(val*))(var_a->class->vft[COLOR_string__Object__to_s]))(var_a) /* to_s on <var_a:Object>*/;
var7 = ((val* (*)(val*))(var_b->class->vft[COLOR_string__Object__to_s]))(var_b) /* to_s on <var_b:Object>*/;
var8 = ((long (*)(val*, val*))(var6->class->vft[COLOR_kernel__Comparable___60d_61d_62d]))(var6, var7) /* <=> on <var6:String>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#AlphaComparator#compare for (self: Object, nullable Object, nullable Object): Int */
long VIRTUAL_string__AlphaComparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string__AlphaComparator__compare(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string#AlphaComparator#init for (self: AlphaComparator) */
void string__AlphaComparator__init(val* self) {
RET_LABEL:;
}
/* method string#AlphaComparator#init for (self: Object) */
void VIRTUAL_string__AlphaComparator__init(val* self) {
string__AlphaComparator__init(self);
RET_LABEL:;
}
/* method string#Object#alpha_comparator for (self: Object): AbstractSorter[Object] */
val* string__Object__alpha_comparator(val* self) {
val* var /* : AbstractSorter[Object] */;
static val* varonce;
static int varonce_guard;
val* var1 /* : AlphaComparator */;
val* var2 /* : AlphaComparator */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_string__AlphaComparator(&type_string__AlphaComparator);
((void (*)(val*))(var2->class->vft[COLOR_string__AlphaComparator__init]))(var2) /* init on <var2:AlphaComparator>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string#Object#alpha_comparator for (self: Object): AbstractSorter[Object] */
val* VIRTUAL_string__Object__alpha_comparator(val* self) {
val* var /* : AbstractSorter[Object] */;
val* var1 /* : AbstractSorter[Object] */;
var1 = string__Object__alpha_comparator(self);
var = var1;
RET_LABEL:;
return var;
}
