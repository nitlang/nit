#include "collection.sep.0.h"
/* method collection#Sequence#subarray for (self: Sequence[nullable Object], Int, Int): Array[nullable Object] */
val* collection__Sequence__subarray(val* self, long p0, long p1) {
val* var /* : Array[nullable Object] */;
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var1 /* : Array[nullable Object] */;
val* var_a /* var a: Array[nullable Object] */;
val* var2 /* : Range[Int] */;
long var3 /* : Int */;
long var5 /* : Int */;
val* var6 /* : Discrete */;
val* var7 /* : Discrete */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
long var_i /* var i: Int */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
var_start = p0;
var_len = p1;
var1 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayabstract_collection__Sequence_FT0]);
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var_len) /* with_capacity on <var1:Array[nullable Object]>*/;
var_a = var1;
var2 = NEW_range__Range(&type_range__Rangekernel__Int);
{ /* Inline kernel#Int#+ (var_start,var_len) */
var5 = var_start + var_len;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var6 = BOX_kernel__Int(var_start); /* autobox from Int to Discrete */
var7 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var2->class->vft[COLOR_range__Range__without_last]))(var2, var6, var7) /* without_last on <var2:Range[Int]>*/;
var8 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Range[Int]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var11 = ((struct instance_kernel__Int*)var10)->value; /* autounbox from nullable Object to Int */;
var_i = var11;
var12 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:Sequence[nullable Object]>*/;
((void (*)(val*, val*))(var_a->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_a, var12) /* add on <var_a:Array[nullable Object]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method collection#Sequence#subarray for (self: Object, Int, Int): Array[nullable Object] */
val* VIRTUAL_collection__Sequence__subarray(val* self, long p0, long p1) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = collection__Sequence__subarray(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
