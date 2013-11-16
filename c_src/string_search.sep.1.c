#include "string_search.sep.0.h"
/* method string_search#Pattern#search_index_in for (self: Pattern, String, Int): Int */
long string_search__Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/string_search.nit", 20);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/string_search.nit", 25);
exit(1);
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
CHECK_NEW_array__Array(var1);
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
CHECK_NEW_array__Array(var1);
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
CHECK_NEW_string_search__Match(var11);
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
CHECK_NEW_string_search__Match(var14);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 67);
exit(1);
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
short int var20 /* : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var_i /* var i: Int */;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
short int var32 /* : Bool */;
short int var_ /* var : Bool */;
val* var33 /* : String */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
val* var53 /* : Array[Int] */;
val* var54 /* : nullable Object */;
long var55 /* : Int */;
long var_gs /* var gs: Int */;
long var56 /* : Int */;
long var58 /* : Int */;
val* var59 /* : nullable Object */;
long var60 /* : Int */;
char var61 /* : Char */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
long var71 /* : Int */;
long var_bc /* var bc: Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
short int var77 /* : Bool */;
long var78 /* : Int */;
long var80 /* : Int */;
long var81 /* : Int */;
long var83 /* : Int */;
long var85 /* : Int */;
long var86 /* : Int */;
long var88 /* : Int */;
var_s = p0;
var_from = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_from,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string_search.nit", 72);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var20 = var_j < var12;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
var21 = 1;
{ /* Inline kernel#Int#- (var_m,var21) */
var24 = var_m - var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var_i = var22;
for(;;) {
var26 = 0;
{ /* Inline kernel#Int#>= (var_i,var26) */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var32 = var_i >= var26;
var27 = var32;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var_ = var27;
if (var27){
var33 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 79);
exit(1);
}
var34 = ((val* (*)(val*, long))(var33->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var33, var_i) /* [] on <var33:String>*/;
{ /* Inline kernel#Int#+ (var_i,var_j) */
var37 = var_i + var_j;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var38 = ((val* (*)(val*, long))(var_s->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_s, var35) /* [] on <var_s:String>*/;
{ /* Inline kernel#Char#== (var34,var38) */
var41 = var34 == var38 || (((struct instance_kernel__Char*)var34)->value == ((struct instance_kernel__Char*)var38)->value);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var25 = var39;
} else {
var25 = var_;
}
if (!var25) break;
var42 = 1;
{ /* Inline kernel#Int#- (var_i,var42) */
var45 = var_i - var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var_i = var43;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var46 = 0;
{ /* Inline kernel#Int#< (var_i,var46) */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (!var49) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var52 = var_i < var46;
var47 = var52;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
if (var47){
var = var_j;
goto RET_LABEL;
} else {
var53 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var53 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _gs", "lib/standard/string_search.nit", 83);
exit(1);
}
var54 = ((val* (*)(val*, long))(var53->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var53, var_i) /* [] on <var53:Array[Int]>*/;
var55 = ((struct instance_kernel__Int*)var54)->value; /* autounbox from nullable Object to Int */;
var_gs = var55;
{ /* Inline kernel#Int#+ (var_i,var_j) */
var58 = var_i + var_j;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var59 = ((val* (*)(val*, long))(var_s->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_s, var56) /* [] on <var_s:String>*/;
var61 = ((struct instance_kernel__Char*)var59)->value; /* autounbox from nullable Object to Char */;
var60 = ((long (*)(val*, char))(self->class->vft[COLOR_string_search__BM_Pattern__bc]))(self, var61) /* bc on <self:BM_Pattern>*/;
{ /* Inline kernel#Int#- (var60,var_m) */
var64 = var60 - var_m;
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
{ /* Inline kernel#Int#+ (var66,var_i) */
var71 = var66 + var_i;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var_bc = var69;
{ /* Inline kernel#Int#> (var_gs,var_bc) */
/* Covariant cast for argument 0 (i) <var_bc:Int> isa OTHER */
/* <var_bc:Int> isa OTHER */
var74 = 1; /* easy <var_bc:Int> isa OTHER*/
if (!var74) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var77 = var_gs > var_bc;
var72 = var77;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
if (var72){
{ /* Inline kernel#Int#+ (var_j,var_gs) */
var80 = var_j + var_gs;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
var_j = var78;
} else {
{ /* Inline kernel#Int#+ (var_j,var_bc) */
var83 = var_j + var_bc;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var_j = var81;
}
}
CONTINUE_label84: (void)0;
}
BREAK_label84: (void)0;
var85 = 1;
{ /* Inline kernel#Int#unary - (var85) */
var88 = -var85;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var = var86;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
CHECK_NEW_string_search__Match(var8);
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
CHECK_NEW_array__Array(var1);
self->attrs[COLOR_string_search__BM_Pattern___gs].val = var1; /* _gs on <self:BM_Pattern> */
var3 = NEW_array__ArrayMap(&type_array__ArrayMapkernel__Charkernel__Int);
((void (*)(val*))(var3->class->vft[COLOR_array__ArrayMap__init]))(var3) /* init on <var3:ArrayMap[Char, Int]>*/;
CHECK_NEW_array__ArrayMap(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _bc_table", "lib/standard/string_search.nit", 126);
exit(1);
}
var3 = BOX_kernel__Char(var_e); /* autobox from Char to Object */
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var3) /* has_key on <var1:Map[Char, Int]>*/;
if (var2){
var4 = self->attrs[COLOR_string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _bc_table", "lib/standard/string_search.nit", 127);
exit(1);
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
short int var10 /* : Bool */;
val* var11 /* : Map[Char, Int] */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
var = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 141);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var10 = var_i < var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (!var7) break;
var11 = self->attrs[COLOR_string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _bc_table", "lib/standard/string_search.nit", 145);
exit(1);
}
var12 = ((val* (*)(val*, long))(var_x->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_x, var_i) /* [] on <var_x:String>*/;
{ /* Inline kernel#Int#- (var_m,var_i) */
var15 = var_m - var_i;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var16 = 1;
{ /* Inline kernel#Int#- (var13,var16) */
var19 = var13 - var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var20 = BOX_kernel__Int(var17); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var11, var12, var20) /* []= on <var11:Map[Char, Int]>*/;
var21 = 1;
{ /* Inline kernel#Int#+ (var_i,var21) */
var24 = var_i + var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var_i = var22;
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
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
long var26 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
long var37 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
long var45 /* : Int */;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
val* var57 /* : nullable Object */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
short int var71 /* : Bool */;
short int var_72 /* var : Bool */;
val* var73 /* : nullable Object */;
long var74 /* : Int */;
long var76 /* : Int */;
long var77 /* : Int */;
long var78 /* : Int */;
long var80 /* : Int */;
long var81 /* : Int */;
long var83 /* : Int */;
val* var84 /* : nullable Object */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
long var88 /* : Int */;
long var89 /* : Int */;
long var91 /* : Int */;
long var92 /* : Int */;
long var94 /* : Int */;
val* var95 /* : nullable Object */;
long var96 /* : Int */;
long var97 /* : Int */;
long var99 /* : Int */;
var1 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 152);
exit(1);
}
var_x = var1;
var2 = self->attrs[COLOR_string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Int);
var4 = BOX_kernel__Int(var_m); /* autobox from Int to nullable Object */
((void (*)(val*, val*, long))(var3->class->vft[COLOR_array__Array__filled_with]))(var3, var4, var_m) /* filled_with on <var3:Array[Int]>*/;
CHECK_NEW_array__Array(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var25 = var_i > var_g;
var20 = var25;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_ = var20;
if (var20){
{ /* Inline kernel#Int#+ (var_i,var_m) */
var28 = var_i + var_m;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var29 = 1;
{ /* Inline kernel#Int#- (var26,var29) */
var32 = var26 - var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
{ /* Inline kernel#Int#- (var30,var_f) */
var35 = var30 - var_f;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var36 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var33) /* [] on <var_suff:Array[Int]>*/;
{ /* Inline kernel#Int#- (var_i,var_g) */
var39 = var_i - var_g;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
{ /* Inline kernel#Int#< (var36,var37) */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var42 = 1; /* easy <var37:Int> isa OTHER*/
if (!var42) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var45 = ((struct instance_kernel__Int*)var36)->value; /* autounbox from nullable Object to Int */;
var46 = var45 < var37;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var19 = var40;
} else {
var19 = var_;
}
if (var19){
{ /* Inline kernel#Int#+ (var_i,var_m) */
var49 = var_i + var_m;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var50 = 1;
{ /* Inline kernel#Int#- (var47,var50) */
var53 = var47 - var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
{ /* Inline kernel#Int#- (var51,var_f) */
var56 = var51 - var_f;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var57 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var54) /* [] on <var_suff:Array[Int]>*/;
((void (*)(val*, long, val*))(var_suff->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_suff, var_i, var57) /* []= on <var_suff:Array[Int]>*/;
} else {
{ /* Inline kernel#Int#< (var_i,var_g) */
/* Covariant cast for argument 0 (i) <var_g:Int> isa OTHER */
/* <var_g:Int> isa OTHER */
var60 = 1; /* easy <var_g:Int> isa OTHER*/
if (!var60) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var63 = var_i < var_g;
var58 = var63;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
if (var58){
var_g = var_i;
} else {
}
var_f = var_i;
for(;;) {
var65 = 0;
{ /* Inline kernel#Int#>= (var_g,var65) */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (!var68) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var71 = var_g >= var65;
var66 = var71;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var_72 = var66;
if (var66){
var73 = ((val* (*)(val*, long))(var_x->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_x, var_g) /* [] on <var_x:String>*/;
{ /* Inline kernel#Int#+ (var_g,var_m) */
var76 = var_g + var_m;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var77 = 1;
{ /* Inline kernel#Int#- (var74,var77) */
var80 = var74 - var77;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
{ /* Inline kernel#Int#- (var78,var_f) */
var83 = var78 - var_f;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var84 = ((val* (*)(val*, long))(var_x->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_x, var81) /* [] on <var_x:String>*/;
{ /* Inline kernel#Char#== (var73,var84) */
var87 = var73 == var84 || (((struct instance_kernel__Char*)var73)->value == ((struct instance_kernel__Char*)var84)->value);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var64 = var85;
} else {
var64 = var_72;
}
if (!var64) break;
var88 = 1;
{ /* Inline kernel#Int#- (var_g,var88) */
var91 = var_g - var88;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var_g = var89;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#- (var_f,var_g) */
var94 = var_f - var_g;
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var95 = BOX_kernel__Int(var92); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var_suff->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_suff, var_i, var95) /* []= on <var_suff:Array[Int]>*/;
}
var96 = 1;
{ /* Inline kernel#Int#- (var_i,var96) */
var99 = var_i - var96;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var_i = var97;
CONTINUE_label100: (void)0;
}
BREAK_label100: (void)0;
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
short int var28 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
val* var37 /* : nullable Object */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
short int var58 /* : Bool */;
val* var59 /* : Array[Int] */;
val* var60 /* : nullable Object */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
long var64 /* : Int */;
val* var65 /* : Array[Int] */;
long var66 /* : Int */;
long var67 /* : Int */;
long var69 /* : Int */;
long var70 /* : Int */;
long var72 /* : Int */;
val* var73 /* : nullable Object */;
long var74 /* : Int */;
long var75 /* : Int */;
long var77 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
long var82 /* : Int */;
long var84 /* : Int */;
long var85 /* : Int */;
long var86 /* : Int */;
long var88 /* : Int */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
short int var94 /* : Bool */;
val* var95 /* : Array[Int] */;
long var96 /* : Int */;
long var97 /* : Int */;
long var99 /* : Int */;
val* var100 /* : nullable Object */;
long var101 /* : Int */;
long var103 /* : Int */;
long var104 /* : Int */;
long var105 /* : Int */;
long var106 /* : Int */;
long var108 /* : Int */;
long var109 /* : Int */;
long var111 /* : Int */;
val* var112 /* : nullable Object */;
long var113 /* : Int */;
long var114 /* : Int */;
long var116 /* : Int */;
var = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 175);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = var_i < var_m;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var8 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _gs", "lib/standard/string_search.nit", 180);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var28 = var_i >= var20;
var23 = var28;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (!var23) break;
var30 = 1;
{ /* Inline kernel#Int#unary - (var30) */
var33 = -var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
{ /* Inline kernel#Int#== (var_i,var31) */
var36 = var_i == var31;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var_ = var34;
if (var34){
var29 = var_;
} else {
var37 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var_i) /* [] on <var_suff:Array[Int]>*/;
var38 = 1;
{ /* Inline kernel#Int#+ (var_i,var38) */
var41 = var_i + var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
{ /* Inline kernel#Int#== (var37,var39) */
var44 = (var37 != NULL) && (var37->class == &class_kernel__Int);
if (var44) {
var45 = ((struct instance_kernel__Int*)var37)->value; /* autounbox from nullable Object to Int */;
var44 = (var45 == var39);
}
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var29 = var42;
}
if (var29){
for(;;) {
var46 = 1;
{ /* Inline kernel#Int#- (var_m,var46) */
var49 = var_m - var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
{ /* Inline kernel#Int#- (var47,var_i) */
var52 = var47 - var_i;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
{ /* Inline kernel#Int#< (var_j,var50) */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var55 = 1; /* easy <var50:Int> isa OTHER*/
if (!var55) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var58 = var_j < var50;
var53 = var58;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
if (!var53) break;
var59 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var59 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _gs", "lib/standard/string_search.nit", 188);
exit(1);
}
var60 = ((val* (*)(val*, long))(var59->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var59, var_j) /* [] on <var59:Array[Int]>*/;
{ /* Inline kernel#Int#== (var60,var_m) */
var63 = (var60 != NULL) && (var60->class == &class_kernel__Int);
if (var63) {
var64 = ((struct instance_kernel__Int*)var60)->value; /* autounbox from nullable Object to Int */;
var63 = (var64 == var_m);
}
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
if (var61){
var65 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var65 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _gs", "lib/standard/string_search.nit", 188);
exit(1);
}
var66 = 1;
{ /* Inline kernel#Int#- (var_m,var66) */
var69 = var_m - var66;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
{ /* Inline kernel#Int#- (var67,var_i) */
var72 = var67 - var_i;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var73 = BOX_kernel__Int(var70); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var65->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var65, var_j, var73) /* []= on <var65:Array[Int]>*/;
} else {
}
var74 = 1;
{ /* Inline kernel#Int#+ (var_j,var74) */
var77 = var_j + var74;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var_j = var75;
CONTINUE_label78: (void)0;
}
BREAK_label78: (void)0;
} else {
}
var79 = 1;
{ /* Inline kernel#Int#- (var_i,var79) */
var82 = var_i - var79;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var_i = var80;
CONTINUE_label83: (void)0;
}
BREAK_label83: (void)0;
var84 = 0;
var_i = var84;
for(;;) {
var85 = 1;
{ /* Inline kernel#Int#- (var_m,var85) */
var88 = var_m - var85;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
{ /* Inline kernel#Int#< (var_i,var86) */
/* Covariant cast for argument 0 (i) <var86:Int> isa OTHER */
/* <var86:Int> isa OTHER */
var91 = 1; /* easy <var86:Int> isa OTHER*/
if (!var91) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var94 = var_i < var86;
var89 = var94;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
if (!var89) break;
var95 = self->attrs[COLOR_string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (var95 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _gs", "lib/standard/string_search.nit", 196);
exit(1);
}
var96 = 1;
{ /* Inline kernel#Int#- (var_m,var96) */
var99 = var_m - var96;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var100 = ((val* (*)(val*, long))(var_suff->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_suff, var_i) /* [] on <var_suff:Array[Int]>*/;
{ /* Inline kernel#Int#- (var97,var100) */
var103 = ((struct instance_kernel__Int*)var100)->value; /* autounbox from nullable Object to Int */;
var104 = var97 - var103;
var101 = var104;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var105 = 1;
{ /* Inline kernel#Int#- (var_m,var105) */
var108 = var_m - var105;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
{ /* Inline kernel#Int#- (var106,var_i) */
var111 = var106 - var_i;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var112 = BOX_kernel__Int(var109); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var95->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var95, var101, var112) /* []= on <var95:Array[Int]>*/;
var113 = 1;
{ /* Inline kernel#Int#+ (var_i,var113) */
var116 = var_i + var113;
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var_i = var114;
CONTINUE_label117: (void)0;
}
BREAK_label117: (void)0;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 201);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 202);
exit(1);
}
var4 = self->attrs[COLOR_string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _motif", "lib/standard/string_search.nit", 202);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _string", "lib/standard/string_search.nit", 207);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _string", "lib/standard/string_search.nit", 221);
exit(1);
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
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
short int var21 /* : Bool */;
var_s = p0;
var_f = p1;
var_len = p2;
var = 0;
{ /* Inline kernel#Int#>= (var_len,var) */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var4 = var_len >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'positive_length\' failed", "lib/standard/string_search.nit", 226);
exit(1);
}
var5 = 0;
{ /* Inline kernel#Int#>= (var_f,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var11 = var_f >= var5;
var6 = var11;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'valid_from\' failed", "lib/standard/string_search.nit", 227);
exit(1);
}
{ /* Inline kernel#Int#+ (var_f,var_len) */
var14 = var_f + var_len;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var15 = ((long (*)(val*))(var_s->class->vft[COLOR_abstract_collection__Collection__length]))(var_s) /* length on <var_s:String>*/;
{ /* Inline kernel#Int#<= (var12,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var21 = var12 <= var15;
var16 = var21;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'valid_after\' failed", "lib/standard/string_search.nit", 228);
exit(1);
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
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
char var10 /* : Char */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var5 = var_from < var_stop;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
var6 = ((val* (*)(val*, long))(var_s->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_s, var_from) /* [] on <var_s:String>*/;
{ /* Inline kernel#Char#== (var6,self) */
var9 = (var6 != NULL) && (var6->class == &class_kernel__Char);
if (var9) {
var10 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var9 = (var10 == self);
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var = var_from;
goto RET_LABEL;
} else {
}
var11 = 1;
{ /* Inline kernel#Int#+ (var_from,var11) */
var14 = var_from + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_from = var12;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var15 = 1;
{ /* Inline kernel#Int#unary - (var15) */
var18 = -var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var = var16;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
CHECK_NEW_string_search__Match(var8);
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
short int var20 /* : Bool */;
long var21 /* : Int */;
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
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
var_s = p0;
var_from = p1;
var1 = 0;
{ /* Inline kernel#Int#>= (var_from,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/string_search.nit", 264);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var20 = var_from < var_stop;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
var21 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:String>*/;
var22 = 1;
{ /* Inline kernel#Int#- (var21,var22) */
var25 = var21 - var22;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var33 = var_i >= var27;
var28 = var33;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var_ = var28;
if (var28){
var34 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:String>*/;
{ /* Inline kernel#Int#+ (var_i,var_from) */
var37 = var_i + var_from;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var38 = ((val* (*)(val*, long))(var_s->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_s, var35) /* [] on <var_s:String>*/;
{ /* Inline kernel#Char#== (var34,var38) */
var41 = var34 == var38 || (((struct instance_kernel__Char*)var34)->value == ((struct instance_kernel__Char*)var38)->value);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var26 = var39;
} else {
var26 = var_;
}
if (!var26) break;
var42 = 1;
{ /* Inline kernel#Int#- (var_i,var42) */
var45 = var_i - var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var_i = var43;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var46 = 0;
{ /* Inline kernel#Int#< (var_i,var46) */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (!var49) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var52 = var_i < var46;
var47 = var52;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
if (var47){
var = var_from;
goto RET_LABEL;
} else {
}
var53 = 1;
{ /* Inline kernel#Int#+ (var_from,var53) */
var56 = var_from + var53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var_from = var54;
CONTINUE_label57: (void)0;
}
BREAK_label57: (void)0;
var58 = 1;
{ /* Inline kernel#Int#unary - (var58) */
var61 = -var58;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var = var59;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
CHECK_NEW_string_search__Match(var8);
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
CHECK_NEW_array__Array(var2);
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
char var1 /* : Char */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
char var4 /* : Char */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : Pattern */;
char var11 /* : Char */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
char var14 /* : Char */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : Pattern */;
char var22 /* : Char */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
char var25 /* : Char */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Pattern */;
char var33 /* : Char */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
char var36 /* : Char */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : Pattern */;
var_ret = self;
var1 = '&';
var3 = BOX_kernel__Char(var1); /* autobox from Char to nullable Object */
var2 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_abstract_collection__Collection__has]))(var_ret, var3) /* has on <var_ret:String>*/;
if (var2){
var4 = '&';
if (varonce) {
var5 = varonce;
} else {
var6 = "&amp;";
var7 = 5;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var10 = BOX_kernel__Char(var4); /* autobox from Char to Pattern */
var9 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var10, var5) /* replace on <var_ret:String>*/;
var_ret = var9;
} else {
}
var11 = '<';
var13 = BOX_kernel__Char(var11); /* autobox from Char to nullable Object */
var12 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_abstract_collection__Collection__has]))(var_ret, var13) /* has on <var_ret:String>*/;
if (var12){
var14 = '<';
if (varonce15) {
var16 = varonce15;
} else {
var17 = "&lt;";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var21 = BOX_kernel__Char(var14); /* autobox from Char to Pattern */
var20 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var21, var16) /* replace on <var_ret:String>*/;
var_ret = var20;
} else {
}
var22 = '>';
var24 = BOX_kernel__Char(var22); /* autobox from Char to nullable Object */
var23 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_abstract_collection__Collection__has]))(var_ret, var24) /* has on <var_ret:String>*/;
if (var23){
var25 = '>';
if (varonce26) {
var27 = varonce26;
} else {
var28 = "&gt;";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var32 = BOX_kernel__Char(var25); /* autobox from Char to Pattern */
var31 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var32, var27) /* replace on <var_ret:String>*/;
var_ret = var31;
} else {
}
var33 = '\"';
var35 = BOX_kernel__Char(var33); /* autobox from Char to nullable Object */
var34 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_abstract_collection__Collection__has]))(var_ret, var35) /* has on <var_ret:String>*/;
if (var34){
var36 = '\"';
if (varonce37) {
var38 = varonce37;
} else {
var39 = "&quot;";
var40 = 6;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var43 = BOX_kernel__Char(var36); /* autobox from Char to Pattern */
var42 = ((val* (*)(val*, val*, val*))(var_ret->class->vft[COLOR_string_search__String__replace]))(var_ret, var43, var38) /* replace on <var_ret:String>*/;
var_ret = var42;
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
