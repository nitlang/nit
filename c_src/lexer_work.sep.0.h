#include "nit.common.h"
#define COLOR_lexer_work__Token___text 4
#define COLOR_kernel__Object___61d_61d 2
val* parser_nodes__ANode__location(val* self);
val* location__Location__text(val* self);
val* lexer_work__Token__text(val* self);
long lexer_work__EOF__parser_index(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
#define COLOR_parser_nodes__ANode___location 0
void lexer_work__EOF__init_tk(val* self, val* p0);
#define COLOR_lexer_work__AError___message 5
void lexer_work__AError__init_error(val* self, val* p0, val* p1);
#define COLOR_lexer_work__ALexerError___string 6
void lexer_work__ALexerError__init_lexer_error(val* self, val* p0, val* p1, val* p2);
#define COLOR_lexer_work__AParserError___token 6
void lexer_work__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2);
#define COLOR_lexer_work__Lexer___file 2
void lexer_work__Lexer__init(val* self, val* p0);
#define COLOR_lexer_work__Lexer___last_token 7
#define COLOR_lexer_work__Lexer___token 0
val* lexer_work__Lexer__get_token(val* self);
#define COLOR_parser_nodes__Token___next_token 3
#define COLOR_parser_nodes__Token___prev_token 2
#define COLOR_parser_nodes__SourceFile___first_token 3
val* lexer_work__Lexer__peek(val* self);
val* lexer_work__Lexer__next(val* self);
#define COLOR_lexer_work__Lexer___stream_pos 3
#define COLOR_lexer_work__Lexer___pos 5
#define COLOR_lexer_work__Lexer___line 4
#define COLOR_location__SourceFile___string 1
#define COLOR_string__FlatText___length 3
extern const struct type type_kernel__Int;
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__SequenceRead___91d_93d 39
#define COLOR_lexer_work__Lexer___cr 6
#define COLOR_location__SourceFile___line_starts 2
val* BOX_kernel__Int(long);
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
#include "tables_nit.h"
val* NEW_location__Location(const struct type* type);
extern const struct type type_location__Location;
void location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4);
val* lexer__Lexer__make_token(val* self, long p0, val* p1);
val* string__FlatString__substring(val* self, long p0, long p1);
val* NEW_parser_nodes__ALexerError(const struct type* type);
extern const struct type type_parser_nodes__ALexerError;
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
#define COLOR_parser_nodes__SourceFile___last_token 4
val* NEW_parser_nodes__EOF(const struct type* type);
extern const struct type type_parser_nodes__EOF;
