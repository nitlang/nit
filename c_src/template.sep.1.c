#include "template.sep.0.h"
/* method template#Template#rendering for (self: Template) */
void template___template__Template___rendering(val* self) {
RET_LABEL:;
}
/* method template#Template#add for (self: Template, Writable) */
void template___template__Template___add(val* self, val* p0) {
val* var_element /* var element: Writable */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[Writable] */;
val* var6 /* : Array[Writable] */;
var_element = p0;
{
{ /* Inline template#Template#is_frozen (self) on <self:Template> */
var2 = self->attrs[COLOR_template__Template___is_frozen].s; /* _is_frozen on <self:Template> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 110);
fatal_exit(1);
}
{
{ /* Inline template#Template#content (self) on <self:Template> */
var6 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Template> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 183);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var4, var_element); /* Direct call array#Array#add on <var4:Array[Writable]>*/
}
RET_LABEL:;
}
/* method template#Template#addn for (self: Template, Writable) */
void template___template__Template___addn(val* self, val* p0) {
val* var_element /* var element: Writable */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : FlatString */;
var_element = p0;
{
template___template__Template___add(self, var_element); /* Direct call template#Template#add on <self:Template>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "\n";
var2 = standard___standard__NativeString___to_s_with_length(var1, 1l);
var = var2;
varonce = var;
}
{
template___template__Template___add(self, var); /* Direct call template#Template#add on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#is_frozen for (self: Template): Bool */
short int template___template__Template___is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___is_frozen].s; /* _is_frozen on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_frozen= for (self: Template, Bool) */
void template___template__Template___is_frozen_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___is_frozen].s = p0; /* _is_frozen on <self:Template> */
RET_LABEL:;
}
/* method template#Template#freeze for (self: Template) */
void template___template__Template___freeze(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
{
{ /* Inline template#Template#is_frozen (self) on <self:Template> */
var2 = self->attrs[COLOR_template__Template___is_frozen].s; /* _is_frozen on <self:Template> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline template#Template#is_frozen= (self,1) on <self:Template> */
self->attrs[COLOR_template__Template___is_frozen].s = 1; /* _is_frozen on <self:Template> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method template#Template#content for (self: Template): Array[Writable] */
val* template___template__Template___content(val* self) {
val* var /* : Array[Writable] */;
val* var1 /* : Array[Writable] */;
var1 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Template> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 183);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done for (self: Template): Bool */
short int template___template__Template___render_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___render_done].s; /* _render_done on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done= for (self: Template, Bool) */
void template___template__Template___render_done_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___render_done].s = p0; /* _render_done on <self:Template> */
RET_LABEL:;
}
/* method template#Template#force_render for (self: Template) */
void template___template__Template___force_render(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
{
{ /* Inline template#Template#render_done (self) on <self:Template> */
var2 = self->attrs[COLOR_template__Template___render_done].s; /* _render_done on <self:Template> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline template#Template#render_done= (self,1) on <self:Template> */
self->attrs[COLOR_template__Template___render_done].s = 1; /* _render_done on <self:Template> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self))(self->class->vft[COLOR_template__Template__rendering]))(self); /* rendering on <self:Template>*/
}
{
template___template__Template___freeze(self); /* Direct call template#Template#freeze on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#write_to for (self: Template, Writer) */
void template___template__Template___standard__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var5 /* : Array[Writable] */;
val* var7 /* : Array[Writable] */;
val* var_ /* var : Array[Writable] */;
val* var8 /* : ArrayIterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[Writable] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_e /* var e: Writable */;
var_stream = p0;
{
{ /* Inline template#Template#is_writing (self) on <self:Template> */
var2 = self->attrs[COLOR_template__Template___is_writing].s; /* _is_writing on <self:Template> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 205);
fatal_exit(1);
}
{
{ /* Inline template#Template#is_writing= (self,1) on <self:Template> */
self->attrs[COLOR_template__Template___is_writing].s = 1; /* _is_writing on <self:Template> */
RET_LABEL4:(void)0;
}
}
{
template___template__Template___force_render(self); /* Direct call template#Template#force_render on <self:Template>*/
}
{
{ /* Inline template#Template#content (self) on <self:Template> */
var7 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Template> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_template, 183);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_9);
}
if (var10){
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_9);
}
var_e = var11;
{
((void(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__stream__Writable__write_to]))(var_e, var_stream); /* write_to on <var_e:Writable>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_9); /* Direct call array#ArrayIterator#next on <var_9:ArrayIterator[Writable]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_9); /* Direct call array#ArrayIterator#finish on <var_9:ArrayIterator[Writable]>*/
}
{
{ /* Inline template#Template#is_writing= (self,0) on <self:Template> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:Template> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method template#Template#is_writing for (self: Template): Bool */
short int template___template__Template___is_writing(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___is_writing].s; /* _is_writing on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_writing= for (self: Template, Bool) */
void template___template__Template___is_writing_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___is_writing].s = p0; /* _is_writing on <self:Template> */
RET_LABEL:;
}
