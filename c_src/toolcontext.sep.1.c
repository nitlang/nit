#include "toolcontext.sep.0.h"
/* method toolcontext#Message#location for (self: Message): nullable Location */
val* toolcontext__Message__location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_toolcontext__Message___64dlocation].val; /* @location on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#location for (self: Object): nullable Location */
val* VIRTUAL_toolcontext__Message__location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = toolcontext__Message__location(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#location= for (self: Message, nullable Location) */
void toolcontext__Message__location_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__Message___64dlocation].val = p0; /* @location on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#location= for (self: Object, nullable Location) */
void VIRTUAL_toolcontext__Message__location_61d(val* self, val* p0) {
toolcontext__Message__location_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#Message#text for (self: Message): String */
val* toolcontext__Message__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_toolcontext__Message___64dtext].val; /* @text on <self:Message> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @text");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 30);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#text for (self: Object): String */
val* VIRTUAL_toolcontext__Message__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__Message__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#text= for (self: Message, String) */
void toolcontext__Message__text_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__Message___64dtext].val = p0; /* @text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#text= for (self: Object, String) */
void VIRTUAL_toolcontext__Message__text_61d(val* self, val* p0) {
toolcontext__Message__text_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#Message#< for (self: Message, Message): Bool */
short int toolcontext__Message___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Message */;
val* var2 /* : nullable Location */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Location */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Location */;
val* var11 /* : nullable Location */;
short int var12 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Message> isa OTHER */
/* <p0:Message> isa OTHER */
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
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 32);
show_backtrace(1);
}
var_other = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__location]))(self) /* location on <self:Message>*/;
var3 = NULL;
if (var2 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(var_other->class->vft[COLOR_toolcontext__Message__location]))(var_other) /* location on <var_other:Message>*/;
var7 = NULL;
if (var6 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
var9 = 0;
var = var9;
goto RET_LABEL;
} else {
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__location]))(self) /* location on <self:Message>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 37);
show_backtrace(1);
}
var11 = ((val* (*)(val*))(var_other->class->vft[COLOR_toolcontext__Message__location]))(var_other) /* location on <var_other:Message>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 37);
show_backtrace(1);
}
var12 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Comparable___60d]))(var10, var11) /* < on <var10:nullable Location(Location)>*/;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#< for (self: Object, Comparable): Bool */
short int VIRTUAL_toolcontext__Message___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = toolcontext__Message___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_s for (self: Message): String */
val* toolcontext__Message__to_s(val* self) {
val* var /* : String */;
val* var1 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__location]))(self) /* location on <self:Message>*/;
var_l = var1;
var2 = NULL;
if (var_l == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__text]))(self) /* text on <self:Message>*/;
var = var4;
goto RET_LABEL;
} else {
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
var6 = 5;
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
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_l) /* add on <var_:Array[Object]>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = ": ";
var14 = 2;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
var16 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__text]))(self) /* text on <self:Message>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "";
var20 = 0;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var18) /* add on <var_:Array[Object]>*/;
var22 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var22;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_s for (self: Object): String */
val* VIRTUAL_toolcontext__Message__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__Message__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_color_string for (self: Message): String */
val* toolcontext__Message__to_color_string(val* self) {
val* var /* : String */;
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
val* var_red /* var red: String */;
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
val* var32 /* : String */;
val* var_bred /* var bred: String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var_35 /* var : Array[Object] */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
val* var41 /* : nullable Object */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var_green /* var green: String */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var_50 /* var : Array[Object] */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : nullable Object */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var_yellow /* var yellow: String */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var_65 /* var : Array[Object] */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : nullable Object */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var_def /* var def: String */;
val* var78 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
val* var79 /* : null */;
short int var80 /* : Bool */;
val* var81 /* : String */;
val* var82 /* : nullable SourceFile */;
val* var83 /* : null */;
short int var84 /* : Bool */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var_87 /* var : Array[Object] */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var_117 /* var : Array[Object] */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
val* var155 /* : String */;
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
var14 = "[0;31m";
var15 = 6;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_red = var17;
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
var19 = 3;
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
var29 = "[1;31m";
var30 = 6;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
((void (*)(val*, val*))(var_20->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_20, var28) /* add on <var_20:Array[Object]>*/;
var32 = ((val* (*)(val*))(var_20->class->vft[COLOR_string__Object__to_s]))(var_20) /* to_s on <var_20:Array[Object]>*/;
var_bred = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
var34 = 3;
((void (*)(val*, long))(var33->class->vft[COLOR_array__Array__with_capacity]))(var33, var34) /* with_capacity on <var33:Array[Object]>*/;
var_35 = var33;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "";
var39 = 0;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(var_35->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_35, var37) /* add on <var_35:Array[Object]>*/;
var41 = BOX_kernel__Char(var_esc); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_35->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_35, var41) /* add on <var_35:Array[Object]>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "[0;32m";
var45 = 6;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
((void (*)(val*, val*))(var_35->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_35, var43) /* add on <var_35:Array[Object]>*/;
var47 = ((val* (*)(val*))(var_35->class->vft[COLOR_string__Object__to_s]))(var_35) /* to_s on <var_35:Array[Object]>*/;
var_green = var47;
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
var49 = 3;
((void (*)(val*, long))(var48->class->vft[COLOR_array__Array__with_capacity]))(var48, var49) /* with_capacity on <var48:Array[Object]>*/;
var_50 = var48;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "";
var54 = 0;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
((void (*)(val*, val*))(var_50->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_50, var52) /* add on <var_50:Array[Object]>*/;
var56 = BOX_kernel__Char(var_esc); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_50->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_50, var56) /* add on <var_50:Array[Object]>*/;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "[0;33m";
var60 = 6;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
((void (*)(val*, val*))(var_50->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_50, var58) /* add on <var_50:Array[Object]>*/;
var62 = ((val* (*)(val*))(var_50->class->vft[COLOR_string__Object__to_s]))(var_50) /* to_s on <var_50:Array[Object]>*/;
var_yellow = var62;
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
var64 = 3;
((void (*)(val*, long))(var63->class->vft[COLOR_array__Array__with_capacity]))(var63, var64) /* with_capacity on <var63:Array[Object]>*/;
var_65 = var63;
if (varonce66) {
var67 = varonce66;
} else {
var68 = "";
var69 = 0;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
((void (*)(val*, val*))(var_65->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_65, var67) /* add on <var_65:Array[Object]>*/;
var71 = BOX_kernel__Char(var_esc); /* autobox from Char to nullable Object */
((void (*)(val*, val*))(var_65->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_65, var71) /* add on <var_65:Array[Object]>*/;
if (varonce72) {
var73 = varonce72;
} else {
var74 = "[0m";
var75 = 3;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
((void (*)(val*, val*))(var_65->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_65, var73) /* add on <var_65:Array[Object]>*/;
var77 = ((val* (*)(val*))(var_65->class->vft[COLOR_string__Object__to_s]))(var_65) /* to_s on <var_65:Array[Object]>*/;
var_def = var77;
var78 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__location]))(self) /* location on <self:Message>*/;
var_l = var78;
var79 = NULL;
if (var_l == NULL) {
var80 = 1; /* is null */
} else {
var80 = 0; /* arg is null but recv is not */
}
if (var80){
var81 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__text]))(self) /* text on <self:Message>*/;
var = var81;
goto RET_LABEL;
} else {
var82 = ((val* (*)(val*))(var_l->class->vft[COLOR_location__Location__file]))(var_l) /* file on <var_l:nullable Location(Location)>*/;
var83 = NULL;
if (var82 == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (var84){
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
var86 = 9;
((void (*)(val*, long))(var85->class->vft[COLOR_array__Array__with_capacity]))(var85, var86) /* with_capacity on <var85:Array[Object]>*/;
var_87 = var85;
if (varonce88) {
var89 = varonce88;
} else {
var90 = "";
var91 = 0;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var89) /* add on <var_87:Array[Object]>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var_yellow) /* add on <var_87:Array[Object]>*/;
if (varonce93) {
var94 = varonce93;
} else {
var95 = "";
var96 = 0;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var94) /* add on <var_87:Array[Object]>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var_l) /* add on <var_87:Array[Object]>*/;
if (varonce98) {
var99 = varonce98;
} else {
var100 = "";
var101 = 0;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var99) /* add on <var_87:Array[Object]>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var_def) /* add on <var_87:Array[Object]>*/;
if (varonce103) {
var104 = varonce103;
} else {
var105 = ": ";
var106 = 2;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var104) /* add on <var_87:Array[Object]>*/;
var108 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__text]))(self) /* text on <self:Message>*/;
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var108) /* add on <var_87:Array[Object]>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = "";
var112 = 0;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
((void (*)(val*, val*))(var_87->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_87, var110) /* add on <var_87:Array[Object]>*/;
var114 = ((val* (*)(val*))(var_87->class->vft[COLOR_string__Object__to_s]))(var_87) /* to_s on <var_87:Array[Object]>*/;
var = var114;
goto RET_LABEL;
} else {
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
var116 = 11;
((void (*)(val*, long))(var115->class->vft[COLOR_array__Array__with_capacity]))(var115, var116) /* with_capacity on <var115:Array[Object]>*/;
var_117 = var115;
if (varonce118) {
var119 = varonce118;
} else {
var120 = "";
var121 = 0;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var119) /* add on <var_117:Array[Object]>*/;
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var_yellow) /* add on <var_117:Array[Object]>*/;
if (varonce123) {
var124 = varonce123;
} else {
var125 = "";
var126 = 0;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var124) /* add on <var_117:Array[Object]>*/;
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var_l) /* add on <var_117:Array[Object]>*/;
if (varonce128) {
var129 = varonce128;
} else {
var130 = "";
var131 = 0;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var129) /* add on <var_117:Array[Object]>*/;
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var_def) /* add on <var_117:Array[Object]>*/;
if (varonce133) {
var134 = varonce133;
} else {
var135 = ": ";
var136 = 2;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var134) /* add on <var_117:Array[Object]>*/;
var138 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__Message__text]))(self) /* text on <self:Message>*/;
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var138) /* add on <var_117:Array[Object]>*/;
if (varonce139) {
var140 = varonce139;
} else {
var141 = "\n";
var142 = 1;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var140) /* add on <var_117:Array[Object]>*/;
if (varonce144) {
var145 = varonce144;
} else {
var146 = "1;31";
var147 = 4;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = ((val* (*)(val*, val*))(var_l->class->vft[COLOR_location__Location__colored_line]))(var_l, var145) /* colored_line on <var_l:nullable Location(Location)>*/;
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var149) /* add on <var_117:Array[Object]>*/;
if (varonce150) {
var151 = varonce150;
} else {
var152 = "";
var153 = 0;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
((void (*)(val*, val*))(var_117->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_117, var151) /* add on <var_117:Array[Object]>*/;
var155 = ((val* (*)(val*))(var_117->class->vft[COLOR_string__Object__to_s]))(var_117) /* to_s on <var_117:Array[Object]>*/;
var = var155;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_color_string for (self: Object): String */
val* VIRTUAL_toolcontext__Message__to_color_string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__Message__to_color_string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#init for (self: Message, nullable Location, String) */
void toolcontext__Message__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_toolcontext__Message___64dlocation].val = p0; /* @location on <self:Message> */
self->attrs[COLOR_toolcontext__Message___64dtext].val = p1; /* @text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#init for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__Message__init(val* self, val* p0, val* p1) {
toolcontext__Message__init(self, p0, p1);
RET_LABEL:;
}
/* method toolcontext#ToolContext#error_count for (self: ToolContext): Int */
long toolcontext__ToolContext__error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64derror_count].l; /* @error_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#error_count for (self: Object): Int */
long VIRTUAL_toolcontext__ToolContext__error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = toolcontext__ToolContext__error_count(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#error_count= for (self: ToolContext, Int) */
void toolcontext__ToolContext__error_count_61d(val* self, long p0) {
self->attrs[COLOR_toolcontext__ToolContext___64derror_count].l = p0; /* @error_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#error_count= for (self: Object, Int) */
void VIRTUAL_toolcontext__ToolContext__error_count_61d(val* self, long p0) {
toolcontext__ToolContext__error_count_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_count for (self: ToolContext): Int */
long toolcontext__ToolContext__warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dwarning_count].l; /* @warning_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_count for (self: Object): Int */
long VIRTUAL_toolcontext__ToolContext__warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = toolcontext__ToolContext__warning_count(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_count= for (self: ToolContext, Int) */
void toolcontext__ToolContext__warning_count_61d(val* self, long p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dwarning_count].l = p0; /* @warning_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_count= for (self: Object, Int) */
void VIRTUAL_toolcontext__ToolContext__warning_count_61d(val* self, long p0) {
toolcontext__ToolContext__warning_count_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_directory for (self: ToolContext): String */
val* toolcontext__ToolContext__log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dlog_directory].val; /* @log_directory on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @log_directory");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 78);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_directory for (self: Object): String */
val* VIRTUAL_toolcontext__ToolContext__log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__ToolContext__log_directory(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_directory= for (self: ToolContext, String) */
void toolcontext__ToolContext__log_directory_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dlog_directory].val = p0; /* @log_directory on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_directory= for (self: Object, String) */
void VIRTUAL_toolcontext__ToolContext__log_directory_61d(val* self, val* p0) {
toolcontext__ToolContext__log_directory_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#messages for (self: ToolContext): Array[Message] */
val* toolcontext__ToolContext__messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dmessages].val; /* @messages on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @messages");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 81);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#messages for (self: Object): Array[Message] */
val* VIRTUAL_toolcontext__ToolContext__messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = toolcontext__ToolContext__messages(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#messages= for (self: ToolContext, Array[Message]) */
void toolcontext__ToolContext__messages_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dmessages].val = p0; /* @messages on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#messages= for (self: Object, Array[Message]) */
void VIRTUAL_toolcontext__ToolContext__messages_61d(val* self, val* p0) {
toolcontext__ToolContext__messages_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#message_sorter for (self: ToolContext): ComparableSorter[Message] */
val* toolcontext__ToolContext__message_sorter(val* self) {
val* var /* : ComparableSorter[Message] */;
val* var1 /* : ComparableSorter[Message] */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dmessage_sorter].val; /* @message_sorter on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @message_sorter");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 83);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter for (self: Object): ComparableSorter[Message] */
val* VIRTUAL_toolcontext__ToolContext__message_sorter(val* self) {
val* var /* : ComparableSorter[Message] */;
val* var1 /* : ComparableSorter[Message] */;
var1 = toolcontext__ToolContext__message_sorter(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter= for (self: ToolContext, ComparableSorter[Message]) */
void toolcontext__ToolContext__message_sorter_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dmessage_sorter].val = p0; /* @message_sorter on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#message_sorter= for (self: Object, ComparableSorter[Message]) */
void VIRTUAL_toolcontext__ToolContext__message_sorter_61d(val* self, val* p0) {
toolcontext__ToolContext__message_sorter_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#check_errors for (self: ToolContext) */
void toolcontext__ToolContext__check_errors(val* self) {
val* var /* : Array[Message] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : ComparableSorter[Message] */;
val* var8 /* : Array[Message] */;
val* var9 /* : Array[Message] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_m /* var m: Message */;
val* var13 /* : OptionBool */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
val* var16 /* : OFStream */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
val* var25 /* : OFStream */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : Array[Message] */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
short int var45 /* : Bool */;
long var46 /* : Int */;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__messages]))(self) /* messages on <self:ToolContext>*/;
var1 = ((long (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__length]))(var) /* length on <var:Array[Message]>*/;
var2 = 0;
{ /* Inline kernel#Int#> (var1,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var6 = var1 > var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__message_sorter]))(self) /* message_sorter on <self:ToolContext>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__messages]))(self) /* messages on <self:ToolContext>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_sorter__AbstractSorter__sort]))(var7, var8) /* sort on <var7:ComparableSorter[Message]>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__messages]))(self) /* messages on <self:ToolContext>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Array[Message]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_m = var12;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_no_color]))(self) /* opt_no_color on <self:ToolContext>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_opts__Option__value]))(var13) /* value on <var13:OptionBool>*/;
var15 = ((struct instance_kernel__Bool*)var14)->value; /* autounbox from nullable Object to Bool */;
if (var15){
var16 = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__stderr]))(self) /* stderr on <self:ToolContext>*/;
if (varonce) {
var17 = varonce;
} else {
var18 = "\n";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 2;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var_m;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
((void (*)(val*, val*))(var16->class->vft[COLOR_stream__OStream__write]))(var16, var24) /* write on <var16:OFStream>*/;
} else {
var25 = ((val* (*)(val*))(self->class->vft[COLOR_file__Object__stderr]))(self) /* stderr on <self:ToolContext>*/;
var26 = ((val* (*)(val*))(var_m->class->vft[COLOR_toolcontext__Message__to_color_string]))(var_m) /* to_color_string on <var_m:Message>*/;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\n";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 2;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(var25->class->vft[COLOR_stream__OStream__write]))(var25, var35) /* write on <var25:OFStream>*/;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var36 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__messages]))(self) /* messages on <self:ToolContext>*/;
((void (*)(val*))(var36->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var36) /* clear on <var36:Array[Message]>*/;
} else {
}
var37 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__error_count]))(self) /* error_count on <self:ToolContext>*/;
var38 = 0;
{ /* Inline kernel#Int#> (var37,var38) */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (!var41) {
var_class_name44 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var45 = var37 > var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
if (var39){
var46 = 1;
((void (*)(val*, long))(self->class->vft[COLOR_kernel__Object__exit]))(self, var46) /* exit on <self:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#check_errors for (self: Object) */
void VIRTUAL_toolcontext__ToolContext__check_errors(val* self) {
toolcontext__ToolContext__check_errors(self);
RET_LABEL:;
}
/* method toolcontext#ToolContext#error for (self: ToolContext, nullable Location, String) */
void toolcontext__ToolContext__error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var /* : Array[Message] */;
val* var1 /* : Message */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
val* var7 /* : OptionBool */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
var_l = p0;
var_s = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__messages]))(self) /* messages on <self:ToolContext>*/;
var1 = NEW_toolcontext__Message(&type_toolcontext__Message);
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_toolcontext__Message__init]))(var1, var_l, var_s) /* init on <var1:Message>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, var1) /* add on <var:Array[Message]>*/;
var2 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__error_count]))(self) /* error_count on <self:ToolContext>*/;
var3 = 1;
{ /* Inline kernel#Int#+ (var2,var3) */
var6 = var2 + var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__error_count_61d]))(self, var4) /* error_count= on <self:ToolContext>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_stop_on_first_error]))(self) /* opt_stop_on_first_error on <self:ToolContext>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_opts__Option__value]))(var7) /* value on <var7:OptionBool>*/;
var9 = ((struct instance_kernel__Bool*)var8)->value; /* autounbox from nullable Object to Bool */;
if (var9){
((void (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(self) /* check_errors on <self:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__ToolContext__error(val* self, val* p0, val* p1) {
toolcontext__ToolContext__error(self, p0, p1);
RET_LABEL:;
}
/* method toolcontext#ToolContext#fatal_error for (self: ToolContext, nullable Location, String) */
void toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
var_l = p0;
var_s = p1;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__error]))(self, var_l, var_s) /* error on <self:ToolContext>*/;
((void (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(self) /* check_errors on <self:ToolContext>*/;
RET_LABEL:;
}
/* method toolcontext#ToolContext#fatal_error for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1) {
toolcontext__ToolContext__fatal_error(self, p0, p1);
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: ToolContext, nullable Location, String) */
void toolcontext__ToolContext__warning(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var /* : OptionCount */;
val* var1 /* : nullable Object */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
val* var7 /* : Array[Message] */;
val* var8 /* : Message */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
val* var14 /* : OptionBool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
var_l = p0;
var_s = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_warn]))(self) /* opt_warn on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_opts__Option__value]))(var) /* value on <var:OptionCount>*/;
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = (var1 != NULL) && (var1->class == &class_kernel__Int);
if (var5) {
var6 = ((struct instance_kernel__Int*)var1)->value; /* autounbox from nullable Object to Int */;
var5 = (var6 == var2);
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__messages]))(self) /* messages on <self:ToolContext>*/;
var8 = NEW_toolcontext__Message(&type_toolcontext__Message);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_toolcontext__Message__init]))(var8, var_l, var_s) /* init on <var8:Message>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var8) /* add on <var7:Array[Message]>*/;
var9 = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__warning_count]))(self) /* warning_count on <self:ToolContext>*/;
var10 = 1;
{ /* Inline kernel#Int#+ (var9,var10) */
var13 = var9 + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__warning_count_61d]))(self, var11) /* warning_count= on <self:ToolContext>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_stop_on_first_error]))(self) /* opt_stop_on_first_error on <self:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionBool>*/;
var16 = ((struct instance_kernel__Bool*)var15)->value; /* autounbox from nullable Object to Bool */;
if (var16){
((void (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__check_errors]))(self) /* check_errors on <self:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__ToolContext__warning(val* self, val* p0, val* p1) {
toolcontext__ToolContext__warning(self, p0, p1);
RET_LABEL:;
}
/* method toolcontext#ToolContext#info for (self: ToolContext, String, Int) */
void toolcontext__ToolContext__info(val* self, val* p0, long p1) {
val* var_s /* var s: String */;
long var_level /* var level: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
var_s = p0;
var_level = p1;
var = ((long (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__verbose_level]))(self) /* verbose_level on <self:ToolContext>*/;
{ /* Inline kernel#Int#<= (var_level,var) */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (!var3) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var4 = var_level <= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (var1){
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 1;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var_s;
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var8) /* print on <self:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#info for (self: Object, String, Int) */
void VIRTUAL_toolcontext__ToolContext__info(val* self, val* p0, long p1) {
toolcontext__ToolContext__info(self, p0, p1);
RET_LABEL:;
}
/* method toolcontext#ToolContext#option_context for (self: ToolContext): OptionContext */
val* toolcontext__ToolContext__option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64doption_context].val; /* @option_context on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @option_context");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 136);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#option_context for (self: Object): OptionContext */
val* VIRTUAL_toolcontext__ToolContext__option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
var1 = toolcontext__ToolContext__option_context(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#option_context= for (self: ToolContext, OptionContext) */
void toolcontext__ToolContext__option_context_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64doption_context].val = p0; /* @option_context on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#option_context= for (self: Object, OptionContext) */
void VIRTUAL_toolcontext__ToolContext__option_context_61d(val* self, val* p0) {
toolcontext__ToolContext__option_context_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_warn for (self: ToolContext): OptionCount */
val* toolcontext__ToolContext__opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_warn].val; /* @opt_warn on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_warn");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 139);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warn for (self: Object): OptionCount */
val* VIRTUAL_toolcontext__ToolContext__opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = toolcontext__ToolContext__opt_warn(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warn= for (self: ToolContext, OptionCount) */
void toolcontext__ToolContext__opt_warn_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_warn].val = p0; /* @opt_warn on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_warn= for (self: Object, OptionCount) */
void VIRTUAL_toolcontext__ToolContext__opt_warn_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_warn_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_quiet for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_quiet].val; /* @opt_quiet on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_quiet");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 142);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_quiet for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = toolcontext__ToolContext__opt_quiet(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_quiet= for (self: ToolContext, OptionBool) */
void toolcontext__ToolContext__opt_quiet_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_quiet].val = p0; /* @opt_quiet on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_quiet= for (self: Object, OptionBool) */
void VIRTUAL_toolcontext__ToolContext__opt_quiet_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_quiet_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_log for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_log].val; /* @opt_log on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_log");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 145);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = toolcontext__ToolContext__opt_log(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log= for (self: ToolContext, OptionBool) */
void toolcontext__ToolContext__opt_log_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_log].val = p0; /* @opt_log on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_log= for (self: Object, OptionBool) */
void VIRTUAL_toolcontext__ToolContext__opt_log_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_log_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_log_dir for (self: ToolContext): OptionString */
val* toolcontext__ToolContext__opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_log_dir].val; /* @opt_log_dir on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_log_dir");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 148);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log_dir for (self: Object): OptionString */
val* VIRTUAL_toolcontext__ToolContext__opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = toolcontext__ToolContext__opt_log_dir(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log_dir= for (self: ToolContext, OptionString) */
void toolcontext__ToolContext__opt_log_dir_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_log_dir].val = p0; /* @opt_log_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_log_dir= for (self: Object, OptionString) */
void VIRTUAL_toolcontext__ToolContext__opt_log_dir_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_log_dir_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_help for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_help].val; /* @opt_help on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_help");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 151);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_help for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = toolcontext__ToolContext__opt_help(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_help= for (self: ToolContext, OptionBool) */
void toolcontext__ToolContext__opt_help_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_help].val = p0; /* @opt_help on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_help= for (self: Object, OptionBool) */
void VIRTUAL_toolcontext__ToolContext__opt_help_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_help_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_version for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_version].val; /* @opt_version on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_version");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 154);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_version for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = toolcontext__ToolContext__opt_version(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_version= for (self: ToolContext, OptionBool) */
void toolcontext__ToolContext__opt_version_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_version].val = p0; /* @opt_version on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_version= for (self: Object, OptionBool) */
void VIRTUAL_toolcontext__ToolContext__opt_version_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_version_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_verbose for (self: ToolContext): OptionCount */
val* toolcontext__ToolContext__opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_verbose].val; /* @opt_verbose on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_verbose");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 157);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_verbose for (self: Object): OptionCount */
val* VIRTUAL_toolcontext__ToolContext__opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = toolcontext__ToolContext__opt_verbose(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_verbose= for (self: ToolContext, OptionCount) */
void toolcontext__ToolContext__opt_verbose_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_verbose].val = p0; /* @opt_verbose on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_verbose= for (self: Object, OptionCount) */
void VIRTUAL_toolcontext__ToolContext__opt_verbose_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_verbose_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_stop_on_first_error].val; /* @opt_stop_on_first_error on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_stop_on_first_error");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 160);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = toolcontext__ToolContext__opt_stop_on_first_error(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error= for (self: ToolContext, OptionBool) */
void toolcontext__ToolContext__opt_stop_on_first_error_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_stop_on_first_error].val = p0; /* @opt_stop_on_first_error on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error= for (self: Object, OptionBool) */
void VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_stop_on_first_error_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_no_color for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dopt_no_color].val; /* @opt_no_color on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @opt_no_color");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 163);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_no_color for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = toolcontext__ToolContext__opt_no_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_no_color= for (self: ToolContext, OptionBool) */
void toolcontext__ToolContext__opt_no_color_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dopt_no_color].val = p0; /* @opt_no_color on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#opt_no_color= for (self: Object, OptionBool) */
void VIRTUAL_toolcontext__ToolContext__opt_no_color_61d(val* self, val* p0) {
toolcontext__ToolContext__opt_no_color_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#verbose_level for (self: ToolContext): Int */
long toolcontext__ToolContext__verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___64dverbose_level].l; /* @verbose_level on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level for (self: Object): Int */
long VIRTUAL_toolcontext__ToolContext__verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = toolcontext__ToolContext__verbose_level(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level= for (self: ToolContext, Int) */
void toolcontext__ToolContext__verbose_level_61d(val* self, long p0) {
self->attrs[COLOR_toolcontext__ToolContext___64dverbose_level].l = p0; /* @verbose_level on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#verbose_level= for (self: Object, Int) */
void VIRTUAL_toolcontext__ToolContext__verbose_level_61d(val* self, long p0) {
toolcontext__ToolContext__verbose_level_61d(self, p0);
RET_LABEL:;
}
/* method toolcontext#ToolContext#init for (self: ToolContext) */
void toolcontext__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionCount */;
val* var2 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : OptionString */;
val* var7 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionCount */;
val* var10 /* : Array[Option] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Option] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_warn]))(self) /* opt_warn on <self:ToolContext>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_quiet]))(self) /* opt_quiet on <self:ToolContext>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_stop_on_first_error]))(self) /* opt_stop_on_first_error on <self:ToolContext>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_no_color]))(self) /* opt_no_color on <self:ToolContext>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_log]))(self) /* opt_log on <self:ToolContext>*/;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_log_dir]))(self) /* opt_log_dir on <self:ToolContext>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_help]))(self) /* opt_help on <self:ToolContext>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_version]))(self) /* opt_version on <self:ToolContext>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_verbose]))(self) /* opt_verbose on <self:ToolContext>*/;
var10 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var10 = array_instance Array[Option] */
var11 = 9;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var3;
((struct instance_array__NativeArray*)var12)->values[3] = (val*) var4;
((struct instance_array__NativeArray*)var12)->values[4] = (val*) var5;
((struct instance_array__NativeArray*)var12)->values[5] = (val*) var6;
((struct instance_array__NativeArray*)var12)->values[6] = (val*) var7;
((struct instance_array__NativeArray*)var12)->values[7] = (val*) var8;
((struct instance_array__NativeArray*)var12)->values[8] = (val*) var9;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Option]>*/;
}
((void (*)(val*, val*))(var->class->vft[COLOR_opts__OptionContext__add_option]))(var, var10) /* add_option on <var:OptionContext>*/;
RET_LABEL:;
}
/* method toolcontext#ToolContext#init for (self: Object) */
void VIRTUAL_toolcontext__ToolContext__init(val* self) {
toolcontext__ToolContext__init(self);
RET_LABEL:;
}
/* method toolcontext#ToolContext#process_options for (self: ToolContext) */
void toolcontext__ToolContext__process_options(val* self) {
val* var /* : OptionCount */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
val* var3 /* : OptionContext */;
val* var4 /* : Sequence[String] */;
val* var5 /* : OptionCount */;
val* var6 /* : nullable Object */;
long var7 /* : Int */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : OptionCount */;
long var12 /* : Int */;
val* var13 /* : nullable Object */;
val* var14 /* : OptionString */;
val* var15 /* : nullable Object */;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : OptionString */;
val* var19 /* : nullable Object */;
val* var20 /* : OptionBool */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
val* var23 /* : String */;
var = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_warn]))(self) /* opt_warn on <self:ToolContext>*/;
var1 = 1;
var2 = BOX_kernel__Int(var1); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var->class->vft[COLOR_opts__Option__value_61d]))(var, var2) /* value= on <var:OptionCount>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__option_context]))(self) /* option_context on <self:ToolContext>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__args]))(self) /* args on <self:ToolContext>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_opts__OptionContext__parse]))(var3, var4) /* parse on <var3:OptionContext>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_verbose]))(self) /* opt_verbose on <self:ToolContext>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_opts__Option__value]))(var5) /* value on <var5:OptionCount>*/;
var7 = ((struct instance_kernel__Int*)var6)->value; /* autounbox from nullable Object to Int */;
((void (*)(val*, long))(self->class->vft[COLOR_toolcontext__ToolContext__verbose_level_61d]))(self, var7) /* verbose_level= on <self:ToolContext>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_quiet]))(self) /* opt_quiet on <self:ToolContext>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_opts__Option__value]))(var8) /* value on <var8:OptionBool>*/;
var10 = ((struct instance_kernel__Bool*)var9)->value; /* autounbox from nullable Object to Bool */;
if (var10){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_warn]))(self) /* opt_warn on <self:ToolContext>*/;
var12 = 0;
var13 = BOX_kernel__Int(var12); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var11->class->vft[COLOR_opts__Option__value_61d]))(var11, var13) /* value= on <var11:OptionCount>*/;
} else {
}
var14 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_log_dir]))(self) /* opt_log_dir on <self:ToolContext>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_opts__Option__value]))(var14) /* value on <var14:OptionString>*/;
var16 = NULL;
if (var15 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
var18 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_log_dir]))(self) /* opt_log_dir on <self:ToolContext>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_opts__Option__value]))(var18) /* value on <var18:OptionString>*/;
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/toolcontext.nit", 187);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__log_directory_61d]))(self, var19) /* log_directory= on <self:ToolContext>*/;
} else {
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__opt_log]))(self) /* opt_log on <self:ToolContext>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_opts__Option__value]))(var20) /* value on <var20:OptionBool>*/;
var22 = ((struct instance_kernel__Bool*)var21)->value; /* autounbox from nullable Object to Bool */;
if (var22){
var23 = ((val* (*)(val*))(self->class->vft[COLOR_toolcontext__ToolContext__log_directory]))(self) /* log_directory on <self:ToolContext>*/;
((void (*)(val*))(var23->class->vft[COLOR_file__String__mkdir]))(var23) /* mkdir on <var23:String>*/;
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#process_options for (self: Object) */
void VIRTUAL_toolcontext__ToolContext__process_options(val* self) {
toolcontext__ToolContext__process_options(self);
RET_LABEL:;
}
