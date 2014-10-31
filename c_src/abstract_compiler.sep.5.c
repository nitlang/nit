#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
void abstract_compiler__AForExpr__stmt(val* self, val* p0) {
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
short int var14 /* : Bool */;
val* var15 /* : Array[RuntimeVariable] */;
long var16 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var17 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : nullable CallSite */;
val* var31 /* : nullable CallSite */;
val* var_isok_meth /* var isok_meth: nullable CallSite */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : Array[RuntimeVariable] */;
long var40 /* : Int */;
val* var_41 /* var : Array[RuntimeVariable] */;
val* var42 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
val* var64 /* : nullable Array[Variable] */;
val* var66 /* : nullable Array[Variable] */;
long var67 /* : Int */;
long var69 /* : Int */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable CallSite */;
val* var77 /* : nullable CallSite */;
val* var_item_meth /* var item_meth: nullable CallSite */;
val* var78 /* : null */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : Array[RuntimeVariable] */;
long var86 /* : Int */;
val* var_87 /* var : Array[RuntimeVariable] */;
val* var88 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
val* var89 /* : null */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : nullable Array[Variable] */;
val* var98 /* : nullable Array[Variable] */;
val* var99 /* : nullable Object */;
val* var100 /* : RuntimeVariable */;
val* var101 /* : nullable Array[Variable] */;
val* var103 /* : nullable Array[Variable] */;
long var104 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
val* var112 /* : nullable CallSite */;
val* var114 /* : nullable CallSite */;
val* var_key_meth /* var key_meth: nullable CallSite */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : Array[RuntimeVariable] */;
long var123 /* : Int */;
val* var_124 /* var : Array[RuntimeVariable] */;
val* var125 /* : nullable RuntimeVariable */;
val* var_i126 /* var i: nullable RuntimeVariable */;
val* var127 /* : null */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : nullable Array[Variable] */;
val* var136 /* : nullable Array[Variable] */;
long var137 /* : Int */;
val* var138 /* : nullable Object */;
val* var139 /* : RuntimeVariable */;
val* var140 /* : nullable CallSite */;
val* var142 /* : nullable CallSite */;
val* var_item_meth143 /* var item_meth: nullable CallSite */;
val* var144 /* : null */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var151 /* : Array[RuntimeVariable] */;
long var152 /* : Int */;
val* var_153 /* var : Array[RuntimeVariable] */;
val* var154 /* : nullable RuntimeVariable */;
val* var155 /* : null */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : nullable Array[Variable] */;
val* var164 /* : nullable Array[Variable] */;
long var165 /* : Int */;
val* var166 /* : nullable Object */;
val* var167 /* : RuntimeVariable */;
val* var168 /* : nullable AExpr */;
val* var170 /* : nullable AExpr */;
val* var171 /* : nullable EscapeMark */;
val* var173 /* : nullable EscapeMark */;
val* var174 /* : nullable CallSite */;
val* var176 /* : nullable CallSite */;
val* var_next_meth /* var next_meth: nullable CallSite */;
val* var177 /* : null */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
val* var184 /* : Array[RuntimeVariable] */;
long var185 /* : Int */;
val* var_186 /* var : Array[RuntimeVariable] */;
val* var187 /* : nullable RuntimeVariable */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : FlatString */;
val* var193 /* : nullable EscapeMark */;
val* var195 /* : nullable EscapeMark */;
val* var196 /* : nullable CallSite */;
val* var198 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
val* var199 /* : null */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
val* var206 /* : Array[RuntimeVariable] */;
long var207 /* : Int */;
val* var_208 /* var : Array[RuntimeVariable] */;
val* var209 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1427);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
{
var4 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var, var3);
}
var_cl = var4;
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var7 = self->attrs[COLOR_typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
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
var13 = ((short int (*)(val*, val*))(var_it_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_it_meth, var_other) /* == on <var_it_meth:nullable CallSite(CallSite)>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2612);
show_backtrace(1);
}
var15 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var16 = 1;
{
array__Array__with_capacity(var15, var16); /* Direct call array#Array#with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_ = var15;
{
array__AbstractArray__push(var_, var_cl); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var17 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_it_meth, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_it = var17;
var18 = NULL;
if (var_it == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it,var18) on <var_it:nullable RuntimeVariable> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_it->class->vft[COLOR_kernel__Object___61d_61d]))(var_it, var_other) /* == on <var_it:nullable RuntimeVariable(RuntimeVariable)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2614);
show_backtrace(1);
}
if (varonce) {
var25 = varonce;
} else {
var26 = "for(;;) {";
var27 = 9;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var31 = self->attrs[COLOR_typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_isok_meth = var29;
var32 = NULL;
if (var_isok_meth == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_isok_meth,var32) on <var_isok_meth:nullable CallSite> */
var_other = var32;
{
var37 = ((short int (*)(val*, val*))(var_isok_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_isok_meth, var_other) /* == on <var_isok_meth:nullable CallSite(CallSite)>*/;
var36 = var37;
}
var38 = !var36;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2617);
show_backtrace(1);
}
var39 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var40 = 1;
{
array__Array__with_capacity(var39, var40); /* Direct call array#Array#with_capacity on <var39:Array[RuntimeVariable]>*/
}
var_41 = var39;
{
array__AbstractArray__push(var_41, var_it); /* Direct call array#AbstractArray#push on <var_41:Array[RuntimeVariable]>*/
}
{
var42 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_isok_meth, var_41) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_ok = var42;
var43 = NULL;
if (var_ok == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ok,var43) on <var_ok:nullable RuntimeVariable> */
var_other = var43;
{
var48 = ((short int (*)(val*, val*))(var_ok->class->vft[COLOR_kernel__Object___61d_61d]))(var_ok, var_other) /* == on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/;
var47 = var48;
}
var49 = !var47;
var45 = var49;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2619);
show_backtrace(1);
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "if(!";
var53 = 4;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ") break;";
var58 = 8;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 3;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var_ok;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var56;
{
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var66 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2621);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var64) on <var64:nullable Array[Variable]> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var69 = var64->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var64:nullable Array[Variable]> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var70 = 1;
{
{ /* Inline kernel#Int#== (var67,var70) on <var67:Int> */
var74 = var67 == var70;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var77 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_item_meth = var75;
var78 = NULL;
if (var_item_meth == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth,var78) on <var_item_meth:nullable CallSite> */
var_other = var78;
{
var83 = ((short int (*)(val*, val*))(var_item_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_item_meth, var_other) /* == on <var_item_meth:nullable CallSite(CallSite)>*/;
var82 = var83;
}
var84 = !var82;
var80 = var84;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
if (unlikely(!var79)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2623);
show_backtrace(1);
}
var85 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var86 = 1;
{
array__Array__with_capacity(var85, var86); /* Direct call array#Array#with_capacity on <var85:Array[RuntimeVariable]>*/
}
var_87 = var85;
{
array__AbstractArray__push(var_87, var_it); /* Direct call array#AbstractArray#push on <var_87:Array[RuntimeVariable]>*/
}
{
var88 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth, var_87) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i = var88;
var89 = NULL;
if (var_i == NULL) {
var90 = 0; /* is null */
} else {
var90 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i,var89) on <var_i:nullable RuntimeVariable> */
var_other = var89;
{
var94 = ((short int (*)(val*, val*))(var_i->class->vft[COLOR_kernel__Object___61d_61d]))(var_i, var_other) /* == on <var_i:nullable RuntimeVariable(RuntimeVariable)>*/;
var93 = var94;
}
var95 = !var93;
var91 = var95;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (unlikely(!var90)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2625);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var98 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (var96 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2626);
show_backtrace(1);
} else {
var99 = abstract_collection__SequenceRead__first(var96);
}
{
var100 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var99);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var100, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var103 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (var101 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2627);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var101) on <var101:nullable Array[Variable]> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var106 = var101->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var101:nullable Array[Variable]> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var107 = 2;
{
{ /* Inline kernel#Int#== (var104,var107) on <var104:Int> */
var111 = var104 == var107;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var114 = self->attrs[COLOR_typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_key_meth = var112;
var115 = NULL;
if (var_key_meth == NULL) {
var116 = 0; /* is null */
} else {
var116 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_key_meth,var115) on <var_key_meth:nullable CallSite> */
var_other = var115;
{
var120 = ((short int (*)(val*, val*))(var_key_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_key_meth, var_other) /* == on <var_key_meth:nullable CallSite(CallSite)>*/;
var119 = var120;
}
var121 = !var119;
var117 = var121;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (unlikely(!var116)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2629);
show_backtrace(1);
}
var122 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var123 = 1;
{
array__Array__with_capacity(var122, var123); /* Direct call array#Array#with_capacity on <var122:Array[RuntimeVariable]>*/
}
var_124 = var122;
{
array__AbstractArray__push(var_124, var_it); /* Direct call array#AbstractArray#push on <var_124:Array[RuntimeVariable]>*/
}
{
var125 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_key_meth, var_124) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i126 = var125;
var127 = NULL;
if (var_i126 == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i126,var127) on <var_i126:nullable RuntimeVariable> */
var_other = var127;
{
var132 = ((short int (*)(val*, val*))(var_i126->class->vft[COLOR_kernel__Object___61d_61d]))(var_i126, var_other) /* == on <var_i126:nullable RuntimeVariable(RuntimeVariable)>*/;
var131 = var132;
}
var133 = !var131;
var129 = var133;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var128 = var129;
}
if (unlikely(!var128)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2631);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var136 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
var137 = 0;
if (var134 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2632);
show_backtrace(1);
} else {
var138 = array__Array___91d_93d(var134, var137);
}
{
var139 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var138);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var139, var_i126); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var142 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var140 = var142;
RET_LABEL141:(void)0;
}
}
var_item_meth143 = var140;
var144 = NULL;
if (var_item_meth143 == NULL) {
var145 = 0; /* is null */
} else {
var145 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth143,var144) on <var_item_meth143:nullable CallSite> */
var_other = var144;
{
var149 = ((short int (*)(val*, val*))(var_item_meth143->class->vft[COLOR_kernel__Object___61d_61d]))(var_item_meth143, var_other) /* == on <var_item_meth143:nullable CallSite(CallSite)>*/;
var148 = var149;
}
var150 = !var148;
var146 = var150;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var145 = var146;
}
if (unlikely(!var145)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2634);
show_backtrace(1);
}
var151 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var152 = 1;
{
array__Array__with_capacity(var151, var152); /* Direct call array#Array#with_capacity on <var151:Array[RuntimeVariable]>*/
}
var_153 = var151;
{
array__AbstractArray__push(var_153, var_it); /* Direct call array#AbstractArray#push on <var_153:Array[RuntimeVariable]>*/
}
{
var154 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth143, var_153) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_i126 = var154;
var155 = NULL;
if (var_i126 == NULL) {
var156 = 0; /* is null */
} else {
var156 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i126,var155) on <var_i126:nullable RuntimeVariable> */
var_other = var155;
{
var160 = ((short int (*)(val*, val*))(var_i126->class->vft[COLOR_kernel__Object___61d_61d]))(var_i126, var_other) /* == on <var_i126:nullable RuntimeVariable(RuntimeVariable)>*/;
var159 = var160;
}
var161 = !var159;
var157 = var161;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
var156 = var157;
}
if (unlikely(!var156)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2636);
show_backtrace(1);
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var164 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
var165 = 1;
if (var162 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2637);
show_backtrace(1);
} else {
var166 = array__Array___91d_93d(var162, var165);
}
{
var167 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var166);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var167, var_i126); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2639);
show_backtrace(1);
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var170 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var168); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#continue_mark (self) on <self:AForExpr> */
var173 = self->attrs[COLOR_scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__add_escape_label(var_v, var171); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var176 = self->attrs[COLOR_typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_next_meth = var174;
var177 = NULL;
if (var_next_meth == NULL) {
var178 = 0; /* is null */
} else {
var178 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next_meth,var177) on <var_next_meth:nullable CallSite> */
var_other = var177;
{
var182 = ((short int (*)(val*, val*))(var_next_meth->class->vft[COLOR_kernel__Object___61d_61d]))(var_next_meth, var_other) /* == on <var_next_meth:nullable CallSite(CallSite)>*/;
var181 = var182;
}
var183 = !var181;
var179 = var183;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
var178 = var179;
}
if (unlikely(!var178)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2644);
show_backtrace(1);
}
var184 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var185 = 1;
{
array__Array__with_capacity(var184, var185); /* Direct call array#Array#with_capacity on <var184:Array[RuntimeVariable]>*/
}
var_186 = var184;
{
array__AbstractArray__push(var_186, var_it); /* Direct call array#AbstractArray#push on <var_186:Array[RuntimeVariable]>*/
}
{
var187 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_next_meth, var_186) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = "}";
var191 = 1;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var189); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var195 = self->attrs[COLOR_scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__add_escape_label(var_v, var193); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var198 = self->attrs[COLOR_typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
var_method_finish = var196;
var199 = NULL;
if (var_method_finish == NULL) {
var200 = 0; /* is null */
} else {
var200 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,var199) on <var_method_finish:nullable CallSite> */
var_other = var199;
{
var204 = ((short int (*)(val*, val*))(var_method_finish->class->vft[COLOR_kernel__Object___61d_61d]))(var_method_finish, var_other) /* == on <var_method_finish:nullable CallSite(CallSite)>*/;
var203 = var204;
}
var205 = !var203;
var201 = var205;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
var200 = var201;
}
if (var200){
var206 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var207 = 1;
{
array__Array__with_capacity(var206, var207); /* Direct call array#Array#with_capacity on <var206:Array[RuntimeVariable]>*/
}
var_208 = var206;
{
array__AbstractArray__push(var_208, var_it); /* Direct call array#AbstractArray#push on <var_208:Array[RuntimeVariable]>*/
}
{
var209 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_method_finish, var_208) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AForExpr__stmt(val* self, val* p0) {
abstract_compiler__AForExpr__stmt(self, p0); /* Direct call abstract_compiler#AForExpr#stmt on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
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
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var2 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 53);
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
var15 = ((struct instance_kernel__Bool*)var12)->value; /* autounbox from nullable Object to Bool */;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:AAssertExpr> */
var18 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1437);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var16);
}
var_cond = var19;
if (varonce) {
var20 = varonce;
} else {
var21 = "if (unlikely(!";
var22 = 14;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = ")) {";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_cond;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var35 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_id (self) on <self:AAssertExpr> */
var38 = self->attrs[COLOR_parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
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
var44 = ((short int (*)(val*, val*))(var_nid->class->vft[COLOR_kernel__Object___61d_61d]))(var_nid, var_other) /* == on <var_nid:nullable TId(TId)>*/;
var43 = var44;
}
var45 = !var43;
var41 = var45;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "Assert \'";
var49 = 8;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
var51 = lexer_work__Token__text(var_nid);
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "\' failed";
var55 = 8;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 3;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var51;
((struct instance_array__NativeArray*)var59)->values[2] = (val*) var53;
{
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
}
{
var60 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var60); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (varonce61) {
var62 = varonce61;
} else {
var63 = "Assert failed";
var64 = 13;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var62); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "}";
var69 = 1;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAssertExpr__stmt(val* self, val* p0) {
abstract_compiler__AAssertExpr__stmt(self, p0); /* Direct call abstract_compiler#AAssertExpr#stmt on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2678);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AOrExpr#n_expr (self) on <self:AOrExpr> */
var7 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1486);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_i1 = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (";
var11 = 4;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") {";
var16 = 3;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = 5;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "} else {";
var34 = 8;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AOrExpr#n_expr2 (self) on <self:AOrExpr> */
var38 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1487);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var36);
}
var_i2 = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ";";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "}";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AImpliesExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2693);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AImpliesExpr#n_expr (self) on <self:AImpliesExpr> */
var7 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1507);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_i1 = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (!";
var11 = 5;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") {";
var16 = 3;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = 5;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "} else {";
var34 = 8;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AImpliesExpr#n_expr2 (self) on <self:AImpliesExpr> */
var38 = self->attrs[COLOR_parser_nodes__AImpliesExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1508);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var36);
}
var_i2 = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ";";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "}";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AImpliesExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AImpliesExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAndExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2708);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AAndExpr#n_expr (self) on <self:AAndExpr> */
var7 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1493);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var5);
}
var_i1 = var8;
if (varonce) {
var9 = varonce;
} else {
var10 = "if (!";
var11 = 5;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ") {";
var16 = 3;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " = 0;";
var25 = 5;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "} else {";
var34 = 8;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAndExpr#n_expr2 (self) on <self:AAndExpr> */
var38 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1494);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var36);
}
var_i2 = var39;
if (varonce40) {
var41 = varonce40;
} else {
var42 = " = ";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ";";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var41;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var_i2;
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "}";
var57 = 1;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAndExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAndExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANotExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1515);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__expr_bool(var_v, var1);
}
var_cond = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "!";
var7 = 1;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var_cond;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANotExpr> */
var15 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ANotExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2724);
show_backtrace(1);
}
{
var16 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var12, var13);
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANotExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANotExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrElseExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2731);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AOrElseExpr#n_expr (self) on <self:AOrElseExpr> */
var7 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1500);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = NULL;
{
var9 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var5, var8);
}
var_i1 = var9;
if (varonce) {
var10 = varonce;
} else {
var11 = "if (";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "!=NULL) {";
var17 = 9;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 3;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var_i1;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var15;
{
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var_i1); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "} else {";
var26 = 8;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AOrElseExpr#n_expr2 (self) on <self:AOrElseExpr> */
var30 = self->attrs[COLOR_parser_nodes__AOrElseExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1501);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = NULL;
{
var32 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var28, var31);
}
var_i2 = var32;
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var_res, var_i2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "}";
var36 = 1;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrElseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrElseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: AIntExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIntExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_literal__AIntExpr___value].val; /* _value on <self:AIntExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2744);
show_backtrace(1);
} else {
var5 = ((struct instance_kernel__Int*)var1)->value; /* autounbox from nullable Int to Int */;
var4 = string__Int__to_s(var5);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 1;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var4;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIntExpr> */
var12 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AIntExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2744);
show_backtrace(1);
}
{
var13 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var9, var10);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIntExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIntExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1824);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = lexer_work__Token__text(var1);
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 1;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var4;
{
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFloatExpr> */
var11 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AFloatExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2748);
show_backtrace(1);
}
{
var12 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var8, var9);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFloatExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFloatExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACharExpr__expr(val* self, val* p0) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var7 = self->attrs[COLOR_literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2752);
show_backtrace(1);
} else {
var9 = ((struct instance_kernel__Char*)var5)->value; /* autounbox from nullable Char to Char */;
var8 = string__Char__to_s(var9);
}
{
var10 = string__Text__escape_to_c(var8);
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\'";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACharExpr> */
var22 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ACharExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2752);
show_backtrace(1);
}
{
var23 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var19, var20);
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACharExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACharExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var5 /* : Array[MType] */;
val* var7 /* : Array[MType] */;
val* var8 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
val* var9 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var10 /* : AExprs */;
val* var12 /* : AExprs */;
val* var13 /* : ANodes[AExpr] */;
val* var15 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var16 /* : Iterator[ANode] */;
val* var_17 /* var : Iterator[AExpr] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var20 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var22 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var1 == NULL) {
var4 = 0;
} else {
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2758);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#arguments (var1) on <var1:nullable MType(MClassType)> */
var7 = var1->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var1:nullable MType(MClassType)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_collection__SequenceRead__first(var5);
}
var_mtype = var8;
var9 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:Array[RuntimeVariable]>*/;
}
var_array = var9;
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var12 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1776);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var10) on <var10:AExprs> */
var15 = var10->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var10:AExprs> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ = var13;
{
var16 = parser_nodes__ANodes__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_17) /* is_ok on <var_17:Iterator[AExpr]>*/;
}
if (var18){
{
var19 = ((val* (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Iterator__item]))(var_17) /* item on <var_17:Iterator[AExpr]>*/;
}
var_nexpr = var19;
{
var20 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_nexpr, var_mtype);
}
var_i = var20;
{
array__Array__add(var_array, var_i); /* Direct call array#Array#add on <var_array:Array[RuntimeVariable]>*/
}
{
((void (*)(val*))(var_17->class->vft[COLOR_abstract_collection__Iterator__next]))(var_17) /* next on <var_17:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_17) on <var_17:Iterator[AExpr]> */
RET_LABEL21:(void)0;
}
}
{
var22 = separate_compiler__SeparateCompilerVisitor__array_instance(var_v, var_array, var_mtype);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AArrayExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AArrayExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2769);
show_backtrace(1);
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__string_instance(var_v, var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AStringFormExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AStringFormExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
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
var1 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[RuntimeVariable]>*/;
}
var_array = var1;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var4 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1861);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = parser_nodes__ANodes__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int (*)(val*))(var_6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_6) /* is_ok on <var_6:Iterator[AExpr]>*/;
}
if (var7){
{
var8 = ((val* (*)(val*))(var_6->class->vft[COLOR_abstract_collection__Iterator__item]))(var_6) /* item on <var_6:Iterator[AExpr]>*/;
}
var_ne = var8;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_parser_nodes__AStringFormExpr.color;
idtype = type_parser_nodes__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var10 = 0;
} else {
var10 = var_ne->type->type_table[cltype] == idtype;
}
var_11 = var10;
if (var10){
{
{ /* Inline literal#AStringFormExpr#value (var_ne) on <var_ne:AExpr(AStringFormExpr)> */
var14 = var_ne->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <var_ne:AExpr(AStringFormExpr)> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (varonce) {
var15 = varonce;
} else {
var16 = "";
var17 = 0;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
if (var12 == NULL) {
var19 = 0; /* <var15:String> cannot be null */
} else {
var20 = string__FlatString___61d_61d(var12, var15);
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
var22 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var_ne, var21);
}
var_i = var22;
{
array__Array__add(var_array, var_i); /* Direct call array#Array#add on <var_array:Array[RuntimeVariable]>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_6->class->vft[COLOR_abstract_collection__Iterator__next]))(var_6) /* next on <var_6:Iterator[AExpr]>*/;
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
var25 = abstract_compiler__AbstractCompilerVisitor__object_type(var_v);
}
{
var26 = separate_compiler__SeparateCompilerVisitor__array_instance(var_v, var_array, var25);
}
var_a = var26;
if (varonce27) {
var28 = varonce27;
} else {
var29 = "to_s";
var30 = 4;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var34 = var_a->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = abstract_compiler__AbstractCompilerVisitor__get_property(var_v, var28, var32);
}
var36 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var37 = 1;
{
array__Array__with_capacity(var36, var37); /* Direct call array#Array#with_capacity on <var36:Array[RuntimeVariable]>*/
}
var_38 = var36;
{
array__AbstractArray__push(var_38, var_a); /* Direct call array#AbstractArray#push on <var_38:Array[RuntimeVariable]>*/
}
{
var39 = separate_compiler__SeparateCompilerVisitor__send(var_v, var35, var_38);
}
var_res = var39;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASuperstringExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASuperstringExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1754);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_i1 = var5;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var8 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1755);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NULL;
{
var10 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var6, var9);
}
var_i2 = var10;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
var13 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
/* <var11:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2792);
show_backtrace(1);
}
var_mtype = var11;
{
var15 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var15;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var18 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2794);
show_backtrace(1);
}
var19 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var20 = 3;
{
array__Array__with_capacity(var19, var20); /* Direct call array#Array#with_capacity on <var19:Array[RuntimeVariable]>*/
}
var_ = var19;
{
array__AbstractArray__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var21 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var16, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ACrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ACrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1754);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_i1 = var5;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var8 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1755);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NULL;
{
var10 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var6, var9);
}
var_i2 = var10;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
var13 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
/* <var11:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
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
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2804);
show_backtrace(1);
}
var_mtype = var11;
{
var15 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var15;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var18 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2806);
show_backtrace(1);
}
var19 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var20 = 3;
{
array__Array__with_capacity(var19, var20); /* Direct call array#Array#with_capacity on <var19:Array[RuntimeVariable]>*/
}
var_ = var19;
{
array__AbstractArray__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var21 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var16, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOrangeExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOrangeExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ATrueExpr> */
var7 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ATrueExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2812);
show_backtrace(1);
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ATrueExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ATrueExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AFalseExpr> */
var7 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AFalseExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2816);
show_backtrace(1);
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AFalseExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AFalseExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANullExpr__expr(val* self, val* p0) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANullExpr> */
var7 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ANullExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2820);
show_backtrace(1);
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var1, var5);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANullExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1561);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_i = var5;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var8 = self->attrs[COLOR_typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2827);
show_backtrace(1);
}
if (varonce) {
var9 = varonce;
} else {
var10 = "isa";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
var13 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var6, var9) /* type_test on <var_v:AbstractCompilerVisitor>*/;
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIsaExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIsaExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAsCastExpr__expr(val* self, val* p0) {
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
{ /* Inline parser_nodes#AAsCastExpr#n_expr (self) on <self:AAsCastExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1875);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_i = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 53);
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
var21 = ((struct instance_kernel__Bool*)var18)->value; /* autounbox from nullable Object to Bool */;
if (var21){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var24 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2837);
show_backtrace(1);
}
if (varonce) {
var25 = varonce;
} else {
var26 = "as";
var27 = 2;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
abstract_compiler__AbstractCompilerVisitor__add_cast(var_v, var_i, var22, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAsCastExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAsCastExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAsNotnullExpr__expr(val* self, val* p0) {
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
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
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
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsNotnullExpr#n_expr (self) on <self:AAsNotnullExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1885);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_i = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 53);
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
var21 = ((struct instance_kernel__Bool*)var18)->value; /* autounbox from nullable Object to Bool */;
if (var21){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_i) on <var_i:RuntimeVariable> */
var24 = var_i->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_i:RuntimeVariable> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_compiler__MType__ctype]))(var22) /* ctype on <var22:MType>*/;
}
if (varonce) {
var26 = varonce;
} else {
var27 = "val*";
var28 = 4;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce = var26;
}
{
{ /* Inline kernel#Object#!= (var25,var26) on <var25:String> */
var_other = var26;
{
var34 = ((short int (*)(val*, val*))(var25->class->vft[COLOR_kernel__Object___61d_61d]))(var25, var_other) /* == on <var25:String>*/;
var33 = var34;
}
var35 = !var33;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var = var_i;
goto RET_LABEL;
} else {
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "if (unlikely(";
var39 = 13;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = " == NULL)) {";
var44 = 12;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var_i;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Cast failed";
var53 = 11;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
abstract_compiler__AbstractCompilerVisitor__add_abort(var_v, var51); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "}";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var56); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAsNotnullExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAsNotnullExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AParExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : null */;
val* var5 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var3 = self->attrs[COLOR_parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1868);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AParExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AParExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AOnceExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOnceExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2864);
show_backtrace(1);
}
var_mtype = var1;
if (varonce) {
var4 = varonce;
} else {
var5 = "varonce";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var4);
}
var_name = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "_guard";
var12 = 6;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = string__FlatString___43d(var_name, var10);
}
{
var15 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var14);
}
var_guard = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "static ";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = " ";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ";";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "static int ";
var39 = 11;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ";";
var44 = 1;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var50 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_mtype);
}
var_res = var50;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "if (";
var54 = 4;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ") {";
var59 = 3;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var_guard;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " = ";
var68 = 3;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = ";";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 4;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var77)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var77)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var77)->values[3] = (val*) var71;
{
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
}
{
var78 = ((val* (*)(val*))(var75->class->vft[COLOR_string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var78); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "} else {";
var82 = 8;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:AOnceExpr> */
var86 = self->attrs[COLOR_parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1459);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var84, var_mtype);
}
var_i = var87;
if (varonce88) {
var89 = varonce88;
} else {
var90 = " = ";
var91 = 3;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = ";";
var96 = 1;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var98 = array_instance Array[Object] */
var99 = 4;
var100 = NEW_array__NativeArray(var99, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var100)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var100)->values[1] = (val*) var89;
((struct instance_array__NativeArray*)var100)->values[2] = (val*) var_i;
((struct instance_array__NativeArray*)var100)->values[3] = (val*) var94;
{
((void (*)(val*, val*, long))(var98->class->vft[COLOR_array__Array__with_native]))(var98, var100, var99) /* with_native on <var98:Array[Object]>*/;
}
}
{
var101 = ((val* (*)(val*))(var98->class->vft[COLOR_string__Object__to_s]))(var98) /* to_s on <var98:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var101); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = " = ";
var105 = 3;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
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
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var103;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var108;
{
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = " = 1;";
var119 = 5;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 2;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var_guard;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var117;
{
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
}
{
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var124); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "}";
var128 = 1;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var126); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AOnceExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AOnceExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASendExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var8 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2886);
show_backtrace(1);
}
var_callsite = var6;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var11 = var_callsite->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = typing__ASendExpr__raw_arguments(self);
}
{
var13 = abstract_compiler__AbstractCompilerVisitor__varargize(var_v, var9, var_recv, var12);
}
var_args = var13;
{
var14 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASendExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASendExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
void abstract_compiler__ASendReassignFormExpr__stmt(val* self, val* p0) {
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
short int var25 /* : Bool */;
val* var26 /* : nullable CallSite */;
val* var28 /* : nullable CallSite */;
val* var29 /* : Array[RuntimeVariable] */;
long var30 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var31 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable CallSite */;
val* var41 /* : nullable CallSite */;
val* var42 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
{
var4 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var, var3);
}
var_recv = var4;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var7 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2896);
show_backtrace(1);
}
var_callsite = var5;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var10 = var_callsite->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = typing__ASendExpr__raw_arguments(self);
}
{
var12 = abstract_compiler__AbstractCompilerVisitor__varargize(var_v, var8, var_recv, var11);
}
var_args = var12;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var15 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NULL;
{
var17 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var13, var16);
}
var_value = var17;
{
var18 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
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
var24 = ((short int (*)(val*, val*))(var_left->class->vft[COLOR_kernel__Object___61d_61d]))(var_left, var_other) /* == on <var_left:nullable RuntimeVariable(RuntimeVariable)>*/;
var23 = var24;
}
var25 = !var23;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2902);
show_backtrace(1);
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var28 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2904);
show_backtrace(1);
}
var29 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var30 = 2;
{
array__Array__with_capacity(var29, var30); /* Direct call array#Array#with_capacity on <var29:Array[RuntimeVariable]>*/
}
var_ = var29;
{
array__AbstractArray__push(var_, var_left); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var31 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var26, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var31;
var32 = NULL;
if (var_res == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var32) on <var_res:nullable RuntimeVariable> */
var_other = var32;
{
var37 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var36 = var37;
}
var38 = !var36;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2905);
show_backtrace(1);
}
{
array__Array__add(var_args, var_res); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var41 = self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2908);
show_backtrace(1);
}
{
var42 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var39, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ASendReassignFormExpr__stmt(val* self, val* p0) {
abstract_compiler__ASendReassignFormExpr__stmt(self, p0); /* Direct call abstract_compiler#ASendReassignFormExpr#stmt on <self:Object(ASendReassignFormExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#ASuperExpr#expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ASuperExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Frame */;
val* var3 /* : nullable Frame */;
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
short int var17 /* : Bool */;
val* var18 /* : MMethodDef */;
val* var20 /* : MMethodDef */;
val* var21 /* : AExprs */;
val* var23 /* : AExprs */;
val* var24 /* : ANodes[AExpr] */;
val* var26 /* : ANodes[AExpr] */;
val* var27 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var_i /* var i: Int */;
val* var37 /* : MSignature */;
val* var39 /* : MSignature */;
long var40 /* : Int */;
long var_ /* var : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var44 /* : Bool */;
val* var45 /* : nullable Frame */;
val* var47 /* : nullable Frame */;
val* var48 /* : Array[RuntimeVariable] */;
val* var50 /* : Array[RuntimeVariable] */;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
val* var59 /* : nullable Object */;
long var60 /* : Int */;
long var61 /* : Int */;
val* var62 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var63 /* : nullable MMethodDef */;
val* var65 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var66 /* : AExprs */;
val* var68 /* : AExprs */;
val* var69 /* : ANodes[AExpr] */;
val* var71 /* : ANodes[AExpr] */;
val* var72 /* : Array[RuntimeVariable] */;
val* var_args73 /* var args: Array[RuntimeVariable] */;
long var74 /* : Int */;
long var76 /* : Int */;
long var77 /* : Int */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable Frame */;
val* var84 /* : nullable Frame */;
val* var85 /* : Array[RuntimeVariable] */;
val* var87 /* : Array[RuntimeVariable] */;
val* var88 /* : MType */;
val* var90 /* : MType */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
val* var95 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2915);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var1) on <var1:nullable Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var6 = var1->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var1:nullable Frame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = abstract_collection__SequenceRead__first(var4);
}
var_recv = var7;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var10 = self->attrs[COLOR_typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
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
var16 = ((short int (*)(val*, val*))(var_callsite->class->vft[COLOR_kernel__Object___61d_61d]))(var_callsite, var_other) /* == on <var_callsite:nullable CallSite(CallSite)>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var20 = var_callsite->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var23 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1691);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var21) on <var21:AExprs> */
var26 = var21->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var21:AExprs> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = abstract_compiler__AbstractCompilerVisitor__varargize(var_v, var18, var_recv, var24);
}
var_args = var27;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[RuntimeVariable]> */
var30 = var_args->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_args:Array[RuntimeVariable]> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = 1;
{
{ /* Inline kernel#Int#== (var28,var31) on <var28:Int> */
var35 = var28 == var31;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
var36 = 0;
var_i = var36;
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var39 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = model__MSignature__arity(var37);
}
var_ = var40;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var43 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var44 = var_i < var_;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var47 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2924);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var45) on <var45:nullable Frame> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var50 = var45->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var45:nullable Frame> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var51) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var58 = var_i + var51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
var59 = array__Array___91d_93d(var48, var52);
}
{
array__Array__add(var_args, var59); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var60 = 1;
{
var61 = kernel__Int__successor(var_i, var60);
}
var_i = var61;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
var62 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res = var62;
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var65 = self->attrs[COLOR_typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2932);
show_backtrace(1);
}
var_mpropdef = var63;
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var68 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1691);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var66) on <var66:AExprs> */
var71 = var66->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var66:AExprs> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = abstract_compiler__AbstractCompilerVisitor__varargize(var_v, var_mpropdef, var_recv, var69);
}
var_args73 = var72;
{
{ /* Inline array#AbstractArrayRead#length (var_args73) on <var_args73:Array[RuntimeVariable]> */
var76 = var_args73->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_args73:Array[RuntimeVariable]> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
var77 = 1;
{
{ /* Inline kernel#Int#== (var74,var77) on <var74:Int> */
var81 = var74 == var77;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var84 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (var82 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2935);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var82) on <var82:nullable Frame> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var87 = var82->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var82:nullable Frame> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_args73 = var85;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var90 = var_recv->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
/* <var88:MType> isa MClassType */
cltype92 = type_model__MClassType.color;
idtype93 = type_model__MClassType.id;
if(cltype92 >= var88->type->table_size) {
var91 = 0;
} else {
var91 = var88->type->type_table[cltype92] == idtype93;
}
if (unlikely(!var91)) {
var_class_name94 = var88 == NULL ? "null" : var88->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2939);
show_backtrace(1);
}
{
var95 = separate_compiler__SeparateCompilerVisitor__supercall(var_v, var_mpropdef, var88, var_args73);
}
var = var95;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ASuperExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ASuperExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__ANewExpr__expr(val* self, val* p0) {
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
short int var10 /* : Bool */;
val* var11 /* : String */;
val* var_ctype /* var ctype: String */;
val* var12 /* : MClass */;
val* var14 /* : MClass */;
val* var15 /* : String */;
val* var17 /* : String */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : AExprs */;
val* var26 /* : AExprs */;
val* var27 /* : ANodes[AExpr] */;
val* var29 /* : ANodes[AExpr] */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : AExprs */;
val* var38 /* : AExprs */;
val* var39 /* : ANodes[AExpr] */;
val* var41 /* : ANodes[AExpr] */;
val* var42 /* : nullable Object */;
val* var43 /* : null */;
val* var44 /* : RuntimeVariable */;
val* var_l /* var l: RuntimeVariable */;
short int var45 /* : Bool */;
int cltype;
int idtype;
val* var46 /* : Array[MType] */;
val* var48 /* : Array[MType] */;
val* var49 /* : nullable Object */;
val* var_elttype /* var elttype: MType */;
val* var50 /* : RuntimeVariable */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : RuntimeVariable */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : Array[Object] */;
long var83 /* : Int */;
val* var84 /* : NativeArray[Object] */;
val* var85 /* : String */;
val* var86 /* : RuntimeVariable */;
val* var87 /* : nullable CallSite */;
val* var89 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
val* var90 /* : MMethodDef */;
val* var92 /* : MMethodDef */;
val* var93 /* : AExprs */;
val* var95 /* : AExprs */;
val* var96 /* : ANodes[AExpr] */;
val* var98 /* : ANodes[AExpr] */;
val* var99 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var100 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
val* var101 /* : null */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
var3 = self->attrs[COLOR_typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
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
var9 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MClassType(MClassType)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2947);
show_backtrace(1);
}
{
var11 = abstract_compiler__MClassType__ctype(var_mtype);
}
var_ctype = var11;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var14 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClass#name (var12) on <var12:MClass> */
var17 = var12->attrs[COLOR_model__MClass___name].val; /* _name on <var12:MClass> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (varonce) {
var18 = varonce;
} else {
var19 = "NativeArray";
var20 = 11;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
var23 = string__FlatString___61d_61d(var15, var18);
var22 = var23;
}
if (var22){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var26 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1614);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var24) on <var24:AExprs> */
var29 = var24->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var24:AExprs> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = parser_nodes__ANodes__length(var27);
}
var31 = 1;
{
{ /* Inline kernel#Int#== (var30,var31) on <var30:Int> */
var35 = var30 == var31;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2951);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var38 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1614);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var36) on <var36:AExprs> */
var41 = var36->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var36:AExprs> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = abstract_collection__SequenceRead__first(var39);
}
var43 = NULL;
{
var44 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var42, var43);
}
var_l = var44;
/* <var_mtype:nullable MClassType(MClassType)> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var45 = 0;
} else {
var45 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2953);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:nullable MClassType(MGenericType)> */
var48 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:nullable MClassType(MGenericType)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = abstract_collection__SequenceRead__first(var46);
}
var_elttype = var49;
{
var50 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_elttype, var_l) /* native_array_instance on <var_v:AbstractCompilerVisitor>*/;
}
var = var50;
goto RET_LABEL;
} else {
if (varonce51) {
var52 = varonce51;
} else {
var53 = "val*";
var54 = 4;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
var57 = string__FlatString___61d_61d(var_ctype, var52);
var56 = var57;
}
if (var56){
{
var58 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype) /* init_instance on <var_v:AbstractCompilerVisitor>*/;
}
var_recv = var58;
} else {
if (varonce59) {
var60 = varonce59;
} else {
var61 = "char*";
var62 = 5;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
var65 = string__FlatString___61d_61d(var_ctype, var60);
var64 = var65;
}
if (var64){
if (varonce66) {
var67 = varonce66;
} else {
var68 = "NULL/*special!*/";
var69 = 16;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var67, var_mtype);
}
var_recv = var71;
} else {
if (varonce72) {
var73 = varonce72;
} else {
var74 = "(";
var75 = 1;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
if (varonce77) {
var78 = varonce77;
} else {
var79 = ")0/*special!*/";
var80 = 14;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var82 = array_instance Array[Object] */
var83 = 3;
var84 = NEW_array__NativeArray(var83, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var84)->values[0] = (val*) var73;
((struct instance_array__NativeArray*)var84)->values[1] = (val*) var_ctype;
((struct instance_array__NativeArray*)var84)->values[2] = (val*) var78;
{
((void (*)(val*, val*, long))(var82->class->vft[COLOR_array__Array__with_native]))(var82, var84, var83) /* with_native on <var82:Array[Object]>*/;
}
}
{
var85 = ((val* (*)(val*))(var82->class->vft[COLOR_string__Object__to_s]))(var82) /* to_s on <var82:Array[Object]>*/;
}
{
var86 = abstract_compiler__AbstractCompilerVisitor__new_expr(var_v, var85, var_mtype);
}
var_recv = var86;
}
}
}
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var89 = self->attrs[COLOR_typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2964);
show_backtrace(1);
}
var_callsite = var87;
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var92 = var_callsite->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var95 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1614);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var93) on <var93:AExprs> */
var98 = var93->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var93:AExprs> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = abstract_compiler__AbstractCompilerVisitor__varargize(var_v, var90, var_recv, var96);
}
var_args = var99;
{
var100 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var_res2 = var100;
var101 = NULL;
if (var_res2 == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res2,var101) on <var_res2:nullable RuntimeVariable> */
var_other = var101;
{
var106 = ((short int (*)(val*, val*))(var_res2->class->vft[COLOR_kernel__Object___61d_61d]))(var_res2, var_other) /* == on <var_res2:nullable RuntimeVariable(RuntimeVariable)>*/;
var105 = var106;
}
var107 = !var105;
var103 = var107;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__ANewExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__ANewExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: AAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAttrExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrExpr> */
var8 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2979);
show_backtrace(1);
}
var_mproperty = var6;
{
var9 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAttrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrAssignExpr#expr for (self: AAttrAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AAttrAssignExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var8 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1445);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NULL;
{
var10 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var6, var9);
}
var_i = var10;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrAssignExpr> */
var13 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrAssignExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 2989);
show_backtrace(1);
}
var_mproperty = var11;
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_i); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrAssignExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AAttrAssignExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AAttrAssignExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void abstract_compiler__AAttrReassignExpr__stmt(val* self, val* p0) {
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
short int var26 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NULL;
{
var4 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var, var3);
}
var_recv = var4;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var7 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = NULL;
{
var9 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var5, var8);
}
var_value = var9;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var12 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3000);
show_backtrace(1);
}
var_mproperty = var10;
{
var13 = separate_compiler__SeparateCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var_attr = var13;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var16 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3002);
show_backtrace(1);
}
var17 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var18 = 2;
{
array__Array__with_capacity(var17, var18); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
array__AbstractArray__push(var_, var_attr); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var19 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
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
var25 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3003);
show_backtrace(1);
}
{
separate_compiler__SeparateCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_res); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__AAttrReassignExpr__stmt(val* self, val* p0) {
abstract_compiler__AAttrReassignExpr__stmt(self, p0); /* Direct call abstract_compiler#AAttrReassignExpr#stmt on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* abstract_compiler__AIssetAttrExpr__expr(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
{
var5 = abstract_compiler__AbstractCompilerVisitor__expr(var_v, var1, var4);
}
var_recv = var5;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AIssetAttrExpr> */
var8 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AIssetAttrExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3012);
show_backtrace(1);
}
var_mproperty = var6;
{
var9 = separate_compiler__SeparateCompilerVisitor__isset_attribute(var_v, var_mproperty, var_recv);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: Object, AbstractCompilerVisitor): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__AIssetAttrExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__AIssetAttrExpr__expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void abstract_compiler__ADebugTypeExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__ADebugTypeExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
{ /* Inline abstract_compiler#ADebugTypeExpr#stmt (self,p0) on <self:Object(ADebugTypeExpr)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MModule#properties for (self: MModule, MClass): Set[MProperty] */
val* abstract_compiler__MModule__properties(val* self, val* p0) {
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
val* var11 /* : Collection[Object] */;
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
var3 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3057);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_mclass);
}
var5 = !var4;
if (var5){
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MProperty);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:HashSet[MProperty]>*/;
}
var_properties = var6;
var7 = NEW_array__Array(&type_array__Arraymodel__MClass);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[MClass]>*/;
}
var_parents = var7;
{
var8 = model__MModule__flatten_mclass_hierarchy(self);
}
{
var9 = poset__POSet__has(var8, var_mclass);
}
if (var9){
{
var10 = model__MClass__in_hierarchy(var_mclass, self);
}
{
var11 = poset__POSetElement__direct_greaters(var10);
}
{
abstract_collection__SimpleCollection__add_all(var_parents, var11); /* Direct call abstract_collection#SimpleCollection#add_all on <var_parents:Array[MClass]>*/
}
} else {
}
var_ = var_parents;
{
var12 = array__AbstractArrayRead__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = array__ArrayIterator__is_ok(var_13);
}
if (var14){
{
var15 = array__ArrayIterator__item(var_13);
}
var_parent = var15;
{
var16 = abstract_compiler__MModule__properties(self, var_parent);
}
{
abstract_collection__SimpleCollection__add_all(var_properties, var16); /* Direct call abstract_collection#SimpleCollection#add_all on <var_properties:HashSet[MProperty]>*/
}
{
array__ArrayIterator__next(var_13); /* Direct call array#ArrayIterator#next on <var_13:ArrayIterator[MClass]>*/
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
var20 = var_mclass->attrs[COLOR_model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 414);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_21 = var18;
{
var22 = array__AbstractArrayRead__iterator(var_21);
}
var_23 = var22;
for(;;) {
{
var24 = array__ArrayIterator__is_ok(var_23);
}
if (var24){
{
var25 = array__ArrayIterator__item(var_23);
}
var_mclassdef = var25;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var28 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset__POSetElement___60d_61d(var26, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label34;
} else {
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_mclassdef) on <var_mclassdef:MClassDef> */
var37 = var_mclassdef->attrs[COLOR_model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_mclassdef:MClassDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 588);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = array__AbstractArrayRead__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = array__ArrayIterator__is_ok(var_40);
}
if (var41){
{
var42 = array__ArrayIterator__item(var_40);
}
var_mprop = var42;
{
hash_collection__HashSet__add(var_properties, var_mprop); /* Direct call hash_collection#HashSet#add on <var_properties:HashSet[MProperty]>*/
}
{
array__ArrayIterator__next(var_40); /* Direct call array#ArrayIterator#next on <var_40:ArrayIterator[MProperty]>*/
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
array__ArrayIterator__next(var_23); /* Direct call array#ArrayIterator#next on <var_23:ArrayIterator[MClassDef]>*/
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
var49 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3057);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var47->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var47, var_mclass, var_properties) /* []= on <var47:Map[MClass, Set[MProperty]]>*/;
}
} else {
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var52 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3057);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = ((val* (*)(val*, val*))(var50->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var50, var_mclass) /* [] on <var50:Map[MClass, Set[MProperty]]>*/;
}
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties for (self: Object, MClass): Set[MProperty] */
val* VIRTUAL_abstract_compiler__MModule__properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var1 /* : Set[MProperty] */;
var1 = abstract_compiler__MModule__properties(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* abstract_compiler__MModule__properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3057);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: Object): Map[MClass, Set[MProperty]] */
val* VIRTUAL_abstract_compiler__MModule__properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
val* var3 /* : Map[MClass, Set[MProperty]] */;
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:Object(MModule)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 3057);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#finalize_ffi for (self: MModule, AbstractCompiler) */
void abstract_compiler__MModule__finalize_ffi(val* self, val* p0) {
val* var_c /* var c: AbstractCompiler */;
var_c = p0;
RET_LABEL:;
}
/* method abstract_compiler#MModule#finalize_ffi for (self: Object, AbstractCompiler) */
void VIRTUAL_abstract_compiler__MModule__finalize_ffi(val* self, val* p0) {
val* var_c /* var c: AbstractCompiler */;
{ /* Inline abstract_compiler#MModule#finalize_ffi (self,p0) on <self:Object(MModule)> */
var_c = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MModule#collect_linker_libs for (self: MModule): nullable Set[String] */
val* abstract_compiler__MModule__collect_linker_libs(val* self) {
val* var /* : nullable Set[String] */;
val* var1 /* : null */;
var1 = NULL;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#collect_linker_libs for (self: Object): nullable Set[String] */
val* VIRTUAL_abstract_compiler__MModule__collect_linker_libs(val* self) {
val* var /* : nullable Set[String] */;
val* var1 /* : nullable Set[String] */;
var1 = abstract_compiler__MModule__collect_linker_libs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Sys#main for (self: Sys) */
void abstract_compiler__Sys__main(val* self) {
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
val* var8 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var9 /* : OptionContext */;
val* var11 /* : OptionContext */;
val* var12 /* : Array[String] */;
val* var14 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
val* var24 /* : OptionString */;
val* var26 /* : OptionString */;
val* var27 /* : nullable Object */;
val* var29 /* : nullable Object */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var34 /* : Bool */;
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
var = NEW_toolcontext__ToolContext(&type_toolcontext__ToolContext);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:ToolContext>*/;
}
var_toolcontext = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "Usage: nitg [OPTION]... file.nit...\nCompiles Nit programs.";
var3 = 58;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription= (var_toolcontext,var1) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_toolcontext__ToolContext___tooldescription].val = var1; /* _tooldescription on <var_toolcontext:ToolContext> */
RET_LABEL5:(void)0;
}
}
{
var6 = string__Object__args(self);
}
{
nith__ToolContext__process_options(var_toolcontext, var6); /* Direct call nith#ToolContext#process_options on <var_toolcontext:ToolContext>*/
}
var7 = NEW_model_base__Model(&type_model_base__Model);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Model>*/;
}
var_model = var7;
var8 = NEW_modelbuilder__ModelBuilder(&type_modelbuilder__ModelBuilder);
{
modelbuilder__ModelBuilder__init(var8, var_model, var_toolcontext); /* Direct call modelbuilder#ModelBuilder#init on <var8:ModelBuilder>*/
}
var_modelbuilder = var8;
{
{ /* Inline toolcontext#ToolContext#option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var11 = var_toolcontext->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var9) on <var9:OptionContext> */
var14 = var9->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var9:OptionContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 246);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_arguments = var12;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[String]> */
var18 = var_arguments->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[String]> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = 1;
{
{ /* Inline kernel#Int#> (var16,var19) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var23 = var16 > var19;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_ = var20;
if (var20){
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var_toolcontext) on <var_toolcontext:ToolContext> */
var26 = var_toolcontext->attrs[COLOR_abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var_toolcontext:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 29);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts#Option#value (var24) on <var24:OptionString> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionString> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NULL;
if (var27 == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var27,var30) on <var27:nullable Object(nullable String)> */
var_other = var30;
{
var35 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var_other) /* == on <var27:nullable String(String)>*/;
var34 = var35;
}
var36 = !var34;
var32 = var36;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var15 = var31;
} else {
var15 = var_;
}
if (var15){
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Error: --output needs a single source file. Do you prefer --dir?";
var40 = 64;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
file__Object__print(self, var38); /* Direct call file#Object#print on <self:Sys>*/
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
var44 = modelbuilder__ModelBuilder__parse(var_modelbuilder, var_arguments);
}
var_mmodules = var44;
{
var45 = array__AbstractArrayRead__is_empty(var_mmodules);
}
if (var45){
goto RET_LABEL;
} else {
}
{
modelbuilder__ModelBuilder__run_phases(var_modelbuilder); /* Direct call modelbuilder#ModelBuilder#run_phases on <var_modelbuilder:ModelBuilder>*/
}
var_46 = var_mmodules;
{
var47 = array__AbstractArrayRead__iterator(var_46);
}
var_48 = var47;
for(;;) {
{
var49 = array__ArrayIterator__is_ok(var_48);
}
if (var49){
{
var50 = array__ArrayIterator__item(var_48);
}
var_mmodule = var50;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "*** PROCESS ";
var54 = 12;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = " ***";
var59 = 4;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
var65 = 1;
{
toolcontext__ToolContext__info(var_toolcontext, var64, var65); /* Direct call toolcontext#ToolContext#info on <var_toolcontext:ToolContext>*/
}
var66 = NEW_array__Array(&type_array__Arraymmodule__MModule);
var67 = 1;
{
array__Array__with_capacity(var66, var67); /* Direct call array#Array#with_capacity on <var66:Array[MModule]>*/
}
var_68 = var66;
{
array__AbstractArray__push(var_68, var_mmodule); /* Direct call array#AbstractArray#push on <var_68:Array[MModule]>*/
}
var_ms = var_68;
{
modelbuilder__ToolContext__run_global_phases(var_toolcontext, var_ms); /* Direct call modelbuilder#ToolContext#run_global_phases on <var_toolcontext:ToolContext>*/
}
{
array__ArrayIterator__next(var_48); /* Direct call array#ArrayIterator#next on <var_48:ArrayIterator[MModule]>*/
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
/* method abstract_compiler#Sys#main for (self: Object) */
void VIRTUAL_abstract_compiler__Sys__main(val* self) {
abstract_compiler__Sys__main(self); /* Direct call abstract_compiler#Sys#main on <self:Object(Sys)>*/
RET_LABEL:;
}
