#include "nitc__lexer_work.sep.0.h"
/* method lexer_work$Token$text for (self: Token): String */
val* nitc__lexer_work___Token___text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Location */;
val* var9 /* : Location */;
val* var10 /* : String */;
var1 = self->attrs[COLOR_nitc__lexer_work__Token___cached_text].val; /* _cached_text on <self:Token> */
var_res = var1;
if (var_res == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ANode$location (self) on <self:Token> */
var9 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:Token> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__Location___text(var7);
}
var_res = var10;
self->attrs[COLOR_nitc__lexer_work__Token___cached_text].val = var_res; /* _cached_text on <self:Token> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work$EOF$init_tk for (self: EOF, Location) */
void nitc__lexer_work___EOF___init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
static val* varonce;
val* var /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
{
{ /* Inline kernel$Object$init (self) on <self:EOF> */
RET_LABEL1:(void)0;
}
}
var_loc = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var2 = "";
var4 = (val*)(0l<<2|1);
var5 = (val*)(0l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var = var3;
varonce = var;
}
self->attrs[COLOR_nitc__lexer_work__Token___cached_text].val = var; /* _cached_text on <self:EOF> */
self->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var_loc; /* _location on <self:EOF> */
RET_LABEL:;
}
/* method lexer_work$AError$message for (self: AError): String */
val* nitc__lexer_work___AError___message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__lexer_work__AError___message].val; /* _message on <self:AError> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work$AError$message= for (self: AError, String) */
void nitc__lexer_work___AError___message_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__lexer_work__AError___message].val = p0; /* _message on <self:AError> */
RET_LABEL:;
}
/* method lexer_work$AError$init_error for (self: AError, String, Location) */
void nitc__lexer_work___AError___init_error(val* self, val* p0, val* p1) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
var_message = p0;
var_loc = p1;
{
nitc__lexer_work___EOF___init_tk(self, var_loc); /* Direct call lexer_work$EOF$init_tk on <self:AError>*/
}
{
{ /* Inline lexer_work$AError$message= (self,var_message) on <self:AError> */
self->attrs[COLOR_nitc__lexer_work__AError___message].val = var_message; /* _message on <self:AError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work$ALexerError$string= for (self: ALexerError, String) */
void nitc__lexer_work___ALexerError___string_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__lexer_work__ALexerError___string].val = p0; /* _string on <self:ALexerError> */
RET_LABEL:;
}
/* method lexer_work$ALexerError$init_lexer_error for (self: ALexerError, String, Location, String) */
void nitc__lexer_work___ALexerError___init_lexer_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_string /* var string: String */;
var_message = p0;
var_loc = p1;
var_string = p2;
{
nitc__lexer_work___AError___init_error(self, var_message, var_loc); /* Direct call lexer_work$AError$init_error on <self:ALexerError>*/
}
{
{ /* Inline lexer_work$ALexerError$string= (self,var_string) on <self:ALexerError> */
self->attrs[COLOR_nitc__lexer_work__ALexerError___string].val = var_string; /* _string on <self:ALexerError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work$AParserError$token= for (self: AParserError, Token) */
void nitc__lexer_work___AParserError___token_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__lexer_work__AParserError___token].val = p0; /* _token on <self:AParserError> */
RET_LABEL:;
}
/* method lexer_work$AParserError$init_parser_error for (self: AParserError, String, Location, Token) */
void nitc__lexer_work___AParserError___init_parser_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_token /* var token: Token */;
var_message = p0;
var_loc = p1;
var_token = p2;
{
nitc__lexer_work___AError___init_error(self, var_message, var_loc); /* Direct call lexer_work$AError$init_error on <self:AParserError>*/
}
{
{ /* Inline lexer_work$AParserError$token= (self,var_token) on <self:AParserError> */
self->attrs[COLOR_nitc__lexer_work__AParserError___token].val = var_token; /* _token on <self:AParserError> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method lexer_work$Lexer$file for (self: Lexer): SourceFile */
val* nitc___nitc__Lexer___file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = self->attrs[COLOR_nitc__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 90);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work$Lexer$file= for (self: Lexer, SourceFile) */
void nitc___nitc__Lexer___file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__lexer_work__Lexer___file].val = p0; /* _file on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work$Lexer$last_token for (self: Lexer): nullable Token */
val* nitc___nitc__Lexer___last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_nitc__lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer_work$Lexer$last_token= for (self: Lexer, nullable Token) */
void nitc___nitc__Lexer___last_token_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__lexer_work__Lexer___last_token].val = p0; /* _last_token on <self:Lexer> */
RET_LABEL:;
}
/* method lexer_work$Lexer$peek for (self: Lexer): Token */
val* nitc___nitc__Lexer___peek(val* self) {
val* var /* : Token */;
val* var1 /* : nullable Token */;
val* var_t /* var t: nullable Token */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Token */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other11 /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Token */;
short int var16 /* : Bool */;
val* var17 /* : nullable Token */;
val* var19 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var27 /* : SourceFile */;
val* var29 /* : SourceFile */;
var1 = self->attrs[COLOR_nitc__lexer_work__Lexer___token].val; /* _token on <self:Lexer> */
var_t = var1;
if (var_t == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_t,((val*)NULL)) on <var_t:nullable Token> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_t, var_other); /* == on <var_t:nullable Token(Token)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = var_t;
goto RET_LABEL;
} else {
}
{
var7 = nitc___nitc__Lexer___get_token(self);
}
var_t = var7;
for(;;) {
if (var_t == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t,((val*)NULL)) on <var_t:nullable Token> */
var_other11 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other11) on <var_t:nullable Token(Token)> */
var14 = var_t == var_other11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
var15 = nitc___nitc__Lexer___get_token(self);
}
var_t = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var16 = var_t->attrs[COLOR_nitc__parser_nodes__ANode___location].val != NULL; /* _location on <var_t:nullable Token(Token)> */
if (var16){
{
{ /* Inline lexer_work$Lexer$last_token (self) on <self:Lexer> */
var19 = self->attrs[COLOR_nitc__lexer_work__Lexer___last_token].val; /* _last_token on <self:Lexer> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_l = var17;
if (var_l == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_l,((val*)NULL)) on <var_l:nullable Token> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_l, var_other); /* == on <var_l:nullable Token(Token)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline parser_nodes$Token$next_token= (var_l,var_t) on <var_l:nullable Token(Token)> */
var_l->attrs[COLOR_nitc__parser_nodes__Token___next_token].val = var_t; /* _next_token on <var_l:nullable Token(Token)> */
RET_LABEL25:(void)0;
}
}
{
{ /* Inline parser_nodes$Token$prev_token= (var_t,var_l) on <var_t:nullable Token(Token)> */
var_t->attrs[COLOR_nitc__parser_nodes__Token___prev_token].val = var_l; /* _prev_token on <var_t:nullable Token(Token)> */
RET_LABEL26:(void)0;
}
}
} else {
{
{ /* Inline lexer_work$Lexer$file (self) on <self:Lexer> */
var29 = self->attrs[COLOR_nitc__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 90);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline parser_nodes$SourceFile$first_token= (var27,var_t) on <var27:SourceFile> */
var27->attrs[COLOR_nitc__parser_nodes__SourceFile___first_token].val = var_t; /* _first_token on <var27:SourceFile> */
RET_LABEL30:(void)0;
}
}
}
{
{ /* Inline lexer_work$Lexer$last_token= (self,var_t) on <self:Lexer> */
self->attrs[COLOR_nitc__lexer_work__Lexer___last_token].val = var_t; /* _last_token on <self:Lexer> */
RET_LABEL31:(void)0;
}
}
} else {
}
self->attrs[COLOR_nitc__lexer_work__Lexer___token].val = var_t; /* _token on <self:Lexer> */
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work$Lexer$next for (self: Lexer): Token */
val* nitc___nitc__Lexer___next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var_result /* var result: Token */;
{
var1 = nitc___nitc__Lexer___peek(self);
}
var_result = var1;
self->attrs[COLOR_nitc__lexer_work__Lexer___token].val = ((val*)NULL); /* _token on <self:Lexer> */
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer_work$Lexer$get_token for (self: Lexer): nullable Token */
val* nitc___nitc__Lexer___get_token(val* self) {
val* var /* : nullable Token */;
long var_dfa_state /* var dfa_state: Int */;
long var1 /* : Int */;
long var_sp /* var sp: Int */;
long var_start_stream_pos /* var start_stream_pos: Int */;
long var2 /* : Int */;
long var_start_pos /* var start_pos: Int */;
long var3 /* : Int */;
long var_start_line /* var start_line: Int */;
val* var4 /* : SourceFile */;
val* var6 /* : SourceFile */;
val* var_file /* var file: SourceFile */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var_string /* var string: String */;
long var10 /* : Int */;
long var_string_len /* var string_len: Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var_accept_state /* var accept_state: Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_accept_token /* var accept_token: Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_accept_length /* var accept_length: Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_accept_pos /* var accept_pos: Int */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_accept_line /* var accept_line: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var32 /* : Int */;
uint32_t var33 /* : Char */;
long var34 /* : Int */;
long var36 /* : Int */;
long var_c /* var c: Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var52 /* : Int */;
long var_line /* var line: Int */;
long var53 /* : Int */;
long var_pos /* var pos: Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : Array[Int] */;
val* var59 /* : Array[Int] */;
val* var60 /* : nullable Object */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
val* var68 /* : Array[Int] */;
val* var70 /* : Array[Int] */;
val* var71 /* : nullable Object */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
val* var82 /* : Array[Int] */;
val* var84 /* : Array[Int] */;
val* var85 /* : nullable Object */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
long var_old_state /* var old_state: Int */;
long var93 /* : Int */;
long var95 /* : Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
short int var102 /* : Bool */;
long var103 /* : Int */;
long var105 /* : Int */;
long var106 /* : Int */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
long var112 /* : Int */;
long var113 /* : Int */;
long var115 /* : Int */;
long var_low /* var low: Int */;
long var116 /* : Int */;
long var118 /* : Int for extern */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
long var_high /* var high: Int */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
int cltype136;
int idtype137;
const char* var_class_name138;
short int var139 /* : Bool */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
long var147 /* : Int */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
const char* var_class_name152;
long var153 /* : Int */;
long var_middle /* var middle: Int */;
long var154 /* : Int */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
long var160 /* : Int */;
long var161 /* : Int */;
short int var163 /* : Bool */;
int cltype164;
int idtype165;
const char* var_class_name166;
long var167 /* : Int */;
long var_offset /* var offset: Int */;
long var168 /* : Int */;
long var170 /* : Int for extern */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
short int var177 /* : Bool */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
long var185 /* : Int */;
short int var187 /* : Bool */;
int cltype188;
int idtype189;
const char* var_class_name190;
long var191 /* : Int */;
long var192 /* : Int */;
long var194 /* : Int for extern */;
short int var195 /* : Bool */;
short int var197 /* : Bool */;
int cltype198;
int idtype199;
const char* var_class_name200;
short int var201 /* : Bool */;
long var202 /* : Int */;
short int var204 /* : Bool */;
int cltype205;
int idtype206;
const char* var_class_name207;
long var208 /* : Int */;
long var209 /* : Int */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
const char* var_class_name214;
long var215 /* : Int */;
long var216 /* : Int */;
long var218 /* : Int for extern */;
long var219 /* : Int */;
long var221 /* : Int */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
int cltype225;
int idtype226;
const char* var_class_name227;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
int cltype233;
int idtype234;
const char* var_class_name235;
short int var236 /* : Bool */;
long var237 /* : Int */;
long var239 /* : Int for extern */;
long var_tok /* var tok: Int */;
long var240 /* : Int */;
long var242 /* : Int */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
long var247 /* : Int */;
short int var249 /* : Bool */;
int cltype250;
int idtype251;
const char* var_class_name252;
long var253 /* : Int */;
long var254 /* : Int */;
long var255 /* : Int */;
long var256 /* : Int */;
long var258 /* : Int */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
long var263 /* : Int */;
short int var265 /* : Bool */;
int cltype266;
int idtype267;
const char* var_class_name268;
long var269 /* : Int */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : Location */;
long var274 /* : Int */;
short int var276 /* : Bool */;
int cltype277;
int idtype278;
const char* var_class_name279;
long var280 /* : Int */;
long var281 /* : Int */;
short int var283 /* : Bool */;
int cltype284;
int idtype285;
const char* var_class_name286;
long var287 /* : Int */;
long var288 /* : Int */;
short int var290 /* : Bool */;
int cltype291;
int idtype292;
const char* var_class_name293;
long var294 /* : Int */;
val* var_location /* var location: Location */;
val* var295 /* : Token */;
val* var296 /* : Location */;
long var297 /* : Int */;
short int var299 /* : Bool */;
int cltype300;
int idtype301;
const char* var_class_name302;
long var303 /* : Int */;
long var304 /* : Int */;
short int var306 /* : Bool */;
int cltype307;
int idtype308;
const char* var_class_name309;
long var310 /* : Int */;
long var311 /* : Int */;
short int var313 /* : Bool */;
int cltype314;
int idtype315;
const char* var_class_name316;
long var317 /* : Int */;
long var318 /* : Int */;
short int var320 /* : Bool */;
int cltype321;
int idtype322;
const char* var_class_name323;
long var324 /* : Int */;
val* var_location325 /* var location: Location */;
short int var326 /* : Bool */;
short int var328 /* : Bool */;
int cltype329;
int idtype330;
const char* var_class_name331;
short int var332 /* : Bool */;
long var333 /* : Int */;
short int var335 /* : Bool */;
int cltype336;
int idtype337;
const char* var_class_name338;
long var339 /* : Int */;
val* var340 /* : Text */;
val* var_text /* var text: String */;
val* var341 /* : ALexerError */;
val* var342 /* : NativeArray[String] */;
static val* varonce;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : CString */;
val* var346 /* : String */;
val* var347 /* : nullable Int */;
val* var348 /* : nullable Int */;
val* var349 /* : nullable Bool */;
val* var350 /* : nullable Bool */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Bool */;
val* var358 /* : nullable Bool */;
val* var359 /* : String */;
val* var_token /* var token: ALexerError */;
val* var361 /* : EOF */;
val* var_token362 /* var token: EOF */;
var_dfa_state = 0l;
var1 = self->attrs[COLOR_nitc__lexer_work__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var_sp = var1;
var_start_stream_pos = var_sp;
var2 = self->attrs[COLOR_nitc__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_start_pos = var2;
var3 = self->attrs[COLOR_nitc__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_start_line = var3;
{
{ /* Inline lexer_work$Lexer$file (self) on <self:Lexer> */
var6 = self->attrs[COLOR_nitc__lexer_work__Lexer___file].val; /* _file on <self:Lexer> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 90);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_file = var4;
{
{ /* Inline location$SourceFile$string (var_file) on <var_file:SourceFile> */
var9 = var_file->attrs[COLOR_nitc__location__SourceFile___string].val; /* _string on <var_file:SourceFile> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 25);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_string = var7;
{
var10 = ((long(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__length]))(var_string); /* length on <var_string:String>*/
}
var_string_len = var10;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var13 = -1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_accept_state = var11;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var16 = -1l;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_accept_token = var14;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var19 = -1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_accept_length = var17;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var22 = -1l;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_accept_pos = var20;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var25 = -1l;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_accept_line = var23;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_sp,var_string_len) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_string_len:Int> isa OTHER */
/* <var_string_len:Int> isa OTHER */
var28 = 1; /* easy <var_string_len:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var29 = var_sp >= var_string_len;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var32 = -1l;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_dfa_state = var30;
} else {
{
var33 = ((uint32_t(*)(val* self, long p0))(var_string->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_string, var_sp); /* [] on <var_string:String>*/
}
{
{ /* Inline kernel$Char$code_point (var33) on <var33:Char> */
var36 = (long)var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_c = var34;
{
{ /* Inline kernel$Int$>= (var_c,256l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <256l:Int> isa OTHER */
/* <256l:Int> isa OTHER */
var39 = 1; /* easy <256l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var43 = var_c >= 256l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
var_c = 255l;
} else {
}
{
{ /* Inline kernel$Int$+ (var_sp,1l) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_sp + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_sp = var44;
var51 = self->attrs[COLOR_nitc__lexer_work__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var51;
var52 = self->attrs[COLOR_nitc__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var52;
var53 = self->attrs[COLOR_nitc__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var53;
{
{ /* Inline kernel$Int$== (var_c,10l) on <var_c:Int> */
var56 = var_c == 10l;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
if (var_cr){
var_cr = 0;
{
{ /* Inline location$SourceFile$line_starts (var_file) on <var_file:SourceFile> */
var59 = var_file->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = (val*)(var_sp<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var57, var_line, var60); /* Direct call array$Array$[]= on <var57:Array[Int]>*/
}
} else {
{
{ /* Inline kernel$Int$+ (var_line,1l) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_line + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_line = var61;
var_pos = 0l;
{
{ /* Inline location$SourceFile$line_starts (var_file) on <var_file:SourceFile> */
var70 = var_file->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = (val*)(var_sp<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var68, var_line, var71); /* Direct call array$Array$[]= on <var68:Array[Int]>*/
}
}
} else {
{
{ /* Inline kernel$Int$== (var_c,13l) on <var_c:Int> */
var74 = var_c == 13l;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
{
{ /* Inline kernel$Int$+ (var_line,1l) on <var_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var77 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var81 = var_line + 1l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_line = var75;
var_pos = 0l;
var_cr = 1;
{
{ /* Inline location$SourceFile$line_starts (var_file) on <var_file:SourceFile> */
var84 = var_file->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var_file:SourceFile> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = (val*)(var_sp<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var82, var_line, var85); /* Direct call array$Array$[]= on <var82:Array[Int]>*/
}
} else {
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var88 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var92 = var_pos + 1l;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_pos = var86;
var_cr = 0;
}
}
for(;;) {
var_old_state = var_dfa_state;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var95 = -1l;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_dfa_state,var93) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var93:Int> isa OTHER */
/* <var93:Int> isa OTHER */
var98 = 1; /* easy <var93:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var102 = var_dfa_state < var93;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
{
{ /* Inline kernel$Int$unary - (2l) on <2l:Int> */
var105 = -2l;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var103,var_dfa_state) on <var103:Int> */
/* Covariant cast for argument 0 (i) <var_dfa_state:Int> isa OTHER */
/* <var_dfa_state:Int> isa OTHER */
var108 = 1; /* easy <var_dfa_state:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var112 = var103 - var_dfa_state;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var_old_state = var106;
} else {
}
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var115 = -1l;
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
var_dfa_state = var113;
var_low = 0l;
{
{ /* Inline tables$TablesCapable$lexer_goto (self,var_old_state,0l) on <self:Lexer> */
var118 = lexer_goto(self, var_old_state, 0l);
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var116,1l) on <var116:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var121 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var125 = var116 - 1l;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var_high = var119;
{
{ /* Inline kernel$Int$>= (var_high,0l) on <var_high:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var128 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var132 = var_high >= 0l;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
if (var126){
for(;;) {
{
{ /* Inline kernel$Int$<= (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var135 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var135)) {
var_class_name138 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name138);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var139 = var_low <= var_high;
var133 = var139;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
if (var133){
{
{ /* Inline kernel$Int$+ (var_low,var_high) on <var_low:Int> */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var142 = 1; /* easy <var_high:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var146 = var_low + var_high;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline kernel$Int$/ (var140,2l) on <var140:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var149 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var149)) {
var_class_name152 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name152);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var153 = var140 / 2l;
var147 = var153;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
var_middle = var147;
{
{ /* Inline kernel$Int$* (var_middle,3l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var156 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var156)) {
var_class_name159 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var160 = var_middle * 3l;
var154 = var160;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var154,1l) on <var154:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var163 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var163)) {
var_class_name166 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name166);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var167 = var154 + 1l;
var161 = var167;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var_offset = var161;
{
{ /* Inline tables$TablesCapable$lexer_goto (self,var_old_state,var_offset) on <self:Lexer> */
var170 = lexer_goto(self, var_old_state, var_offset);
var168 = var170;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_c,var168) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var168:Int> isa OTHER */
/* <var168:Int> isa OTHER */
var173 = 1; /* easy <var168:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var177 = var_c < var168;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
if (var171){
{
{ /* Inline kernel$Int$- (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var180 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var184 = var_middle - 1l;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var_high = var178;
} else {
{
{ /* Inline kernel$Int$+ (var_offset,1l) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var187 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var187)) {
var_class_name190 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name190);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var191 = var_offset + 1l;
var185 = var191;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline tables$TablesCapable$lexer_goto (self,var_old_state,var185) on <self:Lexer> */
var194 = lexer_goto(self, var_old_state, var185);
var192 = var194;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var_c,var192) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var192:Int> isa OTHER */
/* <var192:Int> isa OTHER */
var197 = 1; /* easy <var192:Int> isa OTHER*/
if (unlikely(!var197)) {
var_class_name200 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name200);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var201 = var_c > var192;
var195 = var201;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
}
if (var195){
{
{ /* Inline kernel$Int$+ (var_middle,1l) on <var_middle:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var204 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var204)) {
var_class_name207 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name207);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var208 = var_middle + 1l;
var202 = var208;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
var_low = var202;
} else {
{
{ /* Inline kernel$Int$+ (var_offset,2l) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var211 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var211)) {
var_class_name214 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name214);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var215 = var_offset + 2l;
var209 = var215;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
}
{
{ /* Inline tables$TablesCapable$lexer_goto (self,var_old_state,var209) on <self:Lexer> */
var218 = lexer_goto(self, var_old_state, var209);
var216 = var218;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
var_dfa_state = var216;
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
{
{ /* Inline kernel$Int$unary - (2l) on <2l:Int> */
var221 = -2l;
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var_dfa_state,var219) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <var219:Int> isa OTHER */
/* <var219:Int> isa OTHER */
var224 = 1; /* easy <var219:Int> isa OTHER*/
if (unlikely(!var224)) {
var_class_name227 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name227);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var228 = var_dfa_state > var219;
var222 = var228;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
}
if (var222){
goto BREAK_label229;
} else {
}
}
BREAK_label229: (void)0;
self->attrs[COLOR_nitc__lexer_work__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_nitc__lexer_work__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_nitc__lexer_work__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
{
{ /* Inline kernel$Int$>= (var_dfa_state,0l) on <var_dfa_state:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var232 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var232)) {
var_class_name235 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name235);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var236 = var_dfa_state >= 0l;
var230 = var236;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
}
if (var230){
{
{ /* Inline tables$TablesCapable$lexer_accept (self,var_dfa_state) on <self:Lexer> */
var239 = lexer_accept(self, var_dfa_state);
var237 = var239;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_tok = var237;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var242 = -1l;
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_tok,var240) on <var_tok:Int> */
var245 = var_tok == var240;
var246 = !var245;
var243 = var246;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
if (var243){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{
{ /* Inline kernel$Int$- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var249 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var249)) {
var_class_name252 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name252);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var253 = var_sp - var_start_stream_pos;
var247 = var253;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
var_accept_length = var247;
var254 = self->attrs[COLOR_nitc__lexer_work__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var254;
var255 = self->attrs[COLOR_nitc__lexer_work__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var255;
} else {
}
} else {
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var258 = -1l;
var256 = var258;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_accept_state,var256) on <var_accept_state:Int> */
var261 = var_accept_state == var256;
var262 = !var261;
var259 = var262;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
}
if (var259){
self->attrs[COLOR_nitc__lexer_work__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_nitc__lexer_work__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{
{ /* Inline kernel$Int$+ (var_start_stream_pos,var_accept_length) on <var_start_stream_pos:Int> */
/* Covariant cast for argument 0 (i) <var_accept_length:Int> isa OTHER */
/* <var_accept_length:Int> isa OTHER */
var265 = 1; /* easy <var_accept_length:Int> isa OTHER*/
if (unlikely(!var265)) {
var_class_name268 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name268);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var269 = var_start_stream_pos + var_accept_length;
var263 = var269;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
}
self->attrs[COLOR_nitc__lexer_work__Lexer___stream_pos].l = var263; /* _stream_pos on <self:Lexer> */
{
{ /* Inline kernel$Int$== (var_accept_token,0l) on <var_accept_token:Int> */
var272 = var_accept_token == 0l;
var270 = var272;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
}
if (var270){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var273 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline kernel$Int$+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var276 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var276)) {
var_class_name279 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name279);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var280 = var_start_line + 1l;
var274 = var280;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_accept_line,1l) on <var_accept_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var283 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var283)) {
var_class_name286 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name286);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var287 = var_accept_line + 1l;
var281 = var287;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var290 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var290)) {
var_class_name293 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name293);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var294 = var_start_pos + 1l;
var288 = var294;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var273->class->vft[COLOR_nitc__location__Location__file_61d]))(var273, var_file); /* file= on <var273:Location>*/
}
{
((void(*)(val* self, long p0))(var273->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var273, var274); /* line_start= on <var273:Location>*/
}
{
((void(*)(val* self, long p0))(var273->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var273, var281); /* line_end= on <var273:Location>*/
}
{
((void(*)(val* self, long p0))(var273->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var273, var288); /* column_start= on <var273:Location>*/
}
{
((void(*)(val* self, long p0))(var273->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var273, var_accept_pos); /* column_end= on <var273:Location>*/
}
{
((void(*)(val* self))(var273->class->vft[COLOR_core__kernel__Object__init]))(var273); /* init on <var273:Location>*/
}
var_location = var273;
{
var295 = nitc__lexer___Lexer___make_token(self, var_accept_token, var_location);
}
var = var295;
goto RET_LABEL;
} else {
self->attrs[COLOR_nitc__lexer_work__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var296 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline kernel$Int$+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var299 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var299)) {
var_class_name302 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name302);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var303 = var_start_line + 1l;
var297 = var303;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_start_line,1l) on <var_start_line:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var306 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var306)) {
var_class_name309 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name309);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var310 = var_start_line + 1l;
var304 = var310;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var313 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var313)) {
var_class_name316 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name316);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var317 = var_start_pos + 1l;
var311 = var317;
goto RET_LABEL312;
RET_LABEL312:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_start_pos,1l) on <var_start_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var320 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var320)) {
var_class_name323 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name323);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var324 = var_start_pos + 1l;
var318 = var324;
goto RET_LABEL319;
RET_LABEL319:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var296->class->vft[COLOR_nitc__location__Location__file_61d]))(var296, var_file); /* file= on <var296:Location>*/
}
{
((void(*)(val* self, long p0))(var296->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var296, var297); /* line_start= on <var296:Location>*/
}
{
((void(*)(val* self, long p0))(var296->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var296, var304); /* line_end= on <var296:Location>*/
}
{
((void(*)(val* self, long p0))(var296->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var296, var311); /* column_start= on <var296:Location>*/
}
{
((void(*)(val* self, long p0))(var296->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var296, var318); /* column_end= on <var296:Location>*/
}
{
((void(*)(val* self))(var296->class->vft[COLOR_core__kernel__Object__init]))(var296); /* init on <var296:Location>*/
}
var_location325 = var296;
{
{ /* Inline kernel$Int$> (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var328 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var328)) {
var_class_name331 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name331);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var332 = var_sp > var_start_stream_pos;
var326 = var332;
goto RET_LABEL327;
RET_LABEL327:(void)0;
}
}
if (var326){
{
{ /* Inline kernel$Int$- (var_sp,var_start_stream_pos) on <var_sp:Int> */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var335 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (unlikely(!var335)) {
var_class_name338 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name338);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var339 = var_sp - var_start_stream_pos;
var333 = var339;
goto RET_LABEL334;
RET_LABEL334:(void)0;
}
}
{
var340 = ((val*(*)(val* self, long p0, long p1))(var_string->class->vft[COLOR_core__abstract_text__Text__substring]))(var_string, var_start_stream_pos, var333); /* substring on <var_string:String>*/
}
var_text = var340;
var341 = NEW_nitc__ALexerError(&type_nitc__ALexerError);
if (unlikely(varonce==NULL)) {
var342 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "Syntax Error: unknown token `";
var347 = (val*)(29l<<2|1);
var348 = (val*)(29l<<2|1);
var349 = (val*)((long)(0)<<2|3);
var350 = (val*)((long)(0)<<2|3);
var346 = core__flat___CString___to_s_unsafe(var345, var347, var348, var349, var350);
var344 = var346;
varonce343 = var344;
}
((struct instance_core__NativeArray*)var342)->values[0]=var344;
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "`.";
var355 = (val*)(2l<<2|1);
var356 = (val*)(2l<<2|1);
var357 = (val*)((long)(0)<<2|3);
var358 = (val*)((long)(0)<<2|3);
var354 = core__flat___CString___to_s_unsafe(var353, var355, var356, var357, var358);
var352 = var354;
varonce351 = var352;
}
((struct instance_core__NativeArray*)var342)->values[2]=var352;
} else {
var342 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var342)->values[1]=var_text;
{
var359 = ((val*(*)(val* self))(var342->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var342); /* native_to_s on <var342:NativeArray[String]>*/
}
varonce = var342;
{
nitc__lexer_work___ALexerError___init_lexer_error(var341, var359, var_location325, var_text); /* Direct call lexer_work$ALexerError$init_lexer_error on <var341:ALexerError>*/
}
var_token = var341;
{
{ /* Inline parser_nodes$SourceFile$last_token= (var_file,var_token) on <var_file:SourceFile> */
var_file->attrs[COLOR_nitc__parser_nodes__SourceFile___last_token].val = var_token; /* _last_token on <var_file:SourceFile> */
RET_LABEL360:(void)0;
}
}
var = var_token;
goto RET_LABEL;
} else {
var361 = NEW_nitc__EOF(&type_nitc__EOF);
{
nitc__lexer_work___EOF___init_tk(var361, var_location325); /* Direct call lexer_work$EOF$init_tk on <var361:EOF>*/
}
var_token362 = var361;
{
{ /* Inline parser_nodes$SourceFile$last_token= (var_file,var_token362) on <var_file:SourceFile> */
var_file->attrs[COLOR_nitc__parser_nodes__SourceFile___last_token].val = var_token362; /* _last_token on <var_file:SourceFile> */
RET_LABEL363:(void)0;
}
}
var = var_token362;
goto RET_LABEL;
}
}
}
}
RET_LABEL:;
return var;
}
/* method lexer_work$Lexer$init for (self: Lexer) */
void nitc___nitc__Lexer___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Lexer___core__kernel__Object__init]))(self); /* init on <self:Lexer>*/
}
RET_LABEL:;
}
