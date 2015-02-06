#include "standard__time.sep.0.h"
/* method time#Object#get_time for (self: Object): Int */
long standard__time___Object___get_time(val* self) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = kernel_Any_Any_get_time_0(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
