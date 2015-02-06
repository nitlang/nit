#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AForExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : null */;
val* var4 /* : RuntimeVariable */;
val* var_cl /* var cl: RuntimeVariable */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
val* var_it_meth /* var it_meth: nullable CallSite */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[RuntimeVariable] */;
long var15 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var16 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
val* var_isok_meth /* var isok_meth: nullable CallSite */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : Array[RuntimeVariable] */;
long var37 /* : Int */;
val* var_38 /* var : Array[RuntimeVariable] */;
val* var39 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : nullable Array[Variable] */;
val* var62 /* : nullable Array[Variable] */;
long var63 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : nullable CallSite */;
val* var72 /* : nullable CallSite */;
val* var_item_meth /* var item_meth: nullable CallSite */;
val* var73 /* : null */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : Array[RuntimeVariable] */;
long var80 /* : Int */;
val* var_81 /* var : Array[RuntimeVariable] */;
val* var82 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
val* var83 /* : null */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
val* var89 /* : nullable Array[Variable] */;
val* var91 /* : nullable Array[Variable] */;
val* var92 /* : nullable Object */;
val* var93 /* : RuntimeVariable */;
val* var94 /* : nullable Array[Variable] */;
val* var96 /* : nullable Array[Variable] */;
long var97 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : nullable CallSite */;
val* var106 /* : nullable CallSite */;
val* var_key_meth /* var key_meth: nullable CallSite */;
val* var107 /* : null */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
val* var113 /* : Array[RuntimeVariable] */;
long var114 /* : Int */;
val* var_115 /* var : Array[RuntimeVariable] */;
val* var116 /* : nullable RuntimeVariable */;
val* var_i117 /* var i: nullable RuntimeVariable */;
val* var118 /* : null */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
val* var124 /* : nullable Array[Variable] */;
val* var126 /* : nullable Array[Variable] */;
long var127 /* : Int */;
val* var128 /* : nullable Object */;
val* var129 /* : RuntimeVariable */;
val* var130 /* : nullable CallSite */;
val* var132 /* : nullable CallSite */;
val* var_item_meth133 /* var item_meth: nullable CallSite */;
val* var134 /* : null */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
val* var140 /* : Array[RuntimeVariable] */;
long var141 /* : Int */;
val* var_142 /* var : Array[RuntimeVariable] */;
val* var143 /* : nullable RuntimeVariable */;
val* var144 /* : null */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : nullable Array[Variable] */;
val* var152 /* : nullable Array[Variable] */;
long var153 /* : Int */;
val* var154 /* : nullable Object */;
val* var155 /* : RuntimeVariable */;
val* var156 /* : nullable AExpr */;
val* var158 /* : nullable AExpr */;
val* var159 /* : nullable EscapeMark */;
val* var161 /* : nullable EscapeMark */;
val* var162 /* : nullable CallSite */;
val* var164 /* : nullable CallSite */;
val* var_next_meth /* var next_meth: nullable CallSite */;
val* var165 /* : null */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
val* var171 /* : Array[RuntimeVariable] */;
long var172 /* : Int */;
val* var_173 /* var : Array[RuntimeVariable] */;
val* var174 /* : nullable RuntimeVariable */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : FlatString */;
val* var180 /* : nullable EscapeMark */;
val* var182 /* : nullable EscapeMark */;
val* var183 /* : nullable CallSite */;
val* var185 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
val* var186 /* : null */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
val* var192 /* : Array[RuntimeVariable] */;
long var193 /* : Int */;
val* var_194 /* var : Array[RuntimeVariable] */;
val* var195 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var, var3);
}
var_cl = var4;
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var7 = self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_it_meth = var5;
var8 = NULL;
if (var_it_meth == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it_meth,var8) on <var_it_meth:nullable CallSite> */
var_other = var8;
{
var12 = ((short int (*)(val* self, val* p0))(var_it_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_it_meth, var_other) /* == on <var_it_meth:nullable CallSite(CallSite)>*/;
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2563);
show_backtrace(1);
}
var14 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var15 = 1;
{
standard___standard__Array___with_capacity(var14, var15); /* Direct call array#Array#with_capacity on <var14:Array[RuntimeVariable]>*/
}
var_ = var14;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_cl); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var16 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_it_meth, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_it = var16;
var17 = NULL;
if (var_it == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it,var17) on <var_it:nullable RuntimeVariable> */
var_other = var17;
{
var21 = ((short int (*)(val* self, val* p0))(var_it->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_it, var_other) /* == on <var_it:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2565);
show_backtrace(1);
}
if (varonce) {
var23 = varonce;
} else {
var24 = "for(;;) {";
var25 = 9;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var29 = self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_isok_meth = var27;
var30 = NULL;
if (var_isok_meth == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_isok_meth,var30) on <var_isok_meth:nullable CallSite> */
var_other = var30;
{
var34 = ((short int (*)(val* self, val* p0))(var_isok_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_isok_meth, var_other) /* == on <var_isok_meth:nullable CallSite(CallSite)>*/;
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (unlikely(!var31)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2568);
show_backtrace(1);
}
var36 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var37 = 1;
{
standard___standard__Array___with_capacity(var36, var37); /* Direct call array#Array#with_capacity on <var36:Array[RuntimeVariable]>*/
}
var_38 = var36;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_38, var_it); /* Direct call array#AbstractArray#push on <var_38:Array[RuntimeVariable]>*/
}
{
var39 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_isok_meth, var_38) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_ok = var39;
var40 = NULL;
if (var_ok == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ok,var40) on <var_ok:nullable RuntimeVariable> */
var_other = var40;
{
var44 = ((short int (*)(val* self, val* p0))(var_ok->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ok, var_other) /* == on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2570);
show_backtrace(1);
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "if(!";
var49 = 4;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ") break;";
var54 = 8;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_standard__NativeArray(var57, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var58)->values[0] = (val*) var47;
((struct instance_standard__NativeArray*)var58)->values[1] = (val*) var_ok;
((struct instance_standard__NativeArray*)var58)->values[2] = (val*) var52;
{
((void (*)(val* self, val* p0, long p1))(var56->class->vft[COLOR_standard__array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val* self))(var56->class->vft[COLOR_standard__string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var62 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2572);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var60) on <var60:nullable Array[Variable]> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var65 = var60->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var60:nullable Array[Variable]> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var66 = 1;
{
{ /* Inline kernel#Int#== (var63,var66) on <var63:Int> */
var69 = var63 == var66;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var72 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_item_meth = var70;
var73 = NULL;
if (var_item_meth == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth,var73) on <var_item_meth:nullable CallSite> */
var_other = var73;
{
var77 = ((short int (*)(val* self, val* p0))(var_item_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_item_meth, var_other) /* == on <var_item_meth:nullable CallSite(CallSite)>*/;
}
var78 = !var77;
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (unlikely(!var74)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2574);
show_backtrace(1);
}
var79 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var80 = 1;
{
standard___standard__Array___with_capacity(var79, var80); /* Direct call array#Array#with_capacity on <var79:Array[RuntimeVariable]>*/
}
var_81 = var79;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_81, var_it); /* Direct call array#AbstractArray#push on <var_81:Array[RuntimeVariable]>*/
}
{
var82 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth, var_81) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i = var82;
var83 = NULL;
if (var_i == NULL) {
var84 = 0; /* is null */
} else {
var84 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i,var83) on <var_i:nullable RuntimeVariable> */
var_other = var83;
{
var87 = ((short int (*)(val* self, val* p0))(var_i->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i, var_other) /* == on <var_i:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var88 = !var87;
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (unlikely(!var84)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2576);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var91 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (var89 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2577);
show_backtrace(1);
} else {
var92 = standard___standard__SequenceRead___Collection__first(var89);
}
{
var93 = nit___nit__AbstractCompilerVisitor___variable(var_v, var92);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var93, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var96 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (var94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2578);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var94) on <var94:nullable Array[Variable]> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var99 = var94->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var94:nullable Array[Variable]> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
var100 = 2;
{
{ /* Inline kernel#Int#== (var97,var100) on <var97:Int> */
var103 = var97 == var100;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
if (var101){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var106 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var_key_meth = var104;
var107 = NULL;
if (var_key_meth == NULL) {
var108 = 0; /* is null */
} else {
var108 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_key_meth,var107) on <var_key_meth:nullable CallSite> */
var_other = var107;
{
var111 = ((short int (*)(val* self, val* p0))(var_key_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_key_meth, var_other) /* == on <var_key_meth:nullable CallSite(CallSite)>*/;
}
var112 = !var111;
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (unlikely(!var108)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2580);
show_backtrace(1);
}
var113 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var114 = 1;
{
standard___standard__Array___with_capacity(var113, var114); /* Direct call array#Array#with_capacity on <var113:Array[RuntimeVariable]>*/
}
var_115 = var113;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_115, var_it); /* Direct call array#AbstractArray#push on <var_115:Array[RuntimeVariable]>*/
}
{
var116 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_key_meth, var_115) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i117 = var116;
var118 = NULL;
if (var_i117 == NULL) {
var119 = 0; /* is null */
} else {
var119 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i117,var118) on <var_i117:nullable RuntimeVariable> */
var_other = var118;
{
var122 = ((short int (*)(val* self, val* p0))(var_i117->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i117, var_other) /* == on <var_i117:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var123 = !var122;
var120 = var123;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
var119 = var120;
}
if (unlikely(!var119)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2582);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var126 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
var127 = 0;
if (var124 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2583);
show_backtrace(1);
} else {
var128 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var124, var127);
}
{
var129 = nit___nit__AbstractCompilerVisitor___variable(var_v, var128);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var129, var_i117); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var132 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
var_item_meth133 = var130;
var134 = NULL;
if (var_item_meth133 == NULL) {
var135 = 0; /* is null */
} else {
var135 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth133,var134) on <var_item_meth133:nullable CallSite> */
var_other = var134;
{
var138 = ((short int (*)(val* self, val* p0))(var_item_meth133->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_item_meth133, var_other) /* == on <var_item_meth133:nullable CallSite(CallSite)>*/;
}
var139 = !var138;
var136 = var139;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
var135 = var136;
}
if (unlikely(!var135)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2585);
show_backtrace(1);
}
var140 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var141 = 1;
{
standard___standard__Array___with_capacity(var140, var141); /* Direct call array#Array#with_capacity on <var140:Array[RuntimeVariable]>*/
}
var_142 = var140;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_142, var_it); /* Direct call array#AbstractArray#push on <var_142:Array[RuntimeVariable]>*/
}
{
var143 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth133, var_142) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i117 = var143;
var144 = NULL;
if (var_i117 == NULL) {
var145 = 0; /* is null */
} else {
var145 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i117,var144) on <var_i117:nullable RuntimeVariable> */
var_other = var144;
{
var148 = ((short int (*)(val* self, val* p0))(var_i117->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_i117, var_other) /* == on <var_i117:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var149 = !var148;
var146 = var149;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var145 = var146;
}
if (unlikely(!var145)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2587);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var152 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
var153 = 1;
if (var150 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2588);
show_backtrace(1);
} else {
var154 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var150, var153);
}
{
var155 = nit___nit__AbstractCompilerVisitor___variable(var_v, var154);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var155, var_i117); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2590);
show_backtrace(1);
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var158 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var156); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#continue_mark (self) on <self:AForExpr> */
var161 = self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var164 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
var_next_meth = var162;
var165 = NULL;
if (var_next_meth == NULL) {
var166 = 0; /* is null */
} else {
var166 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next_meth,var165) on <var_next_meth:nullable CallSite> */
var_other = var165;
{
var169 = ((short int (*)(val* self, val* p0))(var_next_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_next_meth, var_other) /* == on <var_next_meth:nullable CallSite(CallSite)>*/;
}
var170 = !var169;
var167 = var170;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
var166 = var167;
}
if (unlikely(!var166)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2595);
show_backtrace(1);
}
var171 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var172 = 1;
{
standard___standard__Array___with_capacity(var171, var172); /* Direct call array#Array#with_capacity on <var171:Array[RuntimeVariable]>*/
}
var_173 = var171;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_173, var_it); /* Direct call array#AbstractArray#push on <var_173:Array[RuntimeVariable]>*/
}
{
var174 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_next_meth, var_173) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
if (varonce175) {
var176 = varonce175;
} else {
var177 = "}";
var178 = 1;
var179 = standard___standard__NativeString___to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var182 = self->attrs[COLOR_nit__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___add_escape_label(var_v, var180); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var185 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var183 = var185;
RET_LABEL184:(void)0;
}
}
var_method_finish = var183;
var186 = NULL;
if (var_method_finish == NULL) {
var187 = 0; /* is null */
} else {
var187 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,var186) on <var_method_finish:nullable CallSite> */
var_other = var186;
{
var190 = ((short int (*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_method_finish, var_other) /* == on <var_method_finish:nullable CallSite(CallSite)>*/;
}
var191 = !var190;
var188 = var191;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
var187 = var188;
}
if (var187){
var192 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var193 = 1;
{
standard___standard__Array___with_capacity(var192, var193); /* Direct call array#Array#with_capacity on <var192:Array[RuntimeVariable]>*/
}
var_194 = var192;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_194, var_it); /* Direct call array#AbstractArray#push on <var_194:Array[RuntimeVariable]>*/
}
{
var195 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_method_finish, var_194) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AAssertExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
val* var16 /* : AExpr */;
val* var18 /* : AExpr */;
val* var19 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : nullable AExpr */;
val* var35 /* : nullable AExpr */;
val* var36 /* : nullable TId */;
val* var38 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var2 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 51);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = ((struct instance_standard__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:AAssertExpr> */
var18 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var16);
}
var_cond = var19;
if (varonce) {
var20 = varonce;
} else {
var21 = "if (unlikely(!";
var22 = 14;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = ")) {";
var27 = 4;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_standard__NativeArray(var30, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var31)->values[0] = (val*) var20;
((struct instance_standard__NativeArray*)var31)->values[1] = (val*) var_cond;
((struct instance_standard__NativeArray*)var31)->values[2] = (val*) var25;
{
((void (*)(val* self, val* p0, long p1))(var29->class->vft[COLOR_standard__array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val* self))(var29->class->vft[COLOR_standard__string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var35 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_id (self) on <self:AAssertExpr> */
var38 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_nid = var36;
var39 = NULL;
if (var_nid == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,var39) on <var_nid:nullable TId> */
var_other = var39;
{
var43 = ((short int (*)(val* self, val* p0))(var_nid->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nid, var_other) /* == on <var_nid:nullable TId(TId)>*/;
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Assert \'";
var48 = 8;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
var50 = nit__lexer_work___Token___text(var_nid);
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\' failed";
var54 = 8;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_standard__NativeArray(var57, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var58)->values[0] = (val*) var46;
((struct instance_standard__NativeArray*)var58)->values[1] = (val*) var50;
((struct instance_standard__NativeArray*)var58)->values[2] = (val*) var52;
{
((void (*)(val* self, val* p0, long p1))(var56->class->vft[COLOR_standard__array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val* self))(var56->class->vft[COLOR_standard__string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Assert failed";
var63 = 13;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "}";
var68 = 1;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : AExpr */;
val* var38 /* : AExpr */;
val* var39 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2629);
show_backtrace(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (";
var11 = 4;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") {";
var16 = 3;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_i1;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = 5;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "} else {";
var34 = 8;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrExpr> */
var38 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var36);
}
var_i2 = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ";
var43 = 3;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ";";
var48 = 1;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_standard__NativeArray(var51, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var41;
((struct instance_standard__NativeArray*)var52)->values[2] = (val*) var_i2;
((struct instance_standard__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val* self, val* p0, long p1))(var50->class->vft[COLOR_standard__array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val* self))(var50->class->vft[COLOR_standard__string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "}";
var57 = 1;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AImpliesExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : AExpr */;
val* var38 /* : AExpr */;
val* var39 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImpliesExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AImpliesExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2644);
show_backtrace(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AImpliesExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (!";
var11 = 5;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") {";
var16 = 3;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_i1;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = 5;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "} else {";
var34 = 8;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AImpliesExpr> */
var38 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var36);
}
var_i2 = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ";
var43 = 3;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ";";
var48 = 1;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_standard__NativeArray(var51, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var41;
((struct instance_standard__NativeArray*)var52)->values[2] = (val*) var_i2;
((struct instance_standard__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val* self, val* p0, long p1))(var50->class->vft[COLOR_standard__array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val* self))(var50->class->vft[COLOR_standard__string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "}";
var57 = 1;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAndExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : AExpr */;
val* var38 /* : AExpr */;
val* var39 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2659);
show_backtrace(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (!";
var11 = 5;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") {";
var16 = 3;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_i1;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = 0;";
var25 = 5;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "} else {";
var34 = 8;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AAndExpr> */
var38 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var36);
}
var_i2 = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ";
var43 = 3;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ";";
var48 = 1;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_standard__NativeArray(var51, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var52)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var52)->values[1] = (val*) var41;
((struct instance_standard__NativeArray*)var52)->values[2] = (val*) var_i2;
((struct instance_standard__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val* self, val* p0, long p1))(var50->class->vft[COLOR_standard__array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val* self))(var50->class->vft[COLOR_standard__string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "}";
var57 = 1;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ANotExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
val* var13 /* : nullable MType */;
val* var15 /* : nullable MType */;
val* var16 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ANotExpr#n_expr (self) on <self:ANotExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1857);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__AbstractCompilerVisitor___expr_bool(var_v, var1);
}
var_cond = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "!";
var7 = 1;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var5;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var_cond;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val* self))(var9->class->vft[COLOR_standard__string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANotExpr> */
var15 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ANotExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2675);
show_backtrace(1);
}
{
var16 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var12, var13);
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOrElseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : null */;
val* var9 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : AExpr */;
val* var30 /* : AExpr */;
val* var31 /* : null */;
val* var32 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrElseExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrElseExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2682);
show_backtrace(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = NULL;
{
var9 = nit___nit__AbstractCompilerVisitor___expr(var_v, var5, var8);
}
var_i1 = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "if (";
var12 = 4;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "!=NULL) {";
var17 = 9;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_standard__NativeArray(var20, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var21)->values[0] = (val*) var10;
((struct instance_standard__NativeArray*)var21)->values[1] = (val*) var_i1;
((struct instance_standard__NativeArray*)var21)->values[2] = (val*) var15;
{
((void (*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_standard__array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var_i1); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "} else {";
var26 = 8;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrElseExpr> */
var30 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = NULL;
{
var32 = nit___nit__AbstractCompilerVisitor___expr(var_v, var28, var31);
}
var_i2 = var32;
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var_res, var_i2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "}";
var36 = 1;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: AIntExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIntExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
val* var4 /* : String */;
long var5 /* : Int */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var13 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AIntExpr#value (self) on <self:AIntExpr> */
var3 = self->attrs[COLOR_nit__literal__AIntExpr___value].val; /* _value on <self:AIntExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2695);
show_backtrace(1);
} else {
var5 = ((struct instance_standard__Int*)var1)->value; /* autounbox from nullable Int to Int */;
var4 = standard__string___Int___Object__to_s(var5);
}
var6 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 1;
var8 = NEW_standard__NativeArray(var7, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var8)->values[0] = (val*) var4;
{
((void (*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIntExpr> */
var12 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AIntExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2695);
show_backtrace(1);
}
{
var13 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var9, var10);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AFloatExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : TFloat */;
val* var3 /* : TFloat */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2232);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__lexer_work___Token___text(var1);
}
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 1;
var7 = NEW_standard__NativeArray(var6, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var7)->values[0] = (val*) var4;
{
((void (*)(val* self, val* p0, long p1))(var5->class->vft[COLOR_standard__array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val* self))(var5->class->vft[COLOR_standard__string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFloatExpr> */
var11 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AFloatExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2699);
show_backtrace(1);
}
{
var12 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var8, var9);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ACharExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable Char */;
val* var7 /* : nullable Char */;
val* var8 /* : String */;
char var9 /* : Char */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
val* var23 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "\'";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var7 = self->attrs[COLOR_nit__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2703);
show_backtrace(1);
} else {
var9 = ((struct instance_standard__Char*)var5)->value; /* autounbox from nullable Char to Char */;
var8 = standard__string___Char___Object__to_s(var9);
}
{
var10 = standard___standard__Text___escape_to_c(var8);
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\'";
var14 = 1;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_standard__NativeArray(var17, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var10;
((struct instance_standard__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_standard__string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACharExpr> */
var22 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ACharExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2703);
show_backtrace(1);
}
{
var23 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var19, var20);
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AArrayExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var5 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : nullable RuntimeVariable */;
val* var11 /* : nullable RuntimeVariable */;
val* var_old_comprehension /* var old_comprehension: nullable RuntimeVariable */;
val* var12 /* : nullable StaticFrame */;
val* var14 /* : nullable StaticFrame */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var19 /* : Iterator[ANode] */;
val* var_20 /* var : Iterator[AExpr] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var24 /* : nullable StaticFrame */;
val* var26 /* : nullable StaticFrame */;
var_v = p0;
{
{ /* Inline typing#AArrayExpr#element_mtype (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2709);
show_backtrace(1);
}
var_mtype = var1;
var4 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[RuntimeVariable]>*/
}
var_array = var4;
{
var5 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(var_v, var_array, var_mtype);
}
var_res = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2713);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1744);
show_backtrace(1);
}
var11 = var6->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var6:nullable StaticFrame> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_old_comprehension = var9;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2714);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var12,var_res) on <var12:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1744);
show_backtrace(1);
}
var12->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val = var_res; /* _comprehension on <var12:nullable StaticFrame> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var18 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int (*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_20) /* is_ok on <var_20:Iterator[AExpr]>*/;
}
if (var21){
{
var22 = ((val* (*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_20) /* item on <var_20:Iterator[AExpr]>*/;
}
var_nexpr = var22;
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_nexpr); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void (*)(val* self))(var_20->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_20) /* next on <var_20:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:Iterator[AExpr]> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var26 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2718);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var24,var_old_comprehension) on <var24:nullable StaticFrame> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1744);
show_backtrace(1);
}
var24->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val = var_old_comprehension; /* _comprehension on <var24:nullable StaticFrame> */
RET_LABEL27:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AStringFormExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2725);
show_backtrace(1);
}
{
var4 = nit___nit__AbstractCompilerVisitor___string_instance(var_v, var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ASuperstringExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var2 /* : ANodes[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var5 /* : Iterator[ANode] */;
val* var_6 /* var : Iterator[AExpr] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var_11 /* var : Bool */;
val* var12 /* : nullable String */;
val* var14 /* : nullable String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
val* var22 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var25 /* : MClassType */;
val* var26 /* : RuntimeVariable */;
val* var_a /* var a: RuntimeVariable */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : MType */;
val* var34 /* : MType */;
val* var35 /* : MMethod */;
val* var36 /* : Array[RuntimeVariable] */;
long var37 /* : Int */;
val* var_38 /* var : Array[RuntimeVariable] */;
val* var39 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
var_v = p0;
var1 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[RuntimeVariable]>*/
}
var_array = var1;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var4 = self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2277);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int (*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_6) /* is_ok on <var_6:Iterator[AExpr]>*/;
}
if (var7){
{
var8 = ((val* (*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_6) /* item on <var_6:Iterator[AExpr]>*/;
}
var_ne = var8;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_nit__AStringFormExpr.color;
idtype = type_nit__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var10 = 0;
} else {
var10 = var_ne->type->type_table[cltype] == idtype;
}
var_11 = var10;
if (var10){
{
{ /* Inline literal#AStringFormExpr#value (var_ne) on <var_ne:AExpr(AStringFormExpr)> */
var14 = var_ne->attrs[COLOR_nit__literal__AStringFormExpr___value].val; /* _value on <var_ne:AExpr(AStringFormExpr)> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (varonce) {
var15 = varonce;
} else {
var16 = "";
var17 = 0;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
if (var12 == NULL) {
var19 = 0; /* <var15:String> cannot be null */
} else {
var20 = ((short int (*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var15) /* == on <var12:nullable String>*/;
var19 = var20;
}
var9 = var19;
} else {
var9 = var_11;
}
if (var9){
goto BREAK_label;
} else {
}
var21 = NULL;
{
var22 = nit___nit__AbstractCompilerVisitor___expr(var_v, var_ne, var21);
}
var_i = var22;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_array, var_i); /* Direct call array#Array#add on <var_array:Array[RuntimeVariable]>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_6->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_6) /* next on <var_6:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label23;
}
}
BREAK_label23: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_6) on <var_6:Iterator[AExpr]> */
RET_LABEL24:(void)0;
}
}
{
var25 = nit___nit__AbstractCompilerVisitor___object_type(var_v);
}
{
var26 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(var_v, var_array, var25);
}
var_a = var26;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "to_s";
var30 = 4;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var34 = var_a->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit___nit__AbstractCompilerVisitor___get_property(var_v, var28, var32);
}
var36 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var37 = 1;
{
standard___standard__Array___with_capacity(var36, var37); /* Direct call array#Array#with_capacity on <var36:Array[RuntimeVariable]>*/
}
var_38 = var36;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_38, var_a); /* Direct call array#AbstractArray#push on <var_38:Array[RuntimeVariable]>*/
}
{
var39 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(var_v, var35, var_38);
}
var_res = var39;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ACrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var6 /* : AExpr */;
val* var8 /* : AExpr */;
val* var9 /* : null */;
val* var10 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var15 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var16 /* : nullable CallSite */;
val* var18 /* : nullable CallSite */;
val* var19 /* : Array[RuntimeVariable] */;
long var20 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var21 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ACrangeExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2124);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_i1 = var5;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2127);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NULL;
{
var10 = nit___nit__AbstractCompilerVisitor___expr(var_v, var6, var9);
}
var_i2 = var10;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
var13 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
/* <var11:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(var11 == NULL) {
var14 = 0;
} else {
if(cltype >= var11->type->table_size) {
var14 = 0;
} else {
var14 = var11->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2748);
show_backtrace(1);
}
var_mtype = var11;
{
var15 = ((val* (*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var15;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var18 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2750);
show_backtrace(1);
}
var19 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var20 = 3;
{
standard___standard__Array___with_capacity(var19, var20); /* Direct call array#Array#with_capacity on <var19:Array[RuntimeVariable]>*/
}
var_ = var19;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var21 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var16, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var6 /* : AExpr */;
val* var8 /* : AExpr */;
val* var9 /* : null */;
val* var10 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var15 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var16 /* : nullable CallSite */;
val* var18 /* : nullable CallSite */;
val* var19 /* : Array[RuntimeVariable] */;
long var20 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var21 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:AOrangeExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2124);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_i1 = var5;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2127);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NULL;
{
var10 = nit___nit__AbstractCompilerVisitor___expr(var_v, var6, var9);
}
var_i2 = var10;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
var13 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
/* <var11:nullable MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(var11 == NULL) {
var14 = 0;
} else {
if(cltype >= var11->type->table_size) {
var14 = 0;
} else {
var14 = var11->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var14)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2760);
show_backtrace(1);
}
var_mtype = var11;
{
var15 = ((val* (*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var15;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var18 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2762);
show_backtrace(1);
}
var19 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var20 = 3;
{
standard___standard__Array___with_capacity(var19, var20); /* Direct call array#Array#with_capacity on <var19:Array[RuntimeVariable]>*/
}
var_ = var19;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var21 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var16, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ATrueExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "1";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ATrueExpr> */
var7 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ATrueExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2768);
show_backtrace(1);
}
{
var8 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AFalseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "0";
var3 = 1;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFalseExpr> */
var7 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AFalseExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2772);
show_backtrace(1);
}
{
var8 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ANullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "NULL";
var3 = 4;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANullExpr> */
var7 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:ANullExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2776);
show_backtrace(1);
}
{
var8 = nit___nit__AbstractCompilerVisitor___new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIsaExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1905);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_i = var5;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var8 = self->attrs[COLOR_nit__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2783);
show_backtrace(1);
}
if (varonce) {
var9 = varonce;
} else {
var10 = "isa";
var11 = 3;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
var13 = ((val* (*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var6, var9) /* type_test on <var_v:AbstractCompilerVisitor>*/;
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAsCastExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : ModelBuilder */;
val* var11 /* : ModelBuilder */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
val* var22 /* : nullable MType */;
val* var24 /* : nullable MType */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsCastExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2299);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_i = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 51);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts#Option#value (var15) on <var15:OptionBool> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionBool> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = ((struct instance_standard__Bool*)var18)->value; /* autounbox from nullable Object to Bool */;
if (var21){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var24 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2793);
show_backtrace(1);
}
if (varonce) {
var25 = varonce;
} else {
var26 = "as";
var27 = 2;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
nit___nit__AbstractCompilerVisitor___add_cast(var_v, var_i, var22, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAsNotnullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : ModelBuilder */;
val* var11 /* : ModelBuilder */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
val* var22 /* : MType */;
val* var24 /* : MType */;
val* var25 /* : String */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2299);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_i = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 51);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts#Option#value (var15) on <var15:OptionBool> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionBool> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = ((struct instance_standard__Bool*)var18)->value; /* autounbox from nullable Object to Bool */;
if (var21){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_i) on <var_i:RuntimeVariable> */
var24 = var_i->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_i:RuntimeVariable> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val* (*)(val* self))(var22->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var22) /* ctype on <var22:MType>*/;
}
if (varonce) {
var26 = varonce;
} else {
var27 = "val*";
var28 = 4;
var29 = standard___standard__NativeString___to_s_with_length(var27, var28);
var26 = var29;
varonce = var26;
}
{
{ /* Inline kernel#Object#!= (var25,var26) on <var25:String> */
var_other = var26;
{
var32 = ((short int (*)(val* self, val* p0))(var25->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var25, var_other) /* == on <var25:String>*/;
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var = var_i;
goto RET_LABEL;
} else {
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "if (unlikely(";
var37 = 13;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = " == NULL)) {";
var42 = 12;
var43 = standard___standard__NativeString___to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_standard__NativeArray(var45, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_standard__NativeArray*)var46)->values[1] = (val*) var_i;
((struct instance_standard__NativeArray*)var46)->values[2] = (val*) var40;
{
((void (*)(val* self, val* p0, long p1))(var44->class->vft[COLOR_standard__array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
}
{
var47 = ((val* (*)(val* self))(var44->class->vft[COLOR_standard__string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var47); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Cast failed";
var51 = 11;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "}";
var56 = 1;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AParExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2288);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AOnceExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : String */;
val* var_name /* var name: String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var_guard /* var guard: String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
val* var50 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : AExpr */;
val* var86 /* : AExpr */;
val* var87 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var100 /* : NativeArray[Object] */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOnceExpr> */
var3 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOnceExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2820);
show_backtrace(1);
}
var_mtype = var1;
if (varonce) {
var4 = varonce;
} else {
var5 = "varonce";
var6 = 7;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var4);
}
var_name = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "_guard";
var12 = 6;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = ((val* (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__string__String___43d]))(var_name, var10) /* + on <var_name:String>*/;
}
{
var15 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var14);
}
var_guard = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "static ";
var19 = 7;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " ";
var25 = 1;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ";";
var30 = 1;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_standard__NativeArray*)var34)->values[3] = (val*) var_name;
((struct instance_standard__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "static int ";
var39 = 11;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";";
var44 = 1;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_standard__NativeArray(var47, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_standard__NativeArray*)var48)->values[1] = (val*) var_guard;
((struct instance_standard__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val* self, val* p0, long p1))(var46->class->vft[COLOR_standard__array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val* self))(var46->class->vft[COLOR_standard__string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var50 = nit___nit__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var50;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "if (";
var54 = 4;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ") {";
var59 = 3;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_standard__NativeArray(var62, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_standard__NativeArray*)var63)->values[1] = (val*) var_guard;
((struct instance_standard__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_standard__array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " = ";
var68 = 3;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = ";";
var73 = 1;
var74 = standard___standard__NativeString___to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 4;
var77 = NEW_standard__NativeArray(var76, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var77)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var77)->values[1] = (val*) var66;
((struct instance_standard__NativeArray*)var77)->values[2] = (val*) var_name;
((struct instance_standard__NativeArray*)var77)->values[3] = (val*) var71;
{
((void (*)(val* self, val* p0, long p1))(var75->class->vft[COLOR_standard__array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
}
{
var78 = ((val* (*)(val* self))(var75->class->vft[COLOR_standard__string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var78); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "} else {";
var82 = 8;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:AOnceExpr> */
var86 = self->attrs[COLOR_nit__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1794);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = nit___nit__AbstractCompilerVisitor___expr(var_v, var84, var_mtype);
}
var_i = var87;
if (varonce88) {
var89 = varonce88;
} else {
var90 = " = ";
var91 = 3;
var92 = standard___standard__NativeString___to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = ";";
var96 = 1;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 4;
var100 = NEW_standard__NativeArray(var99, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var100)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var100)->values[1] = (val*) var89;
((struct instance_standard__NativeArray*)var100)->values[2] = (val*) var_i;
((struct instance_standard__NativeArray*)var100)->values[3] = (val*) var94;
{
((void (*)(val* self, val* p0, long p1))(var98->class->vft[COLOR_standard__array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
}
{
var101 = ((val* (*)(val* self))(var98->class->vft[COLOR_standard__string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var101); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = " = ";
var105 = 3;
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ";";
var110 = 1;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 4;
var114 = NEW_standard__NativeArray(var113, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var114)->values[0] = (val*) var_name;
((struct instance_standard__NativeArray*)var114)->values[1] = (val*) var103;
((struct instance_standard__NativeArray*)var114)->values[2] = (val*) var_res;
((struct instance_standard__NativeArray*)var114)->values[3] = (val*) var108;
{
((void (*)(val* self, val* p0, long p1))(var112->class->vft[COLOR_standard__array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val* self))(var112->class->vft[COLOR_standard__string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = 1;";
var119 = 5;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 2;
var123 = NEW_standard__NativeArray(var122, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var123)->values[0] = (val*) var_guard;
((struct instance_standard__NativeArray*)var123)->values[1] = (val*) var117;
{
((void (*)(val* self, val* p0, long p1))(var121->class->vft[COLOR_standard__array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
}
{
var124 = ((val* (*)(val* self))(var121->class->vft[COLOR_standard__string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var124); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "}";
var128 = 1;
var129 = standard___standard__NativeString___to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var126); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ASendExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var6 /* : nullable CallSite */;
val* var8 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var9 /* : MMethodDef */;
val* var11 /* : MMethodDef */;
val* var12 /* : Array[AExpr] */;
val* var13 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var14 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var8 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2842);
show_backtrace(1);
}
var_callsite = var6;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var11 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit__typing___ASendExpr___raw_arguments(self);
}
{
var13 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var9, var_recv, var12);
}
var_args = var13;
{
var14 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ASendReassignFormExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : null */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var8 /* : MMethodDef */;
val* var10 /* : MMethodDef */;
val* var11 /* : Array[AExpr] */;
val* var12 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var13 /* : AExpr */;
val* var15 /* : AExpr */;
val* var16 /* : null */;
val* var17 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var18 /* : nullable RuntimeVariable */;
val* var_left /* var left: nullable RuntimeVariable */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable CallSite */;
val* var27 /* : nullable CallSite */;
val* var28 /* : Array[RuntimeVariable] */;
long var29 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var30 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : nullable CallSite */;
val* var39 /* : nullable CallSite */;
val* var40 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var, var3);
}
var_recv = var4;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var7 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2852);
show_backtrace(1);
}
var_callsite = var5;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var10 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__typing___ASendExpr___raw_arguments(self);
}
{
var12 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var8, var_recv, var11);
}
var_args = var12;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NULL;
{
var17 = nit___nit__AbstractCompilerVisitor___expr(var_v, var13, var16);
}
var_value = var17;
{
var18 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_left = var18;
var19 = NULL;
if (var_left == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_left,var19) on <var_left:nullable RuntimeVariable> */
var_other = var19;
{
var23 = ((short int (*)(val* self, val* p0))(var_left->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_left, var_other) /* == on <var_left:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2858);
show_backtrace(1);
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var27 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2860);
show_backtrace(1);
}
var28 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var29 = 2;
{
standard___standard__Array___with_capacity(var28, var29); /* Direct call array#Array#with_capacity on <var28:Array[RuntimeVariable]>*/
}
var_ = var28;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_left); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var30 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var25, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var30;
var31 = NULL;
if (var_res == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var31) on <var_res:nullable RuntimeVariable> */
var_other = var31;
{
var35 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2861);
show_backtrace(1);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var_res); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var39 = self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2864);
show_backtrace(1);
}
{
var40 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var37, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#ASuperExpr#expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ASuperExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var8 /* : nullable CallSite */;
val* var10 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MMethodDef */;
val* var19 /* : MMethodDef */;
val* var20 /* : AExprs */;
val* var22 /* : AExprs */;
val* var23 /* : ANodes[AExpr] */;
val* var25 /* : ANodes[AExpr] */;
val* var26 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var_i /* var i: Int */;
val* var35 /* : MSignature */;
val* var37 /* : MSignature */;
long var38 /* : Int */;
long var_ /* var : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var42 /* : Bool */;
val* var43 /* : nullable StaticFrame */;
val* var45 /* : nullable StaticFrame */;
val* var46 /* : Array[RuntimeVariable] */;
val* var48 /* : Array[RuntimeVariable] */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : nullable Object */;
long var58 /* : Int */;
long var59 /* : Int */;
val* var60 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var61 /* : nullable MMethodDef */;
val* var63 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var64 /* : AExprs */;
val* var66 /* : AExprs */;
val* var67 /* : ANodes[AExpr] */;
val* var69 /* : ANodes[AExpr] */;
val* var70 /* : Array[RuntimeVariable] */;
val* var_args71 /* var args: Array[RuntimeVariable] */;
long var72 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : nullable StaticFrame */;
val* var81 /* : nullable StaticFrame */;
val* var82 /* : Array[RuntimeVariable] */;
val* var84 /* : Array[RuntimeVariable] */;
val* var85 /* : MType */;
val* var87 /* : MType */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
val* var92 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2871);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var1) on <var1:nullable StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var1:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = standard___standard__SequenceRead___Collection__first(var4);
}
var_recv = var7;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var10 = self->attrs[COLOR_nit__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_callsite = var8;
var11 = NULL;
if (var_callsite == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,var11) on <var_callsite:nullable CallSite> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_callsite->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_callsite, var_other) /* == on <var_callsite:nullable CallSite(CallSite)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var19 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var22 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2051);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var20) on <var20:AExprs> */
var25 = var20->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var20:AExprs> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var17, var_recv, var23);
}
var_args = var26;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[RuntimeVariable]> */
var29 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[RuntimeVariable]> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = 1;
{
{ /* Inline kernel#Int#== (var27,var30) on <var27:Int> */
var33 = var27 == var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var34 = 0;
var_i = var34;
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var37 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nit___nit__MSignature___arity(var35);
}
var_ = var38;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var41 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var42 = var_i < var_;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var45 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2880);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var43) on <var43:nullable StaticFrame> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var48 = var43->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var43:nullable StaticFrame> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var49) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var52 = 1; /* easy <var49:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var56 = var_i + var49;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var46, var50);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var57); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var58 = 1;
{
var59 = standard___standard__Int___Discrete__successor(var_i, var58);
}
var_i = var59;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
var60 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var60;
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var63 = self->attrs[COLOR_nit__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2888);
show_backtrace(1);
}
var_mpropdef = var61;
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var66 = self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2051);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var64) on <var64:AExprs> */
var69 = var64->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var64:AExprs> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var_mpropdef, var_recv, var67);
}
var_args71 = var70;
{
{ /* Inline array#AbstractArrayRead#length (var_args71) on <var_args71:Array[RuntimeVariable]> */
var74 = var_args71->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args71:Array[RuntimeVariable]> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
var75 = 1;
{
{ /* Inline kernel#Int#== (var72,var75) on <var72:Int> */
var78 = var72 == var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var81 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (var79 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2891);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var79) on <var79:nullable StaticFrame> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var84 = var79->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var79:nullable StaticFrame> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_args71 = var82;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var87 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
/* <var85:MType> isa MClassType */
cltype89 = type_nit__MClassType.color;
idtype90 = type_nit__MClassType.id;
if(cltype89 >= var85->type->table_size) {
var88 = 0;
} else {
var88 = var85->type->type_table[cltype89] == idtype90;
}
if (unlikely(!var88)) {
var_class_name91 = var85 == NULL ? "null" : var85->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2895);
show_backtrace(1);
}
{
var92 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var85, var_args71);
}
var = var92;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___ANewExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var_mtype /* var mtype: nullable MClassType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : String */;
val* var15 /* : String */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
short int var20 /* : Bool */;
val* var21 /* : AExprs */;
val* var23 /* : AExprs */;
val* var24 /* : ANodes[AExpr] */;
val* var26 /* : ANodes[AExpr] */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AExprs */;
val* var34 /* : AExprs */;
val* var35 /* : ANodes[AExpr] */;
val* var37 /* : ANodes[AExpr] */;
val* var38 /* : nullable Object */;
val* var39 /* : null */;
val* var40 /* : RuntimeVariable */;
val* var_l /* var l: RuntimeVariable */;
short int var41 /* : Bool */;
int cltype;
int idtype;
val* var42 /* : Array[MType] */;
val* var44 /* : Array[MType] */;
val* var45 /* : nullable Object */;
val* var_elttype /* var elttype: MType */;
val* var46 /* : RuntimeVariable */;
val* var47 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var48 /* : nullable CallSite */;
val* var50 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var51 /* : MMethodDef */;
val* var53 /* : MMethodDef */;
val* var54 /* : AExprs */;
val* var56 /* : AExprs */;
val* var57 /* : ANodes[AExpr] */;
val* var59 /* : ANodes[AExpr] */;
val* var60 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var61 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
var3 = self->attrs[COLOR_nit__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
var4 = NULL;
if (var_mtype == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var4) on <var_mtype:nullable MClassType> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MClassType(MClassType)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2903);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var12 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#name (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (varonce) {
var16 = varonce;
} else {
var17 = "NativeArray";
var18 = 11;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
var20 = ((short int (*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var16) /* == on <var13:String>*/;
}
if (var20){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var23 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1968);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var21) on <var21:AExprs> */
var26 = var21->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var21:AExprs> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var24);
}
var28 = 1;
{
{ /* Inline kernel#Int#== (var27,var28) on <var27:Int> */
var31 = var27 == var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2906);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var34 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1968);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var32) on <var32:AExprs> */
var37 = var32->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var32:AExprs> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = standard___standard__SequenceRead___Collection__first(var35);
}
var39 = NULL;
{
var40 = nit___nit__AbstractCompilerVisitor___expr(var_v, var38, var39);
}
var_l = var40;
/* <var_mtype:nullable MClassType(MClassType)> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var41 = 0;
} else {
var41 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var41)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2908);
show_backtrace(1);
}
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:nullable MClassType(MGenericType)> */
var44 = var_mtype->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_mtype:nullable MClassType(MGenericType)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = standard___standard__SequenceRead___Collection__first(var42);
}
var_elttype = var45;
{
var46 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_elttype, var_l) /* native_array_instance on <var_v:AbstractCompilerVisitor>*/;
}
var = var46;
goto RET_LABEL;
} else {
}
{
var47 = nit___nit__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var_recv = var47;
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var50 = self->attrs[COLOR_nit__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2915);
show_backtrace(1);
}
var_callsite = var48;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var53 = var_callsite->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var56 = self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1968);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var54) on <var54:AExprs> */
var59 = var54->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var54:AExprs> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = nit___nit__AbstractCompilerVisitor___varargize(var_v, var51, var_recv, var57);
}
var_args = var60;
{
var61 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res2 = var61;
var62 = NULL;
if (var_res2 == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res2,var62) on <var_res2:nullable RuntimeVariable> */
var_other = var62;
{
var66 = ((short int (*)(val* self, val* p0))(var_res2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res2, var_other) /* == on <var_res2:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: AAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var6 /* : nullable MAttribute */;
val* var8 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var9 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrExpr> */
var8 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2930);
show_backtrace(1);
}
var_mproperty = var6;
{
var9 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrAssignExpr#expr for (self: AAttrAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AAttrAssignExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var6 /* : AExpr */;
val* var8 /* : AExpr */;
val* var9 /* : null */;
val* var10 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var11 /* : nullable MAttribute */;
val* var13 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrAssignExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NULL;
{
var10 = nit___nit__AbstractCompilerVisitor___expr(var_v, var6, var9);
}
var_i = var10;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrAssignExpr> */
var13 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrAssignExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2940);
show_backtrace(1);
}
var_mproperty = var11;
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_i); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___AAttrReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : null */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : null */;
val* var9 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var10 /* : nullable MAttribute */;
val* var12 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var13 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
val* var14 /* : nullable CallSite */;
val* var16 /* : nullable CallSite */;
val* var17 /* : Array[RuntimeVariable] */;
long var18 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var19 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
{
var4 = nit___nit__AbstractCompilerVisitor___expr(var_v, var, var3);
}
var_recv = var4;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = NULL;
{
var9 = nit___nit__AbstractCompilerVisitor___expr(var_v, var5, var8);
}
var_value = var9;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var12 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2951);
show_backtrace(1);
}
var_mproperty = var10;
{
var13 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var_attr = var13;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var16 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2953);
show_backtrace(1);
}
var17 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var18 = 2;
{
standard___standard__Array___with_capacity(var17, var18); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_attr); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var19 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var19;
var20 = NULL;
if (var_res == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var20) on <var_res:nullable RuntimeVariable> */
var_other = var20;
{
var24 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2954);
show_backtrace(1);
}
{
nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_res); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nit__abstract_compiler___AIssetAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var6 /* : nullable MAttribute */;
val* var8 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var9 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = nit___nit__AbstractCompilerVisitor___expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AIssetAttrExpr> */
var8 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AIssetAttrExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2963);
show_backtrace(1);
}
var_mproperty = var6;
{
var9 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute(var_v, var_mproperty, var_recv);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void nit__abstract_compiler___ADebugTypeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#MModule#properties for (self: MModule, MClass): Set[MProperty] */
val* nit__abstract_compiler___MModule___properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
val* var3 /* : Map[MClass, Set[MProperty]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[MProperty] */;
val* var_properties /* var properties: HashSet[MProperty] */;
val* var7 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var8 /* : POSet[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : POSetElement[MClass] */;
val* var11 /* : Collection[nullable Object] */;
val* var_ /* var : Array[MClass] */;
val* var12 /* : ArrayIterator[nullable Object] */;
val* var_13 /* var : ArrayIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var16 /* : Set[MProperty] */;
val* var18 /* : Array[MClassDef] */;
val* var20 /* : Array[MClassDef] */;
val* var_21 /* var : Array[MClassDef] */;
val* var22 /* : ArrayIterator[nullable Object] */;
val* var_23 /* var : ArrayIterator[MClassDef] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var26 /* : POSetElement[MModule] */;
val* var28 /* : POSetElement[MModule] */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : Array[MProperty] */;
val* var37 /* : Array[MProperty] */;
val* var_38 /* var : Array[MProperty] */;
val* var39 /* : ArrayIterator[nullable Object] */;
val* var_40 /* var : ArrayIterator[MProperty] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var47 /* : Map[MClass, Set[MProperty]] */;
val* var49 /* : Map[MClass, Set[MProperty]] */;
val* var50 /* : Map[MClass, Set[MProperty]] */;
val* var52 /* : Map[MClass, Set[MProperty]] */;
val* var53 /* : nullable Object */;
var_mclass = p0;
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3008);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__MapRead___has_key(var1, var_mclass);
}
var5 = !var4;
if (var5){
var6 = NEW_standard__HashSet(&type_standard__HashSet__nit__MProperty);
{
standard___standard__HashSet___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashSet#init on <var6:HashSet[MProperty]>*/
}
var_properties = var6;
var7 = NEW_standard__Array(&type_standard__Array__nit__MClass);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
var8 = nit__model___MModule___flatten_mclass_hierarchy(self);
}
{
var9 = poset___poset__POSet___standard__abstract_collection__Collection__has(var8, var_mclass);
}
if (var9){
{
var10 = nit___nit__MClass___in_hierarchy(var_mclass, self);
}
{
var11 = poset___poset__POSetElement___direct_greaters(var10);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_parents, var11); /* Direct call array#Array#add_all on <var_parents:Array[MClass]>*/
}
} else {
}
var_ = var_parents;
{
var12 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_13);
}
if (var14){
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_13);
}
var_parent = var15;
{
var16 = nit__abstract_compiler___MModule___properties(self, var_parent);
}
{
standard___standard__SimpleCollection___add_all(var_properties, var16); /* Direct call abstract_collection#SimpleCollection#add_all on <var_properties:HashSet[MProperty]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:ArrayIterator[MClass]> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var20 = var_mclass->attrs[COLOR_nit__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 417);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_21 = var18;
{
var22 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_21);
}
var_23 = var22;
for(;;) {
{
var24 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_23);
}
if (var24){
{
var25 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_23);
}
var_mclassdef = var25;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var28 = self->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset___poset__POSetElement____60d_61d(var26, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label34;
} else {
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_mclassdef) on <var_mclassdef:MClassDef> */
var37 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_mclassdef:MClassDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 620);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_40);
}
if (var41){
{
var42 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_40);
}
var_mprop = var42;
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_properties, var_mprop); /* Direct call hash_collection#HashSet#add on <var_properties:HashSet[MProperty]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_40); /* Direct call array#ArrayIterator#next on <var_40:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label43;
}
}
BREAK_label43: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_40) on <var_40:ArrayIterator[MProperty]> */
RET_LABEL44:(void)0;
}
}
BREAK_label34: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_23); /* Direct call array#ArrayIterator#next on <var_23:ArrayIterator[MClassDef]>*/
}
} else {
goto BREAK_label45;
}
}
BREAK_label45: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:ArrayIterator[MClassDef]> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var49 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3008);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
((void (*)(val* self, val* p0, val* p1))(var47->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var47, var_mclass, var_properties) /* []= on <var47:Map[MClass, Set[MProperty]]>*/;
}
} else {
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var52 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3008);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = ((val* (*)(val* self, val* p0))(var50->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var50, var_mclass) /* [] on <var50:Map[MClass, Set[MProperty]]>*/;
}
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* nit__abstract_compiler___MModule___properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 3008);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#finalize_ffi for (self: MModule, AbstractCompiler) */
void nit__abstract_compiler___MModule___finalize_ffi(val* self, val* p0) {
val* var_c /* var c: AbstractCompiler */;
var_c = p0;
RET_LABEL:;
}
/* method abstract_compiler#MModule#collect_linker_libs for (self: MModule): nullable Array[String] */
val* nit__abstract_compiler___MModule___collect_linker_libs(val* self) {
val* var /* : nullable Array[String] */;
val* var1 /* : null */;
var1 = NULL;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Sys#main for (self: Sys) */
void nit__abstract_compiler___standard__Sys___main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var6 /* : Sequence[String] */;
val* var7 /* : Model */;
val* var_model /* var model: Model */;
val* var9 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var10 /* : OptionContext */;
val* var12 /* : OptionContext */;
val* var13 /* : Array[String] */;
val* var15 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
val* var25 /* : OptionString */;
val* var27 /* : OptionString */;
val* var28 /* : nullable Object */;
val* var30 /* : nullable Object */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
long var42 /* : Int */;
val* var44 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var45 /* : Bool */;
val* var_46 /* var : Array[MModule] */;
val* var47 /* : ArrayIterator[nullable Object] */;
val* var_48 /* var : ArrayIterator[MModule] */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
long var65 /* : Int */;
val* var66 /* : Array[MModule] */;
long var67 /* : Int */;
val* var_68 /* var : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
var = NEW_nit__ToolContext(&type_nit__ToolContext);
{
nit__separate_erasure_compiler___ToolContext___standard__kernel__Object__init(var); /* Direct call separate_erasure_compiler#ToolContext#init on <var:ToolContext>*/
}
var_toolcontext = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "Usage: nitc [OPTION]... file.nit...\nCompiles Nit programs.";
var3 = 58;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription= (var_toolcontext,var1) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val = var1; /* _tooldescription on <var_toolcontext:ToolContext> */
RET_LABEL5:(void)0;
}
}
{
var6 = standard__string___Object___args(self);
}
{
nit__nith___ToolContext___process_options(var_toolcontext, var6); /* Direct call nith#ToolContext#process_options on <var_toolcontext:ToolContext>*/
}
var7 = NEW_nit__Model(&type_nit__Model);
{
{ /* Inline kernel#Object#init (var7) on <var7:Model> */
RET_LABEL8:(void)0;
}
}
var_model = var7;
var9 = NEW_nit__ModelBuilder(&type_nit__ModelBuilder);
{
((void (*)(val* self, val* p0))(var9->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__model_61d]))(var9, var_model) /* model= on <var9:ModelBuilder>*/;
}
{
((void (*)(val* self, val* p0))(var9->class->vft[COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext_61d]))(var9, var_toolcontext) /* toolcontext= on <var9:ModelBuilder>*/;
}
{
((void (*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9) /* init on <var9:ModelBuilder>*/;
}
var_modelbuilder = var9;
{
{ /* Inline toolcontext#ToolContext#option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var12 = var_toolcontext->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var10) on <var10:OptionContext> */
var15 = var10->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var10:OptionContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_arguments = var13;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[String]> */
var19 = var_arguments->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[String]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = 1;
{
{ /* Inline kernel#Int#> (var17,var20) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var24 = var17 > var20;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_ = var21;
if (var21){
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var_toolcontext) on <var_toolcontext:ToolContext> */
var27 = var_toolcontext->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var_toolcontext:ToolContext> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 29);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline opts#Option#value (var25) on <var25:OptionString> */
var30 = var25->attrs[COLOR_opts__Option___value].val; /* _value on <var25:OptionString> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = NULL;
if (var28 == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var28,var31) on <var28:nullable Object(nullable String)> */
var_other = var31;
{
var35 = ((short int (*)(val* self, val* p0))(var28->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var28, var_other) /* == on <var28:nullable String(String)>*/;
}
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
var16 = var32;
} else {
var16 = var_;
}
if (var16){
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Error: --output needs a single source file. Do you prefer --dir?";
var40 = 64;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
standard__file___Object___print(self, var38); /* Direct call file#Object#print on <self:Sys>*/
}
var42 = 1;
{
{ /* Inline kernel#Object#exit (self,var42) on <self:Sys> */
exit(var42);
RET_LABEL43:(void)0;
}
}
} else {
}
{
var44 = nit__loader___ModelBuilder___parse(var_modelbuilder, var_arguments);
}
var_mmodules = var44;
{
var45 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mmodules);
}
if (var45){
goto RET_LABEL;
} else {
}
{
nit__modelbuilder___ModelBuilder___run_phases(var_modelbuilder); /* Direct call modelbuilder#ModelBuilder#run_phases on <var_modelbuilder:ModelBuilder>*/
}
var_46 = var_mmodules;
{
var47 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_46);
}
var_48 = var47;
for(;;) {
{
var49 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_48);
}
if (var49){
{
var50 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_48);
}
var_mmodule = var50;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "*** PROCESS ";
var54 = 12;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = " ***";
var59 = 4;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_standard__NativeArray(var62, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_standard__NativeArray*)var63)->values[1] = (val*) var_mmodule;
((struct instance_standard__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_standard__array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
var65 = 1;
{
nit___nit__ToolContext___info(var_toolcontext, var64, var65); /* Direct call toolcontext#ToolContext#info on <var_toolcontext:ToolContext>*/
}
var66 = NEW_standard__Array(&type_standard__Array__nit__MModule);
var67 = 1;
{
standard___standard__Array___with_capacity(var66, var67); /* Direct call array#Array#with_capacity on <var66:Array[MModule]>*/
}
var_68 = var66;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_68, var_mmodule); /* Direct call array#AbstractArray#push on <var_68:Array[MModule]>*/
}
var_ms = var_68;
{
nit__modelbuilder___ToolContext___run_global_phases(var_toolcontext, var_ms); /* Direct call modelbuilder#ToolContext#run_global_phases on <var_toolcontext:ToolContext>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_48); /* Direct call array#ArrayIterator#next on <var_48:ArrayIterator[MModule]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_48) on <var_48:ArrayIterator[MModule]> */
RET_LABEL69:(void)0;
}
}
RET_LABEL:;
}
