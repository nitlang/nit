#include "template.sep.0.h"
/* method template#Template#add for (self: Template, Streamable) */
void template__Template__add(val* self, val* p0) {
val* var_element /* var element: Streamable */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[Streamable] */;
val* var6 /* : Array[Streamable] */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/template/template.nit", 110);
show_backtrace(1);
}
{
{ /* Inline template#Template#content (self) on <self:Template> */
var6 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Template> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "../lib/template/template.nit", 183);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
array__Array__add(var4, var_element); /* Direct call array#Array#add on <var4:Array[Streamable]>*/
}
RET_LABEL:;
}
/* method template#Template#add for (self: Object, Streamable) */
void VIRTUAL_template__Template__add(val* self, val* p0) {
template__Template__add(self, p0); /* Direct call template#Template#add on <self:Object(Template)>*/
RET_LABEL:;
}
/* method template#Template#addn for (self: Template, Streamable) */
void template__Template__addn(val* self, val* p0) {
val* var_element /* var element: Streamable */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_element = p0;
{
template__Template__add(self, var_element); /* Direct call template#Template#add on <self:Template>*/
}
if (varonce) {
var = varonce;
} else {
var1 = "\n";
var2 = 1;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
template__Template__add(self, var); /* Direct call template#Template#add on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#addn for (self: Object, Streamable) */
void VIRTUAL_template__Template__addn(val* self, val* p0) {
template__Template__addn(self, p0); /* Direct call template#Template#addn on <self:Object(Template)>*/
RET_LABEL:;
}
/* method template#Template#is_frozen for (self: Template): Bool */
short int template__Template__is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___is_frozen].s; /* _is_frozen on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_frozen for (self: Object): Bool */
short int VIRTUAL_template__Template__is_frozen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline template#Template#is_frozen (self) on <self:Object(Template)> */
var3 = self->attrs[COLOR_template__Template___is_frozen].s; /* _is_frozen on <self:Object(Template)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_frozen= for (self: Template, Bool) */
void template__Template__is_frozen_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___is_frozen].s = p0; /* _is_frozen on <self:Template> */
RET_LABEL:;
}
/* method template#Template#is_frozen= for (self: Object, Bool) */
void VIRTUAL_template__Template__is_frozen_61d(val* self, short int p0) {
{ /* Inline template#Template#is_frozen= (self,p0) on <self:Object(Template)> */
self->attrs[COLOR_template__Template___is_frozen].s = p0; /* _is_frozen on <self:Object(Template)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method template#Template#freeze for (self: Template) */
void template__Template__freeze(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
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
var3 = 1;
{
{ /* Inline template#Template#is_frozen= (self,var3) on <self:Template> */
self->attrs[COLOR_template__Template___is_frozen].s = var3; /* _is_frozen on <self:Template> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method template#Template#freeze for (self: Object) */
void VIRTUAL_template__Template__freeze(val* self) {
template__Template__freeze(self); /* Direct call template#Template#freeze on <self:Object(Template)>*/
RET_LABEL:;
}
/* method template#Template#content for (self: Template): Array[Streamable] */
val* template__Template__content(val* self) {
val* var /* : Array[Streamable] */;
val* var1 /* : Array[Streamable] */;
var1 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Template> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "../lib/template/template.nit", 183);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#content for (self: Object): Array[Streamable] */
val* VIRTUAL_template__Template__content(val* self) {
val* var /* : Array[Streamable] */;
val* var1 /* : Array[Streamable] */;
val* var3 /* : Array[Streamable] */;
{ /* Inline template#Template#content (self) on <self:Object(Template)> */
var3 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Object(Template)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "../lib/template/template.nit", 183);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done for (self: Template): Bool */
short int template__Template__render_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___render_done].s; /* _render_done on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done for (self: Object): Bool */
short int VIRTUAL_template__Template__render_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline template#Template#render_done (self) on <self:Object(Template)> */
var3 = self->attrs[COLOR_template__Template___render_done].s; /* _render_done on <self:Object(Template)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#render_done= for (self: Template, Bool) */
void template__Template__render_done_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___render_done].s = p0; /* _render_done on <self:Template> */
RET_LABEL:;
}
/* method template#Template#render_done= for (self: Object, Bool) */
void VIRTUAL_template__Template__render_done_61d(val* self, short int p0) {
{ /* Inline template#Template#render_done= (self,p0) on <self:Object(Template)> */
self->attrs[COLOR_template__Template___render_done].s = p0; /* _render_done on <self:Object(Template)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method template#Template#force_render for (self: Template) */
void template__Template__force_render(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
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
var3 = 1;
{
{ /* Inline template#Template#render_done= (self,var3) on <self:Template> */
self->attrs[COLOR_template__Template___render_done].s = var3; /* _render_done on <self:Template> */
RET_LABEL4:(void)0;
}
}
{
toolcontext__BashCompletion__rendering(self); /* Direct call toolcontext#BashCompletion#rendering on <self:Template>*/
}
{
template__Template__freeze(self); /* Direct call template#Template#freeze on <self:Template>*/
}
RET_LABEL:;
}
/* method template#Template#force_render for (self: Object) */
void VIRTUAL_template__Template__force_render(val* self) {
template__Template__force_render(self); /* Direct call template#Template#force_render on <self:Object(Template)>*/
RET_LABEL:;
}
/* method template#Template#write_to for (self: Template, OStream) */
void template__Template__write_to(val* self, val* p0) {
val* var_stream /* var stream: OStream */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var6 /* : Array[Streamable] */;
val* var8 /* : Array[Streamable] */;
val* var_ /* var : Array[Streamable] */;
val* var9 /* : ArrayIterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[Streamable] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_e /* var e: Streamable */;
short int var14 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/template/template.nit", 205);
show_backtrace(1);
}
var4 = 1;
{
{ /* Inline template#Template#is_writing= (self,var4) on <self:Template> */
self->attrs[COLOR_template__Template___is_writing].s = var4; /* _is_writing on <self:Template> */
RET_LABEL5:(void)0;
}
}
{
template__Template__force_render(self); /* Direct call template#Template#force_render on <self:Template>*/
}
{
{ /* Inline template#Template#content (self) on <self:Template> */
var8 = self->attrs[COLOR_template__Template___content].val; /* _content on <self:Template> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "../lib/template/template.nit", 183);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = array__AbstractArrayRead__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = array__ArrayIterator__is_ok(var_10);
}
if (var11){
{
var12 = array__ArrayIterator__item(var_10);
}
var_e = var12;
{
((void (*)(val*, val*))(var_e->class->vft[COLOR_stream__Streamable__write_to]))(var_e, var_stream) /* write_to on <var_e:Streamable>*/;
}
{
array__ArrayIterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[Streamable]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:ArrayIterator[Streamable]> */
RET_LABEL13:(void)0;
}
}
var14 = 0;
{
{ /* Inline template#Template#is_writing= (self,var14) on <self:Template> */
self->attrs[COLOR_template__Template___is_writing].s = var14; /* _is_writing on <self:Template> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method template#Template#write_to for (self: Object, OStream) */
void VIRTUAL_template__Template__write_to(val* self, val* p0) {
template__Template__write_to(self, p0); /* Direct call template#Template#write_to on <self:Object(Template)>*/
RET_LABEL:;
}
/* method template#Template#is_writing for (self: Template): Bool */
short int template__Template__is_writing(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_template__Template___is_writing].s; /* _is_writing on <self:Template> */
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_writing for (self: Object): Bool */
short int VIRTUAL_template__Template__is_writing(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline template#Template#is_writing (self) on <self:Object(Template)> */
var3 = self->attrs[COLOR_template__Template___is_writing].s; /* _is_writing on <self:Object(Template)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method template#Template#is_writing= for (self: Template, Bool) */
void template__Template__is_writing_61d(val* self, short int p0) {
self->attrs[COLOR_template__Template___is_writing].s = p0; /* _is_writing on <self:Template> */
RET_LABEL:;
}
/* method template#Template#is_writing= for (self: Object, Bool) */
void VIRTUAL_template__Template__is_writing_61d(val* self, short int p0) {
{ /* Inline template#Template#is_writing= (self,p0) on <self:Object(Template)> */
self->attrs[COLOR_template__Template___is_writing].s = p0; /* _is_writing on <self:Object(Template)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
