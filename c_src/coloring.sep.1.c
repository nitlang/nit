#include "coloring.sep.0.h"
/* method coloring#POSetConflictGraph#core for (self: POSetConflictGraph[Object]): HashSet[Object] */
val* coloring__POSetConflictGraph__core(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#core for (self: Object): HashSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__core(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#border for (self: POSetConflictGraph[Object]): HashSet[Object] */
val* coloring__POSetConflictGraph__border(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#border for (self: Object): HashSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__border(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#crown for (self: POSetConflictGraph[Object]): HashSet[Object] */
val* coloring__POSetConflictGraph__crown(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#crown for (self: Object): HashSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__crown(val* self) {
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 34);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#conflicts for (self: POSetConflictGraph[Object]): HashMap[Object, Set[Object]] */
val* coloring__POSetConflictGraph__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#conflicts for (self: Object): HashMap[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetConflictGraph__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset for (self: POSetConflictGraph[Object]): POSet[Object] */
val* coloring__POSetConflictGraph__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset for (self: Object): POSet[Object] */
val* VIRTUAL_coloring__POSetConflictGraph__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:Object(POSetConflictGraph[Object])> */
var3 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:Object(POSetConflictGraph[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#poset= for (self: POSetConflictGraph[Object], POSet[Object]) */
void coloring__POSetConflictGraph__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetConflictGraph#0] */
/* <p0:POSet[Object]> isa POSet[POSetConflictGraph#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetConflictGraph#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetConflictGraph___poset].val = p0; /* _poset on <self:POSetConflictGraph[Object]> */
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#poset= for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetConflictGraph__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetConflictGraph#poset= (self,p0) on <self:Object(POSetConflictGraph[Object])> */
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetConflictGraph#0] */
/* <p0:POSet[Object]> isa POSet[POSetConflictGraph#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetConflictGraph#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetConflictGraph___poset].val = p0; /* _poset on <self:Object(POSetConflictGraph[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#init for (self: POSetConflictGraph[Object], POSet[Object]) */
void coloring__POSetConflictGraph__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_poset /* var poset: POSet[Object] */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetConflictGraph#0] */
/* <p0:POSet[Object]> isa POSet[POSetConflictGraph#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetConflictGraph#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 50);
show_backtrace(1);
}
var_poset = p0;
{
{ /* Inline coloring#POSetConflictGraph#poset= (self,var_poset) on <self:POSetConflictGraph[Object]> */
/* Covariant cast for argument 0 (poset) <var_poset:POSet[Object]> isa POSet[POSetConflictGraph#0] */
/* <var_poset:POSet[Object]> isa POSet[POSetConflictGraph#0] */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetConflictGraph_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= var_poset->type->table_size) {
var2 = 0;
} else {
var2 = var_poset->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = var_poset == NULL ? "null" : var_poset->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetConflictGraph#0]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetConflictGraph___poset].val = var_poset; /* _poset on <self:POSetConflictGraph[Object]> */
RET_LABEL1:(void)0;
}
}
{
coloring__POSetConflictGraph__extract_core(self); /* Direct call coloring#POSetConflictGraph#extract_core on <self:POSetConflictGraph[Object]>*/
}
{
coloring__POSetConflictGraph__extract_border(self); /* Direct call coloring#POSetConflictGraph#extract_border on <self:POSetConflictGraph[Object]>*/
}
{
coloring__POSetConflictGraph__extract_crown(self); /* Direct call coloring#POSetConflictGraph#extract_crown on <self:POSetConflictGraph[Object]>*/
}
{
coloring__POSetConflictGraph__compute_conflicts(self); /* Direct call coloring#POSetConflictGraph#compute_conflicts on <self:POSetConflictGraph[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#init for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetConflictGraph__init(val* self, val* p0) {
coloring__POSetConflictGraph__init(self, p0); /* Direct call coloring#POSetConflictGraph#init on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_core for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__extract_core(val* self) {
val* var /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : POSet[Object] */;
val* var5 /* : POSet[Object] */;
val* var6 /* : Iterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var9 /* : POSet[Object] */;
val* var11 /* : POSet[Object] */;
val* var12 /* : POSetElement[Object] */;
val* var13 /* : Collection[Object] */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
val* var20 /* : HashSet[Object] */;
val* var22 /* : HashSet[Object] */;
val* var23 /* : POSet[Object] */;
val* var25 /* : POSet[Object] */;
val* var26 /* : POSetElement[Object] */;
val* var27 /* : Collection[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashSet__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = poset__POSet__iterator(var3);
}
for(;;) {
{
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[Object]>*/;
}
if(!var7) break;
{
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[Object]>*/;
}
var_e = var8;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var11 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = poset__POSet___91d_93d(var9, var_e);
}
{
var13 = poset__POSetElement__direct_greaters(var12);
}
{
var14 = ((long (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__length]))(var13) /* length on <var13:Collection[Object]>*/;
}
var15 = 1;
{
{ /* Inline kernel#Int#> (var14,var15) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var19 = var14 > var15;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var22 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var25 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = poset__POSet___91d_93d(var23, var_e);
}
{
var27 = poset__POSetElement__greaters(var26);
}
{
abstract_collection__SimpleCollection__add_all(var20, var27); /* Direct call abstract_collection#SimpleCollection#add_all on <var20:HashSet[Object]>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_core for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__extract_core(val* self) {
coloring__POSetConflictGraph__extract_core(self); /* Direct call coloring#POSetConflictGraph#extract_core on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_border for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__extract_border(val* self) {
val* var /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
val* var5 /* : HashSet[Object] */;
val* var6 /* : Iterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : HashSet[Object] */;
val* var13 /* : HashSet[Object] */;
val* var14 /* : HashSet[Object] */;
val* var16 /* : HashSet[Object] */;
val* var17 /* : Iterator[Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_e20 /* var e: Object */;
val* var21 /* : HashSet[Object] */;
val* var23 /* : HashSet[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashSet__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = hash_collection__HashSet__iterator(var3);
}
for(;;) {
{
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[Object]>*/;
}
if(!var7) break;
{
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[Object]>*/;
}
var_e = var8;
{
var9 = coloring__POSetConflictGraph__is_border(self, var_e);
}
var10 = !var9;
if (var10){
goto CONTINUE_label;
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var13 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
hash_collection__HashSet__add(var11, var_e); /* Direct call hash_collection#HashSet#add on <var11:HashSet[Object]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var16 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = hash_collection__HashSet__iterator(var14);
}
for(;;) {
{
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[Object]>*/;
}
if(!var18) break;
{
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[Object]>*/;
}
var_e20 = var19;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var23 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
hash_collection__HashSet__remove(var21, var_e20); /* Direct call hash_collection#HashSet#remove on <var21:HashSet[Object]>*/
}
CONTINUE_label24: (void)0;
{
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[Object]>*/;
}
}
BREAK_label24: (void)0;
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_border for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__extract_border(val* self) {
coloring__POSetConflictGraph__extract_border(self); /* Direct call coloring#POSetConflictGraph#extract_border on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#is_border for (self: POSetConflictGraph[Object], Object): Bool */
short int coloring__POSetConflictGraph__is_border(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : POSet[Object] */;
val* var4 /* : POSet[Object] */;
val* var5 /* : POSetElement[Object] */;
val* var6 /* : Collection[Object] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_child /* var child: Object */;
val* var10 /* : HashSet[Object] */;
val* var12 /* : HashSet[Object] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:Object> isa POSetConflictGraph#0 */
/* <p0:Object> isa POSetConflictGraph#0 */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 79);
show_backtrace(1);
}
var_e = p0;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var4 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset__POSet___91d_93d(var2, var_e);
}
{
var6 = poset__POSetElement__direct_smallers(var5);
}
{
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Collection[Object]>*/;
}
for(;;) {
{
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
}
if(!var8) break;
{
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
}
var_child = var9;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var12 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = hash_collection__HashSet__has(var10, var_child);
}
if (var13){
var14 = 0;
var = var14;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var15 = 1;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#is_border for (self: Object, Object): Bool */
short int VIRTUAL_coloring__POSetConflictGraph__is_border(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__POSetConflictGraph__is_border(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetConflictGraph#extract_crown for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__extract_crown(val* self) {
val* var /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : POSet[Object] */;
val* var5 /* : POSet[Object] */;
val* var6 /* : Iterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Object */;
short int var9 /* : Bool */;
val* var10 /* : HashSet[Object] */;
val* var12 /* : HashSet[Object] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : HashSet[Object] */;
val* var17 /* : HashSet[Object] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashSet[Object] */;
val* var22 /* : HashSet[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 34);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashSet__clear(var); /* Direct call hash_collection#HashSet#clear on <var:HashSet[Object]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = poset__POSet__iterator(var3);
}
for(;;) {
{
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[Object]>*/;
}
if(!var7) break;
{
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[Object]>*/;
}
var_e = var8;
{
{ /* Inline coloring#POSetConflictGraph#core (self) on <self:POSetConflictGraph[Object]> */
var12 = self->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <self:POSetConflictGraph[Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = hash_collection__HashSet__has(var10, var_e);
}
var14 = !var13;
var_ = var14;
if (var14){
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var17 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = hash_collection__HashSet__has(var15, var_e);
}
var19 = !var18;
var9 = var19;
} else {
var9 = var_;
}
if (var9){
{
{ /* Inline coloring#POSetConflictGraph#crown (self) on <self:POSetConflictGraph[Object]> */
var22 = self->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <self:POSetConflictGraph[Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 34);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
hash_collection__HashSet__add(var20, var_e); /* Direct call hash_collection#HashSet#add on <var20:HashSet[Object]>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#extract_crown for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__extract_crown(val* self) {
coloring__POSetConflictGraph__extract_crown(self); /* Direct call coloring#POSetConflictGraph#extract_crown on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#compute_conflicts for (self: POSetConflictGraph[Object]) */
void coloring__POSetConflictGraph__compute_conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var2 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashSet[Object] */;
val* var5 /* : HashSet[Object] */;
val* var6 /* : Iterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var9 /* : POSet[Object] */;
val* var11 /* : POSet[Object] */;
val* var12 /* : POSetElement[Object] */;
val* var13 /* : Collection[Object] */;
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var2 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Set[Object]]>*/
}
{
{ /* Inline coloring#POSetConflictGraph#border (self) on <self:POSetConflictGraph[Object]> */
var5 = self->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <self:POSetConflictGraph[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = hash_collection__HashSet__iterator(var3);
}
for(;;) {
{
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[Object]>*/;
}
if(!var7) break;
{
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[Object]>*/;
}
var_e = var8;
{
{ /* Inline coloring#POSetConflictGraph#poset (self) on <self:POSetConflictGraph[Object]> */
var11 = self->attrs[COLOR_coloring__POSetConflictGraph___poset].val; /* _poset on <self:POSetConflictGraph[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 48);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = poset__POSet___91d_93d(var9, var_e);
}
{
var13 = poset__POSetElement__greaters(var12);
}
{
coloring__POSetConflictGraph__add_conflicts(self, var13); /* Direct call coloring#POSetConflictGraph#add_conflicts on <self:POSetConflictGraph[Object]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[Object]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#compute_conflicts for (self: Object) */
void VIRTUAL_coloring__POSetConflictGraph__compute_conflicts(val* self) {
coloring__POSetConflictGraph__compute_conflicts(self); /* Direct call coloring#POSetConflictGraph#compute_conflicts on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflict for (self: POSetConflictGraph[Object], Object, Object) */
void coloring__POSetConflictGraph__add_conflict(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_e /* var e: Object */;
val* var_o /* var o: Object */;
val* var6 /* : HashMap[Object, Set[Object]] */;
val* var8 /* : HashMap[Object, Set[Object]] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Object, Set[Object]] */;
val* var13 /* : HashMap[Object, Set[Object]] */;
val* var14 /* : HashSet[Object] */;
val* var15 /* : HashMap[Object, Set[Object]] */;
val* var17 /* : HashMap[Object, Set[Object]] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashMap[Object, Set[Object]] */;
val* var22 /* : HashMap[Object, Set[Object]] */;
val* var23 /* : HashSet[Object] */;
val* var24 /* : HashMap[Object, Set[Object]] */;
val* var26 /* : HashMap[Object, Set[Object]] */;
val* var27 /* : nullable Object */;
val* var28 /* : HashMap[Object, Set[Object]] */;
val* var30 /* : HashMap[Object, Set[Object]] */;
val* var31 /* : nullable Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa POSetConflictGraph#0 */
/* <p0:Object> isa POSetConflictGraph#0 */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 101);
show_backtrace(1);
}
/* Covariant cast for argument 1 (o) <p1:Object> isa POSetConflictGraph#0 */
/* <p1:Object> isa POSetConflictGraph#0 */
type_struct4 = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraph_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph#0", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 101);
show_backtrace(1);
}
var_e = p0;
var_o = p1;
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var8 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_collection__MapRead__has_key(var6, var_e);
}
var10 = !var9;
if (var10){
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var13 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0]);
{
hash_collection__HashSet__init(var14); /* Direct call hash_collection#HashSet#init on <var14:HashSet[Object]>*/
}
{
hash_collection__HashMap___91d_93d_61d(var11, var_e, var14); /* Direct call hash_collection#HashMap#[]= on <var11:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var17 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = abstract_collection__MapRead__has_key(var15, var_o);
}
var19 = !var18;
if (var19){
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var22 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetConflictGraph_FT0]);
{
hash_collection__HashSet__init(var23); /* Direct call hash_collection#HashSet#init on <var23:HashSet[Object]>*/
}
{
hash_collection__HashMap___91d_93d_61d(var20, var_o, var23); /* Direct call hash_collection#HashMap#[]= on <var20:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var26 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = hash_collection__HashMap___91d_93d(var24, var_e);
}
{
((void (*)(val*, val*))(var27->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var27, var_o) /* add on <var27:nullable Object(Set[Object])>*/;
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (self) on <self:POSetConflictGraph[Object]> */
var30 = self->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <self:POSetConflictGraph[Object]> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = hash_collection__HashMap___91d_93d(var28, var_o);
}
{
((void (*)(val*, val*))(var31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var31, var_e) /* add on <var31:nullable Object(Set[Object])>*/;
}
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflict for (self: Object, Object, Object) */
void VIRTUAL_coloring__POSetConflictGraph__add_conflict(val* self, val* p0, val* p1) {
coloring__POSetConflictGraph__add_conflict(self, p0, p1); /* Direct call coloring#POSetConflictGraph#add_conflict on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflicts for (self: POSetConflictGraph[Object], Collection[Object]) */
void coloring__POSetConflictGraph__add_conflicts(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_es /* var es: Collection[Object] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_e1 /* var e1: Object */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
/* Covariant cast for argument 0 (es) <p0:Collection[Object]> isa Collection[POSetConflictGraph#0] */
/* <p0:Collection[Object]> isa Collection[POSetConflictGraph#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectioncoloring__POSetConflictGraph_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[POSetConflictGraph#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 108);
show_backtrace(1);
}
var_es = p0;
{
var1 = ((val* (*)(val*))(var_es->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_es) /* iterator on <var_es:Collection[Object]>*/;
}
for(;;) {
{
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
}
if(!var2) break;
{
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
}
var_e1 = var3;
{
var4 = ((val* (*)(val*))(var_es->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_es) /* iterator on <var_es:Collection[Object]>*/;
}
for(;;) {
{
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
}
if(!var5) break;
{
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
}
var_e2 = var6;
{
coloring__POSetConflictGraph__add_conflict(self, var_e1, var_e2); /* Direct call coloring#POSetConflictGraph#add_conflict on <self:POSetConflictGraph[Object]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label7: (void)0;
{
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
}
BREAK_label7: (void)0;
RET_LABEL:;
}
/* method coloring#POSetConflictGraph#add_conflicts for (self: Object, Collection[Object]) */
void VIRTUAL_coloring__POSetConflictGraph__add_conflicts(val* self, val* p0) {
coloring__POSetConflictGraph__add_conflicts(self, p0); /* Direct call coloring#POSetConflictGraph#add_conflicts on <self:Object(POSetConflictGraph[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#is_colored for (self: POSetColorer[Object]): Bool */
short int coloring__POSetColorer__is_colored(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_colored for (self: Object): Bool */
short int VIRTUAL_coloring__POSetColorer__is_colored(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:Object(POSetColorer[Object])> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_colored= for (self: POSetColorer[Object], Bool) */
void coloring__POSetColorer__is_colored_61d(val* self, short int p0) {
self->attrs[COLOR_coloring__POSetColorer___is_colored].s = p0; /* _is_colored on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#is_colored= for (self: Object, Bool) */
void VIRTUAL_coloring__POSetColorer__is_colored_61d(val* self, short int p0) {
{ /* Inline coloring#POSetColorer#is_colored= (self,p0) on <self:Object(POSetColorer[Object])> */
self->attrs[COLOR_coloring__POSetColorer___is_colored].s = p0; /* _is_colored on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#ids for (self: POSetColorer[Object]): Map[Object, Int] */
val* coloring__POSetColorer__ids(val* self) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Int] */;
val* var6 /* : HashMap[Object, Int] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 162);
show_backtrace(1);
}
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 165);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#ids for (self: Object): Map[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__ids(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__POSetColorer__ids(self);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#ids_cache for (self: POSetColorer[Object]): HashMap[Object, Int] */
val* coloring__POSetColorer__ids_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 165);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#ids_cache for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__ids_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 165);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors for (self: POSetColorer[Object]): Map[Object, Int] */
val* coloring__POSetColorer__colors(val* self) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[Object, Int] */;
val* var6 /* : HashMap[Object, Int] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 170);
show_backtrace(1);
}
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors for (self: Object): Map[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__colors(val* self) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__POSetColorer__colors(self);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors_cache for (self: POSetColorer[Object]): HashMap[Object, Int] */
val* coloring__POSetColorer__colors_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#colors_cache for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__POSetColorer__colors_cache(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache for (self: POSetColorer[Object]): POSet[Object] */
val* coloring__POSetColorer__poset_cache(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache for (self: Object): POSet[Object] */
val* VIRTUAL_coloring__POSetColorer__poset_cache(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#poset_cache= for (self: POSetColorer[Object], POSet[Object]) */
void coloring__POSetColorer__poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset_cache) <p0:POSet[Object]> isa POSet[POSetColorer#0] */
/* <p0:POSet[Object]> isa POSet[POSetColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___poset_cache].val = p0; /* _poset_cache on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#poset_cache= for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetColorer__poset_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetColorer#poset_cache= (self,p0) on <self:Object(POSetColorer[Object])> */
/* Covariant cast for argument 0 (poset_cache) <p0:POSet[Object]> isa POSet[POSetColorer#0] */
/* <p0:POSet[Object]> isa POSet[POSetColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___poset_cache].val = p0; /* _poset_cache on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#conflicts for (self: POSetColorer[Object]): Map[Object, Set[Object]] */
val* coloring__POSetColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Map[Object, Set[Object]] */;
val* var6 /* : Map[Object, Set[Object]] */;
{
{ /* Inline coloring#POSetColorer#is_colored (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___is_colored].s; /* _is_colored on <self:POSetColorer[Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 184);
show_backtrace(1);
}
{
{ /* Inline coloring#POSetColorer#conflicts_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 187);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts for (self: Object): Map[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = coloring__POSetColorer__conflicts(self);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts_cache for (self: POSetColorer[Object]): Map[Object, Set[Object]] */
val* coloring__POSetColorer__conflicts_cache(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 187);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts_cache for (self: Object): Map[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetColorer__conflicts_cache(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
val* var3 /* : Map[Object, Set[Object]] */;
{ /* Inline coloring#POSetColorer#conflicts_cache (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val; /* _conflicts_cache on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 187);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#conflicts_cache= for (self: POSetColorer[Object], Map[Object, Set[Object]]) */
void coloring__POSetColorer__conflicts_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (conflicts_cache) <p0:Map[Object, Set[Object]]> isa Map[POSetColorer#0, Set[POSetColorer#0]] */
/* <p0:Map[Object, Set[Object]]> isa Map[POSetColorer#0, Set[POSetColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetColorer_FT0abstract_collection__Setcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetColorer#0, Set[POSetColorer#0]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 187);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val = p0; /* _conflicts_cache on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#conflicts_cache= for (self: Object, Map[Object, Set[Object]]) */
void VIRTUAL_coloring__POSetColorer__conflicts_cache_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetColorer#conflicts_cache= (self,p0) on <self:Object(POSetColorer[Object])> */
/* Covariant cast for argument 0 (conflicts_cache) <p0:Map[Object, Set[Object]]> isa Map[POSetColorer#0, Set[POSetColorer#0]] */
/* <p0:Map[Object, Set[Object]]> isa Map[POSetColorer#0, Set[POSetColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetColorer_FT0abstract_collection__Setcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetColorer#0, Set[POSetColorer#0]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 187);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val = p0; /* _conflicts_cache on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#graph for (self: POSetColorer[Object]): POSetConflictGraph[Object] */
val* coloring__POSetColorer__graph(val* self) {
val* var /* : POSetConflictGraph[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
var1 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#graph for (self: Object): POSetConflictGraph[Object] */
val* VIRTUAL_coloring__POSetColorer__graph(val* self) {
val* var /* : POSetConflictGraph[Object] */;
val* var1 /* : POSetConflictGraph[Object] */;
val* var3 /* : POSetConflictGraph[Object] */;
{ /* Inline coloring#POSetColorer#graph (self) on <self:Object(POSetColorer[Object])> */
var3 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:Object(POSetColorer[Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#graph= for (self: POSetColorer[Object], POSetConflictGraph[Object]) */
void coloring__POSetColorer__graph_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (graph) <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[POSetColorer#0] */
/* <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[POSetColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph[POSetColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___graph].val = p0; /* _graph on <self:POSetColorer[Object]> */
RET_LABEL:;
}
/* method coloring#POSetColorer#graph= for (self: Object, POSetConflictGraph[Object]) */
void VIRTUAL_coloring__POSetColorer__graph_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetColorer#graph= (self,p0) on <self:Object(POSetColorer[Object])> */
/* Covariant cast for argument 0 (graph) <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[POSetColorer#0] */
/* <p0:POSetConflictGraph[Object]> isa POSetConflictGraph[POSetColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph[POSetColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___graph].val = p0; /* _graph on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#init for (self: POSetColorer[Object]) */
void coloring__POSetColorer__init(val* self) {
RET_LABEL:;
}
/* method coloring#POSetColorer#init for (self: Object) */
void VIRTUAL_coloring__POSetColorer__init(val* self) {
{ /* Inline coloring#POSetColorer#init (self) on <self:Object(POSetColorer[Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize for (self: POSetColorer[Object], POSet[Object]) */
void coloring__POSetColorer__colorize(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_poset /* var poset: POSet[Object] */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var7 /* : POSetConflictGraph[Object] */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
const char* var_class_name13;
val* var14 /* : POSetConflictGraph[Object] */;
val* var16 /* : POSetConflictGraph[Object] */;
val* var17 /* : HashMap[Object, Set[Object]] */;
val* var19 /* : HashMap[Object, Set[Object]] */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct24;
const char* var_class_name25;
short int var26 /* : Bool */;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetColorer#0] */
/* <p0:POSet[Object]> isa POSet[POSetColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 193);
show_backtrace(1);
}
var_poset = p0;
{
{ /* Inline coloring#POSetColorer#poset_cache= (self,var_poset) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (poset_cache) <var_poset:POSet[Object]> isa POSet[POSetColorer#0] */
/* <var_poset:POSet[Object]> isa POSet[POSetColorer#0] */
type_struct5 = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetColorer_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= var_poset->type->table_size) {
var2 = 0;
} else {
var2 = var_poset->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = var_poset == NULL ? "null" : var_poset->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetColorer#0]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___poset_cache].val = var_poset; /* _poset_cache on <self:POSetColorer[Object]> */
RET_LABEL1:(void)0;
}
}
var7 = NEW_coloring__POSetConflictGraph(self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0]);
{
coloring__POSetConflictGraph__init(var7, var_poset); /* Direct call coloring#POSetConflictGraph#init on <var7:POSetConflictGraph[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph= (self,var7) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (graph) <var7:POSetConflictGraph[Object]> isa POSetConflictGraph[POSetColorer#0] */
/* <var7:POSetConflictGraph[Object]> isa POSetConflictGraph[POSetColorer#0] */
type_struct12 = self->type->resolution_table->types[COLOR_coloring__POSetConflictGraphcoloring__POSetColorer_FT0];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
if(cltype10 >= var7->type->table_size) {
var9 = 0;
} else {
var9 = var7->type->type_table[cltype10] == idtype11;
}
if (unlikely(!var9)) {
var_class_name13 = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetConflictGraph[POSetColorer#0]", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___graph].val = var7; /* _graph on <self:POSetColorer[Object]> */
RET_LABEL8:(void)0;
}
}
{
coloring__POSetColorer__allocate_ids(self); /* Direct call coloring#POSetColorer#allocate_ids on <self:POSetColorer[Object]>*/
}
{
coloring__POSetColorer__compute_colors(self); /* Direct call coloring#POSetColorer#compute_colors on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var16 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (var14) on <var14:POSetConflictGraph[Object]> */
var19 = var14->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <var14:POSetConflictGraph[Object]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#conflicts_cache= (self,var17) on <self:POSetColorer[Object]> */
/* Covariant cast for argument 0 (conflicts_cache) <var17:HashMap[Object, Set[Object]]> isa Map[POSetColorer#0, Set[POSetColorer#0]] */
/* <var17:HashMap[Object, Set[Object]]> isa Map[POSetColorer#0, Set[POSetColorer#0]] */
type_struct24 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetColorer_FT0abstract_collection__Setcoloring__POSetColorer_FT0];
cltype22 = type_struct24->color;
idtype23 = type_struct24->id;
if(cltype22 >= var17->type->table_size) {
var21 = 0;
} else {
var21 = var17->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name25 = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetColorer#0, Set[POSetColorer#0]]", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 187);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetColorer___conflicts_cache].val = var17; /* _conflicts_cache on <self:POSetColorer[Object]> */
RET_LABEL20:(void)0;
}
}
var26 = 1;
{
{ /* Inline coloring#POSetColorer#is_colored= (self,var26) on <self:POSetColorer[Object]> */
self->attrs[COLOR_coloring__POSetColorer___is_colored].s = var26; /* _is_colored on <self:POSetColorer[Object]> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetColorer__colorize(val* self, val* p0) {
coloring__POSetColorer__colorize(self, p0); /* Direct call coloring#POSetColorer#colorize on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#allocate_ids for (self: POSetColorer[Object]) */
void coloring__POSetColorer__allocate_ids(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : HashSet[Object] */;
val* var4 /* : POSet[Object] */;
val* var6 /* : POSet[Object] */;
val* var7 /* : Array[nullable Object] */;
val* var_elements /* var elements: HashSet[Object] */;
val* var8 /* : POSet[Object] */;
val* var10 /* : POSet[Object] */;
val* var11 /* : Array[Object] */;
val* var12 /* : ArrayIterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var15 /* : HashMap[Object, Int] */;
val* var17 /* : HashMap[Object, Int] */;
val* var18 /* : HashMap[Object, Int] */;
val* var20 /* : HashMap[Object, Int] */;
long var21 /* : Int */;
val* var22 /* : nullable Object */;
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 165);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Int]>*/
}
var3 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__POSetColorer_FT0]);
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var6 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = array__Collection__to_a(var4);
}
{
hash_collection__HashSet__from(var3, var7); /* Direct call hash_collection#HashSet#from on <var3:HashSet[Object]>*/
}
var_elements = var3;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var10 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = poset__POSet__linearize(var8, var_elements);
}
{
var12 = array__AbstractArrayRead__iterator(var11);
}
for(;;) {
{
var13 = array__ArrayIterator__is_ok(var12);
}
if(!var13) break;
{
var14 = array__ArrayIterator__item(var12);
}
var_e = var14;
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var17 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 165);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#ids_cache (self) on <self:POSetColorer[Object]> */
var20 = self->attrs[COLOR_coloring__POSetColorer___ids_cache].val; /* _ids_cache on <self:POSetColorer[Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ids_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 165);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = hash_collection__HashMap__length(var18);
}
{
var22 = BOX_kernel__Int(var21); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var15, var_e, var22); /* Direct call hash_collection#HashMap#[]= on <var15:HashMap[Object, Int]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var12); /* Direct call array#ArrayIterator#next on <var12:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method coloring#POSetColorer#allocate_ids for (self: Object) */
void VIRTUAL_coloring__POSetColorer__allocate_ids(val* self) {
coloring__POSetColorer__allocate_ids(self); /* Direct call coloring#POSetColorer#allocate_ids on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#compute_colors for (self: POSetColorer[Object]) */
void coloring__POSetColorer__compute_colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var6 /* : HashSet[Object] */;
val* var8 /* : HashSet[Object] */;
val* var9 /* : POSetConflictGraph[Object] */;
val* var11 /* : POSetConflictGraph[Object] */;
val* var12 /* : HashSet[Object] */;
val* var14 /* : HashSet[Object] */;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap__clear(var); /* Direct call hash_collection#HashMap#clear on <var:HashMap[Object, Int]>*/
}
{
coloring__POSetColorer__colorize_core(self); /* Direct call coloring#POSetColorer#colorize_core on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var5 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#border (var3) on <var3:POSetConflictGraph[Object]> */
var8 = var3->attrs[COLOR_coloring__POSetConflictGraph___border].val; /* _border on <var3:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _border");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 28);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
coloring__POSetColorer__colorize_set(self, var6); /* Direct call coloring#POSetColorer#colorize_set on <self:POSetColorer[Object]>*/
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var11 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#crown (var9) on <var9:POSetConflictGraph[Object]> */
var14 = var9->attrs[COLOR_coloring__POSetConflictGraph___crown].val; /* _crown on <var9:POSetConflictGraph[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _crown");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 34);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
coloring__POSetColorer__colorize_set(self, var12); /* Direct call coloring#POSetColorer#colorize_set on <self:POSetColorer[Object]>*/
}
RET_LABEL:;
}
/* method coloring#POSetColorer#compute_colors for (self: Object) */
void VIRTUAL_coloring__POSetColorer__compute_colors(val* self) {
coloring__POSetColorer__compute_colors(self); /* Direct call coloring#POSetColorer#compute_colors on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_core for (self: POSetColorer[Object]) */
void coloring__POSetColorer__colorize_core(val* self) {
val* var /* : POSet[Object] */;
val* var2 /* : POSet[Object] */;
val* var3 /* : POSetConflictGraph[Object] */;
val* var5 /* : POSetConflictGraph[Object] */;
val* var6 /* : HashSet[Object] */;
val* var8 /* : HashSet[Object] */;
val* var9 /* : Array[Object] */;
val* var10 /* : ArrayIterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_e /* var e: Object */;
long var13 /* : Int */;
long var_color /* var color: Int */;
val* var14 /* : POSetConflictGraph[Object] */;
val* var16 /* : POSetConflictGraph[Object] */;
val* var17 /* : HashMap[Object, Set[Object]] */;
val* var19 /* : HashMap[Object, Set[Object]] */;
val* var20 /* : nullable Object */;
val* var_conflicts /* var conflicts: Set[Object] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var27 /* : Int */;
val* var28 /* : HashMap[Object, Int] */;
val* var30 /* : HashMap[Object, Int] */;
val* var31 /* : nullable Object */;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var2 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var5 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#core (var3) on <var3:POSetConflictGraph[Object]> */
var8 = var3->attrs[COLOR_coloring__POSetConflictGraph___core].val; /* _core on <var3:POSetConflictGraph[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 22);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = poset__POSet__linearize(var, var6);
}
{
var10 = array__AbstractArrayRead__iterator(var9);
}
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var10);
}
if(!var11) break;
{
var12 = array__ArrayIterator__item(var10);
}
var_e = var12;
{
var13 = coloring__POSetColorer__min_color(self, var_e);
}
var_color = var13;
{
{ /* Inline coloring#POSetColorer#graph (self) on <self:POSetColorer[Object]> */
var16 = self->attrs[COLOR_coloring__POSetColorer___graph].val; /* _graph on <self:POSetColorer[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _graph");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 189);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline coloring#POSetConflictGraph#conflicts (var14) on <var14:POSetConflictGraph[Object]> */
var19 = var14->attrs[COLOR_coloring__POSetConflictGraph___conflicts].val; /* _conflicts on <var14:POSetConflictGraph[Object]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 40);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = hash_collection__HashMap___91d_93d(var17, var_e);
}
var_conflicts = var20;
for(;;) {
{
var21 = coloring__POSetColorer__is_color_free(self, var_color, var_conflicts);
}
var22 = !var21;
if (!var22) break;
var23 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var23) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var27 = var_color + var23;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_color = var24;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var30 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var28, var_e, var31); /* Direct call hash_collection#HashMap#[]= on <var28:HashMap[Object, Int]>*/
}
CONTINUE_label32: (void)0;
{
array__ArrayIterator__next(var10); /* Direct call array#ArrayIterator#next on <var10:ArrayIterator[nullable Object]>*/
}
}
BREAK_label32: (void)0;
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_core for (self: Object) */
void VIRTUAL_coloring__POSetColorer__colorize_core(val* self) {
coloring__POSetColorer__colorize_core(self); /* Direct call coloring#POSetColorer#colorize_core on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_set for (self: POSetColorer[Object], Set[Object]) */
void coloring__POSetColorer__colorize_set(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_set /* var set: Set[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
val* var4 /* : Array[Object] */;
val* var5 /* : ArrayIterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: Object */;
val* var8 /* : HashMap[Object, Int] */;
val* var10 /* : HashMap[Object, Int] */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
/* Covariant cast for argument 0 (set) <p0:Set[Object]> isa Set[POSetColorer#0] */
/* <p0:Set[Object]> isa Set[POSetColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Setcoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[POSetColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 233);
show_backtrace(1);
}
var_set = p0;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var3 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = poset__POSet__linearize(var1, var_set);
}
{
var5 = array__AbstractArrayRead__iterator(var4);
}
for(;;) {
{
var6 = array__ArrayIterator__is_ok(var5);
}
if(!var6) break;
{
var7 = array__ArrayIterator__item(var5);
}
var_e = var7;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var10 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = coloring__POSetColorer__min_color(self, var_e);
}
{
var12 = BOX_kernel__Int(var11); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var8, var_e, var12); /* Direct call hash_collection#HashMap#[]= on <var8:HashMap[Object, Int]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var5); /* Direct call array#ArrayIterator#next on <var5:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method coloring#POSetColorer#colorize_set for (self: Object, Set[Object]) */
void VIRTUAL_coloring__POSetColorer__colorize_set(val* self, val* p0) {
coloring__POSetColorer__colorize_set(self, p0); /* Direct call coloring#POSetColorer#colorize_set on <self:Object(POSetColorer[Object])>*/
RET_LABEL:;
}
/* method coloring#POSetColorer#min_color for (self: POSetColorer[Object], Object): Int */
long coloring__POSetColorer__min_color(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_max_color /* var max_color: Int */;
val* var6 /* : POSet[Object] */;
val* var8 /* : POSet[Object] */;
val* var9 /* : POSetElement[Object] */;
val* var10 /* : Collection[Object] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_p /* var p: Object */;
val* var14 /* : HashMap[Object, Int] */;
val* var16 /* : HashMap[Object, Int] */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : HashMap[Object, Int] */;
val* var21 /* : HashMap[Object, Int] */;
val* var22 /* : nullable Object */;
long var23 /* : Int */;
long var_color /* var color: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:Object> isa POSetColorer#0 */
/* <p0:Object> isa POSetColorer#0 */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetColorer#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 238);
show_backtrace(1);
}
var_e = p0;
var2 = 1;
{
{ /* Inline kernel#Int#unary - (var2) on <var2:Int> */
var5 = -var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_max_color = var3;
{
{ /* Inline coloring#POSetColorer#poset_cache (self) on <self:POSetColorer[Object]> */
var8 = self->attrs[COLOR_coloring__POSetColorer___poset_cache].val; /* _poset_cache on <self:POSetColorer[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 180);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = poset__POSet___91d_93d(var6, var_e);
}
{
var10 = poset__POSetElement__direct_greaters(var9);
}
{
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Collection[Object]>*/;
}
for(;;) {
{
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
}
if(!var12) break;
{
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
}
var_p = var13;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var16 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = abstract_collection__MapRead__has_key(var14, var_p);
}
var18 = !var17;
if (var18){
goto CONTINUE_label;
} else {
}
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var21 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = hash_collection__HashMap___91d_93d(var19, var_p);
}
var23 = ((struct instance_kernel__Int*)var22)->value; /* autounbox from nullable Object to Int */;
var_color = var23;
{
{ /* Inline kernel#Int#> (var_color,var_max_color) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_max_color:Int> isa OTHER */
/* <var_max_color:Int> isa OTHER */
var26 = 1; /* easy <var_max_color:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var30 = var_color > var_max_color;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var_max_color = var_color;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var31 = 1;
{
{ /* Inline kernel#Int#+ (var_max_color,var31) on <var_max_color:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var38 = var_max_color + var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#min_color for (self: Object, Object): Int */
long VIRTUAL_coloring__POSetColorer__min_color(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = coloring__POSetColorer__min_color(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_color_free for (self: POSetColorer[Object], Int, Collection[Object]): Bool */
short int coloring__POSetColorer__is_color_free(val* self, long p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var_color /* var color: Int */;
val* var_set /* var set: Collection[Object] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: Object */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[Object, Int] */;
val* var8 /* : HashMap[Object, Int] */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : HashMap[Object, Int] */;
val* var12 /* : HashMap[Object, Int] */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
/* Covariant cast for argument 1 (set) <p1:Collection[Object]> isa Collection[POSetColorer#0] */
/* <p1:Collection[Object]> isa Collection[POSetColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectioncoloring__POSetColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[POSetColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 249);
show_backtrace(1);
}
var_color = p0;
var_set = p1;
{
var2 = ((val* (*)(val*))(var_set->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_set) /* iterator on <var_set:Collection[Object]>*/;
}
for(;;) {
{
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
}
if(!var3) break;
{
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
}
var_e = var4;
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var8 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_collection__MapRead__has_key(var6, var_e);
}
var_ = var9;
if (var9){
{
{ /* Inline coloring#POSetColorer#colors_cache (self) on <self:POSetColorer[Object]> */
var12 = self->attrs[COLOR_coloring__POSetColorer___colors_cache].val; /* _colors_cache on <self:POSetColorer[Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors_cache");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 173);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = hash_collection__HashMap___91d_93d(var10, var_e);
}
{
{ /* Inline kernel#Int#== (var13,var_color) on <var13:nullable Object(Int)> */
var17 = (var13 != NULL) && (var13->class == &class_kernel__Int);
if (var17) {
var18 = ((struct instance_kernel__Int*)var13)->value; /* autounbox from nullable Object to Int */;
var17 = (var18 == var_color);
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var5 = var14;
} else {
var5 = var_;
}
if (var5){
var19 = 0;
var = var19;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var20 = 1;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetColorer#is_color_free for (self: Object, Int, Collection[Object]): Bool */
short int VIRTUAL_coloring__POSetColorer__is_color_free(val* self, long p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__POSetColorer__is_color_free(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colors for (self: BucketsColorer[Object, Object]): HashMap[Object, Int] */
val* coloring__BucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 281);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colors for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__BucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#BucketsColorer#colors (self) on <self:Object(BucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:Object(BucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 281);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#conflicts for (self: BucketsColorer[Object, Object]): HashMap[Object, Set[Object]] */
val* coloring__BucketsColorer__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#conflicts for (self: Object): HashMap[Object, Set[Object]] */
val* VIRTUAL_coloring__BucketsColorer__conflicts(val* self) {
val* var /* : HashMap[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:Object(BucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:Object(BucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#init for (self: BucketsColorer[Object, Object]) */
void coloring__BucketsColorer__init(val* self) {
RET_LABEL:;
}
/* method coloring#BucketsColorer#init for (self: Object) */
void VIRTUAL_coloring__BucketsColorer__init(val* self) {
{ /* Inline coloring#BucketsColorer#init (self) on <self:Object(BucketsColorer[Object, Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#BucketsColorer#colorize for (self: BucketsColorer[Object, Object], Map[Object, Set[Object]]): Map[Object, Int] */
val* coloring__BucketsColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
long var2 /* : Int */;
long var_min_color /* var min_color: Int */;
val* var3 /* : MapIterator[Object, nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : Object */;
val* var_holder /* var holder: Object */;
val* var6 /* : nullable Object */;
val* var_hbuckets /* var hbuckets: Set[Object] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var10 /* : HashMap[Object, Int] */;
val* var12 /* : HashMap[Object, Int] */;
short int var13 /* : Bool */;
long var_color /* var color: Int */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
val* var25 /* : HashMap[Object, Int] */;
val* var27 /* : HashMap[Object, Int] */;
val* var28 /* : nullable Object */;
val* var30 /* : HashMap[Object, Int] */;
val* var32 /* : HashMap[Object, Int] */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[BucketsColorer#0, Set[BucketsColorer#1]] */
/* <p0:Map[Object, Set[Object]]> isa Map[BucketsColorer#0, Set[BucketsColorer#1]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__BucketsColorer_FT0abstract_collection__Setcoloring__BucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[BucketsColorer#0, Set[BucketsColorer#1]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 286);
show_backtrace(1);
}
var_buckets = p0;
{
coloring__BucketsColorer__compute_conflicts(self, var_buckets); /* Direct call coloring#BucketsColorer#compute_conflicts on <self:BucketsColorer[Object, Object]>*/
}
var2 = 0;
var_min_color = var2;
{
var3 = ((val* (*)(val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_buckets) /* iterator on <var_buckets:Map[Object, Set[Object]]>*/;
}
for(;;) {
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var3) /* is_ok on <var3:MapIterator[Object, nullable Object]>*/;
}
if(!var4) break;
{
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__key]))(var3) /* key on <var3:MapIterator[Object, nullable Object]>*/;
}
var_holder = var5;
{
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__item]))(var3) /* item on <var3:MapIterator[Object, nullable Object]>*/;
}
var_hbuckets = var6;
{
var7 = ((val* (*)(val*))(var_hbuckets->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_hbuckets) /* iterator on <var_hbuckets:Set[Object]>*/;
}
for(;;) {
{
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
}
if(!var8) break;
{
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
}
var_bucket = var9;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var12 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 281);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = abstract_collection__MapRead__has_key(var10, var_bucket);
}
if (var13){
goto CONTINUE_label;
} else {
}
var_color = var_min_color;
for(;;) {
{
var14 = coloring__BucketsColorer__is_color_free(self, var_bucket, var_color);
}
var15 = !var14;
if (!var15) break;
var16 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var16) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var23 = var_color + var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_color = var17;
CONTINUE_label24: (void)0;
}
BREAK_label24: (void)0;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var27 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 281);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var25, var_bucket, var28); /* Direct call hash_collection#HashMap#[]= on <var25:HashMap[Object, Int]>*/
}
var_color = var_min_color;
CONTINUE_label: (void)0;
{
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label29: (void)0;
{
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__MapIterator__next]))(var3) /* next on <var3:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label29: (void)0;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var32 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 281);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#colorize for (self: Object, Map[Object, Set[Object]]): Map[Object, Int] */
val* VIRTUAL_coloring__BucketsColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__BucketsColorer__colorize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#is_color_free for (self: BucketsColorer[Object, Object], Object, Int): Bool */
short int coloring__BucketsColorer__is_color_free(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_bucket /* var bucket: Object */;
long var_color /* var color: Int */;
val* var2 /* : HashMap[Object, Set[Object]] */;
val* var4 /* : HashMap[Object, Set[Object]] */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[Object, Set[Object]] */;
val* var8 /* : HashMap[Object, Set[Object]] */;
val* var9 /* : nullable Object */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_other /* var other: Object */;
short int var13 /* : Bool */;
val* var14 /* : HashMap[Object, Int] */;
val* var16 /* : HashMap[Object, Int] */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : HashMap[Object, Int] */;
val* var20 /* : HashMap[Object, Int] */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
/* Covariant cast for argument 0 (bucket) <p0:Object> isa BucketsColorer#1 */
/* <p0:Object> isa BucketsColorer#1 */
type_struct = self->type->resolution_table->types[COLOR_coloring__BucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "BucketsColorer#1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 304);
show_backtrace(1);
}
var_bucket = p0;
var_color = p1;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var4 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = abstract_collection__MapRead__has_key(var2, var_bucket);
}
if (var5){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var8 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = hash_collection__HashMap___91d_93d(var6, var_bucket);
}
{
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:nullable Object(Set[Object])>*/;
}
for(;;) {
{
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
}
if(!var11) break;
{
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
}
var_other = var12;
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var16 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 281);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = abstract_collection__MapRead__has_key(var14, var_other);
}
var_ = var17;
if (var17){
{
{ /* Inline coloring#BucketsColorer#colors (self) on <self:BucketsColorer[Object, Object]> */
var20 = self->attrs[COLOR_coloring__BucketsColorer___colors].val; /* _colors on <self:BucketsColorer[Object, Object]> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 281);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = hash_collection__HashMap___91d_93d(var18, var_other);
}
{
{ /* Inline kernel#Int#== (var21,var_color) on <var21:nullable Object(Int)> */
var25 = (var21 != NULL) && (var21->class == &class_kernel__Int);
if (var25) {
var26 = ((struct instance_kernel__Int*)var21)->value; /* autounbox from nullable Object to Int */;
var25 = (var26 == var_color);
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
var13 = var22;
} else {
var13 = var_;
}
if (var13){
var27 = 0;
var = var27;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
} else {
}
var28 = 1;
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#is_color_free for (self: Object, Object, Int): Bool */
short int VIRTUAL_coloring__BucketsColorer__is_color_free(val* self, val* p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__BucketsColorer__is_color_free(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#BucketsColorer#compute_conflicts for (self: BucketsColorer[Object, Object], Map[Object, Set[Object]]) */
void coloring__BucketsColorer__compute_conflicts(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
val* var4 /* : MapIterator[Object, nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : Object */;
val* var_holder /* var holder: Object */;
val* var7 /* : nullable Object */;
val* var_hbuckets /* var hbuckets: Set[Object] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var11 /* : HashMap[Object, Set[Object]] */;
val* var13 /* : HashMap[Object, Set[Object]] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[Object, Set[Object]] */;
val* var18 /* : HashMap[Object, Set[Object]] */;
val* var19 /* : HashSet[Object] */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_obucket /* var obucket: Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : HashMap[Object, Set[Object]] */;
val* var27 /* : HashMap[Object, Set[Object]] */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : HashMap[Object, Set[Object]] */;
val* var32 /* : HashMap[Object, Set[Object]] */;
val* var33 /* : HashSet[Object] */;
val* var34 /* : HashMap[Object, Set[Object]] */;
val* var36 /* : HashMap[Object, Set[Object]] */;
val* var37 /* : nullable Object */;
val* var38 /* : HashMap[Object, Set[Object]] */;
val* var40 /* : HashMap[Object, Set[Object]] */;
val* var41 /* : nullable Object */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[BucketsColorer#0, Set[BucketsColorer#1]] */
/* <p0:Map[Object, Set[Object]]> isa Map[BucketsColorer#0, Set[BucketsColorer#1]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__BucketsColorer_FT0abstract_collection__Setcoloring__BucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[BucketsColorer#0, Set[BucketsColorer#1]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 313);
show_backtrace(1);
}
var_buckets = p0;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var3 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
hash_collection__HashMap__clear(var1); /* Direct call hash_collection#HashMap#clear on <var1:HashMap[Object, Set[Object]]>*/
}
{
var4 = ((val* (*)(val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var_buckets) /* iterator on <var_buckets:Map[Object, Set[Object]]>*/;
}
for(;;) {
{
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__is_ok]))(var4) /* is_ok on <var4:MapIterator[Object, nullable Object]>*/;
}
if(!var5) break;
{
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__key]))(var4) /* key on <var4:MapIterator[Object, nullable Object]>*/;
}
var_holder = var6;
{
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__item]))(var4) /* item on <var4:MapIterator[Object, nullable Object]>*/;
}
var_hbuckets = var7;
{
var8 = ((val* (*)(val*))(var_hbuckets->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_hbuckets) /* iterator on <var_hbuckets:Set[Object]>*/;
}
for(;;) {
{
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
}
if(!var9) break;
{
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
}
var_bucket = var10;
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var13 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = abstract_collection__MapRead__has_key(var11, var_bucket);
}
var15 = !var14;
if (var15){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var18 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__BucketsColorer_FT1]);
{
hash_collection__HashSet__init(var19); /* Direct call hash_collection#HashSet#init on <var19:HashSet[Object]>*/
}
{
hash_collection__HashMap___91d_93d_61d(var16, var_bucket, var19); /* Direct call hash_collection#HashMap#[]= on <var16:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
var20 = ((val* (*)(val*))(var_hbuckets->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_hbuckets) /* iterator on <var_hbuckets:Set[Object]>*/;
}
for(;;) {
{
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
}
if(!var21) break;
{
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
}
var_obucket = var22;
{
var24 = ((short int (*)(val*, val*))(var_obucket->class->vft[COLOR_kernel__Object___61d_61d]))(var_obucket, var_bucket) /* == on <var_obucket:Object>*/;
var23 = var24;
}
if (var23){
goto CONTINUE_label;
} else {
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var27 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = abstract_collection__MapRead__has_key(var25, var_obucket);
}
var29 = !var28;
if (var29){
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var32 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var33 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetcoloring__BucketsColorer_FT1]);
{
hash_collection__HashSet__init(var33); /* Direct call hash_collection#HashSet#init on <var33:HashSet[Object]>*/
}
{
hash_collection__HashMap___91d_93d_61d(var30, var_obucket, var33); /* Direct call hash_collection#HashMap#[]= on <var30:HashMap[Object, Set[Object]]>*/
}
} else {
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var36 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = hash_collection__HashMap___91d_93d(var34, var_bucket);
}
{
((void (*)(val*, val*))(var37->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var37, var_obucket) /* add on <var37:nullable Object(Set[Object])>*/;
}
{
{ /* Inline coloring#BucketsColorer#conflicts (self) on <self:BucketsColorer[Object, Object]> */
var40 = self->attrs[COLOR_coloring__BucketsColorer___conflicts].val; /* _conflicts on <self:BucketsColorer[Object, Object]> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 282);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = hash_collection__HashMap___91d_93d(var38, var_obucket);
}
{
((void (*)(val*, val*))(var41->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var41, var_bucket) /* add on <var41:nullable Object(Set[Object])>*/;
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label42: (void)0;
{
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
}
BREAK_label42: (void)0;
CONTINUE_label43: (void)0;
{
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__MapIterator__next]))(var4) /* next on <var4:MapIterator[Object, nullable Object]>*/;
}
}
BREAK_label43: (void)0;
RET_LABEL:;
}
/* method coloring#BucketsColorer#compute_conflicts for (self: Object, Map[Object, Set[Object]]) */
void VIRTUAL_coloring__BucketsColorer__compute_conflicts(val* self, val* p0) {
coloring__BucketsColorer__compute_conflicts(self, p0); /* Direct call coloring#BucketsColorer#compute_conflicts on <self:Object(BucketsColorer[Object, Object])>*/
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#colors for (self: POSetBucketsColorer[Object, Object]): HashMap[Object, Int] */
val* coloring__POSetBucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
var1 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#colors for (self: Object): HashMap[Object, Int] */
val* VIRTUAL_coloring__POSetBucketsColorer__colors(val* self) {
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
val* var3 /* : HashMap[Object, Int] */;
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:Object(POSetBucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:Object(POSetBucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset for (self: POSetBucketsColorer[Object, Object]): POSet[Object] */
val* coloring__POSetBucketsColorer__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
var1 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 335);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset for (self: Object): POSet[Object] */
val* VIRTUAL_coloring__POSetBucketsColorer__poset(val* self) {
val* var /* : POSet[Object] */;
val* var1 /* : POSet[Object] */;
val* var3 /* : POSet[Object] */;
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:Object(POSetBucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:Object(POSetBucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 335);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#poset= for (self: POSetBucketsColorer[Object, Object], POSet[Object]) */
void coloring__POSetBucketsColorer__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
/* <p0:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetBucketsColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 335);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val = p0; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#poset= for (self: Object, POSet[Object]) */
void VIRTUAL_coloring__POSetBucketsColorer__poset_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetBucketsColorer#poset= (self,p0) on <self:Object(POSetBucketsColorer[Object, Object])> */
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
/* <p0:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetBucketsColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 335);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val = p0; /* _poset on <self:Object(POSetBucketsColorer[Object, Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#conflicts for (self: POSetBucketsColorer[Object, Object]): Map[Object, Set[Object]] */
val* coloring__POSetBucketsColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
var1 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 336);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#conflicts for (self: Object): Map[Object, Set[Object]] */
val* VIRTUAL_coloring__POSetBucketsColorer__conflicts(val* self) {
val* var /* : Map[Object, Set[Object]] */;
val* var1 /* : Map[Object, Set[Object]] */;
val* var3 /* : Map[Object, Set[Object]] */;
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:Object(POSetBucketsColorer[Object, Object])> */
var3 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:Object(POSetBucketsColorer[Object, Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 336);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#conflicts= for (self: POSetBucketsColorer[Object, Object], Map[Object, Set[Object]]) */
void coloring__POSetBucketsColorer__conflicts_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (conflicts) <p0:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
/* <p0:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 336);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val = p0; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#conflicts= for (self: Object, Map[Object, Set[Object]]) */
void VIRTUAL_coloring__POSetBucketsColorer__conflicts_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline coloring#POSetBucketsColorer#conflicts= (self,p0) on <self:Object(POSetBucketsColorer[Object, Object])> */
/* Covariant cast for argument 0 (conflicts) <p0:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
/* <p0:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 336);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val = p0; /* _conflicts on <self:Object(POSetBucketsColorer[Object, Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#init for (self: POSetBucketsColorer[Object, Object], POSet[Object], Map[Object, Set[Object]]) */
void coloring__POSetBucketsColorer__init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_poset /* var poset: POSet[Object] */;
val* var_conflicts /* var conflicts: Map[Object, Set[Object]] */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const struct type* type_struct16;
const char* var_class_name17;
/* Covariant cast for argument 0 (poset) <p0:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
/* <p0:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetBucketsColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 338);
show_backtrace(1);
}
/* Covariant cast for argument 1 (conflicts) <p1:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
/* <p1:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
type_struct4 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]]", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 338);
show_backtrace(1);
}
var_poset = p0;
var_conflicts = p1;
{
{ /* Inline coloring#POSetBucketsColorer#poset= (self,var_poset) on <self:POSetBucketsColorer[Object, Object]> */
/* Covariant cast for argument 0 (poset) <var_poset:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
/* <var_poset:POSet[Object]> isa POSet[POSetBucketsColorer#0] */
type_struct10 = self->type->resolution_table->types[COLOR_poset__POSetcoloring__POSetBucketsColorer_FT0];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= var_poset->type->table_size) {
var7 = 0;
} else {
var7 = var_poset->type->type_table[cltype8] == idtype9;
}
if (unlikely(!var7)) {
var_class_name11 = var_poset == NULL ? "null" : var_poset->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSet[POSetBucketsColorer#0]", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 335);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val = var_poset; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline coloring#POSetBucketsColorer#conflicts= (self,var_conflicts) on <self:POSetBucketsColorer[Object, Object]> */
/* Covariant cast for argument 0 (conflicts) <var_conflicts:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
/* <var_conflicts:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]] */
type_struct16 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT0];
cltype14 = type_struct16->color;
idtype15 = type_struct16->id;
if(cltype14 >= var_conflicts->type->table_size) {
var13 = 0;
} else {
var13 = var_conflicts->type->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
var_class_name17 = var_conflicts == NULL ? "null" : var_conflicts->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#0]]", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 336);
show_backtrace(1);
}
self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val = var_conflicts; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#init for (self: Object, POSet[Object], Map[Object, Set[Object]]) */
void VIRTUAL_coloring__POSetBucketsColorer__init(val* self, val* p0, val* p1) {
coloring__POSetBucketsColorer__init(self, p0, p1); /* Direct call coloring#POSetBucketsColorer#init on <self:Object(POSetBucketsColorer[Object, Object])>*/
RET_LABEL:;
}
/* method coloring#POSetBucketsColorer#colorize for (self: POSetBucketsColorer[Object, Object], Map[Object, Set[Object]]): Map[Object, Int] */
val* coloring__POSetBucketsColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
val* var2 /* : HashMap[Object, Int] */;
val* var4 /* : HashMap[Object, Int] */;
val* var5 /* : POSet[Object] */;
val* var7 /* : POSet[Object] */;
val* var8 /* : Collection[Object] */;
val* var9 /* : Array[Object] */;
val* var10 /* : ArrayIterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_h /* var h: Object */;
val* var13 /* : POSet[Object] */;
val* var15 /* : POSet[Object] */;
val* var16 /* : POSetElement[Object] */;
val* var17 /* : Collection[Object] */;
long var18 /* : Int */;
long var_color /* var color: Int */;
val* var19 /* : nullable Object */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var23 /* : HashMap[Object, Int] */;
val* var25 /* : HashMap[Object, Int] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
val* var38 /* : HashMap[Object, Int] */;
val* var40 /* : HashMap[Object, Int] */;
val* var41 /* : nullable Object */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
val* var51 /* : HashMap[Object, Int] */;
val* var53 /* : HashMap[Object, Int] */;
/* Covariant cast for argument 0 (buckets) <p0:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
/* <p0:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 343);
show_backtrace(1);
}
var_buckets = p0;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var4 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
hash_collection__HashMap__clear(var2); /* Direct call hash_collection#HashMap#clear on <var2:HashMap[Object, Int]>*/
}
{
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:POSetBucketsColorer[Object, Object]> */
var7 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 335);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val* (*)(val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead__keys]))(var_buckets) /* keys on <var_buckets:Map[Object, Set[Object]]>*/;
}
{
var9 = poset__POSet__linearize(var5, var8);
}
{
var10 = array__AbstractArrayRead__iterator(var9);
}
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var10);
}
if(!var11) break;
{
var12 = array__ArrayIterator__item(var10);
}
var_h = var12;
{
{ /* Inline coloring#POSetBucketsColorer#poset (self) on <self:POSetBucketsColorer[Object, Object]> */
var15 = self->attrs[COLOR_coloring__POSetBucketsColorer___poset].val; /* _poset on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _poset");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 335);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = poset__POSet___91d_93d(var13, var_h);
}
{
var17 = poset__POSetElement__direct_greaters(var16);
}
{
var18 = coloring__POSetBucketsColorer__min_color(self, var17, var_buckets);
}
var_color = var18;
{
var19 = ((val* (*)(val*, val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_buckets, var_h) /* [] on <var_buckets:Map[Object, Set[Object]]>*/;
}
{
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__iterator]))(var19) /* iterator on <var19:nullable Object(Set[Object])>*/;
}
for(;;) {
{
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
}
if(!var21) break;
{
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
}
var_bucket = var22;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var25 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = abstract_collection__MapRead__has_key(var23, var_bucket);
}
if (var26){
goto CONTINUE_label;
} else {
}
for(;;) {
{
var27 = coloring__POSetBucketsColorer__is_color_free(self, var_color, var_h, var_buckets);
}
var28 = !var27;
if (!var28) break;
var29 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var29) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var36 = var_color + var29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_color = var30;
CONTINUE_label37: (void)0;
}
BREAK_label37: (void)0;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var40 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = BOX_kernel__Int(var_color); /* autobox from Int to nullable Object */
hash_collection__HashMap___91d_93d_61d(var38, var_bucket, var41); /* Direct call hash_collection#HashMap#[]= on <var38:HashMap[Object, Int]>*/
}
var42 = 1;
{
{ /* Inline kernel#Int#+ (var_color,var42) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var42:Int> isa OTHER */
/* <var42:Int> isa OTHER */
var45 = 1; /* easy <var42:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var49 = var_color + var42;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_color = var43;
CONTINUE_label: (void)0;
{
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label50: (void)0;
{
array__ArrayIterator__next(var10); /* Direct call array#ArrayIterator#next on <var10:ArrayIterator[nullable Object]>*/
}
}
BREAK_label50: (void)0;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var53 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var = var51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#colorize for (self: Object, Map[Object, Set[Object]]): Map[Object, Int] */
val* VIRTUAL_coloring__POSetBucketsColorer__colorize(val* self, val* p0) {
val* var /* : Map[Object, Int] */;
val* var1 /* : Map[Object, Int] */;
var1 = coloring__POSetBucketsColorer__colorize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#min_color for (self: POSetBucketsColorer[Object, Object], Collection[Object], Map[Object, Set[Object]]): Int */
long coloring__POSetBucketsColorer__min_color(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_others /* var others: Collection[Object] */;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var_min /* var min: Int */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_holder /* var holder: Object */;
long var14 /* : Int */;
long var_color /* var color: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
/* Covariant cast for argument 0 (others) <p0:Collection[Object]> isa Collection[POSetBucketsColorer#0] */
/* <p0:Collection[Object]> isa Collection[POSetBucketsColorer#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectioncoloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[POSetBucketsColorer#0]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 358);
show_backtrace(1);
}
/* Covariant cast for argument 1 (buckets) <p1:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
/* <p1:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 358);
show_backtrace(1);
}
var_others = p0;
var_buckets = p1;
var7 = 1;
{
{ /* Inline kernel#Int#unary - (var7) on <var7:Int> */
var10 = -var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_min = var8;
{
var11 = ((val* (*)(val*))(var_others->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_others) /* iterator on <var_others:Collection[Object]>*/;
}
for(;;) {
{
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
}
if(!var12) break;
{
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
}
var_holder = var13;
{
var14 = coloring__POSetBucketsColorer__max_color(self, var_holder, var_buckets);
}
var_color = var14;
{
{ /* Inline kernel#Int#> (var_color,var_min) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var17 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var21 = var_color > var_min;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var_min = var_color;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var22 = 1;
{
{ /* Inline kernel#Int#+ (var_min,var22) on <var_min:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var29 = var_min + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#min_color for (self: Object, Collection[Object], Map[Object, Set[Object]]): Int */
long VIRTUAL_coloring__POSetBucketsColorer__min_color(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = coloring__POSetBucketsColorer__min_color(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#max_color for (self: POSetBucketsColorer[Object, Object], Object, Map[Object, Set[Object]]): Int */
long coloring__POSetBucketsColorer__max_color(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_holder /* var holder: Object */;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var_max /* var max: Int */;
val* var11 /* : nullable Object */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var15 /* : HashMap[Object, Int] */;
val* var17 /* : HashMap[Object, Int] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashMap[Object, Int] */;
val* var22 /* : HashMap[Object, Int] */;
val* var23 /* : nullable Object */;
long var24 /* : Int */;
long var_color /* var color: Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
/* Covariant cast for argument 0 (holder) <p0:Object> isa POSetBucketsColorer#0 */
/* <p0:Object> isa POSetBucketsColorer#0 */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBucketsColorer#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 368);
show_backtrace(1);
}
/* Covariant cast for argument 1 (buckets) <p1:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
/* <p1:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 368);
show_backtrace(1);
}
var_holder = p0;
var_buckets = p1;
var7 = 1;
{
{ /* Inline kernel#Int#unary - (var7) on <var7:Int> */
var10 = -var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_max = var8;
{
var11 = ((val* (*)(val*, val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_buckets, var_holder) /* [] on <var_buckets:Map[Object, Set[Object]]>*/;
}
{
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__iterator]))(var11) /* iterator on <var11:nullable Object(Set[Object])>*/;
}
for(;;) {
{
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
}
if(!var13) break;
{
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
}
var_bucket = var14;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var17 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = abstract_collection__MapRead__has_key(var15, var_bucket);
}
var19 = !var18;
if (var19){
goto CONTINUE_label;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var22 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = hash_collection__HashMap___91d_93d(var20, var_bucket);
}
var24 = ((struct instance_kernel__Int*)var23)->value; /* autounbox from nullable Object to Int */;
var_color = var24;
{
{ /* Inline kernel#Int#> (var_color,var_max) on <var_color:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var27 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var31 = var_color > var_max;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var_max = var_color;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var = var_max;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#max_color for (self: Object, Object, Map[Object, Set[Object]]): Int */
long VIRTUAL_coloring__POSetBucketsColorer__max_color(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = coloring__POSetBucketsColorer__max_color(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#is_color_free for (self: POSetBucketsColorer[Object, Object], Int, Object, Map[Object, Set[Object]]): Bool */
short int coloring__POSetBucketsColorer__is_color_free(val* self, long p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
long var_color /* var color: Int */;
val* var_holder /* var holder: Object */;
val* var_buckets /* var buckets: Map[Object, Set[Object]] */;
val* var7 /* : Map[Object, Set[Object]] */;
val* var9 /* : Map[Object, Set[Object]] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Map[Object, Set[Object]] */;
val* var15 /* : Map[Object, Set[Object]] */;
val* var16 /* : nullable Object */;
val* var17 /* : Iterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_conflict /* var conflict: Object */;
val* var20 /* : nullable Object */;
val* var21 /* : Iterator[nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_bucket /* var bucket: Object */;
val* var24 /* : HashMap[Object, Int] */;
val* var26 /* : HashMap[Object, Int] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : HashMap[Object, Int] */;
val* var31 /* : HashMap[Object, Int] */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
/* Covariant cast for argument 1 (holder) <p1:Object> isa POSetBucketsColorer#0 */
/* <p1:Object> isa POSetBucketsColorer#0 */
type_struct = self->type->resolution_table->types[COLOR_coloring__POSetBucketsColorer_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "POSetBucketsColorer#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 379);
show_backtrace(1);
}
/* Covariant cast for argument 2 (buckets) <p2:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
/* <p2:Map[Object, Set[Object]]> isa Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]] */
type_struct5 = self->type->resolution_table->types[COLOR_abstract_collection__Mapcoloring__POSetBucketsColorer_FT0abstract_collection__Setcoloring__POSetBucketsColorer_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p2->type->table_size) {
var2 = 0;
} else {
var2 = p2->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Map[POSetBucketsColorer#0, Set[POSetBucketsColorer#1]]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 379);
show_backtrace(1);
}
var_color = p0;
var_holder = p1;
var_buckets = p2;
{
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:POSetBucketsColorer[Object, Object]> */
var9 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 336);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = abstract_collection__MapRead__has_key(var7, var_holder);
}
var11 = !var10;
if (var11){
var12 = 1;
var = var12;
goto RET_LABEL;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#conflicts (self) on <self:POSetBucketsColorer[Object, Object]> */
var15 = self->attrs[COLOR_coloring__POSetBucketsColorer___conflicts].val; /* _conflicts on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicts");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 336);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val* (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var13, var_holder) /* [] on <var13:Map[Object, Set[Object]]>*/;
}
{
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__iterator]))(var16) /* iterator on <var16:nullable Object(Set[Object])>*/;
}
for(;;) {
{
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var17) /* is_ok on <var17:Iterator[nullable Object]>*/;
}
if(!var18) break;
{
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__item]))(var17) /* item on <var17:Iterator[nullable Object]>*/;
}
var_conflict = var19;
{
var20 = ((val* (*)(val*, val*))(var_buckets->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_buckets, var_conflict) /* [] on <var_buckets:Map[Object, Set[Object]]>*/;
}
{
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Collection__iterator]))(var20) /* iterator on <var20:nullable Object(Set[Object])>*/;
}
for(;;) {
{
var22 = ((short int (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var21) /* is_ok on <var21:Iterator[nullable Object]>*/;
}
if(!var22) break;
{
var23 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__item]))(var21) /* item on <var21:Iterator[nullable Object]>*/;
}
var_bucket = var23;
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var26 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = abstract_collection__MapRead__has_key(var24, var_bucket);
}
var28 = !var27;
if (var28){
goto CONTINUE_label;
} else {
}
{
{ /* Inline coloring#POSetBucketsColorer#colors (self) on <self:POSetBucketsColorer[Object, Object]> */
var31 = self->attrs[COLOR_coloring__POSetBucketsColorer___colors].val; /* _colors on <self:POSetBucketsColorer[Object, Object]> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _colors");
PRINT_ERROR(" (%s:%d)\n", "src/coloring.nit", 334);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = hash_collection__HashMap___91d_93d(var29, var_bucket);
}
{
{ /* Inline kernel#Int#== (var32,var_color) on <var32:nullable Object(Int)> */
var36 = (var32 != NULL) && (var32->class == &class_kernel__Int);
if (var36) {
var37 = ((struct instance_kernel__Int*)var32)->value; /* autounbox from nullable Object to Int */;
var36 = (var37 == var_color);
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
var38 = 0;
var = var38;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var21->class->vft[COLOR_abstract_collection__Iterator__next]))(var21) /* next on <var21:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
CONTINUE_label39: (void)0;
{
((void (*)(val*))(var17->class->vft[COLOR_abstract_collection__Iterator__next]))(var17) /* next on <var17:Iterator[nullable Object]>*/;
}
}
BREAK_label39: (void)0;
var40 = 1;
var = var40;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method coloring#POSetBucketsColorer#is_color_free for (self: Object, Int, Object, Map[Object, Set[Object]]): Bool */
short int VIRTUAL_coloring__POSetBucketsColorer__is_color_free(val* self, long p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = coloring__POSetBucketsColorer__is_color_free(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
