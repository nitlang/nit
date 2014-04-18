#include "posix.sep.0.h"
/* method posix#Sys#uid= for (self: Sys, Int): Bool */
short int posix__Sys__uid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_uid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#uid= for (self: Object, Int): Bool */
short int VIRTUAL_posix__Sys__uid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = posix__Sys__uid_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Sys#uid for (self: Sys): Int */
long posix__Sys__uid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_uid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#uid for (self: Object): Int */
long VIRTUAL_posix__Sys__uid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = posix__Sys__uid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Sys#gid= for (self: Sys, Int): Bool */
short int posix__Sys__gid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_gid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#gid= for (self: Object, Int): Bool */
short int VIRTUAL_posix__Sys__gid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = posix__Sys__gid_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Sys#gid for (self: Sys): Int */
long posix__Sys__gid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_gid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#gid for (self: Object): Int */
long VIRTUAL_posix__Sys__gid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = posix__Sys__gid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Sys#euid= for (self: Sys, Int): Bool */
short int posix__Sys__euid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_euid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#euid= for (self: Object, Int): Bool */
short int VIRTUAL_posix__Sys__euid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = posix__Sys__euid_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Sys#euid for (self: Sys): Int */
long posix__Sys__euid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_euid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#euid for (self: Object): Int */
long VIRTUAL_posix__Sys__euid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = posix__Sys__euid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Sys#egid= for (self: Sys, Int): Bool */
short int posix__Sys__egid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_egid__assign___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#egid= for (self: Object, Int): Bool */
short int VIRTUAL_posix__Sys__egid_61d(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = posix__Sys__egid_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Sys#egid for (self: Sys): Int */
long posix__Sys__egid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = posix___Sys_egid___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Sys#egid for (self: Object): Int */
long VIRTUAL_posix__Sys__egid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = posix__Sys__egid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Passwd#from_uid for (self: Passwd, Int): Passwd */
void* posix__Passwd__from_uid(void* self, long p0) {
void* var /* : Passwd */;
void* var1 /* : Passwd */;
var1 = posix___new_Passwd_from_uid___impl(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#from_uid for (self: Object, Int): Passwd */
void* VIRTUAL_posix__Passwd__from_uid(val* self, long p0) {
void* var /* : Passwd */;
val* var1 /* : Object */;
void* var2 /* : Passwd */;
void* var3 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__from_uid(var2, p0);
var3 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to Passwd */;
var = var3;
RET_LABEL:;
return var;
}
/* method posix#Passwd#from_name for (self: Passwd, String): Passwd */
void* posix__Passwd__from_name(void* self, val* p0) {
void* var /* : Passwd */;
void* var1 /* : Passwd */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = p0;
var1 = posix___new_Passwd_from_name___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::string::String::to_cstring */
char* posix___String_to_cstring( struct nitni_instance * recv ) {
char* var /* : NativeString */;
var = ((char* (*)(val*))(recv->value->class->vft[COLOR_string__String__to_cstring]))(recv->value) /* to_cstring on <recv->value:String>*/;
return var;
}
/* method posix#Passwd#from_name for (self: Object, String): Passwd */
void* VIRTUAL_posix__Passwd__from_name(val* self, val* p0) {
void* var /* : Passwd */;
val* var1 /* : Object */;
void* var2 /* : Passwd */;
void* var3 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__from_name(var2, p0);
var3 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to Passwd */;
var = var3;
RET_LABEL:;
return var;
}
/* method posix#Passwd#name for (self: Passwd): String */
val* posix__Passwd__name(void* self) {
val* var /* : String */;
val* var1 /* : String */;
struct nitni_instance* ret_var;
ret_var = posix___Passwd_name___impl(self);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::string::Object::to_s */
struct nitni_instance * posix___NativeString_to_s( char* recv ) {
val* var /* : String */;
var = string__NativeString__to_s(recv);
struct nitni_instance* ret_for_c;
ret_for_c = malloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* method posix#Passwd#name for (self: Object): String */
val* VIRTUAL_posix__Passwd__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__name(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Passwd#passwd for (self: Passwd): String */
val* posix__Passwd__passwd(void* self) {
val* var /* : String */;
val* var1 /* : String */;
struct nitni_instance* ret_var;
ret_var = posix___Passwd_passwd___impl(self);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#passwd for (self: Object): String */
val* VIRTUAL_posix__Passwd__passwd(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__passwd(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Passwd#uid for (self: Passwd): Int */
long posix__Passwd__uid(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = posix___Passwd_uid___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#uid for (self: Object): Int */
long VIRTUAL_posix__Passwd__uid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__uid(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Passwd#gid for (self: Passwd): Int */
long posix__Passwd__gid(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = posix___Passwd_gid___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#gid for (self: Object): Int */
long VIRTUAL_posix__Passwd__gid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__gid(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Passwd#dir for (self: Passwd): String */
val* posix__Passwd__dir(void* self) {
val* var /* : String */;
val* var1 /* : String */;
struct nitni_instance* ret_var;
ret_var = posix___Passwd_dir___impl(self);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#dir for (self: Object): String */
val* VIRTUAL_posix__Passwd__dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__dir(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Passwd#shell for (self: Passwd): String */
val* posix__Passwd__shell(void* self) {
val* var /* : String */;
val* var1 /* : String */;
struct nitni_instance* ret_var;
ret_var = posix___Passwd_shell___impl(self);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Passwd#shell for (self: Object): String */
val* VIRTUAL_posix__Passwd__shell(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Passwd */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Passwd */;
var1 = posix__Passwd__shell(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Group#from_gid for (self: Group, Int): Group */
void* posix__Group__from_gid(void* self, long p0) {
void* var /* : Group */;
void* var1 /* : Group */;
var1 = posix___new_Group_from_gid___impl(p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#from_gid for (self: Object, Int): Group */
void* VIRTUAL_posix__Group__from_gid(val* self, long p0) {
void* var /* : Group */;
val* var1 /* : Object */;
void* var2 /* : Group */;
void* var3 /* : Group */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Group */;
var1 = posix__Group__from_gid(var2, p0);
var3 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to Group */;
var = var3;
RET_LABEL:;
return var;
}
/* method posix#Group#from_name for (self: Group, String): Group */
void* posix__Group__from_name(void* self, val* p0) {
void* var /* : Group */;
void* var1 /* : Group */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = malloc(sizeof(struct nitni_instance));
var_for_c_0->value = p0;
var1 = posix___new_Group_from_name___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#from_name for (self: Object, String): Group */
void* VIRTUAL_posix__Group__from_name(val* self, val* p0) {
void* var /* : Group */;
val* var1 /* : Object */;
void* var2 /* : Group */;
void* var3 /* : Group */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Group */;
var1 = posix__Group__from_name(var2, p0);
var3 = ((struct instance_kernel__Pointer*)var1)->value; /* autounbox from Object to Group */;
var = var3;
RET_LABEL:;
return var;
}
/* method posix#Group#name for (self: Group): String */
val* posix__Group__name(void* self) {
val* var /* : String */;
val* var1 /* : String */;
struct nitni_instance* ret_var;
ret_var = posix___Group_name___impl(self);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#name for (self: Object): String */
val* VIRTUAL_posix__Group__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Group */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Group */;
var1 = posix__Group__name(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Group#passwd for (self: Group): String */
val* posix__Group__passwd(void* self) {
val* var /* : String */;
val* var1 /* : String */;
struct nitni_instance* ret_var;
ret_var = posix___Group_passwd___impl(self);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#passwd for (self: Object): String */
val* VIRTUAL_posix__Group__passwd(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Group */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Group */;
var1 = posix__Group__passwd(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Group#gid for (self: Group): Int */
long posix__Group__gid(void* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = posix___Group_gid___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method posix#Group#gid for (self: Object): Int */
long VIRTUAL_posix__Group__gid(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Group */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Group */;
var1 = posix__Group__gid(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method posix#Group#mem for (self: Group): Array[String] */
val* posix__Group__mem(void* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
struct nitni_instance* ret_var;
ret_var = posix___Group_mem___impl(self);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for standard::array::Array::init */
struct nitni_instance * posix___new_Array_of_String(  ) {
val* var /* : Array[String] */;
var = NEW_array__Array(&type_array__Arraystring__String);
val* recv /* var self: Array[String] */;
recv = var;
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[String]>*/;
struct nitni_instance* ret_for_c;
ret_for_c = malloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* nitni callback for standard::abstract_collection::SimpleCollection::add */
void posix___Array_of_String_add( struct nitni_instance * recv, struct nitni_instance * item ) {
((void (*)(val*, val*))(recv->value->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(recv->value, item->value) /* add on <recv->value:Array[String]>*/;
}
/* method posix#Group#mem for (self: Object): Array[String] */
val* VIRTUAL_posix__Group__mem(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
void* var2 /* : Group */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Group */;
var1 = posix__Group__mem(var2);
var = var1;
RET_LABEL:;
return var;
}
