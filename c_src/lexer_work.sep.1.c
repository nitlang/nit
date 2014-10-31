#include "lexer_work.sep.0.h"
/* method lexer_work#Token#text for (self: Token): String */
val* lexer_work__Token__text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Location */;
val* var11 /* : Location */;
val* var12 /* : String */;
var1 = self->attrs[COLOR_lexer_work__Token___cached_text].val; /* _cached_text on <self:Token> */
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var2) on <var_res:nullable String> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:Token> */
var11 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:Token> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = location__Location__text(var9);
}
var_res = var12;
self->attrs[COLOR_lexer_work__Token___cached_text].val = var_res; /* _cached_text on <self:Token> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Token#text for (self: Object): String */
val* VIRTUAL_lexer_work__Token__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = lexer_work__Token__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#EOF#init_tk for (self: EOF, Location) */
void lexer_work__EOF__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_loc = p0;
if (varonce) {
var = varonce;
} else {
var1 = "";
var2 = 0;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
self->attrs[COLOR_lexer_work__Token___cached_text].val = var; /* _cached_text on <self:EOF> */
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:EOF> */
RET_LABEL:;
}
/* method lexer_work#EOF#init_tk for (self: Object, Location) */
void VIRTUAL_lexer_work__EOF__init_tk(val* self, val* p0) {
lexer_work__EOF__init_tk(self, p0); /* Direct call lexer_work#EOF#init_tk on <self:Object(EOF)>*/
RET_LABEL:;
}
/* method lexer_work#AError#message for (self: AError): String */
val* lexer_work__AError__message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_lexer_work__AError___message].val; /* _message on <self:AError> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer_work.nit", 50);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#AError#message for (self: Object): String */
val* VIRTUAL_lexer_work__AError__message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline lexer_work#AError#message (self) on <self:Object(AError)> */
var3 = self->attrs[COLOR_lexer_work__AError___message].val; /* _message on <self:Object(AError)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer_work.nit", 50);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#AError#message= for (self: AError, String) */
void lexer_work__AError__message_61d(val* self, val* p0) {
self->attrs[COLOR_lexer_work__AError___message].val = p0; /* _message on <self:AError> */
RET_LABEL:;
}
/* method lexer_work#AError#message= for (self: Object, String) */
void VIRTUAL_lexer_work__AError__message_61d(val* self, val* p0) {
{ /* Inline lexer_work#AError#message= (self,p0) on <self:Object(AError)> */
self->attrs[COLOR_lexer_work__AError___message].val = p0; /* _message on <self:Object(AError)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method lexer_work#AError#init_error for (self: AError, String, Location) */
void lexer_work__AError__init_error(val* self, val* p0, val* p1) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
var_message = p0;
var_loc = p1;
{
lexer_work__EOF__init_tk(self, var_loc); /* Direct call lexer_work#EOF#init_tk on <self:AError>*/
}
{
{ /* Inline lexer_work#AError#message= (self,var_message) on <self:AError> */
self->attrs[COLOR_lexer_work__AError___message].val = var_message; /* _message on <self:AError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work#AError#init_error for (self: Object, String, Location) */
void VIRTUAL_lexer_work__AError__init_error(val* self, val* p0, val* p1) {
lexer_work__AError__init_error(self, p0, p1); /* Direct call lexer_work#AError#init_error on <self:Object(AError)>*/
RET_LABEL:;
}
/* method lexer_work#ALexerError#string= for (self: ALexerError, String) */
void lexer_work__ALexerError__string_61d(val* self, val* p0) {
self->attrs[COLOR_lexer_work__ALexerError___string].val = p0; /* _string on <self:ALexerError> */
RET_LABEL:;
}
/* method lexer_work#ALexerError#string= for (self: Object, String) */
void VIRTUAL_lexer_work__ALexerError__string_61d(val* self, val* p0) {
{ /* Inline lexer_work#ALexerError#string= (self,p0) on <self:Object(ALexerError)> */
self->attrs[COLOR_lexer_work__ALexerError___string].val = p0; /* _string on <self:Object(ALexerError)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method lexer_work#ALexerError#init_lexer_error for (self: ALexerError, String, Location, String) */
void lexer_work__ALexerError__init_lexer_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_string /* var string: String */;
var_message = p0;
var_loc = p1;
var_string = p2;
{
lexer_work__AError__init_error(self, var_message, var_loc); /* Direct call lexer_work#AError#init_error on <self:ALexerError>*/
}
{
{ /* Inline lexer_work#ALexerError#string= (self,var_string) on <self:ALexerError> */
self->attrs[COLOR_lexer_work__ALexerError___string].val = var_string; /* _string on <self:ALexerError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work#ALexerError#init_lexer_error for (self: Object, String, Location, String) */
void VIRTUAL_lexer_work__ALexerError__init_lexer_error(val* self, val* p0, val* p1, val* p2) {
lexer_work__ALexerError__init_lexer_error(self, p0, p1, p2); /* Direct call lexer_work#ALexerError#init_lexer_error on <self:Object(ALexerError)>*/
RET_LABEL:;
}
/* method lexer_work#AParserError#token= for (self: AParserError, Token) */
void lexer_work__AParserError__token_61d(val* self, val* p0) {
self->attrs[COLOR_lexer_work__AParserError___token].val = p0; /* _token on <self:AParserError> */
RET_LABEL:;
}
/* method lexer_work#AParserError#token= for (self: Object, Token) */
void VIRTUAL_lexer_work__AParserError__token_61d(val* self, val* p0) {
{ /* Inline lexer_work#AParserError#token= (self,p0) on <self:Object(AParserError)> */
self->attrs[COLOR_lexer_work__AParserError___token].val = p0; /* _token on <self:Object(AParserError)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method lexer_work#AParserError#init_parser_error for (self: AParserError, String, Location, Token) */
void lexer_work__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_token /* var token: Token */;
var_message = p0;
var_loc = p1;
var_token = p2;
{
lexer_work__AError__init_error(self, var_message, var_loc); /* Direct call lexer_work#AError#init_error on <self:AParserError>*/
}
{
{ /* Inline lexer_work#AParserError#token= (self,var_token) on <self:AParserError> */
self->attrs[COLOR_lexer_work__AParserError___token].val = var_token; /* _token on <self:AParserError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work#AParserError#init_parser_error for (self: Object, String, Location, Token) */
void VIRTUAL_lexer_work__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2) {
lexer_work__AParserError__init_parser_error(self, p0, p1, p2); /* Direct call lexer_work#AParserError#init_parser_error on <self:Object(AParserError)>*/
RET_LABEL:;
}
/* method lexer_work#Lexer#file for (self: Lexer): SourceFile */
val* lexer_work__Lexer__file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = self->attrs[COLOR_lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer_work.nit", 89);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#file for (self: Object): SourceFile */
val* VIRTUAL_lexer_work__Lexer__file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
val* var3 /* : SourceFile */;
{ /* Inline lexer_work#Lexer#file (self) on <self:Object(Lexer)> */
var3 = self->attrs[COLOR_lexer_work__Lexer___file].val; /* _file on <self:Object(Lexer)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer_work.nit", 89);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#file= for (self: Lexer, SourceFile) */
void lexer_work__Lexer__file_61d(val* self, val* p0) {
self->attrs[COLOR_lexer_work__Lexer___file].val = p0; /* _file on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#file= for (self: Object, SourceFile) */
void VIRTUAL_lexer_work__Lexer__file_61d(val* self, val* p0) {
{ /* Inline lexer_work#Lexer#file= (self,p0) on <self:Object(Lexer)> */
self->attrs[COLOR_lexer_work__Lexer___file].val = p0; /* _file on <self:Object(Lexer)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method lexer_work#Lexer#init for (self: Lexer, SourceFile) */
void lexer_work__Lexer__init(val* self, val* p0) {
val* var_file /* var file: SourceFile */;
var_file = p0;
{
{ /* Inline lexer_work#Lexer#file= (self,var_file) on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___file].val = var_file; /* _file on <self:Lexer> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work#Lexer#init for (self: Object, SourceFile) */
void VIRTUAL_lexer_work__Lexer__init(val* self, val* p0) {
lexer_work__Lexer__init(self, p0); /* Direct call lexer_work#Lexer#init on <self:Object(Lexer)>*/
RET_LABEL:;
}
/* method lexer_work#Lexer#last_token for (self: Lexer): nullable Token */
val* lexer_work__Lexer__last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#last_token for (self: Object): nullable Token */
val* VIRTUAL_lexer_work__Lexer__last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
val* var3 /* : nullable Token */;
{ /* Inline lexer_work#Lexer#last_token (self) on <self:Object(Lexer)> */
var3 = self->attrs[COLOR_lexer_work__Lexer___last_token].val; /* _last_token on <self:Object(Lexer)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#last_token= for (self: Lexer, nullable Token) */
void lexer_work__Lexer__last_token_61d(val* self, val* p0) {
self->attrs[COLOR_lexer_work__Lexer___last_token].val = p0; /* _last_token on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work#Lexer#last_token= for (self: Object, nullable Token) */
void VIRTUAL_lexer_work__Lexer__last_token_61d(val* self, val* p0) {
{ /* Inline lexer_work#Lexer#last_token= (self,p0) on <self:Object(Lexer)> */
self->attrs[COLOR_lexer_work__Lexer___last_token].val = p0; /* _last_token on <self:Object(Lexer)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method lexer_work#Lexer#peek for (self: Lexer): Token */
val* lexer_work__Lexer__peek(val* self) {
val* var /* : Token */;
val* var1 /* : nullable Token */;
val* var_t /* var t: nullable Token */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Token */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable Token */;
short int var19 /* : Bool */;
val* var20 /* : nullable Token */;
val* var22 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var32 /* : SourceFile */;
val* var34 /* : SourceFile */;
var1 = self->attrs[COLOR_lexer_work__Lexer___token].val; /* _token on <self:Lexer> */
var_t = var1;
var2 = NULL;
if (var_t == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,var2) on <var_t:nullable Token> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_other) /* == on <var_t:nullable Token(Token)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var = var_t;
goto RET_LABEL;
} else {
}
{
var9 = lexer_work__Lexer__get_token(self);
}
var_t = var9;
for(;;) {
var10 = NULL;
if (var_t == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var10) on <var_t:nullable Token> */
var_other14 = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other14) on <var_t:nullable Token(Token)> */
var17 = var_t == var_other14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
var18 = lexer_work__Lexer__get_token(self);
}
var_t = var18;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var19 = var_t->attrs[COLOR_parser_nodes__ANode___location].val != NULL; /* _location on <var_t:nullable Token(Token)> */
if (var19){
{
{ /* Inline lexer_work#Lexer#last_token (self) on <self:Lexer> */
var22 = self->attrs[COLOR_lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_l = var20;
var23 = NULL;
if (var_l == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_l,var23) on <var_l:nullable Token> */
var_other = var23;
{
var28 = ((short int (*)(val*, val*))(var_l->class->vft[COLOR_kernel__Object___61d_61d]))(var_l, var_other) /* == on <var_l:nullable Token(Token)>*/;
var27 = var28;
}
var29 = !var27;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
{ /* Inline parser_nodes#Token#next_token= (var_l,var_t) on <var_l:nullable Token(Token)> */
var_l->attrs[COLOR_parser_nodes__Token___next_token].val = var_t; /* _next_token on <var_l:nullable Token(Token)> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes#Token#prev_token= (var_t,var_l) on <var_t:nullable Token(Token)> */
var_t->attrs[COLOR_parser_nodes__Token___prev_token].val = var_l; /* _prev_token on <var_t:nullable Token(Token)> */
RET_LABEL31:(void)0;
}
}
} else {
{
{ /* Inline lexer_work#Lexer#file (self) on <self:Lexer> */
var34 = self->attrs[COLOR_lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer_work.nit", 89);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline parser_nodes#SourceFile#first_token= (var32,var_t) on <var32:SourceFile> */
var32->attrs[COLOR_parser_nodes__SourceFile___first_token].val = var_t; /* _first_token on <var32:SourceFile> */
RET_LABEL35:(void)0;
}
}
}
{
{ /* Inline lexer_work#Lexer#last_token= (self,var_t) on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___last_token].val = var_t; /* _last_token on <self:Lexer> */
RET_LABEL36:(void)0;
}
}
} else {
}
self->attrs[COLOR_lexer_work__Lexer___token].val = var_t; /* _token on <self:Lexer> */
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#peek for (self: Object): Token */
val* VIRTUAL_lexer_work__Lexer__peek(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer_work__Lexer__peek(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#next for (self: Lexer): Token */
val* lexer_work__Lexer__next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var_result /* var result: Token */;
val* var2 /* : null */;
{
var1 = lexer_work__Lexer__peek(self);
}
var_result = var1;
var2 = NULL;
self->attrs[COLOR_lexer_work__Lexer___token].val = var2; /* _token on <self:Lexer> */
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#next for (self: Object): Token */
val* VIRTUAL_lexer_work__Lexer__next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer_work__Lexer__next(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#get_token for (self: Lexer): nullable Token */
val* lexer_work__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
long var1 /* : Int */;
long var_dfa_state /* var dfa_state: Int */;
long var2 /* : Int */;
long var_sp /* var sp: Int */;
long var_start_stream_pos /* var start_stream_pos: Int */;
long var3 /* : Int */;
long var_start_pos /* var start_pos: Int */;
long var4 /* : Int */;
long var_start_line /* var start_line: Int */;
val* var5 /* : SourceFile */;
val* var7 /* : SourceFile */;
val* var_file /* var file: SourceFile */;
val* var8 /* : String */;
val* var10 /* : String */;
val* var_string /* var string: String */;
long var11 /* : Int */;
long var13 /* : Int */;
long var_string_len /* var string_len: Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
long var_accept_state /* var accept_state: Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_accept_token /* var accept_token: Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_accept_length /* var accept_length: Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var29 /* : Int */;
long var_accept_pos /* var accept_pos: Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var_accept_line /* var accept_line: Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
char var42 /* : Char */;
long var43 /* : Int */;
long var45 /* : Int */;
long var_c /* var c: Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var55 /* : Int */;
long var_line /* var line: Int */;
long var56 /* : Int */;
long var_pos /* var pos: Int */;
long var57 /* : Int */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : Array[Int] */;
val* var65 /* : Array[Int] */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
val* var76 /* : Array[Int] */;
val* var78 /* : Array[Int] */;
val* var79 /* : nullable Object */;
long var80 /* : Int */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
long var85 /* : Int */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
long var93 /* : Int */;
short int var94 /* : Bool */;
val* var95 /* : Array[Int] */;
val* var97 /* : Array[Int] */;
val* var98 /* : nullable Object */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
short int var107 /* : Bool */;
long var_old_state /* var old_state: Int */;
long var108 /* : Int */;
long var109 /* : Int */;
long var111 /* : Int */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
short int var118 /* : Bool */;
long var119 /* : Int */;
long var120 /* : Int */;
long var122 /* : Int */;
long var123 /* : Int */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
long var129 /* : Int */;
long var130 /* : Int */;
long var131 /* : Int */;
long var133 /* : Int */;
long var134 /* : Int */;
long var_low /* var low: Int */;
long var135 /* : Int */;
long var136 /* : Int */;
long var138 /* : Int for extern */;
long var139 /* : Int */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
long var_high /* var high: Int */;
long var147 /* : Int */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
const char* var_class_name160;
short int var161 /* : Bool */;
long var162 /* : Int */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
const char* var_class_name167;
long var168 /* : Int */;
long var169 /* : Int */;
long var170 /* : Int */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
long var176 /* : Int */;
long var_middle /* var middle: Int */;
long var177 /* : Int */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
long var185 /* : Int */;
long var186 /* : Int */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
const char* var_class_name191;
long var192 /* : Int */;
long var_offset /* var offset: Int */;
long var193 /* : Int */;
long var195 /* : Int for extern */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
int cltype199;
int idtype200;
const char* var_class_name201;
short int var202 /* : Bool */;
long var203 /* : Int */;
long var204 /* : Int */;
short int var206 /* : Bool */;
int cltype207;
int idtype208;
const char* var_class_name209;
long var210 /* : Int */;
long var211 /* : Int */;
long var212 /* : Int */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
const char* var_class_name217;
long var218 /* : Int */;
long var219 /* : Int */;
long var221 /* : Int for extern */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
int cltype225;
int idtype226;
const char* var_class_name227;
short int var228 /* : Bool */;
long var229 /* : Int */;
long var230 /* : Int */;
short int var232 /* : Bool */;
int cltype233;
int idtype234;
const char* var_class_name235;
long var236 /* : Int */;
long var237 /* : Int */;
long var238 /* : Int */;
short int var240 /* : Bool */;
int cltype241;
int idtype242;
const char* var_class_name243;
long var244 /* : Int */;
long var245 /* : Int */;
long var247 /* : Int for extern */;
long var248 /* : Int */;
long var249 /* : Int */;
long var251 /* : Int */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
int cltype255;
int idtype256;
const char* var_class_name257;
short int var258 /* : Bool */;
long var260 /* : Int */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
int cltype264;
int idtype265;
const char* var_class_name266;
short int var267 /* : Bool */;
long var268 /* : Int */;
long var270 /* : Int for extern */;
long var_tok /* var tok: Int */;
long var271 /* : Int */;
long var272 /* : Int */;
long var274 /* : Int */;
short int var275 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
long var280 /* : Int */;
short int var282 /* : Bool */;
int cltype283;
int idtype284;
const char* var_class_name285;
long var286 /* : Int */;
long var287 /* : Int */;
long var288 /* : Int */;
long var289 /* : Int */;
long var290 /* : Int */;
long var292 /* : Int */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
val* var298 /* : Location */;
long var299 /* : Int */;
long var300 /* : Int */;
short int var302 /* : Bool */;
int cltype303;
int idtype304;
const char* var_class_name305;
long var306 /* : Int */;
long var307 /* : Int */;
long var308 /* : Int */;
short int var310 /* : Bool */;
int cltype311;
int idtype312;
const char* var_class_name313;
long var314 /* : Int */;
long var315 /* : Int */;
long var316 /* : Int */;
short int var318 /* : Bool */;
int cltype319;
int idtype320;
const char* var_class_name321;
long var322 /* : Int */;
val* var_location /* var location: Location */;
long var323 /* : Int */;
short int var325 /* : Bool */;
int cltype326;
int idtype327;
const char* var_class_name328;
long var329 /* : Int */;
long var330 /* : Int */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
short int var334 /* : Bool */;
val* var335 /* : null */;
val* var336 /* : Token */;
val* var337 /* : Location */;
long var338 /* : Int */;
long var339 /* : Int */;
short int var341 /* : Bool */;
int cltype342;
int idtype343;
const char* var_class_name344;
long var345 /* : Int */;
long var346 /* : Int */;
long var347 /* : Int */;
short int var349 /* : Bool */;
int cltype350;
int idtype351;
const char* var_class_name352;
long var353 /* : Int */;
long var354 /* : Int */;
long var355 /* : Int */;
short int var357 /* : Bool */;
int cltype358;
int idtype359;
const char* var_class_name360;
long var361 /* : Int */;
long var362 /* : Int */;
long var363 /* : Int */;
short int var365 /* : Bool */;
int cltype366;
int idtype367;
const char* var_class_name368;
long var369 /* : Int */;
val* var_location370 /* var location: Location */;
short int var371 /* : Bool */;
short int var373 /* : Bool */;
int cltype374;
int idtype375;
const char* var_class_name376;
short int var377 /* : Bool */;
long var378 /* : Int */;
short int var380 /* : Bool */;
int cltype381;
int idtype382;
const char* var_class_name383;
long var384 /* : Int */;
val* var385 /* : String */;
val* var_text /* var text: String */;
val* var386 /* : ALexerError */;
static val* varonce;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : FlatString */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
long var394 /* : Int */;
val* var395 /* : FlatString */;
val* var396 /* : Array[Object] */;
long var397 /* : Int */;
val* var398 /* : NativeArray[Object] */;
val* var399 /* : String */;
val* var_token /* var token: ALexerError */;
val* var401 /* : EOF */;
val* var_token402 /* var token: EOF */;
var1 = 0;
var_dfa_state = var1;
var2 = self->attrs[COLOR_lexer_work__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var_sp = var2;
var_start_stream_pos = var_sp;
var3 = self->attrs[COLOR_lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_start_pos = var3;
var4 = self->attrs[COLOR_lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_start_line = var4;
{
{ /* Inline lexer_work#Lexer#file (self) on <self:Lexer> */
var7 = self->attrs[COLOR_lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "parser/lexer_work.nit", 89);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_file = var5;
{
{ /* Inline location#SourceFile#string (var_file) on <var_file:SourceFile> */
var10 = var_file->attrs[COLOR_location__SourceFile___string].val; /* _string on <var_file:SourceFile> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 25);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_string = var8;
{
{ /* Inline string#FlatText#length (var_string) on <var_string:String> */
var13 = var_string->attrs[COLOR_string__FlatText___length].l; /* _length on <var_string:String> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_string_len = var11;
var14 = 1;
{
{ /* Inline kernel#Int#unary - (var14) on <var14:Int> */
var17 = -var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_accept_state = var15;
var18 = 1;
{
{ /* Inline kernel#Int#unary - (var18) on <var18:Int> */
var21 = -var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_accept_token = var19;
var22 = 1;
{
{ /* Inline kernel#Int#unary - (var22) on <var22:Int> */
var25 = -var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_accept_length = var23;
var26 = 1;
{
{ /* Inline kernel#Int#unary - (var26) on <var26:Int> */
var29 = -var26;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_accept_pos = var27;
var30 = 1;
{
{ /* Inline kernel#Int#unary - (var30) on <var30:Int> */
var33 = -var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_accept_line = var31;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_sp,var_string_len) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_string_len:Int> isa OTHER */
/* <var_string_len:Int> isa OTHER */
var36 = 1; /* easy <var_string_len:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var37 = var_sp >= var_string_len;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var38 = 1;
{
{ /* Inline kernel#Int#unary - (var38) on <var38:Int> */
var41 = -var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_dfa_state = var39;
} else {
{
var42 = string__FlatString___91d_93d(var_string, var_sp);
}
{
{ /* Inline kernel#Char#ascii (var42) on <var42:Char> */
var45 = (unsigned char)var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_c = var43;
var46 = 1;
{
{ /* Inline kernel#Int#+ (var_sp,var46) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var53 = var_sp + var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_sp = var47;
var54 = self->attrs[COLOR_lexer_work__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var54;
var55 = self->attrs[COLOR_lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var55;
var56 = self->attrs[COLOR_lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var56;
var57 = 10;
{
{ /* Inline kernel#Int#== (var_c,var57) on <var_c:Int> */
var61 = var_c == var57;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
if (var_cr){
var62 = 0;
var_cr = var62;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var65 = var_file->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
array__Array___91d_93d_61d(var63, var_line, var66); /* Direct call array#Array#[]= on <var63:Array[Int]>*/
}
} else {
var67 = 1;
{
{ /* Inline kernel#Int#+ (var_line,var67) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var70 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var74 = var_line + var67;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_line = var68;
var75 = 0;
var_pos = var75;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var78 = var_file->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
array__Array___91d_93d_61d(var76, var_line, var79); /* Direct call array#Array#[]= on <var76:Array[Int]>*/
}
}
} else {
var80 = 13;
{
{ /* Inline kernel#Int#== (var_c,var80) on <var_c:Int> */
var84 = var_c == var80;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
var81 = var82;
}
if (var81){
var85 = 1;
{
{ /* Inline kernel#Int#+ (var_line,var85) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <var85:Int> isa OTHER */
/* <var85:Int> isa OTHER */
var88 = 1; /* easy <var85:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var92 = var_line + var85;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_line = var86;
var93 = 0;
var_pos = var93;
var94 = 1;
var_cr = var94;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var97 = var_file->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 44);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
array__Array___91d_93d_61d(var95, var_line, var98); /* Direct call array#Array#[]= on <var95:Array[Int]>*/
}
} else {
var99 = 1;
{
{ /* Inline kernel#Int#+ (var_pos,var99) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var99:Int> isa OTHER */
/* <var99:Int> isa OTHER */
var102 = 1; /* easy <var99:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var106 = var_pos + var99;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var_pos = var100;
var107 = 0;
var_cr = var107;
}
}
for(;;) {
var_old_state = var_dfa_state;
var108 = 1;
{
{ /* Inline kernel#Int#unary - (var108) on <var108:Int> */
var111 = -var108;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_dfa_state,var109) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var109:Int> isa OTHER */
/* <var109:Int> isa OTHER */
var114 = 1; /* easy <var109:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var118 = var_dfa_state < var109;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
if (var112){
var119 = 2;
{
{ /* Inline kernel#Int#unary - (var119) on <var119:Int> */
var122 = -var119;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var120,var_dfa_state) on <var120:Int> */
/* Covariant cast for argument 0 (i) <var_dfa_state:Int> isa OTHER */
/* <var_dfa_state:Int> isa OTHER */
var125 = 1; /* easy <var_dfa_state:Int> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var129 = var120 - var_dfa_state;
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
var_old_state = var123;
} else {
}
var130 = 1;
{
{ /* Inline kernel#Int#unary - (var130) on <var130:Int> */
var133 = -var130;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var_dfa_state = var131;
var134 = 0;
var_low = var134;
var135 = 0;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var135) on <self:Lexer> */
var138 = lexer_goto(self, var_old_state, var135);
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
var139 = 1;
{
{ /* Inline kernel#Int#- (var136,var139) on <var136:Int> */
/* Covariant cast for argument 0 (i) <var139:Int> isa OTHER */
/* <var139:Int> isa OTHER */
var142 = 1; /* easy <var139:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var146 = var136 - var139;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var_high = var140;
var147 = 0;
{
{ /* Inline kernel#Int#>= (var_high,var147) on <var_high:Int> */
/* Covariant cast for argument 0 (i) <var147:Int> isa OTHER */
/* <var147:Int> isa OTHER */
var150 = 1; /* easy <var147:Int> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var154 = var_high >= var147;
var148 = var154;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
if (var148){
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var157 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var157)) {
var_class_name160 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name160);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var161 = var_low <= var_high;
var155 = var161;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
}
if (var155){
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var164 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var164)) {
var_class_name167 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name167);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var168 = var_low + var_high;
var162 = var168;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
var169 = 2;
{
{ /* Inline kernel#Int#/ (var162,var169) on <var162:Int> */
/* Covariant cast for argument 0 (i) <var169:Int> isa OTHER */
/* <var169:Int> isa OTHER */
var172 = 1; /* easy <var169:Int> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 379);
show_backtrace(1);
}
var176 = var162 / var169;
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
var_middle = var170;
var177 = 3;
{
{ /* Inline kernel#Int#* (var_middle,var177) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var177:Int> isa OTHER */
/* <var177:Int> isa OTHER */
var180 = 1; /* easy <var177:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 378);
show_backtrace(1);
}
var184 = var_middle * var177;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var185 = 1;
{
{ /* Inline kernel#Int#+ (var178,var185) on <var178:Int> */
/* Covariant cast for argument 0 (i) <var185:Int> isa OTHER */
/* <var185:Int> isa OTHER */
var188 = 1; /* easy <var185:Int> isa OTHER*/
if (unlikely(!var188)) {
var_class_name191 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var192 = var178 + var185;
var186 = var192;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
var_offset = var186;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var_offset) on <self:Lexer> */
var195 = lexer_goto(self, var_old_state, var_offset);
var193 = var195;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_c,var193) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var193:Int> isa OTHER */
/* <var193:Int> isa OTHER */
var198 = 1; /* easy <var193:Int> isa OTHER*/
if (unlikely(!var198)) {
var_class_name201 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name201);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var202 = var_c < var193;
var196 = var202;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
if (var196){
var203 = 1;
{
{ /* Inline kernel#Int#- (var_middle,var203) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var203:Int> isa OTHER */
/* <var203:Int> isa OTHER */
var206 = 1; /* easy <var203:Int> isa OTHER*/
if (unlikely(!var206)) {
var_class_name209 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name209);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var210 = var_middle - var203;
var204 = var210;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
var_high = var204;
} else {
var211 = 1;
{
{ /* Inline kernel#Int#+ (var_offset,var211) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var211:Int> isa OTHER */
/* <var211:Int> isa OTHER */
var214 = 1; /* easy <var211:Int> isa OTHER*/
if (unlikely(!var214)) {
var_class_name217 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name217);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var218 = var_offset + var211;
var212 = var218;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var212) on <self:Lexer> */
var221 = lexer_goto(self, var_old_state, var212);
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_c,var219) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var219:Int> isa OTHER */
/* <var219:Int> isa OTHER */
var224 = 1; /* easy <var219:Int> isa OTHER*/
if (unlikely(!var224)) {
var_class_name227 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name227);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var228 = var_c > var219;
var222 = var228;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
}
if (var222){
var229 = 1;
{
{ /* Inline kernel#Int#+ (var_middle,var229) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var229:Int> isa OTHER */
/* <var229:Int> isa OTHER */
var232 = 1; /* easy <var229:Int> isa OTHER*/
if (unlikely(!var232)) {
var_class_name235 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name235);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var236 = var_middle + var229;
var230 = var236;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
}
var_low = var230;
} else {
var237 = 2;
{
{ /* Inline kernel#Int#+ (var_offset,var237) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var237:Int> isa OTHER */
/* <var237:Int> isa OTHER */
var240 = 1; /* easy <var237:Int> isa OTHER*/
if (unlikely(!var240)) {
var_class_name243 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name243);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var244 = var_offset + var237;
var238 = var244;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var238) on <self:Lexer> */
var247 = lexer_goto(self, var_old_state, var238);
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
var_dfa_state = var245;
goto BREAK_label;
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
var248 = 2;
{
{ /* Inline kernel#Int#unary - (var248) on <var248:Int> */
var251 = -var248;
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_dfa_state,var249) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var249:Int> isa OTHER */
/* <var249:Int> isa OTHER */
var254 = 1; /* easy <var249:Int> isa OTHER*/
if (unlikely(!var254)) {
var_class_name257 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name257);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var258 = var_dfa_state > var249;
var252 = var258;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
}
if (var252){
goto BREAK_label259;
} else {
}
}
BREAK_label259: (void)0;
self->attrs[COLOR_lexer_work__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
var260 = 0;
{
{ /* Inline kernel#Int#>= (var_dfa_state,var260) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var260:Int> isa OTHER */
/* <var260:Int> isa OTHER */
var263 = 1; /* easy <var260:Int> isa OTHER*/
if (unlikely(!var263)) {
var_class_name266 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name266);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var267 = var_dfa_state >= var260;
var261 = var267;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
}
if (var261){
{
{ /* Inline tables#TablesCapable#lexer_accept (self,var_dfa_state) on <self:Lexer> */
var270 = lexer_accept(self, var_dfa_state);
var268 = var270;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
var_tok = var268;
var271 = 1;
{
{ /* Inline kernel#Int#unary - (var271) on <var271:Int> */
var274 = -var271;
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_tok,var272) on <var_tok:Int> */
var278 = var_tok == var272;
var279 = !var278;
var276 = var279;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
var275 = var276;
}
if (var275){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var282 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var282)) {
var_class_name285 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name285);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var286 = var_sp - var_start_stream_pos;
var280 = var286;
goto RET_LABEL281;
RET_LABEL281:(void)0;
}
}
var_accept_length = var280;
var287 = self->attrs[COLOR_lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var287;
var288 = self->attrs[COLOR_lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var288;
} else {
}
} else {
var289 = 1;
{
{ /* Inline kernel#Int#unary - (var289) on <var289:Int> */
var292 = -var289;
var290 = var292;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_accept_state,var290) on <var_accept_state:Int> */
var296 = var_accept_state == var290;
var297 = !var296;
var294 = var297;
goto RET_LABEL295;
RET_LABEL295:(void)0;
}
var293 = var294;
}
if (var293){
var298 = NEW_location__Location(&type_location__Location);
var299 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var299) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var299:Int> isa OTHER */
/* <var299:Int> isa OTHER */
var302 = 1; /* easy <var299:Int> isa OTHER*/
if (unlikely(!var302)) {
var_class_name305 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name305);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var306 = var_start_line + var299;
var300 = var306;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var307 = 1;
{
{ /* Inline kernel#Int#+ (var_accept_line,var307) on <var_accept_line:Int> */
/* Covariant cast for argument 0 (i) <var307:Int> isa OTHER */
/* <var307:Int> isa OTHER */
var310 = 1; /* easy <var307:Int> isa OTHER*/
if (unlikely(!var310)) {
var_class_name313 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name313);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var314 = var_accept_line + var307;
var308 = var314;
goto RET_LABEL309;
RET_LABEL309:(void)0;
}
}
var315 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var315) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var315:Int> isa OTHER */
/* <var315:Int> isa OTHER */
var318 = 1; /* easy <var315:Int> isa OTHER*/
if (unlikely(!var318)) {
var_class_name321 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name321);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var322 = var_start_pos + var315;
var316 = var322;
goto RET_LABEL317;
RET_LABEL317:(void)0;
}
}
{
location__Location__init(var298, var_file, var300, var308, var316, var_accept_pos); /* Direct call location#Location#init on <var298:Location>*/
}
var_location = var298;
self->attrs[COLOR_lexer_work__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) on <var_start_stream_pos:Int> */
/* Covariant cast for argument 0 (i) <var_accept_length:Int> isa OTHER */
/* <var_accept_length:Int> isa OTHER */
var325 = 1; /* easy <var_accept_length:Int> isa OTHER*/
if (unlikely(!var325)) {
var_class_name328 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name328);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var329 = var_start_stream_pos + var_accept_length;
var323 = var329;
goto RET_LABEL324;
RET_LABEL324:(void)0;
}
}
self->attrs[COLOR_lexer_work__Lexer___stream_pos].l = var323; /* _stream_pos on <self:Lexer> */
var330 = 0;
{
{ /* Inline kernel#Int#== (var_accept_token,var330) on <var_accept_token:Int> */
var334 = var_accept_token == var330;
var332 = var334;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
var331 = var332;
}
if (var331){
var335 = NULL;
var = var335;
goto RET_LABEL;
} else {
}
{
var336 = lexer__Lexer__make_token(self, var_accept_token, var_location);
}
var = var336;
goto RET_LABEL;
} else {
self->attrs[COLOR_lexer_work__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var337 = NEW_location__Location(&type_location__Location);
var338 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var338) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var338:Int> isa OTHER */
/* <var338:Int> isa OTHER */
var341 = 1; /* easy <var338:Int> isa OTHER*/
if (unlikely(!var341)) {
var_class_name344 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name344);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var345 = var_start_line + var338;
var339 = var345;
goto RET_LABEL340;
RET_LABEL340:(void)0;
}
}
var346 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var346) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var346:Int> isa OTHER */
/* <var346:Int> isa OTHER */
var349 = 1; /* easy <var346:Int> isa OTHER*/
if (unlikely(!var349)) {
var_class_name352 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name352);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var353 = var_start_line + var346;
var347 = var353;
goto RET_LABEL348;
RET_LABEL348:(void)0;
}
}
var354 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var354) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var354:Int> isa OTHER */
/* <var354:Int> isa OTHER */
var357 = 1; /* easy <var354:Int> isa OTHER*/
if (unlikely(!var357)) {
var_class_name360 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name360);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var361 = var_start_pos + var354;
var355 = var361;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
var362 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var362) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var362:Int> isa OTHER */
/* <var362:Int> isa OTHER */
var365 = 1; /* easy <var362:Int> isa OTHER*/
if (unlikely(!var365)) {
var_class_name368 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name368);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var369 = var_start_pos + var362;
var363 = var369;
goto RET_LABEL364;
RET_LABEL364:(void)0;
}
}
{
location__Location__init(var337, var_file, var339, var347, var355, var363); /* Direct call location#Location#init on <var337:Location>*/
}
var_location370 = var337;
{
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var373 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var373)) {
var_class_name376 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name376);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var377 = var_sp > var_start_stream_pos;
var371 = var377;
goto RET_LABEL372;
RET_LABEL372:(void)0;
}
}
if (var371){
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var380 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var380)) {
var_class_name383 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name383);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var384 = var_sp - var_start_stream_pos;
var378 = var384;
goto RET_LABEL379;
RET_LABEL379:(void)0;
}
}
{
var385 = string__FlatString__substring(var_string, var_start_stream_pos, var378);
}
var_text = var385;
var386 = NEW_parser_nodes__ALexerError(&type_parser_nodes__ALexerError);
if (varonce) {
var387 = varonce;
} else {
var388 = "Syntax error: unknown token ";
var389 = 28;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce = var387;
}
if (varonce391) {
var392 = varonce391;
} else {
var393 = ".";
var394 = 1;
var395 = string__NativeString__to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
var396 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var396 = array_instance Array[Object] */
var397 = 3;
var398 = NEW_array__NativeArray(var397, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var398)->values[0] = (val*) var387;
((struct instance_array__NativeArray*)var398)->values[1] = (val*) var_text;
((struct instance_array__NativeArray*)var398)->values[2] = (val*) var392;
{
((void (*)(val*, val*, long))(var396->class->vft[COLOR_array__Array__with_native]))(var396, var398, var397) /* with_native on <var396:Array[Object]>*/;
}
}
{
var399 = ((val* (*)(val*))(var396->class->vft[COLOR_string__Object__to_s]))(var396) /* to_s on <var396:Array[Object]>*/;
}
{
lexer_work__ALexerError__init_lexer_error(var386, var399, var_location370, var_text); /* Direct call lexer_work#ALexerError#init_lexer_error on <var386:ALexerError>*/
}
var_token = var386;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token) on <var_file:SourceFile> */
var_file->attrs[COLOR_parser_nodes__SourceFile___last_token].val = var_token; /* _last_token on <var_file:SourceFile> */
RET_LABEL400:(void)0;
}
}
var = var_token;
goto RET_LABEL;
} else {
var401 = NEW_parser_nodes__EOF(&type_parser_nodes__EOF);
{
lexer_work__EOF__init_tk(var401, var_location370); /* Direct call lexer_work#EOF#init_tk on <var401:EOF>*/
}
var_token402 = var401;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token402) on <var_file:SourceFile> */
var_file->attrs[COLOR_parser_nodes__SourceFile___last_token].val = var_token402; /* _last_token on <var_file:SourceFile> */
RET_LABEL403:(void)0;
}
}
var = var_token402;
goto RET_LABEL;
}
}
}
}
RET_LABEL:;
return var;
}
/* method lexer_work#Lexer#get_token for (self: Object): nullable Token */
val* VIRTUAL_lexer_work__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = lexer_work__Lexer__get_token(self);
var = var1;
RET_LABEL:;
return var;
}
