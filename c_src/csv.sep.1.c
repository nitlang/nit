#include "csv.sep.0.h"
/* method csv#CSVDocument#header for (self: CSVDocument): Array[String] */
val* csv__CSVDocument__header(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_csv__CSVDocument___64dheader].val; /* @header on <self:CSVDocument> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @header");
fprintf(stderr, " (%s:%d)\n", "lib/csv.nit", 20);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CSVDocument#header for (self: Object): Array[String] */
val* VIRTUAL_csv__CSVDocument__header(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = csv__CSVDocument__header(self);
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CSVDocument#header= for (self: CSVDocument, Array[String]) */
void csv__CSVDocument__header_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CSVDocument___64dheader].val = p0; /* @header on <self:CSVDocument> */
RET_LABEL:;
}
/* method csv#CSVDocument#header= for (self: Object, Array[String]) */
void VIRTUAL_csv__CSVDocument__header_61d(val* self, val* p0) {
csv__CSVDocument__header_61d(self, p0);
RET_LABEL:;
}
/* method csv#CSVDocument#lines for (self: CSVDocument): Array[Array[String]] */
val* csv__CSVDocument__lines(val* self) {
val* var /* : Array[Array[String]] */;
val* var1 /* : Array[Array[String]] */;
var1 = self->attrs[COLOR_csv__CSVDocument___64dlines].val; /* @lines on <self:CSVDocument> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @lines");
fprintf(stderr, " (%s:%d)\n", "lib/csv.nit", 21);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CSVDocument#lines for (self: Object): Array[Array[String]] */
val* VIRTUAL_csv__CSVDocument__lines(val* self) {
val* var /* : Array[Array[String]] */;
val* var1 /* : Array[Array[String]] */;
var1 = csv__CSVDocument__lines(self);
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CSVDocument#lines= for (self: CSVDocument, Array[Array[String]]) */
void csv__CSVDocument__lines_61d(val* self, val* p0) {
self->attrs[COLOR_csv__CSVDocument___64dlines].val = p0; /* @lines on <self:CSVDocument> */
RET_LABEL:;
}
/* method csv#CSVDocument#lines= for (self: Object, Array[Array[String]]) */
void VIRTUAL_csv__CSVDocument__lines_61d(val* self, val* p0) {
csv__CSVDocument__lines_61d(self, p0);
RET_LABEL:;
}
/* method csv#CSVDocument#set_header for (self: CSVDocument, Array[Object]) */
void csv__CSVDocument__set_header(val* self, val* p0) {
val* var_values /* var values: Array[Object] */;
val* var /* : Array[String] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_value /* var value: Object */;
val* var4 /* : Array[String] */;
val* var5 /* : String */;
var_values = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_csv__CSVDocument__header]))(self) /* header on <self:CSVDocument>*/;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var) /* clear on <var:Array[String]>*/;
var1 = ((val* (*)(val*))(var_values->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_values) /* iterator on <var_values:Array[Object]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_value = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_csv__CSVDocument__header]))(self) /* header on <self:CSVDocument>*/;
var5 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__to_s]))(var_value) /* to_s on <var_value:Object>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var5) /* add on <var4:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method csv#CSVDocument#set_header for (self: Object, Array[Object]) */
void VIRTUAL_csv__CSVDocument__set_header(val* self, val* p0) {
csv__CSVDocument__set_header(self, p0);
RET_LABEL:;
}
/* method csv#CSVDocument#add_line for (self: CSVDocument, Array[Object]) */
void csv__CSVDocument__add_line(val* self, val* p0) {
val* var_values /* var values: Array[Object] */;
long var /* : Int */;
val* var1 /* : Array[String] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[String] */;
long var12 /* : Int */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
long var18 /* : Int */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : Object */;
val* var28 /* : Object */;
val* var29 /* : String */;
val* var30 /* : Array[String] */;
val* var_line /* var line: Array[String] */;
val* var31 /* : Iterator[nullable Object] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_value /* var value: Object */;
val* var34 /* : String */;
val* var35 /* : Array[Array[String]] */;
var_values = p0;
var = ((long (*)(val*))(var_values->class->vft[COLOR_abstract_collection__Collection__length]))(var_values) /* length on <var_values:Array[Object]>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_csv__CSVDocument__header]))(self) /* header on <self:CSVDocument>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[String]>*/;
{ /* Inline kernel#Int#!= (var,var2) */
var5 = var == var2;
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
if (varonce) {
var7 = varonce;
} else {
var8 = "CSV error: header declares ";
var9 = 27;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_csv__CSVDocument__header]))(self) /* header on <self:CSVDocument>*/;
var12 = ((long (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__length]))(var11) /* length on <var11:Array[String]>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = " columns, line contains ";
var16 = 24;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = ((long (*)(val*))(var_values->class->vft[COLOR_abstract_collection__Collection__length]))(var_values) /* length on <var_values:Array[Object]>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = " values";
var22 = 7;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 5;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var7;
var27 = BOX_kernel__Int(var12); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var27;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var14;
var28 = BOX_kernel__Int(var18); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var28;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var20;
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
var29 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var29) /* print on <self:CSVDocument>*/;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/csv.nit", 33);
show_backtrace(1);
} else {
}
var30 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[String]>*/;
var_line = var30;
var31 = ((val* (*)(val*))(var_values->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_values) /* iterator on <var_values:Array[Object]>*/;
for(;;) {
var32 = ((short int (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var31) /* is_ok on <var31:Iterator[nullable Object]>*/;
if(!var32) break;
var33 = ((val* (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__item]))(var31) /* item on <var31:Iterator[nullable Object]>*/;
var_value = var33;
var34 = ((val* (*)(val*))(var_value->class->vft[COLOR_string__Object__to_s]))(var_value) /* to_s on <var_value:Object>*/;
((void (*)(val*, val*))(var_line->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_line, var34) /* add on <var_line:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var31->class->vft[COLOR_abstract_collection__Iterator__next]))(var31) /* next on <var31:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var35 = ((val* (*)(val*))(self->class->vft[COLOR_csv__CSVDocument__lines]))(self) /* lines on <self:CSVDocument>*/;
((void (*)(val*, val*))(var35->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var35, var_line) /* add on <var35:Array[Array[String]]>*/;
RET_LABEL:;
}
/* method csv#CSVDocument#add_line for (self: Object, Array[Object]) */
void VIRTUAL_csv__CSVDocument__add_line(val* self, val* p0) {
csv__CSVDocument__add_line(self, p0);
RET_LABEL:;
}
/* method csv#CSVDocument#to_s for (self: CSVDocument): String */
val* csv__CSVDocument__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_str /* var str: String */;
val* var13 /* : Array[Array[String]] */;
val* var14 /* : Iterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_line /* var line: Array[String] */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_csv__CSVDocument__header]))(self) /* header on <self:CSVDocument>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = ";";
var4 = 1;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_string__Collection__join]))(var1, var2) /* join on <var1:Array[String]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "\n";
var10 = 1;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_string__String___43d]))(var6, var8) /* + on <var6:String>*/;
var_str = var12;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_csv__CSVDocument__lines]))(self) /* lines on <self:CSVDocument>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__iterator]))(var13) /* iterator on <var13:Array[Array[String]]>*/;
for(;;) {
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[nullable Object]>*/;
if(!var15) break;
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[nullable Object]>*/;
var_line = var16;
if (varonce17) {
var18 = varonce17;
} else {
var19 = ";";
var20 = 1;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*, val*))(var_line->class->vft[COLOR_string__Collection__join]))(var_line, var18) /* join on <var_line:Array[String]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\n";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = ((val* (*)(val*, val*))(var22->class->vft[COLOR_string__String___43d]))(var22, var24) /* + on <var22:String>*/;
var29 = ((val* (*)(val*, val*))(var_str->class->vft[COLOR_string__String___43d]))(var_str, var28) /* + on <var_str:String>*/;
var_str = var29;
CONTINUE_label: (void)0;
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method csv#CSVDocument#to_s for (self: Object): String */
val* VIRTUAL_csv__CSVDocument__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = csv__CSVDocument__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method csv#CSVDocument#save for (self: CSVDocument, String) */
void csv__CSVDocument__save(val* self, val* p0) {
val* var_file /* var file: String */;
val* var /* : OFStream */;
val* var_out /* var out: OFStream */;
val* var1 /* : String */;
var_file = p0;
var = NEW_file__OFStream(&type_file__OFStream);
((void (*)(val*, val*))(var->class->vft[COLOR_file__OFStream__open]))(var, var_file) /* open on <var:OFStream>*/;
var_out = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:CSVDocument>*/;
((void (*)(val*, val*))(var_out->class->vft[COLOR_stream__OStream__write]))(var_out, var1) /* write on <var_out:OFStream>*/;
((void (*)(val*))(var_out->class->vft[COLOR_stream__IOS__close]))(var_out) /* close on <var_out:OFStream>*/;
RET_LABEL:;
}
/* method csv#CSVDocument#save for (self: Object, String) */
void VIRTUAL_csv__CSVDocument__save(val* self, val* p0) {
csv__CSVDocument__save(self, p0);
RET_LABEL:;
}
/* method csv#CSVDocument#init for (self: CSVDocument) */
void csv__CSVDocument__init(val* self) {
RET_LABEL:;
}
/* method csv#CSVDocument#init for (self: Object) */
void VIRTUAL_csv__CSVDocument__init(val* self) {
csv__CSVDocument__init(self);
RET_LABEL:;
}
