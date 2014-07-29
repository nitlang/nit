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
long var3 /* : Int */;
{ /* Inline time#Object#get_time (self) on <self:Object> */
var3 = kernel_Any_Any_get_time_0(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
