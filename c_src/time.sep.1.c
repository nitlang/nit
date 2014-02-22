#include "time.sep.0.h"
/* method time#Object#get_time for (self: Object): Int */
long time__Object__get_time(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel_Any_Any_get_time_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Object#get_time for (self: Object): Int */
long VIRTUAL_time__Object__get_time(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = time__Object__get_time(self);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Sys#nanosleep for (self: Sys, Int, Int) */
void time__Sys__nanosleep(val* self, long p0, long p1) {
std_nanosleep(self, p0, p1);
RET_LABEL:;
}
/* method time#Sys#nanosleep for (self: Object, Int, Int) */
void VIRTUAL_time__Sys__nanosleep(val* self, long p0, long p1) {
time__Sys__nanosleep(self, p0, p1);
RET_LABEL:;
}
/* method time#TimeT#init for (self: TimeT): TimeT */
void* time__TimeT__init(void* self) {
void* var /* : TimeT */;
printf("NOT YET IMPLEMENTED nitni for time#TimeT#init at lib/standard/time.nit:34,2--29\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#TimeT#init for (self: Object): TimeT */
void* VIRTUAL_time__TimeT__init(val* self) {
void* var /* : TimeT */;
val* var1 /* : Object */;
void* var2 /* : TimeT */;
void* var3 /* : TimeT */;
var2 = ((struct instance_time__TimeT*)self)->value; /* autounbox from Object to TimeT */;
var1 = time__TimeT__init(var2);
var3 = ((struct instance_time__TimeT*)var1)->value; /* autounbox from Object to TimeT */;
var = var3;
RET_LABEL:;
return var;
}
/* method time#TimeT#from_i for (self: TimeT, Int): TimeT */
void* time__TimeT__from_i(void* self, long p0) {
void* var /* : TimeT */;
printf("NOT YET IMPLEMENTED nitni for time#TimeT#from_i at lib/standard/time.nit:35,2--35\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#TimeT#from_i for (self: Object, Int): TimeT */
void* VIRTUAL_time__TimeT__from_i(val* self, long p0) {
void* var /* : TimeT */;
val* var1 /* : Object */;
void* var2 /* : TimeT */;
void* var3 /* : TimeT */;
var2 = ((struct instance_time__TimeT*)self)->value; /* autounbox from Object to TimeT */;
var1 = time__TimeT__from_i(var2, p0);
var3 = ((struct instance_time__TimeT*)var1)->value; /* autounbox from Object to TimeT */;
var = var3;
RET_LABEL:;
return var;
}
/* method time#TimeT#update for (self: TimeT) */
void time__TimeT__update(void* self) {
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#TimeT#update at lib/standard/time.nit:37,2--30\n");
show_backtrace(1);
RET_LABEL:;
}
/* method time#TimeT#update for (self: Object) */
void VIRTUAL_time__TimeT__update(val* self) {
void* var /* : TimeT */;
var = ((struct instance_time__TimeT*)self)->value; /* autounbox from Object to TimeT */;
time__TimeT__update(var);
RET_LABEL:;
}
/* method time#TimeT#ctime for (self: TimeT): String */
val* time__TimeT__ctime(void* self) {
val* var /* : String */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#TimeT#ctime at lib/standard/time.nit:39,2--41,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#TimeT#ctime for (self: Object): String */
val* VIRTUAL_time__TimeT__ctime(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : TimeT */;
var2 = ((struct instance_time__TimeT*)self)->value; /* autounbox from Object to TimeT */;
var1 = time__TimeT__ctime(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#TimeT#difftime for (self: TimeT, TimeT): Float */
double time__TimeT__difftime(void* self, void* p0) {
double var /* : Float */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#TimeT#difftime at lib/standard/time.nit:43,2--44,70\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#TimeT#difftime for (self: Object, TimeT): Float */
double VIRTUAL_time__TimeT__difftime(val* self, void* p0) {
double var /* : Float */;
double var1 /* : Float */;
void* var2 /* : TimeT */;
var2 = ((struct instance_time__TimeT*)self)->value; /* autounbox from Object to TimeT */;
var1 = time__TimeT__difftime(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method time#TimeT#to_s for (self: TimeT): String */
val* time__TimeT__to_s(void* self) {
val* var /* : String */;
val* var1 /* : String */;
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
val* var11 /* : String */;
var1 = time__TimeT__ctime(self);
if (varonce) {
var2 = varonce;
} else {
var3 = "\n";
var4 = 1;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = ((val* (*)(val*, val*, val*))(var1->class->vft[COLOR_string_search__String__replace]))(var1, var2, var7) /* replace on <var1:String>*/;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#TimeT#to_s for (self: Object): String */
val* VIRTUAL_time__TimeT__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : TimeT */;
var2 = ((struct instance_time__TimeT*)self)->value; /* autounbox from Object to TimeT */;
var1 = time__TimeT__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#TimeT#to_i for (self: TimeT): Int */
long time__TimeT__to_i(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#TimeT#to_i at lib/standard/time.nit:47,2--38\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#TimeT#to_i for (self: Object): Int */
long VIRTUAL_time__TimeT__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : TimeT */;
var2 = ((struct instance_time__TimeT*)self)->value; /* autounbox from Object to TimeT */;
var1 = time__TimeT__to_i(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#gmtime for (self: Tm): Tm */
void* time__Tm__gmtime(void* self) {
void* var /* : Tm */;
printf("NOT YET IMPLEMENTED nitni for time#Tm#gmtime at lib/standard/time.nit:52,2--57,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#gmtime for (self: Object): Tm */
void* VIRTUAL_time__Tm__gmtime(val* self) {
void* var /* : Tm */;
val* var1 /* : Object */;
void* var2 /* : Tm */;
void* var3 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__gmtime(var2);
var3 = ((struct instance_time__Tm*)var1)->value; /* autounbox from Object to Tm */;
var = var3;
RET_LABEL:;
return var;
}
/* method time#Tm#gmtime_from_timet for (self: Tm, TimeT): Tm */
void* time__Tm__gmtime_from_timet(void* self, void* p0) {
void* var /* : Tm */;
printf("NOT YET IMPLEMENTED nitni for time#Tm#gmtime_from_timet at lib/standard/time.nit:58,2--62,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#gmtime_from_timet for (self: Object, TimeT): Tm */
void* VIRTUAL_time__Tm__gmtime_from_timet(val* self, void* p0) {
void* var /* : Tm */;
val* var1 /* : Object */;
void* var2 /* : Tm */;
void* var3 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__gmtime_from_timet(var2, p0);
var3 = ((struct instance_time__Tm*)var1)->value; /* autounbox from Object to Tm */;
var = var3;
RET_LABEL:;
return var;
}
/* method time#Tm#localtime for (self: Tm): Tm */
void* time__Tm__localtime(void* self) {
void* var /* : Tm */;
printf("NOT YET IMPLEMENTED nitni for time#Tm#localtime at lib/standard/time.nit:64,2--69,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#localtime for (self: Object): Tm */
void* VIRTUAL_time__Tm__localtime(val* self) {
void* var /* : Tm */;
val* var1 /* : Object */;
void* var2 /* : Tm */;
void* var3 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__localtime(var2);
var3 = ((struct instance_time__Tm*)var1)->value; /* autounbox from Object to Tm */;
var = var3;
RET_LABEL:;
return var;
}
/* method time#Tm#localtime_from_timet for (self: Tm, TimeT): Tm */
void* time__Tm__localtime_from_timet(void* self, void* p0) {
void* var /* : Tm */;
printf("NOT YET IMPLEMENTED nitni for time#Tm#localtime_from_timet at lib/standard/time.nit:70,2--74,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#localtime_from_timet for (self: Object, TimeT): Tm */
void* VIRTUAL_time__Tm__localtime_from_timet(val* self, void* p0) {
void* var /* : Tm */;
val* var1 /* : Object */;
void* var2 /* : Tm */;
void* var3 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__localtime_from_timet(var2, p0);
var3 = ((struct instance_time__Tm*)var1)->value; /* autounbox from Object to Tm */;
var = var3;
RET_LABEL:;
return var;
}
/* method time#Tm#to_timet for (self: Tm): TimeT */
void* time__Tm__to_timet(void* self) {
void* var /* : TimeT */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#to_timet at lib/standard/time.nit:76,2--47\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#to_timet for (self: Object): TimeT */
void* VIRTUAL_time__Tm__to_timet(val* self) {
void* var /* : TimeT */;
void* var1 /* : TimeT */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__to_timet(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#sec for (self: Tm): Int */
long time__Tm__sec(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#sec at lib/standard/time.nit:78,2--40\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#sec for (self: Object): Int */
long VIRTUAL_time__Tm__sec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__sec(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#min for (self: Tm): Int */
long time__Tm__min(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#min at lib/standard/time.nit:79,2--40\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#min for (self: Object): Int */
long VIRTUAL_time__Tm__min(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__min(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#hour for (self: Tm): Int */
long time__Tm__hour(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#hour at lib/standard/time.nit:80,2--42\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#hour for (self: Object): Int */
long VIRTUAL_time__Tm__hour(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__hour(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#mday for (self: Tm): Int */
long time__Tm__mday(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#mday at lib/standard/time.nit:81,2--42\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#mday for (self: Object): Int */
long VIRTUAL_time__Tm__mday(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__mday(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#mon for (self: Tm): Int */
long time__Tm__mon(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#mon at lib/standard/time.nit:82,2--40\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#mon for (self: Object): Int */
long VIRTUAL_time__Tm__mon(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__mon(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#year for (self: Tm): Int */
long time__Tm__year(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#year at lib/standard/time.nit:83,2--42\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#year for (self: Object): Int */
long VIRTUAL_time__Tm__year(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__year(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#wday for (self: Tm): Int */
long time__Tm__wday(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#wday at lib/standard/time.nit:84,2--42\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#wday for (self: Object): Int */
long VIRTUAL_time__Tm__wday(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__wday(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#yday for (self: Tm): Int */
long time__Tm__yday(void* self) {
long var /* : Int */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#yday at lib/standard/time.nit:85,2--42\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#yday for (self: Object): Int */
long VIRTUAL_time__Tm__yday(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__yday(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#is_dst for (self: Tm): Bool */
short int time__Tm__is_dst(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#is_dst at lib/standard/time.nit:86,2--46\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#is_dst for (self: Object): Bool */
short int VIRTUAL_time__Tm__is_dst(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__is_dst(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#asctime for (self: Tm): String */
val* time__Tm__asctime(void* self) {
val* var /* : String */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#asctime at lib/standard/time.nit:88,2--90,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#asctime for (self: Object): String */
val* VIRTUAL_time__Tm__asctime(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__asctime(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#strftime for (self: Tm, String): String */
val* time__Tm__strftime(void* self, val* p0) {
val* var /* : String */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for time#Tm#strftime at lib/standard/time.nit:91,2--100,3\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method time#Tm#strftime for (self: Object, String): String */
val* VIRTUAL_time__Tm__strftime(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__strftime(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method time#Tm#to_s for (self: Tm): String */
val* time__Tm__to_s(void* self) {
val* var /* : String */;
val* var1 /* : String */;
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
val* var11 /* : String */;
var1 = time__Tm__asctime(self);
if (varonce) {
var2 = varonce;
} else {
var3 = "\n";
var4 = 1;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = ((val* (*)(val*, val*, val*))(var1->class->vft[COLOR_string_search__String__replace]))(var1, var2, var7) /* replace on <var1:String>*/;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#to_s for (self: Object): String */
val* VIRTUAL_time__Tm__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Tm */;
var2 = ((struct instance_time__Tm*)self)->value; /* autounbox from Object to Tm */;
var1 = time__Tm__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
