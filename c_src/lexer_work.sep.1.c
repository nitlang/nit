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
val* var10 /* : String */;
var1 = self->attrs[COLOR_lexer_work__Token___text].val; /* _text on <self:Token> */
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
var9 = parser_nodes__ANode__location(self);
}
{
var10 = location__Location__text(var9);
}
var_res = var10;
self->attrs[COLOR_lexer_work__Token___text].val = var_res; /* _text on <self:Token> */
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
/* method lexer_work#EOF#parser_index for (self: EOF): Int */
long lexer_work__EOF__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 97;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work#EOF#parser_index for (self: Object): Int */
long VIRTUAL_lexer_work__EOF__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer_work__EOF__parser_index(self);
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
self->attrs[COLOR_lexer_work__Token___text].val = var; /* _text on <self:EOF> */
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/lexer_work.nit", 55);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/lexer_work.nit", 55);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/lexer_work.nit", 94);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/lexer_work.nit", 94);
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
val* var19 /* : nullable Location */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable Token */;
val* var29 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var39 /* : SourceFile */;
val* var41 /* : SourceFile */;
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
if (!var11) break;
{
var18 = lexer_work__Lexer__get_token(self);
}
var_t = var18;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var19 = var_t->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_t:nullable Token(Token)> */
var20 = NULL;
if (var19 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var19,var20) on <var19:nullable Location> */
var_other = var20;
{
var25 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_other) /* == on <var19:nullable Location(Location)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline lexer_work#Lexer#last_token (self) on <self:Lexer> */
var29 = self->attrs[COLOR_lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_l = var27;
var30 = NULL;
if (var_l == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_l,var30) on <var_l:nullable Token> */
var_other = var30;
{
var35 = ((short int (*)(val*, val*))(var_l->class->vft[COLOR_kernel__Object___61d_61d]))(var_l, var_other) /* == on <var_l:nullable Token(Token)>*/;
var34 = var35;
}
var36 = !var34;
var32 = var36;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
{
{ /* Inline parser_nodes#Token#next_token= (var_l,var_t) on <var_l:nullable Token(Token)> */
var_l->attrs[COLOR_parser_nodes__Token___next_token].val = var_t; /* _next_token on <var_l:nullable Token(Token)> */
RET_LABEL37:(void)0;
}
}
{
{ /* Inline parser_nodes#Token#prev_token= (var_t,var_l) on <var_t:nullable Token(Token)> */
var_t->attrs[COLOR_parser_nodes__Token___prev_token].val = var_l; /* _prev_token on <var_t:nullable Token(Token)> */
RET_LABEL38:(void)0;
}
}
} else {
{
{ /* Inline lexer_work#Lexer#file (self) on <self:Lexer> */
var41 = self->attrs[COLOR_lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "src/parser/lexer_work.nit", 94);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline parser_nodes#SourceFile#first_token= (var39,var_t) on <var39:SourceFile> */
var39->attrs[COLOR_parser_nodes__SourceFile___first_token].val = var_t; /* _first_token on <var39:SourceFile> */
RET_LABEL42:(void)0;
}
}
}
{
{ /* Inline lexer_work#Lexer#last_token= (self,var_t) on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___last_token].val = var_t; /* _last_token on <self:Lexer> */
RET_LABEL43:(void)0;
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
val* var42 /* : SequenceRead[Char] */;
val* var44 /* : SequenceRead[Char] */;
val* var45 /* : nullable Object */;
long var46 /* : Int */;
char var48 /* : Char */;
long var49 /* : Int */;
long var_c /* var c: Int */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
short int var58 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var59 /* : Int */;
long var_line /* var line: Int */;
long var60 /* : Int */;
long var_pos /* var pos: Int */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : Array[Int] */;
val* var69 /* : Array[Int] */;
val* var70 /* : nullable Object */;
long var71 /* : Int */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
long var79 /* : Int */;
val* var80 /* : Array[Int] */;
val* var82 /* : Array[Int] */;
val* var83 /* : nullable Object */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
long var97 /* : Int */;
short int var98 /* : Bool */;
val* var99 /* : Array[Int] */;
val* var101 /* : Array[Int] */;
val* var102 /* : nullable Object */;
long var103 /* : Int */;
long var104 /* : Int */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
const char* var_class_name109;
long var110 /* : Int */;
short int var111 /* : Bool */;
long var_old_state /* var old_state: Int */;
long var112 /* : Int */;
long var113 /* : Int */;
long var115 /* : Int */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
short int var122 /* : Bool */;
long var123 /* : Int */;
long var124 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
long var133 /* : Int */;
long var134 /* : Int */;
long var135 /* : Int */;
long var137 /* : Int */;
long var138 /* : Int */;
long var_low /* var low: Int */;
long var139 /* : Int */;
long var140 /* : Int */;
long var142 /* : Int */;
long var143 /* : Int */;
long var144 /* : Int */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
const char* var_class_name149;
long var150 /* : Int */;
long var_high /* var high: Int */;
long var151 /* : Int */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
short int var165 /* : Bool */;
long var166 /* : Int */;
short int var168 /* : Bool */;
int cltype169;
int idtype170;
const char* var_class_name171;
long var172 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
const char* var_class_name179;
long var180 /* : Int */;
long var_middle /* var middle: Int */;
long var181 /* : Int */;
long var182 /* : Int */;
short int var184 /* : Bool */;
int cltype185;
int idtype186;
const char* var_class_name187;
long var188 /* : Int */;
long var189 /* : Int */;
long var190 /* : Int */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
long var196 /* : Int */;
long var_offset /* var offset: Int */;
long var197 /* : Int */;
long var199 /* : Int */;
short int var200 /* : Bool */;
short int var202 /* : Bool */;
int cltype203;
int idtype204;
const char* var_class_name205;
short int var206 /* : Bool */;
long var207 /* : Int */;
long var208 /* : Int */;
short int var210 /* : Bool */;
int cltype211;
int idtype212;
const char* var_class_name213;
long var214 /* : Int */;
long var215 /* : Int */;
long var216 /* : Int */;
short int var218 /* : Bool */;
int cltype219;
int idtype220;
const char* var_class_name221;
long var222 /* : Int */;
long var223 /* : Int */;
long var225 /* : Int */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
int cltype229;
int idtype230;
const char* var_class_name231;
short int var232 /* : Bool */;
long var233 /* : Int */;
long var234 /* : Int */;
short int var236 /* : Bool */;
int cltype237;
int idtype238;
const char* var_class_name239;
long var240 /* : Int */;
long var241 /* : Int */;
long var242 /* : Int */;
short int var244 /* : Bool */;
int cltype245;
int idtype246;
const char* var_class_name247;
long var248 /* : Int */;
long var249 /* : Int */;
long var251 /* : Int */;
long var252 /* : Int */;
long var253 /* : Int */;
long var255 /* : Int */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
int cltype259;
int idtype260;
const char* var_class_name261;
short int var262 /* : Bool */;
long var264 /* : Int */;
short int var265 /* : Bool */;
short int var267 /* : Bool */;
int cltype268;
int idtype269;
const char* var_class_name270;
short int var271 /* : Bool */;
long var272 /* : Int */;
long var274 /* : Int */;
long var_tok /* var tok: Int */;
long var275 /* : Int */;
long var276 /* : Int */;
long var278 /* : Int */;
short int var279 /* : Bool */;
short int var280 /* : Bool */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
long var284 /* : Int */;
short int var286 /* : Bool */;
int cltype287;
int idtype288;
const char* var_class_name289;
long var290 /* : Int */;
long var291 /* : Int */;
long var292 /* : Int */;
long var293 /* : Int */;
long var294 /* : Int */;
long var296 /* : Int */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
val* var302 /* : Location */;
long var303 /* : Int */;
long var304 /* : Int */;
short int var306 /* : Bool */;
int cltype307;
int idtype308;
const char* var_class_name309;
long var310 /* : Int */;
long var311 /* : Int */;
long var312 /* : Int */;
short int var314 /* : Bool */;
int cltype315;
int idtype316;
const char* var_class_name317;
long var318 /* : Int */;
long var319 /* : Int */;
long var320 /* : Int */;
short int var322 /* : Bool */;
int cltype323;
int idtype324;
const char* var_class_name325;
long var326 /* : Int */;
val* var_location /* var location: Location */;
long var327 /* : Int */;
short int var329 /* : Bool */;
int cltype330;
int idtype331;
const char* var_class_name332;
long var333 /* : Int */;
long var334 /* : Int */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
short int var338 /* : Bool */;
val* var339 /* : null */;
val* var340 /* : Token */;
val* var341 /* : Location */;
long var342 /* : Int */;
long var343 /* : Int */;
short int var345 /* : Bool */;
int cltype346;
int idtype347;
const char* var_class_name348;
long var349 /* : Int */;
long var350 /* : Int */;
long var351 /* : Int */;
short int var353 /* : Bool */;
int cltype354;
int idtype355;
const char* var_class_name356;
long var357 /* : Int */;
long var358 /* : Int */;
long var359 /* : Int */;
short int var361 /* : Bool */;
int cltype362;
int idtype363;
const char* var_class_name364;
long var365 /* : Int */;
long var366 /* : Int */;
long var367 /* : Int */;
short int var369 /* : Bool */;
int cltype370;
int idtype371;
const char* var_class_name372;
long var373 /* : Int */;
val* var_location374 /* var location: Location */;
short int var375 /* : Bool */;
short int var377 /* : Bool */;
int cltype378;
int idtype379;
const char* var_class_name380;
short int var381 /* : Bool */;
long var382 /* : Int */;
short int var384 /* : Bool */;
int cltype385;
int idtype386;
const char* var_class_name387;
long var388 /* : Int */;
val* var389 /* : String */;
val* var_text /* var text: String */;
val* var390 /* : ALexerError */;
static val* varonce;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : NativeString */;
long var398 /* : Int */;
val* var399 /* : FlatString */;
val* var400 /* : Array[Object] */;
long var401 /* : Int */;
val* var402 /* : NativeArray[Object] */;
val* var403 /* : String */;
val* var_token /* var token: ALexerError */;
val* var405 /* : EOF */;
val* var_token406 /* var token: EOF */;
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/lexer_work.nit", 94);
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
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
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
{ /* Inline string#FlatString#chars (var_string) on <var_string:String> */
var44 = var_string->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_string:String> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val* (*)(val*, long))(var42->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var42, var_sp) /* [] on <var42:SequenceRead[Char]>*/;
}
{
{ /* Inline kernel#Char#ascii (var45) on <var45:nullable Object(Char)> */
var48 = ((struct instance_kernel__Char*)var45)->value; /* autounbox from nullable Object to Char */;
var49 = (unsigned char)var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_c = var46;
var50 = 1;
{
{ /* Inline kernel#Int#+ (var_sp,var50) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var53 = 1; /* easy <var50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var57 = var_sp + var50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var_sp = var51;
var58 = self->attrs[COLOR_lexer_work__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var58;
var59 = self->attrs[COLOR_lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var59;
var60 = self->attrs[COLOR_lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var60;
var61 = 10;
{
{ /* Inline kernel#Int#== (var_c,var61) on <var_c:Int> */
var65 = var_c == var61;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
if (var_cr){
var66 = 0;
var_cr = var66;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var69 = var_file->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 44);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
array__Array___91d_93d_61d(var67, var_line, var70); /* Direct call array#Array#[]= on <var67:Array[Int]>*/
}
} else {
var71 = 1;
{
{ /* Inline kernel#Int#+ (var_line,var71) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var74 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var78 = var_line + var71;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var_line = var72;
var79 = 0;
var_pos = var79;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var82 = var_file->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 44);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
array__Array___91d_93d_61d(var80, var_line, var83); /* Direct call array#Array#[]= on <var80:Array[Int]>*/
}
}
} else {
var84 = 13;
{
{ /* Inline kernel#Int#== (var_c,var84) on <var_c:Int> */
var88 = var_c == var84;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var89 = 1;
{
{ /* Inline kernel#Int#+ (var_line,var89) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <var89:Int> isa OTHER */
/* <var89:Int> isa OTHER */
var92 = 1; /* easy <var89:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var96 = var_line + var89;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var_line = var90;
var97 = 0;
var_pos = var97;
var98 = 1;
var_cr = var98;
{
{ /* Inline location#SourceFile#line_starts (var_file) on <var_file:SourceFile> */
var101 = var_file->attrs[COLOR_location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 44);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
var102 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
array__Array___91d_93d_61d(var99, var_line, var102); /* Direct call array#Array#[]= on <var99:Array[Int]>*/
}
} else {
var103 = 1;
{
{ /* Inline kernel#Int#+ (var_pos,var103) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var103:Int> isa OTHER */
/* <var103:Int> isa OTHER */
var106 = 1; /* easy <var103:Int> isa OTHER*/
if (unlikely(!var106)) {
var_class_name109 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name109);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var110 = var_pos + var103;
var104 = var110;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
var_pos = var104;
var111 = 0;
var_cr = var111;
}
}
for(;;) {
var_old_state = var_dfa_state;
var112 = 1;
{
{ /* Inline kernel#Int#unary - (var112) on <var112:Int> */
var115 = -var112;
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_dfa_state,var113) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var113:Int> isa OTHER */
/* <var113:Int> isa OTHER */
var118 = 1; /* easy <var113:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var122 = var_dfa_state < var113;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
if (var116){
var123 = 2;
{
{ /* Inline kernel#Int#unary - (var123) on <var123:Int> */
var126 = -var123;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var124,var_dfa_state) on <var124:Int> */
/* Covariant cast for argument 0 (i) <var_dfa_state:Int> isa OTHER */
/* <var_dfa_state:Int> isa OTHER */
var129 = 1; /* easy <var_dfa_state:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var133 = var124 - var_dfa_state;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var_old_state = var127;
} else {
}
var134 = 1;
{
{ /* Inline kernel#Int#unary - (var134) on <var134:Int> */
var137 = -var134;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var_dfa_state = var135;
var138 = 0;
var_low = var138;
var139 = 0;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var139) on <self:Lexer> */
var142 = lexer_goto(self, var_old_state, var139);
var140 = var142;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var143 = 1;
{
{ /* Inline kernel#Int#- (var140,var143) on <var140:Int> */
/* Covariant cast for argument 0 (i) <var143:Int> isa OTHER */
/* <var143:Int> isa OTHER */
var146 = 1; /* easy <var143:Int> isa OTHER*/
if (unlikely(!var146)) {
var_class_name149 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name149);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var150 = var140 - var143;
var144 = var150;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
var_high = var144;
var151 = 0;
{
{ /* Inline kernel#Int#>= (var_high,var151) on <var_high:Int> */
/* Covariant cast for argument 0 (i) <var151:Int> isa OTHER */
/* <var151:Int> isa OTHER */
var154 = 1; /* easy <var151:Int> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var158 = var_high >= var151;
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
if (var152){
for(;;) {
{
{ /* Inline kernel#Int#<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var161 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var165 = var_low <= var_high;
var159 = var165;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
if (!var159) break;
{
{ /* Inline kernel#Int#+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var168 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var168)) {
var_class_name171 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name171);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var172 = var_low + var_high;
var166 = var172;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
var173 = 2;
{
{ /* Inline kernel#Int#/ (var166,var173) on <var166:Int> */
/* Covariant cast for argument 0 (i) <var173:Int> isa OTHER */
/* <var173:Int> isa OTHER */
var176 = 1; /* easy <var173:Int> isa OTHER*/
if (unlikely(!var176)) {
var_class_name179 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name179);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 333);
show_backtrace(1);
}
var180 = var166 / var173;
var174 = var180;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
var_middle = var174;
var181 = 3;
{
{ /* Inline kernel#Int#* (var_middle,var181) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var181:Int> isa OTHER */
/* <var181:Int> isa OTHER */
var184 = 1; /* easy <var181:Int> isa OTHER*/
if (unlikely(!var184)) {
var_class_name187 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name187);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 332);
show_backtrace(1);
}
var188 = var_middle * var181;
var182 = var188;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var189 = 1;
{
{ /* Inline kernel#Int#+ (var182,var189) on <var182:Int> */
/* Covariant cast for argument 0 (i) <var189:Int> isa OTHER */
/* <var189:Int> isa OTHER */
var192 = 1; /* easy <var189:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var196 = var182 + var189;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var_offset = var190;
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var_offset) on <self:Lexer> */
var199 = lexer_goto(self, var_old_state, var_offset);
var197 = var199;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_c,var197) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var197:Int> isa OTHER */
/* <var197:Int> isa OTHER */
var202 = 1; /* easy <var197:Int> isa OTHER*/
if (unlikely(!var202)) {
var_class_name205 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name205);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var206 = var_c < var197;
var200 = var206;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
}
if (var200){
var207 = 1;
{
{ /* Inline kernel#Int#- (var_middle,var207) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var207:Int> isa OTHER */
/* <var207:Int> isa OTHER */
var210 = 1; /* easy <var207:Int> isa OTHER*/
if (unlikely(!var210)) {
var_class_name213 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name213);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var214 = var_middle - var207;
var208 = var214;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
var_high = var208;
} else {
var215 = 1;
{
{ /* Inline kernel#Int#+ (var_offset,var215) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var215:Int> isa OTHER */
/* <var215:Int> isa OTHER */
var218 = 1; /* easy <var215:Int> isa OTHER*/
if (unlikely(!var218)) {
var_class_name221 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name221);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var222 = var_offset + var215;
var216 = var222;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var216) on <self:Lexer> */
var225 = lexer_goto(self, var_old_state, var216);
var223 = var225;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_c,var223) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var223:Int> isa OTHER */
/* <var223:Int> isa OTHER */
var228 = 1; /* easy <var223:Int> isa OTHER*/
if (unlikely(!var228)) {
var_class_name231 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name231);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var232 = var_c > var223;
var226 = var232;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
if (var226){
var233 = 1;
{
{ /* Inline kernel#Int#+ (var_middle,var233) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <var233:Int> isa OTHER */
/* <var233:Int> isa OTHER */
var236 = 1; /* easy <var233:Int> isa OTHER*/
if (unlikely(!var236)) {
var_class_name239 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name239);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var240 = var_middle + var233;
var234 = var240;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
var_low = var234;
} else {
var241 = 2;
{
{ /* Inline kernel#Int#+ (var_offset,var241) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var241:Int> isa OTHER */
/* <var241:Int> isa OTHER */
var244 = 1; /* easy <var241:Int> isa OTHER*/
if (unlikely(!var244)) {
var_class_name247 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name247);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var248 = var_offset + var241;
var242 = var248;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
}
{
{ /* Inline tables#TablesCapable#lexer_goto (self,var_old_state,var242) on <self:Lexer> */
var251 = lexer_goto(self, var_old_state, var242);
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
}
var_dfa_state = var249;
goto BREAK_label;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
} else {
}
var252 = 2;
{
{ /* Inline kernel#Int#unary - (var252) on <var252:Int> */
var255 = -var252;
var253 = var255;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_dfa_state,var253) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var253:Int> isa OTHER */
/* <var253:Int> isa OTHER */
var258 = 1; /* easy <var253:Int> isa OTHER*/
if (unlikely(!var258)) {
var_class_name261 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name261);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var262 = var_dfa_state > var253;
var256 = var262;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
if (var256){
goto BREAK_label263;
} else {
}
CONTINUE_label263: (void)0;
}
BREAK_label263: (void)0;
self->attrs[COLOR_lexer_work__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
var264 = 0;
{
{ /* Inline kernel#Int#>= (var_dfa_state,var264) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var264:Int> isa OTHER */
/* <var264:Int> isa OTHER */
var267 = 1; /* easy <var264:Int> isa OTHER*/
if (unlikely(!var267)) {
var_class_name270 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name270);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var271 = var_dfa_state >= var264;
var265 = var271;
goto RET_LABEL266;
RET_LABEL266:(void)0;
}
}
if (var265){
{
{ /* Inline tables#TablesCapable#lexer_accept (self,var_dfa_state) on <self:Lexer> */
var274 = lexer_accept(self, var_dfa_state);
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var_tok = var272;
var275 = 1;
{
{ /* Inline kernel#Int#unary - (var275) on <var275:Int> */
var278 = -var275;
var276 = var278;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_tok,var276) on <var_tok:Int> */
var282 = var_tok == var276;
var283 = !var282;
var280 = var283;
goto RET_LABEL281;
RET_LABEL281:(void)0;
}
var279 = var280;
}
if (var279){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var286 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var286)) {
var_class_name289 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name289);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var290 = var_sp - var_start_stream_pos;
var284 = var290;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
}
var_accept_length = var284;
var291 = self->attrs[COLOR_lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var291;
var292 = self->attrs[COLOR_lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var292;
} else {
}
} else {
var293 = 1;
{
{ /* Inline kernel#Int#unary - (var293) on <var293:Int> */
var296 = -var293;
var294 = var296;
goto RET_LABEL295;
RET_LABEL295:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_accept_state,var294) on <var_accept_state:Int> */
var300 = var_accept_state == var294;
var301 = !var300;
var298 = var301;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
var297 = var298;
}
if (var297){
var302 = NEW_location__Location(&type_location__Location);
var303 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var303) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var303:Int> isa OTHER */
/* <var303:Int> isa OTHER */
var306 = 1; /* easy <var303:Int> isa OTHER*/
if (unlikely(!var306)) {
var_class_name309 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name309);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var310 = var_start_line + var303;
var304 = var310;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
}
var311 = 1;
{
{ /* Inline kernel#Int#+ (var_accept_line,var311) on <var_accept_line:Int> */
/* Covariant cast for argument 0 (i) <var311:Int> isa OTHER */
/* <var311:Int> isa OTHER */
var314 = 1; /* easy <var311:Int> isa OTHER*/
if (unlikely(!var314)) {
var_class_name317 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name317);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var318 = var_accept_line + var311;
var312 = var318;
goto RET_LABEL313;
RET_LABEL313:(void)0;
}
}
var319 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var319) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var319:Int> isa OTHER */
/* <var319:Int> isa OTHER */
var322 = 1; /* easy <var319:Int> isa OTHER*/
if (unlikely(!var322)) {
var_class_name325 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name325);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var326 = var_start_pos + var319;
var320 = var326;
goto RET_LABEL321;
RET_LABEL321:(void)0;
}
}
{
location__Location__init(var302, var_file, var304, var312, var320, var_accept_pos); /* Direct call location#Location#init on <var302:Location>*/
}
var_location = var302;
self->attrs[COLOR_lexer_work__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_lexer_work__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) on <var_start_stream_pos:Int> */
/* Covariant cast for argument 0 (i) <var_accept_length:Int> isa OTHER */
/* <var_accept_length:Int> isa OTHER */
var329 = 1; /* easy <var_accept_length:Int> isa OTHER*/
if (unlikely(!var329)) {
var_class_name332 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name332);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var333 = var_start_stream_pos + var_accept_length;
var327 = var333;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
}
self->attrs[COLOR_lexer_work__Lexer___stream_pos].l = var327; /* _stream_pos on <self:Lexer> */
var334 = 0;
{
{ /* Inline kernel#Int#== (var_accept_token,var334) on <var_accept_token:Int> */
var338 = var_accept_token == var334;
var336 = var338;
goto RET_LABEL337;
RET_LABEL337:(void)0;
}
var335 = var336;
}
if (var335){
var339 = NULL;
var = var339;
goto RET_LABEL;
} else {
}
{
var340 = lexer__Lexer__make_token(self, var_accept_token, var_location);
}
var = var340;
goto RET_LABEL;
} else {
self->attrs[COLOR_lexer_work__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var341 = NEW_location__Location(&type_location__Location);
var342 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var342) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var342:Int> isa OTHER */
/* <var342:Int> isa OTHER */
var345 = 1; /* easy <var342:Int> isa OTHER*/
if (unlikely(!var345)) {
var_class_name348 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name348);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var349 = var_start_line + var342;
var343 = var349;
goto RET_LABEL344;
RET_LABEL344:(void)0;
}
}
var350 = 1;
{
{ /* Inline kernel#Int#+ (var_start_line,var350) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <var350:Int> isa OTHER */
/* <var350:Int> isa OTHER */
var353 = 1; /* easy <var350:Int> isa OTHER*/
if (unlikely(!var353)) {
var_class_name356 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name356);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var357 = var_start_line + var350;
var351 = var357;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
}
var358 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var358) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var358:Int> isa OTHER */
/* <var358:Int> isa OTHER */
var361 = 1; /* easy <var358:Int> isa OTHER*/
if (unlikely(!var361)) {
var_class_name364 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name364);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var365 = var_start_pos + var358;
var359 = var365;
goto RET_LABEL360;
RET_LABEL360:(void)0;
}
}
var366 = 1;
{
{ /* Inline kernel#Int#+ (var_start_pos,var366) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <var366:Int> isa OTHER */
/* <var366:Int> isa OTHER */
var369 = 1; /* easy <var366:Int> isa OTHER*/
if (unlikely(!var369)) {
var_class_name372 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name372);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var373 = var_start_pos + var366;
var367 = var373;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
}
{
location__Location__init(var341, var_file, var343, var351, var359, var367); /* Direct call location#Location#init on <var341:Location>*/
}
var_location374 = var341;
{
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var377 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var377)) {
var_class_name380 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name380);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var381 = var_sp > var_start_stream_pos;
var375 = var381;
goto RET_LABEL376;
RET_LABEL376:(void)0;
}
}
if (var375){
{
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var384 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var384)) {
var_class_name387 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name387);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var388 = var_sp - var_start_stream_pos;
var382 = var388;
goto RET_LABEL383;
RET_LABEL383:(void)0;
}
}
{
var389 = string__FlatString__substring(var_string, var_start_stream_pos, var382);
}
var_text = var389;
var390 = NEW_parser_nodes__ALexerError(&type_parser_nodes__ALexerError);
if (varonce) {
var391 = varonce;
} else {
var392 = "Syntax error: unknown token ";
var393 = 28;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce = var391;
}
if (varonce395) {
var396 = varonce395;
} else {
var397 = ".";
var398 = 1;
var399 = string__NativeString__to_s_with_length(var397, var398);
var396 = var399;
varonce395 = var396;
}
var400 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var400 = array_instance Array[Object] */
var401 = 3;
var402 = NEW_array__NativeArray(var401, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var402)->values[0] = (val*) var391;
((struct instance_array__NativeArray*)var402)->values[1] = (val*) var_text;
((struct instance_array__NativeArray*)var402)->values[2] = (val*) var396;
{
((void (*)(val*, val*, long))(var400->class->vft[COLOR_array__Array__with_native]))(var400, var402, var401) /* with_native on <var400:Array[Object]>*/;
}
}
{
var403 = ((val* (*)(val*))(var400->class->vft[COLOR_string__Object__to_s]))(var400) /* to_s on <var400:Array[Object]>*/;
}
{
lexer_work__ALexerError__init_lexer_error(var390, var403, var_location374, var_text); /* Direct call lexer_work#ALexerError#init_lexer_error on <var390:ALexerError>*/
}
var_token = var390;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token) on <var_file:SourceFile> */
var_file->attrs[COLOR_parser_nodes__SourceFile___last_token].val = var_token; /* _last_token on <var_file:SourceFile> */
RET_LABEL404:(void)0;
}
}
var = var_token;
goto RET_LABEL;
} else {
var405 = NEW_parser_nodes__EOF(&type_parser_nodes__EOF);
{
lexer_work__EOF__init_tk(var405, var_location374); /* Direct call lexer_work#EOF#init_tk on <var405:EOF>*/
}
var_token406 = var405;
{
{ /* Inline parser_nodes#SourceFile#last_token= (var_file,var_token406) on <var_file:SourceFile> */
var_file->attrs[COLOR_parser_nodes__SourceFile___last_token].val = var_token406; /* _last_token on <var_file:SourceFile> */
RET_LABEL407:(void)0;
}
}
var = var_token406;
goto RET_LABEL;
}
}
}
CONTINUE_label408: (void)0;
}
BREAK_label408: (void)0;
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
