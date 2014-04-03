#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: AbstractCompilerVisitor): HashSet[String] */
val* abstract_compiler__AbstractCompilerVisitor__names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val; /* @names on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @names");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 943);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: Object): HashSet[String] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = abstract_compiler__AbstractCompilerVisitor__names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#names= for (self: AbstractCompilerVisitor, HashSet[String]) */
void abstract_compiler__AbstractCompilerVisitor__names_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dnames].val = p0; /* @names on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#names= for (self: Object, HashSet[String]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__names_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: AbstractCompilerVisitor): Int */
long abstract_compiler__AbstractCompilerVisitor__last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l; /* @last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: Object): Int */
long VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = abstract_compiler__AbstractCompilerVisitor__last(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: AbstractCompilerVisitor, Int) */
void abstract_compiler__AbstractCompilerVisitor__last_61d(val* self, long p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dlast].l = p0; /* @last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: Object, Int) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d(val* self, long p0) {
abstract_compiler__AbstractCompilerVisitor__last_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: AbstractCompilerVisitor, String): String */
val* abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: String */;
val* var1 /* : HashSet[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[String] */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_i /* var i: Int */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var_s2 /* var s2: String */;
val* var12 /* : HashSet[String] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : HashSet[String] */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
var_s = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_s) /* has on <var1:HashSet[String]>*/;
var3 = !var2;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_s) /* add on <var4:HashSet[String]>*/;
var = var_s;
goto RET_LABEL;
} else {
}
var5 = ((long (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__last]))(self) /* last on <self:AbstractCompilerVisitor>*/;
var6 = 1;
{ /* Inline kernel#Int#+ (var5,var6) */
var9 = var5 + var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var_i = var7;
for(;;) {
var10 = string__Int__to_s(var_i);
var11 = ((val* (*)(val*, val*))(var_s->class->vft[COLOR_string__String___43d]))(var_s, var10) /* + on <var_s:String>*/;
var_s2 = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_abstract_collection__Collection__has]))(var12, var_s2) /* has on <var12:HashSet[String]>*/;
var14 = !var13;
if (var14){
((void (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__last_61d]))(self, var_i) /* last= on <self:AbstractCompilerVisitor>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__names]))(self) /* names on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var15, var_s2) /* add on <var15:HashSet[String]>*/;
var = var_s2;
goto RET_LABEL;
} else {
}
var16 = 1;
{ /* Inline kernel#Int#+ (var_i,var16) */
var19 = var_i + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_i = var17;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: Object, String): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__get_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* abstract_compiler__AbstractCompilerVisitor__escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[EscapeMark, String] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[EscapeMark, String] */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable String */;
val* var_name /* var name: nullable String */;
val* var8 /* : null */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : HashMap[EscapeMark, String] */;
var_e = p0;
var1 = NULL;
if (var_e == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 968);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_names]))(self) /* escapemark_names on <self:AbstractCompilerVisitor>*/;
var4 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var3, var_e) /* has_key on <var3:HashMap[EscapeMark, String]>*/;
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_names]))(self) /* escapemark_names on <self:AbstractCompilerVisitor>*/;
var6 = ((val* (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var5, var_e) /* [] on <var5:HashMap[EscapeMark, String]>*/;
var = var6;
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_e->class->vft[COLOR_scope__EscapeMark__name]))(var_e) /* name on <var_e:nullable EscapeMark(EscapeMark)>*/;
var_name = var7;
var8 = NULL;
if (var_name == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (var9){
if (varonce) {
var10 = varonce;
} else {
var11 = "label";
var12 = 5;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var_name = var10;
} else {
}
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var_name) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var14;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__escapemark_names]))(self) /* escapemark_names on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var15, var_e, var_name) /* []= on <var15:HashMap[EscapeMark, String]>*/;
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: Object, nullable EscapeMark): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__escapemark_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names for (self: AbstractCompilerVisitor): HashMap[EscapeMark, String] */
val* abstract_compiler__AbstractCompilerVisitor__escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val; /* @escapemark_names on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @escapemark_names");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 977);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names for (self: Object): HashMap[EscapeMark, String] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = abstract_compiler__AbstractCompilerVisitor__escapemark_names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names= for (self: AbstractCompilerVisitor, HashMap[EscapeMark, String]) */
void abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64descapemark_names].val = p0; /* @escapemark_names on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_names= for (self: Object, HashMap[EscapeMark, String]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__escapemark_names_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#class_name_string for (self: AbstractCompilerVisitor, RuntimeVariable): String */
val* abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "class_name_string", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 979);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* abstract_compiler__AbstractCompilerVisitor__variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val; /* @variables on <self:AbstractCompilerVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @variables");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 985);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: Object): HashMap[Variable, RuntimeVariable] */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = abstract_compiler__AbstractCompilerVisitor__variables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables= for (self: AbstractCompilerVisitor, HashMap[Variable, RuntimeVariable]) */
void abstract_compiler__AbstractCompilerVisitor__variables_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___64dvariables].val = p0; /* @variables on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables= for (self: Object, HashMap[Variable, RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables_61d(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__variables_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
val* var4 /* : nullable Object */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_name /* var name: String */;
val* var15 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var16 /* : MType */;
val* var17 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
val* var43 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variables]))(self) /* variables on <self:AbstractCompilerVisitor>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_variable) /* has_key on <var1:HashMap[Variable, RuntimeVariable]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variables]))(self) /* variables on <self:AbstractCompilerVisitor>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_variable) /* [] on <var3:HashMap[Variable, RuntimeVariable]>*/;
var = var4;
goto RET_LABEL;
} else {
if (varonce) {
var5 = varonce;
} else {
var6 = "var_";
var7 = 4;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((val* (*)(val*))(var_variable->class->vft[COLOR_scope__Variable__name]))(var_variable) /* name on <var_variable:Variable>*/;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var9;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var13) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var14;
var15 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 994);
show_backtrace(1);
}
var_mtype = var15;
var16 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var16;
var17 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var17->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var17, var_name, var_mtype, var_mtype) /* init on <var17:RuntimeVariable>*/;
var_res = var17;
var18 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = " ";
var22 = 1;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = " /* var ";
var27 = 8;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = ": ";
var32 = 2;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = " */;";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 8;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var20;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var41)->values[3] = (val*) var25;
((struct instance_array__NativeArray*)var41)->values[4] = (val*) var_variable;
((struct instance_array__NativeArray*)var41)->values[5] = (val*) var30;
((struct instance_array__NativeArray*)var41)->values[6] = (val*) var_mtype;
((struct instance_array__NativeArray*)var41)->values[7] = (val*) var35;
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var42) /* add_decl on <self:AbstractCompilerVisitor>*/;
var43 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variables]))(self) /* variables on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var43->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var43, var_variable, var_res) /* []= on <var43:HashMap[Variable, RuntimeVariable]>*/;
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: Object, Variable): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__variable(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
var_mtype = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "var";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var2) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var6;
var7 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var7, var_name, var_mtype, var_mtype) /* init on <var7:RuntimeVariable>*/;
var_res = var7;
var8 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = " /* : ";
var17 = 6;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = " */;";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 6;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var15;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var26)->values[5] = (val*) var20;
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var27) /* add_decl on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: Object, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_var(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
var_mtype = p0;
var_name = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var1;
var2 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
((void (*)(val*, val*, val*, val*))(var2->class->vft[COLOR_abstract_compiler__RuntimeVariable__init]))(var2, var_name, var_mtype, var_mtype) /* init on <var2:RuntimeVariable>*/;
var_res = var2;
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
if (varonce) {
var4 = varonce;
} else {
var5 = " ";
var6 = 1;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = 6;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = " */;";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 6;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[4] = (val*) var_mtype;
((struct instance_array__NativeArray*)var20)->values[5] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var21) /* add_decl on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: Object, MType, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_named_var(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1) {
val* var_left /* var left: RuntimeVariable */;
val* var_right /* var right: RuntimeVariable */;
val* var /* : MType */;
val* var1 /* : RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
var_left = p0;
var_right = p1;
var = ((val* (*)(val*))(var_left->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(var_left) /* mtype on <var_left:RuntimeVariable>*/;
var1 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_right, var) /* autobox on <self:AbstractCompilerVisitor>*/;
var_right = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = " = ";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 4;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_left;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var_right;
((struct instance_array__NativeArray*)var13)->values[3] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var14) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: Object, RuntimeVariable, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1) {
abstract_compiler__AbstractCompilerVisitor__assign(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init_instance for (self: AbstractCompilerVisitor, MClassType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "init_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1032);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#init_instance for (self: Object, MClassType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__init_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
long var_value /* var value: Int */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var7 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : Object */;
val* var22 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "Int";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:AbstractCompilerVisitor>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClass__mclass_type]))(var5) /* mclass_type on <var5:MClass>*/;
var7 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var6) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = " = ";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ";";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 4;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var9;
var21 = BOX_kernel__Int(var_value); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var21;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var22 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var22) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: Object, Int): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_name /* var name: String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
val* var72 /* : MClass */;
val* var73 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var74 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : String */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
long var90 /* : Int */;
val* var91 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var102 /* : MMethod */;
val* var103 /* : Array[RuntimeVariable] */;
long var104 /* : Int */;
val* var105 /* : NativeArray[RuntimeVariable] */;
val* var106 /* : nullable RuntimeVariable */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : String */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : String */;
var_string = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "String";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var1) /* get_class on <self:AbstractCompilerVisitor>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClass__mclass_type]))(var5) /* mclass_type on <var5:MClass>*/;
var_mtype = var6;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "varonce";
var10 = 7;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_name]))(self, var8) /* get_name on <self:AbstractCompilerVisitor>*/;
var_name = var12;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "static ";
var16 = 7;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MClassType>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = " ";
var22 = 1;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = ";";
var27 = 1;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 5;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var18;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var31)->values[4] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_decl]))(self, var32) /* add_decl on <self:AbstractCompilerVisitor>*/;
var33 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "if (";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ") {";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var47) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = " = ";
var51 = 3;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = ";";
var56 = 1;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 4;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var60)->values[3] = (val*) var54;
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var61) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "} else {";
var65 = 8;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var63) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NativeString";
var70 = 12;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_class]))(self, var68) /* get_class on <self:AbstractCompilerVisitor>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_model__MClass__mclass_type]))(var72) /* mclass_type on <var72:MClass>*/;
var_native_mtype = var73;
var74 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_native_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_nat = var74;
if (varonce75) {
var76 = varonce75;
} else {
var77 = " = \"";
var78 = 4;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
var80 = ((val* (*)(val*))(var_string->class->vft[COLOR_string__AbstractString__escape_to_c]))(var_string) /* escape_to_c on <var_string:String>*/;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "\";";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 4;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var76;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var80;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var82;
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var89) /* add on <self:AbstractCompilerVisitor>*/;
var90 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
var91 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__int_instance]))(self, var90) /* int_instance on <self:AbstractCompilerVisitor>*/;
var_length = var91;
if (varonce92) {
var93 = varonce92;
} else {
var94 = " = ";
var95 = 3;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "to_s_with_length";
var100 = 16;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__get_property]))(self, var98, var_native_mtype) /* get_property on <self:AbstractCompilerVisitor>*/;
var103 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{ /* var103 = array_instance Array[RuntimeVariable] */
var104 = 2;
var105 = NEW_array__NativeArray(var104, &type_array__NativeArrayabstract_compiler__RuntimeVariable);
((struct instance_array__NativeArray*)var105)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var105)->values[1] = (val*) var_length;
((void (*)(val*, val*, long))(var103->class->vft[COLOR_array__Array__with_native]))(var103, var105, var104) /* with_native on <var103:Array[RuntimeVariable]>*/;
}
var106 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__send]))(self, var102, var103) /* send on <self:AbstractCompilerVisitor>*/;
if (var106 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1057);
show_backtrace(1);
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ";";
var110 = 1;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 4;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var93;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var106;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var108;
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var115) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = ";
var119 = 3;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = ";";
var124 = 1;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 4;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var117;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var128)->values[3] = (val*) var122;
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var129) /* add on <self:AbstractCompilerVisitor>*/;
if (varonce130) {
var131 = varonce130;
} else {
var132 = "}";
var133 = 1;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var131) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: Object, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__string_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#array_instance for (self: AbstractCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "array_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1063);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#vararg_instance for (self: AbstractCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "vararg_instance", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1066);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#vararg_instance for (self: Object, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var1 /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__lines]))(var) /* lines on <var:CodeWriter>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_s) /* add on <var1:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var1 /* : List[String] */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__decl_lines]))(var) /* decl_lines on <var:CodeWriter>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_s) /* add on <var1:List[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_decl(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var1 /* : CodeFile */;
val* var2 /* : HashSet[String] */;
val* var_reqs /* var reqs: HashSet[String] */;
short int var3 /* : Bool */;
val* var4 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : HashMap[String, ANode] */;
var_key = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__writer]))(self) /* writer on <self:AbstractCompilerVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__CodeWriter__file]))(var) /* file on <var:CodeWriter>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__CodeFile__required_declarations]))(var1) /* required_declarations on <var1:CodeFile>*/;
var_reqs = var2;
var3 = ((short int (*)(val*, val*))(var_reqs->class->vft[COLOR_abstract_collection__Collection__has]))(var_reqs, var_key) /* has on <var_reqs:HashSet[String]>*/;
if (var3){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_reqs->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_reqs, var_key) /* add on <var_reqs:HashSet[String]>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var_node = var4;
var5 = NULL;
if (var_node == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_compiler__AbstractCompiler__requirers_of_declarations]))(var7) /* requirers_of_declarations on <var7:AbstractCompiler>*/;
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var8, var_key, var_node) /* []= on <var8:HashMap[String, ANode]>*/;
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_abstract_compiler__AbstractCompiler__provide_declaration]))(var, var_s, var_s) /* provide_declaration on <var:AbstractCompiler>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__require_declaration]))(self, var_s) /* require_declaration on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__declare_once(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
val* var_file /* var file: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_tryfile /* var tryfile: String */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
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
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
val* var32 /* : AbstractCompiler */;
val* var33 /* : Array[String] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : String */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
val* var61 /* : AbstractCompiler */;
val* var62 /* : Array[String] */;
val* var63 /* : AbstractCompiler */;
val* var64 /* : ArraySet[String] */;
short int var65 /* : Bool */;
val* var66 /* : AbstractCompiler */;
val* var67 /* : ArraySet[String] */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : String */;
val* var73 /* : String */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : String */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : ExternCFile */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : String */;
val* var_f /* var f: ExternCFile */;
val* var96 /* : AbstractCompiler */;
val* var97 /* : Array[ExternFile] */;
val* var98 /* : AbstractCompiler */;
val* var99 /* : Array[String] */;
var_file = p0;
if (varonce) {
var = varonce;
} else {
var1 = ".nit";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_file__String__strip_extension]))(var_file, var) /* strip_extension on <var_file:String>*/;
var_file = var4;
if (varonce5) {
var6 = varonce5;
} else {
var7 = ".nit.h";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var6) /* + on <var_file:String>*/;
var_tryfile = var10;
var11 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "#include \"";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "";
var20 = 0;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*, val*))(var_tryfile->class->vft[COLOR_file__String__basename]))(var_tryfile, var18) /* basename on <var_tryfile:String>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\"";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(self, var31) /* declare_once on <self:AbstractCompilerVisitor>*/;
var32 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_compiler__AbstractCompiler__files_to_copy]))(var32) /* files_to_copy on <var32:AbstractCompiler>*/;
((void (*)(val*, val*))(var33->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var33, var_tryfile) /* add on <var33:Array[String]>*/;
} else {
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "_nit.h";
var37 = 6;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var35) /* + on <var_file:String>*/;
var_tryfile = var39;
var40 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
if (var40){
if (varonce41) {
var42 = varonce41;
} else {
var43 = "#include \"";
var44 = 10;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "";
var49 = 0;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*, val*))(var_tryfile->class->vft[COLOR_file__String__basename]))(var_tryfile, var47) /* basename on <var_tryfile:String>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "\"";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 3;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var51;
((struct instance_array__NativeArray*)var59)->values[2] = (val*) var53;
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
var60 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__declare_once]))(self, var60) /* declare_once on <self:AbstractCompilerVisitor>*/;
var61 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_abstract_compiler__AbstractCompiler__files_to_copy]))(var61) /* files_to_copy on <var61:AbstractCompiler>*/;
((void (*)(val*, val*))(var62->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var62, var_tryfile) /* add on <var62:Array[String]>*/;
} else {
}
var63 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_abstract_compiler__AbstractCompiler__seen_extern]))(var63) /* seen_extern on <var63:AbstractCompiler>*/;
var65 = ((short int (*)(val*, val*))(var64->class->vft[COLOR_abstract_collection__Collection__has]))(var64, var_file) /* has on <var64:ArraySet[String]>*/;
if (var65){
goto RET_LABEL;
} else {
}
var66 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_compiler__AbstractCompiler__seen_extern]))(var66) /* seen_extern on <var66:AbstractCompiler>*/;
((void (*)(val*, val*))(var67->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var67, var_file) /* add on <var67:ArraySet[String]>*/;
if (varonce68) {
var69 = varonce68;
} else {
var70 = ".nit.c";
var71 = 6;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
var73 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var69) /* + on <var_file:String>*/;
var_tryfile = var73;
var74 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
var75 = !var74;
if (var75){
if (varonce76) {
var77 = varonce76;
} else {
var78 = "_nit.c";
var79 = 6;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = ((val* (*)(val*, val*))(var_file->class->vft[COLOR_string__String___43d]))(var_file, var77) /* + on <var_file:String>*/;
var_tryfile = var81;
var82 = ((short int (*)(val*))(var_tryfile->class->vft[COLOR_file__String__file_exists]))(var_tryfile) /* file_exists on <var_tryfile:String>*/;
var83 = !var82;
if (var83){
goto RET_LABEL;
} else {
}
} else {
}
var84 = NEW_c__ExternCFile(&type_c__ExternCFile);
if (varonce85) {
var86 = varonce85;
} else {
var87 = "";
var88 = 0;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = ((val* (*)(val*, val*))(var_tryfile->class->vft[COLOR_file__String__basename]))(var_tryfile, var86) /* basename on <var_tryfile:String>*/;
if (varonce91) {
var92 = varonce91;
} else {
var93 = "";
var94 = 0;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
((void (*)(val*, val*, val*))(var84->class->vft[COLOR_c__ExternCFile__init]))(var84, var90, var92) /* init on <var84:ExternCFile>*/;
var_f = var84;
var96 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var97 = ((val* (*)(val*))(var96->class->vft[COLOR_abstract_compiler__AbstractCompiler__extern_bodies]))(var96) /* extern_bodies on <var96:AbstractCompiler>*/;
((void (*)(val*, val*))(var97->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var97, var_f) /* add on <var97:Array[ExternFile]>*/;
var98 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var99 = ((val* (*)(val*))(var98->class->vft[COLOR_abstract_compiler__AbstractCompiler__files_to_copy]))(var98) /* files_to_copy on <var98:AbstractCompiler>*/;
((void (*)(val*, val*))(var99->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var99, var_tryfile) /* add on <var99:Array[String]>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_extern(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_cexpr /* var cexpr: String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
var_cexpr = p0;
var_mtype = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__new_var]))(self, var_mtype) /* new_var on <self:AbstractCompilerVisitor>*/;
var_res = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = " = ";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 4;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var_cexpr;
((struct instance_array__NativeArray*)var13)->values[3] = (val*) var7;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var14) /* add on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: Object, String, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
var_message = p0;
if (varonce) {
var = varonce;
} else {
var1 = "fprintf(stderr, \"Runtime error: %s\", \"";
var2 = 38;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(var_message->class->vft[COLOR_string__AbstractString__escape_to_c]))(var_message) /* escape_to_c on <var_message:String>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = "\");";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var13) /* add on <self:AbstractCompilerVisitor>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(self) /* add_raw_abort on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_abort(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: AbstractCompilerVisitor) */
void abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ANode */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
val* var4 /* : nullable ANode */;
val* var5 /* : Location */;
val* var6 /* : nullable SourceFile */;
val* var7 /* : null */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : nullable ANode */;
val* var14 /* : Location */;
val* var15 /* : nullable SourceFile */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable ANode */;
val* var24 /* : Location */;
long var25 /* : Int */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : Object */;
val* var35 /* : String */;
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
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
var_ = var3;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1142);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__ANode__location]))(var4) /* location on <var4:nullable ANode>*/;
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_location__Location__file]))(var5) /* file on <var5:Location>*/;
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
var = var8;
} else {
var = var_;
}
if (var){
if (varonce) {
var9 = varonce;
} else {
var10 = "fprintf(stderr, \" (%s:%d)\\n\", \"";
var11 = 31;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1143);
show_backtrace(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_parser_nodes__ANode__location]))(var13) /* location on <var13:nullable ANode>*/;
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_location__Location__file]))(var14) /* file on <var14:Location>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1143);
show_backtrace(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_location__SourceFile__filename]))(var15) /* filename on <var15:nullable SourceFile>*/;
}
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_string__AbstractString__escape_to_c]))(var16) /* escape_to_c on <var16:String>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "\", ";
var21 = 3;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1143);
show_backtrace(1);
} else {
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_parser_nodes__ANode__location]))(var23) /* location on <var23:nullable ANode>*/;
}
var25 = ((long (*)(val*))(var24->class->vft[COLOR_location__Location__line_start]))(var24) /* line_start on <var24:Location>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = ");";
var29 = 2;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var17;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var19;
var34 = BOX_kernel__Int(var25); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var34;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:AbstractCompilerVisitor>*/;
} else {
if (varonce36) {
var37 = varonce36;
} else {
var38 = "fprintf(stderr, \"\\n\");";
var39 = 22;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:AbstractCompilerVisitor>*/;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "show_backtrace(1);";
var44 = 18;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var42) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
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
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
var = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag) /* type_test on <self:AbstractCompilerVisitor>*/;
var_res = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "if (!";
var3 = 5;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = ") {";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var13) /* add on <self:AbstractCompilerVisitor>*/;
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value) /* class_name_string on <self:AbstractCompilerVisitor>*/;
var_cn = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "fprintf(stderr, \"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = 72;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_string__AbstractString__escape_to_c]))(var20) /* escape_to_c on <var20:String>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\", ";
var25 = 3;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ");";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var35) /* add on <self:AbstractCompilerVisitor>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_raw_abort]))(self) /* add_raw_abort on <self:AbstractCompilerVisitor>*/;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var37) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: Object, RuntimeVariable, MType, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__add_cast(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
val* var_s /* var s: RuntimeVariable */;
val* var /* : nullable Frame */;
val* var1 /* : nullable RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : nullable Frame */;
val* var7 /* : nullable String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
var_s = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:AbstractCompilerVisitor>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1164);
show_backtrace(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_compiler__Frame__returnvar]))(var) /* returnvar on <var:nullable Frame>*/;
}
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1164);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(self, var1, var_s) /* assign on <self:AbstractCompilerVisitor>*/;
if (varonce) {
var2 = varonce;
} else {
var3 = "goto ";
var4 = 5;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__frame]))(self) /* frame on <self:AbstractCompilerVisitor>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1165);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_compiler__Frame__returnlabel]))(var6) /* returnlabel on <var6:nullable Frame>*/;
}
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1165);
show_backtrace(1);
}
if (varonce8) {
var9 = varonce8;
} else {
var10 = ";";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 3;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var2;
((struct instance_array__NativeArray*)var15)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var15)->values[2] = (val*) var9;
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var16) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: Object, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__ret(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_nexpr = p0;
var = NULL;
if (var_nexpr == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var_old = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_nexpr) /* current_node= on <self:AbstractCompilerVisitor>*/;
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__stmt]))(var_nexpr, self) /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_old) /* current_node= on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: Object, nullable AExpr) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__stmt(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
val* var2 /* : nullable RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
val* var6 /* : RuntimeVariable */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
val* var9 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var10 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : AbstractCompiler */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var_old = var1;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_nexpr) /* current_node= on <self:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__expr]))(var_nexpr, self) /* expr on <var_nexpr:AExpr>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1184);
show_backtrace(1);
}
var_res = var2;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__anchor]))(self, var_mtype) /* anchor on <self:AbstractCompilerVisitor>*/;
var_mtype = var5;
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_res, var_mtype) /* autobox on <self:AbstractCompilerVisitor>*/;
var_res = var6;
} else {
}
var7 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1189);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var_res, var7) /* autoadapt on <self:AbstractCompilerVisitor>*/;
var_res = var8;
var9 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__implicit_cast_to]))(var_nexpr) /* implicit_cast_to on <var_nexpr:AExpr>*/;
var_implicit_cast_to = var9;
var11 = NULL;
if (var_implicit_cast_to == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
var_ = var12;
if (var12){
var13 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(self) /* compiler on <self:AbstractCompilerVisitor>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var13) /* modelbuilder on <var13:AbstractCompiler>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var14) /* toolcontext on <var14:ModelBuilder>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_autocast]))(var15) /* opt_no_check_autocast on <var15:ToolContext>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_opts__Option__value]))(var16) /* value on <var16:OptionBool>*/;
var18 = ((struct instance_kernel__Bool*)var17)->value; /* autounbox from nullable Object to Bool */;
var19 = !var18;
var10 = var19;
} else {
var10 = var_;
}
if (var10){
if (varonce) {
var20 = varonce;
} else {
var21 = "auto";
var22 = 4;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_cast]))(self, var_res, var_implicit_cast_to, var20) /* add_cast on <self:AbstractCompilerVisitor>*/;
var24 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__autoadapt]))(self, var_res, var_implicit_cast_to) /* autoadapt on <self:AbstractCompilerVisitor>*/;
var_res = var24;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(self, var_old) /* current_node= on <self:AbstractCompilerVisitor>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: Object, AExpr, nullable MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: AbstractCompilerVisitor, AExpr): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
var_nexpr = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__bool_type]))(self) /* bool_type on <self:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__expr]))(self, var_nexpr, var1) /* expr on <self:AbstractCompilerVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: Object, AExpr): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var1 /* : null */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
var_message = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(self) /* current_node on <self:AbstractCompilerVisitor>*/;
var_node = var;
var1 = NULL;
if (var_node == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "?: ";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var9)->values[1] = (val*) var_message;
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var10) /* print on <self:AbstractCompilerVisitor>*/;
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__debug]))(var_node, var_message) /* debug on <var_node:nullable ANode(ANode)>*/;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "/* DEBUG: ";
var14 = 10;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = " */";
var19 = 3;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var_message;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(self, var24) /* add on <self:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__debug(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: AbstractRuntimeFunction): MMethodDef */
val* abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val; /* @mmethoddef on <self:AbstractRuntimeFunction> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmethoddef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1222);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: Object): MMethodDef */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = abstract_compiler__AbstractRuntimeFunction__mmethoddef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef= for (self: AbstractRuntimeFunction, MMethodDef) */
void abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val = p0; /* @mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef= for (self: Object, MMethodDef) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: AbstractRuntimeFunction): String */
val* abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name_cache]))(self) /* c_name_cache on <self:AbstractRuntimeFunction>*/;
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
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__build_c_name]))(self) /* build_c_name on <self:AbstractRuntimeFunction>*/;
var_res = var4;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:AbstractRuntimeFunction>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#build_c_name for (self: AbstractRuntimeFunction): String */
val* abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "build_c_name", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1236);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: AbstractRuntimeFunction): nullable String */
val* abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val; /* @c_name_cache on <self:AbstractRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__AbstractRuntimeFunction__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: AbstractRuntimeFunction, nullable String) */
void abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dc_name_cache].val = p0; /* @c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#call for (self: AbstractRuntimeFunction, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__AbstractRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name2;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1241);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "call", var_class_name2);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1241);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#call for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AbstractRuntimeFunction__call(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#compile_to_c for (self: AbstractRuntimeFunction, AbstractCompiler) */
void abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name1;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1245);
show_backtrace(1);
}
var_class_name1 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "compile_to_c", var_class_name1);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1245);
show_backtrace(1);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__compile_to_c(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: AbstractRuntimeFunction, MMethodDef) */
void abstract_compiler__AbstractRuntimeFunction__init(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___64dmmethoddef].val = p0; /* @mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: Object, MMethodDef) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init(val* self, val* p0) {
abstract_compiler__AbstractRuntimeFunction__init(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dname].val; /* @name on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1255);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: RuntimeVariable, String) */
void abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dname].val = p0; /* @name on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: Object, String) */
void VIRTUAL_abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
abstract_compiler__RuntimeVariable__name_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmtype].val; /* @mtype on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mtype");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1258);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__RuntimeVariable__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmtype].val = p0; /* @mtype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
abstract_compiler__RuntimeVariable__mtype_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmcasttype].val; /* @mcasttype on <self:RuntimeVariable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mcasttype");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1261);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = abstract_compiler__RuntimeVariable__mcasttype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dmcasttype].val = p0; /* @mcasttype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
abstract_compiler__RuntimeVariable__mcasttype_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: RuntimeVariable): Bool */
short int abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dis_exact].s; /* @is_exact on <self:RuntimeVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__RuntimeVariable__is_exact(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: RuntimeVariable, Bool) */
void abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___64dis_exact].s = p0; /* @is_exact on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: Object, Bool) */
void VIRTUAL_abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
abstract_compiler__RuntimeVariable__is_exact_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: RuntimeVariable, String, MType, MType) */
void abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
val* var_name /* var name: String */;
val* var_mtype /* var mtype: MType */;
val* var_mcasttype /* var mcasttype: MType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var_name = p0;
var_mtype = p1;
var_mcasttype = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__name_61d]))(self, var_name) /* name= on <self:RuntimeVariable>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype_61d]))(self, var_mtype) /* mtype= on <self:RuntimeVariable>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype_61d]))(self, var_mcasttype) /* mcasttype= on <self:RuntimeVariable>*/;
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
var1 = !var;
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1273);
show_backtrace(1);
}
var2 = ((short int (*)(val*))(var_mcasttype->class->vft[COLOR_model__MType__need_anchor]))(var_mcasttype) /* need_anchor on <var_mcasttype:MType>*/;
var3 = !var2;
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1274);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: Object, String, MType, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__RuntimeVariable__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(self) /* name on <self:RuntimeVariable>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__inspect(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_exact_str /* var exact_str: nullable Object */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : MType */;
val* var12 /* : MType */;
short int var13 /* : Bool */;
val* var14 /* : MType */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var19 /* : MType */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : MType */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : String */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__is_exact]))(self) /* is_exact on <self:RuntimeVariable>*/;
if (var1){
if (varonce) {
var2 = varonce;
} else {
var3 = " exact";
var4 = 6;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var_exact_str = var2;
} else {
if (varonce6) {
var7 = varonce6;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var_exact_str = var7;
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(self) /* mtype on <self:RuntimeVariable>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(self) /* mcasttype on <self:RuntimeVariable>*/;
var13 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var12) /* == on <var11:MType>*/;
if (var13){
var14 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(self) /* mtype on <self:RuntimeVariable>*/;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 2;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var_exact_str;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
var_type_str = var18;
} else {
var19 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mtype]))(self) /* mtype on <self:RuntimeVariable>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "(";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__mcasttype]))(self) /* mcasttype on <self:RuntimeVariable>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = ")";
var29 = 1;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var25;
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var_exact_str;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
var_type_str = var34;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
var36 = 5;
((void (*)(val*, long))(var35->class->vft[COLOR_array__Array__with_capacity]))(var35, var36) /* with_capacity on <var35:Array[Object]>*/;
var_ = var35;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "<";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var38) /* add on <var_:Array[Object]>*/;
var42 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__RuntimeVariable__name]))(self) /* name on <self:RuntimeVariable>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var42) /* add on <var_:Array[Object]>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = ":";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var44) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_type_str) /* add on <var_:Array[Object]>*/;
if (varonce48) {
var49 = varonce48;
} else {
var50 = ">";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var49) /* add on <var_:Array[Object]>*/;
var53 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__inspect(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__inspect(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#visitor for (self: Frame): AbstractCompilerVisitor */
val* abstract_compiler__Frame__visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : AbstractCompilerVisitor */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val; /* @visitor on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @visitor");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1302);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#visitor for (self: Object): AbstractCompilerVisitor */
val* VIRTUAL_abstract_compiler__Frame__visitor(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var1 /* : AbstractCompilerVisitor */;
var1 = abstract_compiler__Frame__visitor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#visitor= for (self: Frame, AbstractCompilerVisitor) */
void abstract_compiler__Frame__visitor_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1302);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val = p0; /* @visitor on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#visitor= for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__Frame__visitor_61d(val* self, val* p0) {
abstract_compiler__Frame__visitor_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#mpropdef for (self: Frame): MPropDef */
val* abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val; /* @mpropdef on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1305);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = abstract_compiler__Frame__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef= for (self: Frame, MPropDef) */
void abstract_compiler__Frame__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val = p0; /* @mpropdef on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_abstract_compiler__Frame__mpropdef_61d(val* self, val* p0) {
abstract_compiler__Frame__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#receiver for (self: Frame): MClassType */
val* abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val; /* @receiver on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @receiver");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1309);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = abstract_compiler__Frame__receiver(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver= for (self: Frame, MClassType) */
void abstract_compiler__Frame__receiver_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val = p0; /* @receiver on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#receiver= for (self: Object, MClassType) */
void VIRTUAL_abstract_compiler__Frame__receiver_61d(val* self, val* p0) {
abstract_compiler__Frame__receiver_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#arguments for (self: Frame): Array[RuntimeVariable] */
val* abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64darguments].val; /* @arguments on <self:Frame> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @arguments");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1312);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments for (self: Object): Array[RuntimeVariable] */
val* VIRTUAL_abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = abstract_compiler__Frame__arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments= for (self: Frame, Array[RuntimeVariable]) */
void abstract_compiler__Frame__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64darguments].val = p0; /* @arguments on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#arguments= for (self: Object, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__Frame__arguments_61d(val* self, val* p0) {
abstract_compiler__Frame__arguments_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnvar for (self: Frame): nullable RuntimeVariable */
val* abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dreturnvar].val; /* @returnvar on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar for (self: Object): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__Frame__returnvar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar= for (self: Frame, nullable RuntimeVariable) */
void abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dreturnvar].val = p0; /* @returnvar on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnvar= for (self: Object, nullable RuntimeVariable) */
void VIRTUAL_abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
abstract_compiler__Frame__returnvar_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel for (self: Frame): nullable String */
val* abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___64dreturnlabel].val; /* @returnlabel on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__Frame__returnlabel(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Frame, nullable String) */
void abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___64dreturnlabel].val = p0; /* @returnlabel on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
abstract_compiler__Frame__returnlabel_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Frame, AbstractCompilerVisitor, MPropDef, MClassType, Array[RuntimeVariable]) */
void abstract_compiler__Frame__init(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1297);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___64dvisitor].val = p0; /* @visitor on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___64dmpropdef].val = p1; /* @mpropdef on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___64dreceiver].val = p2; /* @receiver on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___64darguments].val = p3; /* @arguments on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Object, AbstractCompilerVisitor, MPropDef, MClassType, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__Frame__init(val* self, val* p0, val* p1, val* p2, val* p3) {
abstract_compiler__Frame__init(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method abstract_compiler#MType#ctype for (self: MType): String */
val* abstract_compiler__MType__ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val*";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: MType): String */
val* abstract_compiler__MType__ctypename(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: MType): String */
val* abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1328);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: MType): nullable String */
val* abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val; /* @c_name_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MType__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache= for (self: MType, nullable String) */
void abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MType___64dc_name_cache].val = p0; /* @c_name_cache on <self:MType> */
RET_LABEL:;
}
/* method abstract_compiler#MType#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MType__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MClassType#c_name for (self: MClassType): String */
val* abstract_compiler__MClassType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MClass */;
val* var11 /* : MModule */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MClassType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClass__intro_mmodule]))(var10) /* intro_mmodule on <var10:MClass>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_mmodule__MModule__name]))(var11) /* name on <var11:MModule>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_string__AbstractString__to_cmangle]))(var12) /* to_cmangle on <var12:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "__";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MClass__name]))(var19) /* name on <var19:MClass>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_string__AbstractString__to_cmangle]))(var20) /* to_cmangle on <var20:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "";
var25 = 0;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var27;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MClassType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: MClassType): String */
val* abstract_compiler__MClassType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : MClass */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : MClass */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : MClass */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : MClass */;
val* var79 /* : MClassKind */;
val* var80 /* : MClassKind */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClass__name]))(var1) /* name on <var1:MClass>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "Int";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
if (var7){
if (varonce8) {
var9 = varonce8;
} else {
var10 = "long";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var = var9;
goto RET_LABEL;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__name]))(var13) /* name on <var13:MClass>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Bool";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var16) /* == on <var14:String>*/;
if (var20){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "short int";
var24 = 9;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
var26 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MClass__name]))(var26) /* name on <var26:MClass>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Char";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var29) /* == on <var27:String>*/;
if (var33){
if (varonce34) {
var35 = varonce34;
} else {
var36 = "char";
var37 = 4;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var = var35;
goto RET_LABEL;
} else {
var39 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_model__MClass__name]))(var39) /* name on <var39:MClass>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Float";
var44 = 5;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = ((short int (*)(val*, val*))(var40->class->vft[COLOR_kernel__Object___61d_61d]))(var40, var42) /* == on <var40:String>*/;
if (var46){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "double";
var50 = 6;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var = var48;
goto RET_LABEL;
} else {
var52 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_model__MClass__name]))(var52) /* name on <var52:MClass>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "NativeString";
var57 = 12;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_kernel__Object___61d_61d]))(var53, var55) /* == on <var53:String>*/;
if (var59){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "char*";
var63 = 5;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var = var61;
goto RET_LABEL;
} else {
var65 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_model__MClass__name]))(var65) /* name on <var65:MClass>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NativeArray";
var70 = 11;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((short int (*)(val*, val*))(var66->class->vft[COLOR_kernel__Object___61d_61d]))(var66, var68) /* == on <var66:String>*/;
if (var72){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "val*";
var76 = 4;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var = var74;
goto RET_LABEL;
} else {
var78 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_model__MClass__kind]))(var78) /* kind on <var78:MClass>*/;
var80 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MClassType>*/;
var81 = ((short int (*)(val*, val*))(var79->class->vft[COLOR_kernel__Object___61d_61d]))(var79, var80) /* == on <var79:MClassKind>*/;
if (var81){
if (varonce82) {
var83 = varonce82;
} else {
var84 = "void*";
var85 = 5;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var = var83;
goto RET_LABEL;
} else {
if (varonce87) {
var88 = varonce87;
} else {
var89 = "val*";
var90 = 4;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var = var88;
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: MClassType): String */
val* abstract_compiler__MClassType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : MClass */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : MClass */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : MClass */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : String */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : String */;
val* var78 /* : MClass */;
val* var79 /* : MClassKind */;
val* var80 /* : MClassKind */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClass__name]))(var1) /* name on <var1:MClass>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "Int";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
if (var7){
if (varonce8) {
var9 = varonce8;
} else {
var10 = "l";
var11 = 1;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var = var9;
goto RET_LABEL;
} else {
var13 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClass__name]))(var13) /* name on <var13:MClass>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Bool";
var18 = 4;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var16) /* == on <var14:String>*/;
if (var20){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "s";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
var26 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MClass__name]))(var26) /* name on <var26:MClass>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Char";
var31 = 4;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var29) /* == on <var27:String>*/;
if (var33){
if (varonce34) {
var35 = varonce34;
} else {
var36 = "c";
var37 = 1;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var = var35;
goto RET_LABEL;
} else {
var39 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var40 = ((val* (*)(val*))(var39->class->vft[COLOR_model__MClass__name]))(var39) /* name on <var39:MClass>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Float";
var44 = 5;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = ((short int (*)(val*, val*))(var40->class->vft[COLOR_kernel__Object___61d_61d]))(var40, var42) /* == on <var40:String>*/;
if (var46){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "d";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var = var48;
goto RET_LABEL;
} else {
var52 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_model__MClass__name]))(var52) /* name on <var52:MClass>*/;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "NativeString";
var57 = 12;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = ((short int (*)(val*, val*))(var53->class->vft[COLOR_kernel__Object___61d_61d]))(var53, var55) /* == on <var53:String>*/;
if (var59){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "str";
var63 = 3;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var = var61;
goto RET_LABEL;
} else {
var65 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_model__MClass__name]))(var65) /* name on <var65:MClass>*/;
if (varonce67) {
var68 = varonce67;
} else {
var69 = "NativeArray";
var70 = 11;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = ((short int (*)(val*, val*))(var66->class->vft[COLOR_kernel__Object___61d_61d]))(var66, var68) /* == on <var66:String>*/;
if (var72){
if (varonce73) {
var74 = varonce73;
} else {
var75 = "val";
var76 = 3;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var = var74;
goto RET_LABEL;
} else {
var78 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__mclass]))(self) /* mclass on <self:MClassType>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_model__MClass__kind]))(var78) /* kind on <var78:MClass>*/;
var80 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:MClassType>*/;
var81 = ((short int (*)(val*, val*))(var79->class->vft[COLOR_kernel__Object___61d_61d]))(var79, var80) /* == on <var79:MClassKind>*/;
if (var81){
if (varonce82) {
var83 = varonce82;
} else {
var84 = "ptr";
var85 = 3;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var = var83;
goto RET_LABEL;
} else {
if (varonce87) {
var88 = varonce87;
} else {
var89 = "val";
var90 = 3;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var = var88;
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: MGenericType): String */
val* abstract_compiler__MGenericType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : Array[MType] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var9 /* : String */;
val* var10 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MGenericType>*/;
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
var4 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MGenericType__c_name]))(self) /* c_name on <self:MGenericType>*/;
var_res = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClassType__arguments]))(self) /* arguments on <self:MGenericType>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Array[MType]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_t = var8;
var9 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MType>*/;
var10 = ((val* (*)(val*, val*))(var_res->class->vft[COLOR_string__String___43d]))(var_res, var9) /* + on <var_res:nullable String(String)>*/;
var_res = var10;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MGenericType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MGenericType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MGenericType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: MParameterType): String */
val* abstract_compiler__MParameterType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MClass */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MParameterType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MParameterType__mclass]))(self) /* mclass on <self:MParameterType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var10) /* c_name on <var10:MClass>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "_FT";
var15 = 3;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((long (*)(val*))(self->class->vft[COLOR_model__MParameterType__rank]))(self) /* rank on <self:MParameterType>*/;
var18 = BOX_kernel__Int(var17); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var18) /* add on <var_:Array[Object]>*/;
if (varonce19) {
var20 = varonce19;
} else {
var21 = "";
var22 = 0;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var20) /* add on <var_:Array[Object]>*/;
var24 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var24;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MParameterType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MParameterType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MParameterType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: MVirtualType): String */
val* abstract_compiler__MVirtualType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MProperty */;
val* var11 /* : MPropDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : MProperty */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MVirtualType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MProperty__intro]))(var10) /* intro on <var10:MProperty>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mclassdef]))(var11) /* mclassdef on <var11:MPropDef>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClassDef__mclass]))(var12) /* mclass on <var12:MClassDef>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_compiler__MClass__c_name]))(var13) /* c_name on <var13:MClass>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "_VT";
var18 = 3;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var16) /* add on <var_:Array[Object]>*/;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_model__MVirtualType__mproperty]))(self) /* mproperty on <self:MVirtualType>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MProperty__name]))(var20) /* name on <var20:MProperty>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "";
var25 = 0;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var23) /* add on <var_:Array[Object]>*/;
var27 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var27;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MVirtualType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MVirtualType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MVirtualType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: MNullableType): String */
val* abstract_compiler__MNullableType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MType */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache]))(self) /* c_name_cache on <self:MNullableType>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "nullable_";
var8 = 9;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MNullableType__mtype]))(self) /* mtype on <self:MNullableType>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MType__c_name]))(var10) /* c_name on <var10:MType>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var17;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MNullableType>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MNullableType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MNullableType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: MClass): String */
val* abstract_compiler__MClass__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MModule */;
val* var11 /* : String */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MClass__c_name_cache]))(self) /* c_name_cache on <self:MClass>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 5;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__intro_mmodule]))(self) /* intro_mmodule on <self:MClass>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_mmodule__MModule__name]))(var10) /* name on <var10:MModule>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_string__AbstractString__to_cmangle]))(var11) /* to_cmangle on <var11:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "__";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var14) /* add on <var_:Array[Object]>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_model__MClass__name]))(self) /* name on <self:MClass>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_string__AbstractString__to_cmangle]))(var18) /* to_cmangle on <var18:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var19) /* add on <var_:Array[Object]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "";
var23 = 0;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var21) /* add on <var_:Array[Object]>*/;
var25 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var25;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MClass__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MClass>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClass__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClass__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: MClass): nullable String */
val* abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MClass___64dc_name_cache].val; /* @c_name_cache on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MClass__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: MClass, nullable String) */
void abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MClass___64dc_name_cache].val = p0; /* @c_name_cache on <self:MClass> */
RET_LABEL:;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MClass__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name for (self: MProperty): String */
val* abstract_compiler__MProperty__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MPropDef */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MProperty__c_name_cache]))(self) /* c_name_cache on <self:MProperty>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MProperty__intro]))(self) /* intro on <self:MProperty>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_compiler__MPropDef__c_name]))(var10) /* c_name on <var10:MPropDef>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "";
var15 = 0;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var17;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MProperty__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MProperty>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MProperty__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MProperty__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: MProperty): nullable String */
val* abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MProperty___64dc_name_cache].val; /* @c_name_cache on <self:MProperty> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MProperty__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: MProperty, nullable String) */
void abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MProperty___64dc_name_cache].val = p0; /* @c_name_cache on <self:MProperty> */
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MProperty__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: MPropDef): nullable String */
val* abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MPropDef___64dc_name_cache].val; /* @c_name_cache on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = abstract_compiler__MPropDef__c_name_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: MPropDef, nullable String) */
void abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MPropDef___64dc_name_cache].val = p0; /* @c_name_cache on <self:MPropDef> */
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
abstract_compiler__MPropDef__c_name_cache_61d(self, p0);
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name for (self: MPropDef): String */
val* abstract_compiler__MPropDef__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : MClassDef */;
val* var11 /* : MModule */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : MClassDef */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : MProperty */;
val* var29 /* : String */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MPropDef__c_name_cache]))(self) /* c_name_cache on <self:MPropDef>*/;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 7;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mclassdef]))(self) /* mclassdef on <self:MPropDef>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClassDef__mmodule]))(var10) /* mmodule on <var10:MClassDef>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_mmodule__MModule__name]))(var11) /* name on <var11:MModule>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_string__AbstractString__to_cmangle]))(var12) /* to_cmangle on <var12:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "__";
var17 = 2;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mclassdef]))(self) /* mclassdef on <self:MPropDef>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MClassDef__mclass]))(var19) /* mclass on <var19:MClassDef>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MClass__name]))(var20) /* name on <var20:MClass>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_string__AbstractString__to_cmangle]))(var21) /* to_cmangle on <var21:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var22) /* add on <var_:Array[Object]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = "__";
var26 = 2;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var24) /* add on <var_:Array[Object]>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MPropDef>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_model__MProperty__name]))(var28) /* name on <var28:MProperty>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_string__AbstractString__to_cmangle]))(var29) /* to_cmangle on <var29:String>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var30) /* add on <var_:Array[Object]>*/;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "";
var34 = 0;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var32) /* add on <var_:Array[Object]>*/;
var36 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_res = var36;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__MPropDef__c_name_cache_61d]))(self, var_res) /* c_name_cache= on <self:MPropDef>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MPropDef__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: MMethodDef, AbstractCompilerVisitor): Bool */
short int abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var4 /* : HashMap[MPropDef, APropdef] */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[MPropDef, APropdef] */;
val* var7 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var8 /* : Bool */;
val* var9 /* : MProperty */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1474);
show_backtrace(1);
}
var_v = p0;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var_modelbuilder = var3;
var4 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var4, self) /* has_key on <var4:HashMap[MPropDef, APropdef]>*/;
if (var5){
var6 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, self) /* [] on <var6:HashMap[MPropDef, APropdef]>*/;
var_npropdef = var7;
var8 = ((short int (*)(val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__can_inline]))(var_npropdef) /* can_inline on <var_npropdef:APropdef>*/;
var = var8;
goto RET_LABEL;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MMethodDef>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MProperty__name]))(var9) /* name on <var9:MProperty(MMethod)>*/;
if (varonce) {
var11 = varonce;
} else {
var12 = "init";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var11) /* == on <var10:String>*/;
if (var15){
var16 = 1;
var = var16;
goto RET_LABEL;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1485);
show_backtrace(1);
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: Object, AbstractCompilerVisitor): Bool */
short int VIRTUAL_abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__MMethodDef__can_inline(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var4 /* : HashMap[MPropDef, APropdef] */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[MPropDef, APropdef] */;
val* var7 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var8 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var9 /* : MProperty */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[MClassDef, AClassdef] */;
val* var17 /* : MClassDef */;
val* var18 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var19 /* : nullable ANode */;
val* var_oldnode20 /* var oldnode: nullable ANode */;
val* var21 /* : null */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1489);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var2) /* modelbuilder on <var2:AbstractCompiler>*/;
var_modelbuilder = var3;
var4 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var5 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var4, self) /* has_key on <var4:HashMap[MPropDef, APropdef]>*/;
if (var5){
var6 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var_modelbuilder) /* mpropdef2npropdef on <var_modelbuilder:ModelBuilder>*/;
var7 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var6, self) /* [] on <var6:HashMap[MPropDef, APropdef]>*/;
var_npropdef = var7;
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode = var8;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_npropdef) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__MMethodDef__compile_parameter_check]))(self, var_v, var_arguments) /* compile_parameter_check on <self:MMethodDef>*/;
((void (*)(val*, val*, val*, val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__compile_to_c]))(var_npropdef, var_v, self, var_arguments) /* compile_to_c on <var_npropdef:APropdef>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
} else {
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MMethodDef>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_model__MProperty__name]))(var9) /* name on <var9:MProperty(MMethod)>*/;
if (varonce) {
var11 = varonce;
} else {
var12 = "init";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var11) /* == on <var10:String>*/;
if (var15){
var16 = ((val* (*)(val*))(var_modelbuilder->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var_modelbuilder) /* mclassdef2nclassdef on <var_modelbuilder:ModelBuilder>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mclassdef]))(self) /* mclassdef on <self:MMethodDef>*/;
var18 = ((val* (*)(val*, val*))(var16->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var16, var17) /* [] on <var16:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var18;
var19 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node]))(var_v) /* current_node on <var_v:AbstractCompilerVisitor>*/;
var_oldnode20 = var19;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_nclassdef) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__MMethodDef__compile_parameter_check]))(self, var_v, var_arguments) /* compile_parameter_check on <self:MMethodDef>*/;
((void (*)(val*, val*, val*, val*))(var_nclassdef->class->vft[COLOR_abstract_compiler__AClassdef__compile_to_c]))(var_nclassdef, var_v, self, var_arguments) /* compile_to_c on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__current_node_61d]))(var_v, var_oldnode20) /* current_node= on <var_v:AbstractCompilerVisitor>*/;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1508);
show_backtrace(1);
}
}
var21 = NULL;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__MMethodDef__compile_inside_to_c(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionBool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : Range[Int] */;
long var8 /* : Int */;
val* var9 /* : nullable MSignature */;
long var10 /* : Int */;
val* var11 /* : Discrete */;
val* var12 /* : Discrete */;
val* var13 /* : Iterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
long var_i /* var i: Int */;
long var16 /* : Int */;
val* var17 /* : nullable MSignature */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MProperty */;
val* var23 /* : MPropDef */;
val* var24 /* : nullable MSignature */;
val* var25 /* : Array[MParameter] */;
val* var26 /* : nullable Object */;
val* var27 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable MSignature */;
val* var31 /* : Array[MParameter] */;
val* var32 /* : nullable Object */;
val* var33 /* : MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : nullable MSignature */;
val* var44 /* : Array[MParameter] */;
val* var45 /* : nullable Object */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
long var52 /* : Int */;
long var53 /* : Int */;
long var55 /* : Int */;
val* var56 /* : nullable Object */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : Object */;
val* var72 /* : String */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
val* var77 /* : nullable Object */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1513);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compiler]))(var_v) /* compiler on <var_v:AbstractCompilerVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_compiler__AbstractCompiler__modelbuilder]))(var1) /* modelbuilder on <var1:AbstractCompiler>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var2) /* toolcontext on <var2:ModelBuilder>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_compiler__ToolContext__opt_no_check_covariance]))(var3) /* opt_no_check_covariance on <var3:ToolContext>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_opts__Option__value]))(var4) /* value on <var4:OptionBool>*/;
var6 = ((struct instance_kernel__Bool*)var5)->value; /* autounbox from nullable Object to Bool */;
if (var6){
goto RET_LABEL;
} else {
}
var7 = NEW_range__Range(&type_range__Rangekernel__Int);
var8 = 0;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1518);
show_backtrace(1);
} else {
var10 = ((long (*)(val*))(var9->class->vft[COLOR_model__MSignature__arity]))(var9) /* arity on <var9:nullable MSignature>*/;
}
var11 = BOX_kernel__Int(var8); /* autobox from Int to Discrete */
var12 = BOX_kernel__Int(var10); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_range__Range__without_last]))(var7, var11, var12) /* without_last on <var7:Range[Int]>*/;
var13 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Range[Int]>*/;
for(;;) {
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[nullable Object]>*/;
if(!var14) break;
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[nullable Object]>*/;
var16 = ((struct instance_kernel__Int*)var15)->value; /* autounbox from nullable Object to Int */;
var_i = var16;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1520);
show_backtrace(1);
} else {
var18 = ((long (*)(val*))(var17->class->vft[COLOR_model__MSignature__vararg_rank]))(var17) /* vararg_rank on <var17:nullable MSignature>*/;
}
{ /* Inline kernel#Int#== (var18,var_i) */
var21 = var18 == var_i;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (var19){
goto CONTINUE_label;
} else {
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_model__MPropDef__mproperty]))(self) /* mproperty on <self:MMethodDef>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_model__MProperty__intro]))(var22) /* intro on <var22:MProperty(MMethod)>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_model__MMethodDef__msignature]))(var23) /* msignature on <var23:MPropDef(MMethodDef)>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_model__MSignature__mparameters]))(var24) /* mparameters on <var24:nullable MSignature>*/;
}
var26 = ((val* (*)(val*, long))(var25->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var25, var_i) /* [] on <var25:Array[MParameter]>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_model__MParameter__mtype]))(var26) /* mtype on <var26:nullable Object(MParameter)>*/;
var_origmtype = var27;
var28 = ((short int (*)(val*))(var_origmtype->class->vft[COLOR_model__MType__need_anchor]))(var_origmtype) /* need_anchor on <var_origmtype:MType>*/;
var29 = !var28;
if (var29){
goto CONTINUE_label;
} else {
}
var30 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1527);
show_backtrace(1);
} else {
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_model__MSignature__mparameters]))(var30) /* mparameters on <var30:nullable MSignature>*/;
}
var32 = ((val* (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var31, var_i) /* [] on <var31:Array[MParameter]>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_model__MParameter__mtype]))(var32) /* mtype on <var32:nullable Object(MParameter)>*/;
var_mtype = var33;
if (varonce) {
var34 = varonce;
} else {
var35 = "/* Covariant cast for argument ";
var36 = 31;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = " (";
var41 = 2;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = ((val* (*)(val*))(self->class->vft[COLOR_model__MMethodDef__msignature]))(self) /* msignature on <self:MMethodDef>*/;
if (var43 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
} else {
var44 = ((val* (*)(val*))(var43->class->vft[COLOR_model__MSignature__mparameters]))(var43) /* mparameters on <var43:nullable MSignature>*/;
}
var45 = ((val* (*)(val*, long))(var44->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var44, var_i) /* [] on <var44:Array[MParameter]>*/;
var46 = ((val* (*)(val*))(var45->class->vft[COLOR_model__MParameter__name]))(var45) /* name on <var45:nullable Object(MParameter)>*/;
if (varonce47) {
var48 = varonce47;
} else {
var49 = ") ";
var50 = 2;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = 1;
{ /* Inline kernel#Int#+ (var_i,var52) */
var55 = var_i + var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var56 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var53) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
var57 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__inspect]))(var56) /* inspect on <var56:nullable Object(RuntimeVariable)>*/;
if (varonce58) {
var59 = varonce58;
} else {
var60 = " isa ";
var61 = 5;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " */";
var66 = 3;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 9;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var34;
var71 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var39;
((struct instance_array__NativeArray*)var70)->values[3] = (val*) var46;
((struct instance_array__NativeArray*)var70)->values[4] = (val*) var48;
((struct instance_array__NativeArray*)var70)->values[5] = (val*) var57;
((struct instance_array__NativeArray*)var70)->values[6] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var70)->values[8] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var72 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var72) /* add on <var_v:AbstractCompilerVisitor>*/;
var73 = 1;
{ /* Inline kernel#Int#+ (var_i,var73) */
var76 = var_i + var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var77 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var74) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = "covariance";
var81 = 10;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add_cast]))(var_v, var77, var_mtype, var79) /* add_cast on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
abstract_compiler__MMethodDef__compile_parameter_check(self, p0, p1);
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : Location */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var = varonce;
} else {
var1 = "printf(\"NOT YET IMPLEMENTED ";
var2 = 28;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:APropdef>*/;
if (varonce5) {
var6 = varonce5;
} else {
var7 = " ";
var8 = 1;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = " at ";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:APropdef>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Location>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\\n\");";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 7;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var6;
((struct instance_array__NativeArray*)var24)->values[3] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var24)->values[4] = (val*) var11;
((struct instance_array__NativeArray*)var24)->values[5] = (val*) var16;
((struct instance_array__NativeArray*)var24)->values[6] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__add]))(var_v, var25) /* add on <var_v:AbstractCompilerVisitor>*/;
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Not yet implemented";
var29 = 19;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var27) /* debug on <self:APropdef>*/;
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__APropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#APropdef#can_inline for (self: APropdef): Bool */
short int abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#APropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__APropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AConcreteMethPropdef#compile_to_c for (self: AConcreteMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AConcreteMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : nullable MSignature */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : nullable ASignature */;
val* var11 /* : ANodes[AParam] */;
val* var12 /* : nullable Object */;
val* var13 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var14 /* : RuntimeVariable */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : Array[RuntimeVariable] */;
long var24 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var25 /* : nullable Object */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var26 /* : Iterator[nullable Object] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var29 /* : Range[Int] */;
long var30 /* : Int */;
val* var31 /* : MSignature */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : Discrete */;
val* var38 /* : Discrete */;
val* var39 /* : Iterator[nullable Object] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
long var_i42 /* var i: Int */;
long var43 /* : Int */;
val* var44 /* : nullable Object */;
val* var46 /* : nullable RuntimeVariable */;
val* var48 /* : nullable AExpr */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
var = NEW_range__Range(&type_range__Rangekernel__Int);
var1 = 0;
var2 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1552);
show_backtrace(1);
} else {
var3 = ((long (*)(val*))(var2->class->vft[COLOR_model__MSignature__arity]))(var2) /* arity on <var2:nullable MSignature>*/;
}
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AConcreteMethPropdef>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1553);
show_backtrace(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var10) /* n_params on <var10:nullable ASignature>*/;
}
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_i) /* [] on <var11:ANodes[AParam]>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_scope__AParam__variable]))(var12) /* variable on <var12:nullable Object(AParam)>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1553);
show_backtrace(1);
}
var_variable = var13;
var14 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__variable]))(var_v, var_variable) /* variable on <var_v:AbstractCompilerVisitor>*/;
var15 = 1;
{ /* Inline kernel#Int#+ (var_i,var15) */
var18 = var_i + var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var19 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var16) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__assign]))(var_v, var14, var19) /* assign on <var_v:AbstractCompilerVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var20 = ((val* (*)(val*))(self->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__auto_super_inits]))(self) /* auto_super_inits on <self:AConcreteMethPropdef>*/;
var_auto_super_inits = var20;
var21 = NULL;
if (var_auto_super_inits == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
var23 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var24 = 1;
((void (*)(val*, long))(var23->class->vft[COLOR_array__Array__with_capacity]))(var23, var24) /* with_capacity on <var23:Array[RuntimeVariable]>*/;
var_ = var23;
var25 = ((val* (*)(val*))(var_arguments->class->vft[COLOR_abstract_collection__Collection__first]))(var_arguments) /* first on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var25) /* push on <var_:Array[RuntimeVariable]>*/;
var_args = var_;
var26 = ((val* (*)(val*))(var_auto_super_inits->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_auto_super_inits) /* iterator on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
for(;;) {
var27 = ((short int (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var26) /* is_ok on <var26:Iterator[nullable Object]>*/;
if(!var27) break;
var28 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__item]))(var26) /* item on <var26:Iterator[nullable Object]>*/;
var_auto_super_init = var28;
((void (*)(val*))(var_args->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var_args) /* clear on <var_args:Array[RuntimeVariable]>*/;
var29 = NEW_range__Range(&type_range__Rangekernel__Int);
var30 = 0;
var31 = ((val* (*)(val*))(var_auto_super_init->class->vft[COLOR_typing__CallSite__msignature]))(var_auto_super_init) /* msignature on <var_auto_super_init:CallSite>*/;
var32 = ((long (*)(val*))(var31->class->vft[COLOR_model__MSignature__arity]))(var31) /* arity on <var31:MSignature>*/;
var33 = 1;
{ /* Inline kernel#Int#+ (var32,var33) */
var36 = var32 + var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var37 = BOX_kernel__Int(var30); /* autobox from Int to Discrete */
var38 = BOX_kernel__Int(var34); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var29->class->vft[COLOR_range__Range__without_last]))(var29, var37, var38) /* without_last on <var29:Range[Int]>*/;
var39 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Collection__iterator]))(var29) /* iterator on <var29:Range[Int]>*/;
for(;;) {
var40 = ((short int (*)(val*))(var39->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var39) /* is_ok on <var39:Iterator[nullable Object]>*/;
if(!var40) break;
var41 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Iterator__item]))(var39) /* item on <var39:Iterator[nullable Object]>*/;
var43 = ((struct instance_kernel__Int*)var41)->value; /* autounbox from nullable Object to Int */;
var_i42 = var43;
var44 = ((val* (*)(val*, long))(var_arguments->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_arguments, var_i42) /* [] on <var_arguments:Array[RuntimeVariable]>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var44) /* add on <var_args:Array[RuntimeVariable]>*/;
CONTINUE_label45: (void)0;
((void (*)(val*))(var39->class->vft[COLOR_abstract_collection__Iterator__next]))(var39) /* next on <var39:Iterator[nullable Object]>*/;
}
BREAK_label45: (void)0;
var46 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_auto_super_init, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
var46;
CONTINUE_label47: (void)0;
((void (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__next]))(var26) /* next on <var26:Iterator[nullable Object]>*/;
}
BREAK_label47: (void)0;
} else {
}
var48 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(self) /* n_block on <self:AConcreteMethPropdef>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__stmt]))(var_v, var48) /* stmt on <var_v:AbstractCompilerVisitor>*/;
RET_LABEL:;
}
/* method abstract_compiler#AConcreteMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AConcreteMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AConcreteMethPropdef__compile_to_c(self, p0, p1, p2);
RET_LABEL:;
}
/* method abstract_compiler#AConcreteMethPropdef#can_inline for (self: AConcreteMethPropdef): Bool */
short int abstract_compiler__AConcreteMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Array[CallSite] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MProperty */;
val* var13 /* : String */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
val* var19 /* : nullable MPropDef */;
val* var20 /* : MProperty */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : nullable MPropDef */;
val* var30 /* : MClassDef */;
val* var31 /* : MClass */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
short int var_42 /* var : Bool */;
val* var43 /* : ANodes[AExpr] */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_auto_super_init__AConcreteMethPropdef__auto_super_inits]))(self) /* auto_super_inits on <self:AConcreteMethPropdef>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(self) /* n_block on <self:AConcreteMethPropdef>*/;
var_nblock = var5;
var6 = NULL;
if (var_nblock == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1576);
show_backtrace(1);
} else {
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_model__MPropDef__mproperty]))(var11) /* mproperty on <var11:nullable MPropDef(nullable MMethodDef)>*/;
}
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MProperty__name]))(var12) /* name on <var12:MProperty(MMethod)>*/;
if (varonce) {
var14 = varonce;
} else {
var15 = "==";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
var18 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var14) /* == on <var13:String>*/;
var_ = var18;
if (var18){
var10 = var_;
} else {
var19 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1576);
show_backtrace(1);
} else {
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MPropDef__mproperty]))(var19) /* mproperty on <var19:nullable MPropDef(nullable MMethodDef)>*/;
}
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_model__MProperty__name]))(var20) /* name on <var20:MProperty(MMethod)>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "!=";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var23) /* == on <var21:String>*/;
var10 = var27;
}
var_28 = var10;
if (var10){
var29 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/abstract_compiler.nit", 1576);
show_backtrace(1);
} else {
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_model__MPropDef__mclassdef]))(var29) /* mclassdef on <var29:nullable MPropDef(nullable MMethodDef)>*/;
}
var31 = ((val* (*)(val*))(var30->class->vft[COLOR_model__MClassDef__mclass]))(var30) /* mclass on <var30:MClassDef>*/;
var32 = ((val* (*)(val*))(var31->class->vft[COLOR_model__MClass__name]))(var31) /* name on <var31:MClass>*/;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "Object";
var36 = 6;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var34) /* == on <var32:String>*/;
var9 = var38;
} else {
var9 = var_28;
}
if (var9){
var39 = 1;
var = var39;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_parser_nodes__ABlockExpr.color;
idtype = type_parser_nodes__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var41 = 0;
} else {
var41 = var_nblock->type->type_table[cltype] == idtype;
}
var_42 = var41;
if (var41){
var43 = ((val* (*)(val*))(var_nblock->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var_nblock) /* n_expr on <var_nblock:nullable AExpr(ABlockExpr)>*/;
var44 = ((long (*)(val*))(var43->class->vft[COLOR_abstract_collection__Collection__length]))(var43) /* length on <var43:ANodes[AExpr]>*/;
var45 = 0;
{ /* Inline kernel#Int#== (var44,var45) */
var48 = var44 == var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var40 = var46;
} else {
var40 = var_42;
}
if (var40){
var49 = 1;
var = var49;
goto RET_LABEL;
} else {
}
var50 = 0;
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AConcreteMethPropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__AConcreteMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AConcreteMethPropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
