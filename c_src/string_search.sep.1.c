#include "string_search.sep.0.h"
/* method string_search#Pattern#search_index_in for (self: Pattern, String, Int): Int */
long string_search__Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "search_index_in", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 20);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method string_search#Pattern#search_index_in for (self: Object, String, Int): Int */
long VIRTUAL_string_search__Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__Pattern__search_index_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Pattern#search_in for (self: Pattern, String, Int): nullable Match */
val* string_search__Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "search_in", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 25);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method string_search#Pattern#search_in for (self: Object, String, Int): nullable Match */
val* VIRTUAL_string_search__Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
var1 = string_search__Pattern__search_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Pattern#search_all_in for (self: Pattern, String): Array[Match] */
val* string_search__Pattern__search_all_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_s /* var s: String */;
val* var1 /* : Array[Match] */;
val* var_res /* var res: Array[Match] */;
long var2 /* : Int */;
val* var3 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
val* var4 /* : null */;
short int var5 /* : Bool */;
long var6 /* : Int */;
val* var7 /* : nullable Match */;
var_s = p0;
var1 = NEW_array__Array(&type_array__Arraystring_search__Match);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Match]>*/;
var_res = var1;
var2 = 0;
var3 = ((val* (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_in]))(self, var_s, var2) /* search_in on <self:Pattern>*/;
var_match = var3;
for(;;) {
var4 = NULL;
if (var_match == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (!var5) break;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var_match) /* add on <var_res:Array[Match]>*/;
var6 = ((long (*)(val*))(var_match->class->vft[COLOR_string_search__Match__after]))(var_match) /* after on <var_match:nullable Match(Match)>*/;
var7 = ((val* (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_in]))(self, var_s, var6) /* search_in on <self:Pattern>*/;
var_match = var7;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Pattern#search_all_in for (self: Object, String): Array[Match] */
val* VIRTUAL_string_search__Pattern__search_all_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var1 /* : Array[Match] */;
var1 = string_search__Pattern__search_all_in(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Pattern#split_in for (self: Pattern, String): Array[Match] */
val* string_search__Pattern__split_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_s /* var s: String */;
val* var1 /* : Array[Match] */;
val* var_res /* var res: Array[Match] */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
val* var4 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
val* var5 /* : null */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var_len /* var len: Int */;
val* var11 /* : Match */;
long var12 /* : Int */;
val* var13 /* : nullable Match */;
val* var14 /* : Match */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
var_s = p0;
var1 = NEW_array__Array(&type_array__Arraystring_search__Match);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Match]>*/;
var_res = var1;
var2 = 0;
var_i = var2;
var3 = 0;
var4 = ((val* (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_in]))(self, var_s, var3) /* search_in on <self:Pattern>*/;
var_match = var4;
for(;;) {
var5 = NULL;
if (var_match == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (!var6) break;
var7 = ((long (*)(val*))(var_match->class->vft[COLOR_string_search__Match__from]))(var_match) /* from on <var_match:nullable Match(Match)>*/;
{ /* Inline kernel#Int#- (var7,var_i) */
var10 = var7 - var_i;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_len = var8;
var11 = NEW_string_search__Match(&type_string_search__Match);
((void (*)(val*, val*, long, long))(var11->class->vft[COLOR_string_search__Match__init]))(var11, var_s, var_i, var_len) /* init on <var11:Match>*/;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var11) /* add on <var_res:Array[Match]>*/;
var12 = ((long (*)(val*))(var_match->class->vft[COLOR_string_search__Match__after]))(var_match) /* after on <var_match:nullable Match(Match)>*/;
var_i = var12;
var13 = ((val* (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_in]))(self, var_s, var_i) /* search_in on <self:Pattern>*/;
var_match = var13;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var14 = NEW_string_search__Match(&type_string_search__Match);
var15 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#- (var15,var_i) */
var18 = var15 - var_i;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
((void (*)(val*, val*, long, long))(var14->class->vft[COLOR_string_search__Match__init]))(var14, var_s, var_i, var16) /* init on <var14:Match>*/;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var14) /* add on <var_res:Array[Match]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Pattern#split_in for (self: Object, String): Array[Match] */
val* VIRTUAL_string_search__Pattern__split_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var1 /* : Array[Match] */;
var1 = string_search__Pattern__split_in(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#to_s for (self: BM_Pattern): String */
val* string_search__BM_Pattern__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 67);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#to_s for (self: Object): String */
val* VIRTUAL_string_search__BM_Pattern__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string_search__BM_Pattern__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#search_index_in for (self: BM_Pattern, String, Int): Int */
long string_search__BM_Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var_n /* var n: Int */;
long var7 /* : Int */;
long var_m /* var m: Int */;
long var_j /* var j: Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_i /* var i: Int */;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
short int var_ /* var : Bool */;
val* var35 /* : String */;
val* var36 /* : StringCharView */;
val* var37 /* : nullable Object */;
val* var38 /* : StringCharView */;
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
val* var58 /* : Array[Int] */;
val* var59 /* : nullable Object */;
long var60 /* : Int */;
long var_gs /* var gs: Int */;
val* var61 /* : StringCharView */;
long var62 /* : Int */;
long var64 /* : Int */;
val* var65 /* : nullable Object */;
long var66 /* : Int */;
char var67 /* : Char */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
long var77 /* : Int */;
long var_bc /* var bc: Int */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
short int var84 /* : Bool */;
long var85 /* : Int */;
long var87 /* : Int */;
long var88 /* : Int */;
long var90 /* : Int */;
long var92 /* : Int */;
long var93 /* : Int */;
long var95 /* : Int */;
var_s = p0;
var_from = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_from,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 72);
show_backtrace(1);
}
var6 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var_n = var6;
var7 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var7;
var_j = var_from;
for(;;) {
{ /* Inline kernel#Int#- (var_n,var_m) */
var10 = var_n - var_m;
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
{ /* Inline kernel#Int#< (var_j,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var17 = 1; /* easy <var12:Int> isa OTHER*/
if (!var17) {
var_class_name20 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var21 = var_j < var12;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
var22 = 1;
{ /* Inline kernel#Int#- (var_m,var22) */
var25 = var_m - var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var_i = var23;
for(;;) {
var27 = 0;
{ /* Inline kernel#Int#>= (var_i,var27) */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (!var30) {
var_class_name33 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var34 = var_i >= var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_ = var28;
if (var28){
var35 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var35 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 79);
show_backtrace(1);
}
var36 = ((val* (*)(val*))(var35->class->vft[COLOR_string__AbstractString__chars]))(var35) /* chars on <var35:String>*/;
var37 = ((val* (*)(val*, long))(var36->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var36, var_i) /* [] on <var36:StringCharView>*/;
var38 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:String>*/;
{ /* Inline kernel#Int#+ (var_i,var_j) */
var41 = var_i + var_j;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var42 = ((val* (*)(val*, long))(var38->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var38, var39) /* [] on <var38:StringCharView>*/;
{ /* Inline kernel#Char#== (var37,var42) */
var45 = var37 == var42 || (((struct instance_kernel__Char*)var37)->value == ((struct instance_kernel__Char*)var42)->value);
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var26 = var43;
} else {
var26 = var_;
}
if (!var26) break;
var46 = 1;
{ /* Inline kernel#Int#- (var_i,var46) */
var49 = var_i - var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var_i = var47;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var50 = 0;
{ /* Inline kernel#Int#< (var_i,var50) */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var53 = 1; /* easy <var50:Int> isa OTHER*/
if (!var53) {
var_class_name56 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var57 = var_i < var50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
if (var51){
var = var_j;
goto RET_LABEL;
} else {
var58 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var58 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _gs");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 83);
show_backtrace(1);
}
var59 = ((val* (*)(val*, long))(var58->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var58, var_i) /* [] on <var58:Array[Int]>*/;
var60 = ((struct instance_kernel__Int*)var59)->value; /* autounbox from nullable Object to Int */;
var_gs = var60;
var61 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:String>*/;
{ /* Inline kernel#Int#+ (var_i,var_j) */
var64 = var_i + var_j;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var65 = ((val* (*)(val*, long))(var61->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var61, var62) /* [] on <var61:StringCharView>*/;
var67 = ((struct instance_kernel__Char*)var65)->value; /* autounbox from nullable Object to Char */;
var66 = ((long (*)(val*, char))(self->class->vft[COLOR_string_search__BM_Pattern__bc]))(self, var67) /* bc on <self:BM_Pattern>*/;
{ /* Inline kernel#Int#- (var66,var_m) */
var70 = var66 - var_m;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var71 = 1;
{ /* Inline kernel#Int#+ (var68,var71) */
var74 = var68 + var71;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
{ /* Inline kernel#Int#+ (var72,var_i) */
var77 = var72 + var_i;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var_bc = var75;
{ /* Inline kernel#Int#> (var_gs,var_bc) */
/* Covariant cast for argument 0 (i) <var_bc:Int> isa OTHER */
/* <var_bc:Int> isa OTHER */
var80 = 1; /* easy <var_bc:Int> isa OTHER*/
if (!var80) {
var_class_name83 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var84 = var_gs > var_bc;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
if (var78){
{ /* Inline kernel#Int#+ (var_j,var_gs) */
var87 = var_j + var_gs;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var_j = var85;
} else {
{ /* Inline kernel#Int#+ (var_j,var_bc) */
var90 = var_j + var_bc;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var_j = var88;
}
}
CONTINUE_label91: (void)0;
}
BREAK_label91: (void)0;
var92 = 1;
{ /* Inline kernel#Int#unary - (var92) */
var95 = -var92;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var = var93;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#search_index_in for (self: Object, String, Int): Int */
long VIRTUAL_string_search__BM_Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__BM_Pattern__search_index_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#search_in for (self: BM_Pattern, String, Int): nullable Match */
val* string_search__BM_Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_to /* var to: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : Match */;
long var9 /* : Int */;
var_s = p0;
var_from = p1;
var1 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_index_in]))(self, var_s, var_from) /* search_index_in on <self:BM_Pattern>*/;
var_to = var1;
var2 = 0;
{ /* Inline kernel#Int#< (var_to,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var6 = var_to < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
var8 = NEW_string_search__Match(&type_string_search__Match);
var9 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
((void (*)(val*, val*, long, long))(var8->class->vft[COLOR_string_search__Match__init]))(var8, var_s, var_to, var9) /* init on <var8:Match>*/;
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#search_in for (self: Object, String, Int): nullable Match */
val* VIRTUAL_string_search__BM_Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
var1 = string_search__BM_Pattern__search_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#init for (self: BM_Pattern, String) */
void string_search__BM_Pattern__init(val* self, val* p0) {
val* var_motif /* var motif: String */;
long var /* : Int */;
val* var1 /* : Array[Int] */;
long var2 /* : Int */;
val* var3 /* : ArrayMap[Char, Int] */;
var_motif = p0;
self->attrs[COLOR_string_search__BM_Pattern___motif].val = var_motif; /* _motif on <self:BM_Pattern> */
var = ((long (*)(val*))(var_motif->class->vft[COLOR_abstract_collection__Collection__length]))(var_motif) /* length on <var_motif:String>*/;
self->attrs[COLOR_string_search__BM_Pattern___length].l = var; /* _length on <self:BM_Pattern> */
var1 = NEW_array__Array(&type_array__Arraykernel__Int);
var2 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Int]>*/;
self->attrs[COLOR_string_search__BM_Pattern___gs].val = var1; /* _gs on <self:BM_Pattern> */
var3 = NEW_array__ArrayMap(&type_array__ArrayMapkernel__Charkernel__Int);
((void (*)(val*))(var3->class->vft[COLOR_array__ArrayMap__init]))(var3) /* init on <var3:ArrayMap[Char, Int]>*/;
self->attrs[COLOR_string_search__BM_Pattern___bc_table].val = var3; /* _bc_table on <self:BM_Pattern> */
((void (*)(val*))(self->class->vft[COLOR_string_search__BM_Pattern__compute_gs]))(self) /* compute_gs on <self:BM_Pattern>*/;
((void (*)(val*))(self->class->vft[COLOR_string_search__BM_Pattern__compute_bc]))(self) /* compute_bc on <self:BM_Pattern>*/;
RET_LABEL:;
}
/* method string_search#BM_Pattern#init for (self: Object, String) */
void VIRTUAL_string_search__BM_Pattern__init(val* self, val* p0) {
string_search__BM_Pattern__init(self, p0);
RET_LABEL:;
}
/* method string_search#BM_Pattern#bc for (self: BM_Pattern, Char): Int */
long string_search__BM_Pattern__bc(val* self, char p0) {
long var /* : Int */;
char var_e /* var e: Char */;
val* var1 /* : Map[Char, Int] */;
short int var2 /* : Bool */;
val* var3 /* : Object */;
val* var4 /* : Map[Char, Int] */;
val* var5 /* : nullable Object */;
val* var6 /* : Object */;
long var7 /* : Int */;
long var8 /* : Int */;
var_e = p0;
var1 = self->attrs[COLOR_string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _bc_table");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 126);
show_backtrace(1);
}
var3 = BOX_kernel__Char(var_e); /* autobox from Char to Object */
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var3) /* has_key on <var1:Map[Char, Int]>*/;
if (var2){
var4 = self->attrs[COLOR_string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _bc_table");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 127);
show_backtrace(1);
}
var6 = BOX_kernel__Char(var_e); /* autobox from Char to Object */
var5 = ((val* (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var4, var6) /* [] on <var4:Map[Char, Int]>*/;
var7 = ((struct instance_kernel__Int*)var5)->value; /* autounbox from nullable Object to Int */;
var = var7;
goto RET_LABEL;
} else {
var8 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#bc for (self: Object, Char): Int */
long VIRTUAL_string_search__BM_Pattern__bc(val* self, char p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__BM_Pattern__bc(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#compute_bc for (self: BM_Pattern) */
void string_search__BM_Pattern__compute_bc(val* self) {
val* var /* : String */;
val* var_x /* var x: String */;
long var1 /* : Int */;
long var_m /* var m: Int */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : Map[Char, Int] */;
val* var12 /* : StringCharView */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
var = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 141);
show_backtrace(1);
}
var_x = var;
var1 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var1;
var2 = 0;
var_i = var2;
for(;;) {
var3 = 1;
{ /* Inline kernel#Int#- (var_m,var3) */
var6 = var_m - var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
{ /* Inline kernel#Int#< (var_i,var4) */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (!var9) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var10 = var_i < var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (!var7) break;
var11 = self->attrs[COLOR_string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _bc_table");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 145);
show_backtrace(1);
}
var12 = ((val* (*)(val*))(var_x->class->vft[COLOR_string__AbstractString__chars]))(var_x) /* chars on <var_x:String>*/;
var13 = ((val* (*)(val*, long))(var12->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var12, var_i) /* [] on <var12:StringCharView>*/;
{ /* Inline kernel#Int#- (var_m,var_i) */
var16 = var_m - var_i;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var17 = 1;
{ /* Inline kernel#Int#- (var14,var17) */
var20 = var14 - var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var21 = BOX_kernel__Int(var18); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var11, var13, var21) /* []= on <var11:Map[Char, Int]>*/;
var22 = 1;
{ /* Inline kernel#Int#+ (var_i,var22) */
var25 = var_i + var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var_i = var23;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string_search#BM_Pattern#compute_bc for (self: Object) */
void VIRTUAL_string_search__BM_Pattern__compute_bc(val* self) {
string_search__BM_Pattern__compute_bc(self);
RET_LABEL:;
}
/* method string_search#BM_Pattern#suffixes for (self: BM_Pattern): Array[Int] */
val* string_search__BM_Pattern__suffixes(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : String */;
val* var_x /* var x: String */;
long var2 /* : Int */;
long var_m /* var m: Int */;
val* var3 /* : Array[Int] */;
val* var4 /* : nullable Object */;
val* var_suff /* var suff: Array[Int] */;
long var5 /* : Int */;
long var_f /* var f: Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_g /* var g: Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var_i /* var i: Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : nullable Object */;
long var38 /* : Int */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
short int var48 /* : Bool */;
long var49 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
val* var59 /* : nullable Object */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
short int var75 /* : Bool */;
short int var_76 /* var : Bool */;
val* var77 /* : StringCharView */;
val* var78 /* : nullable Object */;
val* var79 /* : StringCharView */;
long var80 /* : Int */;
long var82 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
long var86 /* : Int */;
long var87 /* : Int */;
long var89 /* : Int */;
val* var90 /* : nullable Object */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
long var94 /* : Int */;
long var95 /* : Int */;
long var97 /* : Int */;
long var98 /* : Int */;
long var100 /* : Int */;
val* var101 /* : nullable Object */;
long var102 /* : Int */;
long var103 /* : Int */;
long var105 /* : Int */;
var1 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 152);
show_backtrace(1);
}
var_x = var1;
var2 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Int);
var4 = BOX_kernel__Int(var_m); /* autobox from Int to nullable Object */
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__filled_with]))(var3, var4, var_m) /* filled_with on <var3:Array[Int]>*/;
var_suff = var3;
var5 = 0;
var_f = var5;
var6 = 1;
{ /* Inline kernel#Int#- (var_m,var6) */
var9 = var_m - var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var_g = var7;
var10 = 2;
{ /* Inline kernel#Int#- (var_m,var10) */
var13 = var_m - var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var_i = var11;
for(;;) {
var14 = 0;
{ /* Inline kernel#Int#>= (var_i,var14) */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (!var17) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var18 = var_i >= var14;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
{ /* Inline kernel#Int#> (var_i,var_g) */
/* Covariant cast for argument 0 (i) <var_g:Int> isa OTHER */
/* <var_g:Int> isa OTHER */
var22 = 1; /* easy <var_g:Int> isa OTHER*/
if (!var22) {
var_class_name25 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var26 = var_i > var_g;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_ = var20;
if (var20){
{ /* Inline kernel#Int#+ (var_i,var_m) */
var29 = var_i + var_m;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var30 = 1;
{ /* Inline kernel#Int#- (var27,var30) */
var33 = var27 - var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
{ /* Inline kernel#Int#- (var31,var_f) */
var36 = var31 - var_f;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var37 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var34) /* [] on <var_suff:Array[Int]>*/;
{ /* Inline kernel#Int#- (var_i,var_g) */
var40 = var_i - var_g;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
{ /* Inline kernel#Int#< (var37,var38) */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var43 = 1; /* easy <var38:Int> isa OTHER*/
if (!var43) {
var_class_name46 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var47 = ((struct instance_kernel__Int*)var37)->value; /* autounbox from nullable Object to Int */;
var48 = var47 < var38;
var41 = var48;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var19 = var41;
} else {
var19 = var_;
}
if (var19){
{ /* Inline kernel#Int#+ (var_i,var_m) */
var51 = var_i + var_m;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var52 = 1;
{ /* Inline kernel#Int#- (var49,var52) */
var55 = var49 - var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
{ /* Inline kernel#Int#- (var53,var_f) */
var58 = var53 - var_f;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var59 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var56) /* [] on <var_suff:Array[Int]>*/;
((void (*)(val*, long, val*))(var_suff->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_suff, var_i, var59) /* []= on <var_suff:Array[Int]>*/;
} else {
{ /* Inline kernel#Int#< (var_i,var_g) */
/* Covariant cast for argument 0 (i) <var_g:Int> isa OTHER */
/* <var_g:Int> isa OTHER */
var62 = 1; /* easy <var_g:Int> isa OTHER*/
if (!var62) {
var_class_name65 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var66 = var_i < var_g;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
if (var60){
var_g = var_i;
} else {
}
var_f = var_i;
for(;;) {
var68 = 0;
{ /* Inline kernel#Int#>= (var_g,var68) */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var71 = 1; /* easy <var68:Int> isa OTHER*/
if (!var71) {
var_class_name74 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var75 = var_g >= var68;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var_76 = var69;
if (var69){
var77 = ((val* (*)(val*))(var_x->class->vft[COLOR_string__AbstractString__chars]))(var_x) /* chars on <var_x:String>*/;
var78 = ((val* (*)(val*, long))(var77->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var77, var_g) /* [] on <var77:StringCharView>*/;
var79 = ((val* (*)(val*))(var_x->class->vft[COLOR_string__AbstractString__chars]))(var_x) /* chars on <var_x:String>*/;
{ /* Inline kernel#Int#+ (var_g,var_m) */
var82 = var_g + var_m;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var83 = 1;
{ /* Inline kernel#Int#- (var80,var83) */
var86 = var80 - var83;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
{ /* Inline kernel#Int#- (var84,var_f) */
var89 = var84 - var_f;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var90 = ((val* (*)(val*, long))(var79->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var79, var87) /* [] on <var79:StringCharView>*/;
{ /* Inline kernel#Char#== (var78,var90) */
var93 = var78 == var90 || (((struct instance_kernel__Char*)var78)->value == ((struct instance_kernel__Char*)var90)->value);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var67 = var91;
} else {
var67 = var_76;
}
if (!var67) break;
var94 = 1;
{ /* Inline kernel#Int#- (var_g,var94) */
var97 = var_g - var94;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var_g = var95;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#- (var_f,var_g) */
var100 = var_f - var_g;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var101 = BOX_kernel__Int(var98); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var_suff->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_suff, var_i, var101) /* []= on <var_suff:Array[Int]>*/;
}
var102 = 1;
{ /* Inline kernel#Int#- (var_i,var102) */
var105 = var_i - var102;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var_i = var103;
CONTINUE_label106: (void)0;
}
BREAK_label106: (void)0;
var = var_suff;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#suffixes for (self: Object): Array[Int] */
val* VIRTUAL_string_search__BM_Pattern__suffixes(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = string_search__BM_Pattern__suffixes(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#compute_gs for (self: BM_Pattern) */
void string_search__BM_Pattern__compute_gs(val* self) {
val* var /* : String */;
val* var_x /* var x: String */;
long var1 /* : Int */;
long var_m /* var m: Int */;
val* var2 /* : Array[Int] */;
val* var_suff /* var suff: Array[Int] */;
long var3 /* : Int */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : Array[Int] */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var_j /* var j: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
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
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : nullable Object */;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var47 /* : Int */;
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
val* var61 /* : Array[Int] */;
val* var62 /* : nullable Object */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
long var66 /* : Int */;
val* var67 /* : Array[Int] */;
long var68 /* : Int */;
long var69 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
long var76 /* : Int */;
long var77 /* : Int */;
long var79 /* : Int */;
long var81 /* : Int */;
long var82 /* : Int */;
long var84 /* : Int */;
long var86 /* : Int */;
long var87 /* : Int */;
long var88 /* : Int */;
long var90 /* : Int */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
short int var97 /* : Bool */;
val* var98 /* : Array[Int] */;
long var99 /* : Int */;
long var100 /* : Int */;
long var102 /* : Int */;
val* var103 /* : nullable Object */;
long var104 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
long var108 /* : Int */;
long var109 /* : Int */;
long var111 /* : Int */;
long var112 /* : Int */;
long var114 /* : Int */;
val* var115 /* : nullable Object */;
long var116 /* : Int */;
long var117 /* : Int */;
long var119 /* : Int */;
var = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 175);
show_backtrace(1);
}
var_x = var;
var1 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_string_search__BM_Pattern__suffixes]))(self) /* suffixes on <self:BM_Pattern>*/;
var_suff = var2;
var3 = 0;
var_i = var3;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_m) */
/* Covariant cast for argument 0 (i) <var_m:Int> isa OTHER */
/* <var_m:Int> isa OTHER */
var6 = 1; /* easy <var_m:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var7 = var_i < var_m;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var8 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _gs");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 180);
show_backtrace(1);
}
var9 = BOX_kernel__Int(var_m); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var8->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var8, var_i, var9) /* []= on <var8:Array[Int]>*/;
var10 = 1;
{ /* Inline kernel#Int#+ (var_i,var10) */
var13 = var_i + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var_i = var11;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var14 = 0;
var_j = var14;
var15 = 1;
{ /* Inline kernel#Int#- (var_m,var15) */
var18 = var_m - var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var_i = var16;
for(;;) {
var19 = 1;
{ /* Inline kernel#Int#unary - (var19) */
var22 = -var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
{ /* Inline kernel#Int#>= (var_i,var20) */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var25 = 1; /* easy <var20:Int> isa OTHER*/
if (!var25) {
var_class_name28 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var29 = var_i >= var20;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (!var23) break;
var31 = 1;
{ /* Inline kernel#Int#unary - (var31) */
var34 = -var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
{ /* Inline kernel#Int#== (var_i,var32) */
var37 = var_i == var32;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var_ = var35;
if (var35){
var30 = var_;
} else {
var38 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var_i) /* [] on <var_suff:Array[Int]>*/;
var39 = 1;
{ /* Inline kernel#Int#+ (var_i,var39) */
var42 = var_i + var39;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
{ /* Inline kernel#Int#== (var38,var40) */
var45 = (var38 != NULL) && (var38->class == &class_kernel__Int);
if (var45) {
var46 = ((struct instance_kernel__Int*)var38)->value; /* autounbox from nullable Object to Int */;
var45 = (var46 == var40);
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var30 = var43;
}
if (var30){
for(;;) {
var47 = 1;
{ /* Inline kernel#Int#- (var_m,var47) */
var50 = var_m - var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
{ /* Inline kernel#Int#- (var48,var_i) */
var53 = var48 - var_i;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
{ /* Inline kernel#Int#< (var_j,var51) */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var56 = 1; /* easy <var51:Int> isa OTHER*/
if (!var56) {
var_class_name59 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var60 = var_j < var51;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
if (!var54) break;
var61 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var61 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _gs");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 188);
show_backtrace(1);
}
var62 = ((val* (*)(val*, long))(var61->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var61, var_j) /* [] on <var61:Array[Int]>*/;
{ /* Inline kernel#Int#== (var62,var_m) */
var65 = (var62 != NULL) && (var62->class == &class_kernel__Int);
if (var65) {
var66 = ((struct instance_kernel__Int*)var62)->value; /* autounbox from nullable Object to Int */;
var65 = (var66 == var_m);
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
if (var63){
var67 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var67 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _gs");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 188);
show_backtrace(1);
}
var68 = 1;
{ /* Inline kernel#Int#- (var_m,var68) */
var71 = var_m - var68;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
{ /* Inline kernel#Int#- (var69,var_i) */
var74 = var69 - var_i;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var75 = BOX_kernel__Int(var72); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var67->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var67, var_j, var75) /* []= on <var67:Array[Int]>*/;
} else {
}
var76 = 1;
{ /* Inline kernel#Int#+ (var_j,var76) */
var79 = var_j + var76;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
var_j = var77;
CONTINUE_label80: (void)0;
}
BREAK_label80: (void)0;
} else {
}
var81 = 1;
{ /* Inline kernel#Int#- (var_i,var81) */
var84 = var_i - var81;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
var_i = var82;
CONTINUE_label85: (void)0;
}
BREAK_label85: (void)0;
var86 = 0;
var_i = var86;
for(;;) {
var87 = 1;
{ /* Inline kernel#Int#- (var_m,var87) */
var90 = var_m - var87;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
{ /* Inline kernel#Int#< (var_i,var88) */
/* Covariant cast for argument 0 (i) <var88:Int> isa OTHER */
/* <var88:Int> isa OTHER */
var93 = 1; /* easy <var88:Int> isa OTHER*/
if (!var93) {
var_class_name96 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var97 = var_i < var88;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
if (!var91) break;
var98 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var98 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _gs");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 196);
show_backtrace(1);
}
var99 = 1;
{ /* Inline kernel#Int#- (var_m,var99) */
var102 = var_m - var99;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var103 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var_i) /* [] on <var_suff:Array[Int]>*/;
{ /* Inline kernel#Int#- (var100,var103) */
var106 = ((struct instance_kernel__Int*)var103)->value; /* autounbox from nullable Object to Int */;
var107 = var100 - var106;
var104 = var107;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
var108 = 1;
{ /* Inline kernel#Int#- (var_m,var108) */
var111 = var_m - var108;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
{ /* Inline kernel#Int#- (var109,var_i) */
var114 = var109 - var_i;
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
var115 = BOX_kernel__Int(var112); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var98->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var98, var104, var115) /* []= on <var98:Array[Int]>*/;
var116 = 1;
{ /* Inline kernel#Int#+ (var_i,var116) */
var119 = var_i + var116;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var_i = var117;
CONTINUE_label120: (void)0;
}
BREAK_label120: (void)0;
RET_LABEL:;
}
/* method string_search#BM_Pattern#compute_gs for (self: Object) */
void VIRTUAL_string_search__BM_Pattern__compute_gs(val* self) {
string_search__BM_Pattern__compute_gs(self);
RET_LABEL:;
}
/* method string_search#BM_Pattern#hash for (self: BM_Pattern): Int */
long string_search__BM_Pattern__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
long var2 /* : Int */;
var1 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 201);
show_backtrace(1);
}
var2 = ((long (*)(val*))(var1->class->vft[COLOR_kernel__Object__hash]))(var1) /* hash on <var1:String>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#hash for (self: Object): Int */
long VIRTUAL_string_search__BM_Pattern__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__BM_Pattern__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#== for (self: BM_Pattern, nullable Object): Bool */
short int string_search__BM_Pattern___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : String */;
val* var4 /* : String */;
short int var5 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa BM_Pattern */
cltype = type_string_search__BM_Pattern.color;
idtype = type_string_search__BM_Pattern.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= var_o->type->table_size) {
var2 = 0;
} else {
var2 = var_o->type->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
var3 = var_o->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <var_o:nullable Object(BM_Pattern)> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 202);
show_backtrace(1);
}
var4 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _motif");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 202);
show_backtrace(1);
}
var5 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var4) /* == on <var3:String>*/;
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#BM_Pattern#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_string_search__BM_Pattern___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = string_search__BM_Pattern___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#string for (self: Match): String */
val* string_search__Match__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_string_search__Match___string].val; /* _string on <self:Match> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _string");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 207);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#string for (self: Object): String */
val* VIRTUAL_string_search__Match__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string_search__Match__string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#from for (self: Match): Int */
long string_search__Match__from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#from for (self: Object): Int */
long VIRTUAL_string_search__Match__from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__Match__from(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#length for (self: Match): Int */
long string_search__Match__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#length for (self: Object): Int */
long VIRTUAL_string_search__Match__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__Match__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#after for (self: Match): Int */
long string_search__Match__after(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
var1 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Match> */
var2 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Match> */
{ /* Inline kernel#Int#+ (var1,var2) */
var5 = var1 + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Match#after for (self: Object): Int */
long VIRTUAL_string_search__Match__after(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__Match__after(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#to_s for (self: Match): String */
val* string_search__Match__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : String */;
var1 = self->attrs[COLOR_string_search__Match___string].val; /* _string on <self:Match> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _string");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 221);
show_backtrace(1);
}
var2 = self->attrs[COLOR_string_search__Match___from].l; /* _from on <self:Match> */
var3 = self->attrs[COLOR_string_search__Match___length].l; /* _length on <self:Match> */
var4 = ((val* (*)(val*, long, long))(var1->class->vft[COLOR_string__AbstractString__substring]))(var1, var2, var3) /* substring on <var1:String>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Match#to_s for (self: Object): String */
val* VIRTUAL_string_search__Match__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string_search__Match__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Match#init for (self: Match, String, Int, Int) */
void string_search__Match__init(val* self, val* p0, long p1, long p2) {
val* var_s /* var s: String */;
long var_f /* var f: Int */;
long var_len /* var len: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
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
var_s = p0;
var_f = p1;
var_len = p2;
var = 0;
{ /* Inline kernel#Int#>= (var_len,var) */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (!var3) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var4 = var_len >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert \'positive_length\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 226);
show_backtrace(1);
}
var5 = 0;
{ /* Inline kernel#Int#>= (var_f,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name11 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var12 = var_f >= var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert \'valid_from\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 227);
show_backtrace(1);
}
{ /* Inline kernel#Int#+ (var_f,var_len) */
var15 = var_f + var_len;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var16 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#<= (var13,var16) */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (!var19) {
var_class_name22 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 264);
show_backtrace(1);
}
var23 = var13 <= var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert \'valid_after\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 228);
show_backtrace(1);
}
self->attrs[COLOR_string_search__Match___string].val = var_s; /* _string on <self:Match> */
self->attrs[COLOR_string_search__Match___from].l = var_f; /* _from on <self:Match> */
self->attrs[COLOR_string_search__Match___length].l = var_len; /* _length on <self:Match> */
RET_LABEL:;
}
/* method string_search#Match#init for (self: Object, String, Int, Int) */
void VIRTUAL_string_search__Match__init(val* self, val* p0, long p1, long p2) {
string_search__Match__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method string_search#Char#search_index_in for (self: Char, String, Int): Int */
long string_search__Char__search_index_in(char self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_stop /* var stop: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : StringCharView */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
char var11 /* : Char */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
var_s = p0;
var_from = p1;
var1 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var_stop = var1;
for(;;) {
{ /* Inline kernel#Int#< (var_from,var_stop) */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var4 = 1; /* easy <var_stop:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var5 = var_from < var_stop;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
var6 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:String>*/;
var7 = ((val* (*)(val*, long))(var6->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var6, var_from) /* [] on <var6:StringCharView>*/;
{ /* Inline kernel#Char#== (var7,self) */
var10 = (var7 != NULL) && (var7->class == &class_kernel__Char);
if (var10) {
var11 = ((struct instance_kernel__Char*)var7)->value; /* autounbox from nullable Object to Char */;
var10 = (var11 == self);
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var = var_from;
goto RET_LABEL;
} else {
}
var12 = 1;
{ /* Inline kernel#Int#+ (var_from,var12) */
var15 = var_from + var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_from = var13;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var16 = 1;
{ /* Inline kernel#Int#unary - (var16) */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#Char#search_index_in for (self: Object, String, Int): Int */
long VIRTUAL_string_search__Char__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string_search__Char__search_index_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#Char#search_in for (self: Char, String, Int): nullable Match */
val* string_search__Char__search_in(char self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : Match */;
long var9 /* : Int */;
var_s = p0;
var_from = p1;
var1 = string_search__Char__search_index_in(self, var_s, var_from);
var_pos = var1;
var2 = 0;
{ /* Inline kernel#Int#< (var_pos,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var6 = var_pos < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
var8 = NEW_string_search__Match(&type_string_search__Match);
var9 = 1;
((void (*)(val*, val*, long, long))(var8->class->vft[COLOR_string_search__Match__init]))(var8, var_s, var_pos, var9) /* init on <var8:Match>*/;
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#Char#search_in for (self: Object, String, Int): nullable Match */
val* VIRTUAL_string_search__Char__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = string_search__Char__search_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#search_index_in for (self: String, String, Int): Int */
long string_search__String__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: String */;
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
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var_stop /* var stop: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var_i /* var i: Int */;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
short int var_ /* var : Bool */;
val* var36 /* : StringCharView */;
val* var37 /* : nullable Object */;
val* var38 /* : StringCharView */;
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
long var66 /* : Int */;
var_s = p0;
var_from = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_from,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/string_search.nit", 264);
show_backtrace(1);
}
var6 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
var7 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
{ /* Inline kernel#Int#- (var6,var7) */
var10 = var6 - var7;
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
var_stop = var12;
for(;;) {
{ /* Inline kernel#Int#< (var_from,var_stop) */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var17 = 1; /* easy <var_stop:Int> isa OTHER*/
if (!var17) {
var_class_name20 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var21 = var_from < var_stop;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
var22 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
var23 = 1;
{ /* Inline kernel#Int#- (var22,var23) */
var26 = var22 - var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var_i = var24;
for(;;) {
var28 = 0;
{ /* Inline kernel#Int#>= (var_i,var28) */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (!var31) {
var_class_name34 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var35 = var_i >= var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_ = var29;
if (var29){
var36 = ((val* (*)(val*))(self->class->vft[COLOR_string__AbstractString__chars]))(self) /* chars on <self:String>*/;
var37 = ((val* (*)(val*, long))(var36->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var36, var_i) /* [] on <var36:StringCharView>*/;
var38 = ((val* (*)(val*))(var_s->class->vft[COLOR_string__AbstractString__chars]))(var_s) /* chars on <var_s:String>*/;
{ /* Inline kernel#Int#+ (var_i,var_from) */
var41 = var_i + var_from;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var42 = ((val* (*)(val*, long))(var38->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var38, var39) /* [] on <var38:StringCharView>*/;
{ /* Inline kernel#Char#== (var37,var42) */
var45 = var37 == var42 || (((struct instance_kernel__Char*)var37)->value == ((struct instance_kernel__Char*)var42)->value);
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var27 = var43;
} else {
var27 = var_;
}
if (!var27) break;
var46 = 1;
{ /* Inline kernel#Int#- (var_i,var46) */
var49 = var_i - var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var_i = var47;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var50 = 0;
{ /* Inline kernel#Int#< (var_i,var50) */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var53 = 1; /* easy <var50:Int> isa OTHER*/
if (!var53) {
var_class_name56 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var57 = var_i < var50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
if (var51){
var = var_from;
goto RET_LABEL;
} else {
}
var58 = 1;
{ /* Inline kernel#Int#+ (var_from,var58) */
var61 = var_from + var58;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var_from = var59;
CONTINUE_label62: (void)0;
}
BREAK_label62: (void)0;
var63 = 1;
{ /* Inline kernel#Int#unary - (var63) */
var66 = -var63;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var = var64;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#search_index_in for (self: Object, String, Int): Int */
long VIRTUAL_string_search__String__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = string_search__String__search_index_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#search_in for (self: String, String, Int): nullable Match */
val* string_search__String__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : Match */;
long var9 /* : Int */;
var_s = p0;
var_from = p1;
var1 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_string_search__Pattern__search_index_in]))(self, var_s, var_from) /* search_index_in on <self:String>*/;
var_pos = var1;
var2 = 0;
{ /* Inline kernel#Int#< (var_pos,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var6 = var_pos < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
var8 = NEW_string_search__Match(&type_string_search__Match);
var9 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
((void (*)(val*, val*, long, long))(var8->class->vft[COLOR_string_search__Match__init]))(var8, var_s, var_pos, var9) /* init on <var8:Match>*/;
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search#String#search_in for (self: Object, String, Int): nullable Match */
val* VIRTUAL_string_search__String__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
var1 = string_search__String__search_in(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#search for (self: String, Pattern): nullable Match */
val* string_search__String__search(val* self, val* p0) {
val* var /* : nullable Match */;
val* var_p /* var p: Pattern */;
long var1 /* : Int */;
val* var2 /* : nullable Match */;
var_p = p0;
var1 = 0;
var2 = ((val* (*)(val*, val*, long))(var_p->class->vft[COLOR_string_search__Pattern__search_in]))(var_p, self, var1) /* search_in on <var_p:Pattern>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#search for (self: Object, Pattern): nullable Match */
val* VIRTUAL_string_search__String__search(val* self, val* p0) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
var1 = string_search__String__search(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#search_from for (self: String, Pattern, Int): nullable Match */
val* string_search__String__search_from(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_p /* var p: Pattern */;
long var_from /* var from: Int */;
val* var1 /* : nullable Match */;
var_p = p0;
var_from = p1;
var1 = ((val* (*)(val*, val*, long))(var_p->class->vft[COLOR_string_search__Pattern__search_in]))(var_p, self, var_from) /* search_in on <var_p:Pattern>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#search_from for (self: Object, Pattern, Int): nullable Match */
val* VIRTUAL_string_search__String__search_from(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
var1 = string_search__String__search_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#search_all for (self: String, Pattern): Array[Match] */
val* string_search__String__search_all(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_p /* var p: Pattern */;
val* var1 /* : Array[Match] */;
var_p = p0;
var1 = ((val* (*)(val*, val*))(var_p->class->vft[COLOR_string_search__Pattern__search_all_in]))(var_p, self) /* search_all_in on <var_p:Pattern>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#search_all for (self: Object, Pattern): Array[Match] */
val* VIRTUAL_string_search__String__search_all(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var1 /* : Array[Match] */;
var1 = string_search__String__search_all(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#split for (self: String, Pattern): Array[String] */
val* string_search__String__split(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_p /* var p: Pattern */;
val* var1 /* : Array[Match] */;
val* var_matches /* var matches: Array[Match] */;
val* var2 /* : Array[String] */;
long var3 /* : Int */;
val* var_res /* var res: Array[String] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_m /* var m: Match */;
val* var7 /* : String */;
var_p = p0;
var1 = ((val* (*)(val*, val*))(var_p->class->vft[COLOR_string_search__Pattern__split_in]))(var_p, self) /* split_in on <var_p:Pattern>*/;
var_matches = var1;
var2 = NEW_array__Array(&type_array__Arraystring__String);
var3 = ((long (*)(val*))(var_matches->class->vft[COLOR_abstract_collection__Collection__length]))(var_matches) /* length on <var_matches:Array[Match]>*/;
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var3) /* with_capacity on <var2:Array[String]>*/;
var_res = var2;
var4 = ((val* (*)(val*))(var_matches->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_matches) /* iterator on <var_matches:Array[Match]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_m = var6;
var7 = ((val* (*)(val*))(var_m->class->vft[COLOR_string__Object__to_s]))(var_m) /* to_s on <var_m:Match>*/;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var7) /* add on <var_res:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#split for (self: Object, Pattern): Array[String] */
val* VIRTUAL_string_search__String__split(val* self, val* p0) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = string_search__String__split(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#split_with for (self: String, Pattern): Array[String] */
val* string_search__String__split_with(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_p /* var p: Pattern */;
val* var1 /* : Array[String] */;
var_p = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_string_search__String__split]))(self, var_p) /* split on <self:String>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#split_with for (self: Object, Pattern): Array[String] */
val* VIRTUAL_string_search__String__split_with(val* self, val* p0) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = string_search__String__split_with(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#replace for (self: String, Pattern, String): String */
val* string_search__String__replace(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_p /* var p: Pattern */;
val* var_string /* var string: String */;
val* var1 /* : Array[String] */;
val* var2 /* : String */;
var_p = p0;
var_string = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_string_search__String__split_with]))(self, var_p) /* split_with on <self:String>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_string__Collection__join]))(var1, var_string) /* join on <var1:Array[String]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#replace for (self: Object, Pattern, String): String */
val* VIRTUAL_string_search__String__replace(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string_search__String__replace(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search#String#html_escape for (self: String): String */
val* string_search__String__html_escape(val* self) {
val* var /* : String */;
val* var_ret /* var ret: String */;
val* var1 /* : StringCharView */;
char var2 /* : Char */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
char var5 /* : Char */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : Pattern */;
val* var12 /* : StringCharView */;
char var13 /* : Char */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
char var16 /* : Char */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : Pattern */;
val* var24 /* : StringCharView */;
char var25 /* : Char */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
char var28 /* : Char */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : Pattern */;
val* var36 /* : StringCharView */;
char var37 /* : Char */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
char var40 /* : Char */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : Pattern */;
var_ret = self;
var1 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__AbstractString__chars]))(var_ret) /* chars on <var_ret:String>*/;
var2 = '&';
var4 = BOX_kernel__Char(var2); /* autobox from Char to nullable Object */
var3 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var4) /* has on <var1:StringCharView>*/;
if (var3){
var5 = '&';
if (varonce) {
var6 = varonce;
} else {
var7 = "&amp;";
var8 = 5;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var11 = BOX_kernel__Char(var5); /* autobox from Char to Pattern */
var10 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var11, var6) /* replace on <var_ret:String>*/;
var_ret = var10;
} else {
}
var12 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__AbstractString__chars]))(var_ret) /* chars on <var_ret:String>*/;
var13 = '<';
var15 = BOX_kernel__Char(var13); /* autobox from Char to nullable Object */
var14 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__Collection__has]))(var12, var15) /* has on <var12:StringCharView>*/;
if (var14){
var16 = '<';
if (varonce17) {
var18 = varonce17;
} else {
var19 = "&lt;";
var20 = 4;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var23 = BOX_kernel__Char(var16); /* autobox from Char to Pattern */
var22 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var23, var18) /* replace on <var_ret:String>*/;
var_ret = var22;
} else {
}
var24 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__AbstractString__chars]))(var_ret) /* chars on <var_ret:String>*/;
var25 = '>';
var27 = BOX_kernel__Char(var25); /* autobox from Char to nullable Object */
var26 = ((short int (*)(val*, val*))(var24->class->vft[COLOR_abstract_collection__Collection__has]))(var24, var27) /* has on <var24:StringCharView>*/;
if (var26){
var28 = '>';
if (varonce29) {
var30 = varonce29;
} else {
var31 = "&gt;";
var32 = 4;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var35 = BOX_kernel__Char(var28); /* autobox from Char to Pattern */
var34 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var35, var30) /* replace on <var_ret:String>*/;
var_ret = var34;
} else {
}
var36 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__AbstractString__chars]))(var_ret) /* chars on <var_ret:String>*/;
var37 = '\"';
var39 = BOX_kernel__Char(var37); /* autobox from Char to nullable Object */
var38 = ((short int (*)(val*, val*))(var36->class->vft[COLOR_abstract_collection__Collection__has]))(var36, var39) /* has on <var36:StringCharView>*/;
if (var38){
var40 = '\"';
if (varonce41) {
var42 = varonce41;
} else {
var43 = "&quot;";
var44 = 6;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var47 = BOX_kernel__Char(var40); /* autobox from Char to Pattern */
var46 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var47, var42) /* replace on <var_ret:String>*/;
var_ret = var46;
} else {
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search#String#html_escape for (self: Object): String */
val* VIRTUAL_string_search__String__html_escape(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = string_search__String__html_escape(self);
var = var1;
RET_LABEL:;
return var;
}
