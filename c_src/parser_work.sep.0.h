#include "nit.common.h"
#define COLOR_parser_work__State___state 0
#define COLOR_parser_work__State___nodes 1
void parser_work__State__init(val* self, long p0, val* p1);
#define COLOR_parser_work__Parser___lexer 0
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayparser_work__State;
#define COLOR_kernel__Object__init 7
#define COLOR_parser_work__Parser___stack 1
#define COLOR_parser_work__Parser___stack_pos 2
void parser__Parser__build_reduce_table(val* self);
void parser_work__Parser__init(val* self, val* p0);
long parser_work__Parser__state(val* self);
#include "tables_nit.h"
extern const struct type type_kernel__Int;
long parser_work__Parser__go_to(val* self, long p0);
#define COLOR_array__AbstractArrayRead___length 0
val* array__Array___91d_93d(val* self, long p0);
val* NEW_parser_work__State(const struct type* type);
extern const struct type type_parser_work__State;
void array__AbstractArray__push(val* self, val* p0);
void parser_work__Parser__push(val* self, long p0, val* p1);
val* parser_work__Parser__pop(val* self);
val* lexer_work__Lexer__peek(val* self);
extern const struct type type_parser_nodes__AError;
val* NEW_parser_nodes__Start(const struct type* type);
extern const struct type type_parser_nodes__Start;
void parser_nodes__Start__init(val* self, val* p0, val* p1);
#define COLOR_lexer_work__Token__parser_index 51
val* lexer_work__Lexer__next(val* self);
#define COLOR_parser_work__Parser___reduce_table 3
#define COLOR_parser_work__ReduceAction__action 31
extern const struct type type_parser_nodes__EOF;
extern const struct type type_parser_nodes__AModule;
val* NEW_parser_work__ComputeProdLocationVisitor(const struct type* type);
extern const struct type type_parser_work__ComputeProdLocationVisitor;
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
#define COLOR_parser_nodes__ANode___location 0
val* NEW_parser_nodes__AParserError(const struct type* type);
extern const struct type type_parser_nodes__AParserError;
val* string__NativeString__to_s_with_length(char* self, long p0);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
void lexer_work__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2);
val* parser_work__Parser__parse(val* self);
val* NEW_parser_work__TextCollectorVisitor(const struct type* type);
extern const struct type type_parser_work__TextCollectorVisitor;
#define COLOR_parser_work__TextCollectorVisitor___text 1
#define COLOR_kernel__Object___61d_61d 2
val* parser_work__Prod__collect_text(val* self);
extern const struct type type_parser_nodes__Token;
#define COLOR_parser_work__ComputeProdLocationVisitor___last_location 3
#define COLOR_parser_work__ComputeProdLocationVisitor___need_first_prods 1
short int array__AbstractArrayRead__is_empty(val* self);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_parser_work__Prod___first_location 3
void array__ArrayIterator__next(val* self);
void array__AbstractArray__clear(val* self);
#define COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons 2
val* NEW_location__Location(const struct type* type);
extern const struct type type_location__Location;
#define COLOR_location__Location___file 0
#define COLOR_location__Location___line_start 1
#define COLOR_location__Location___column_start 3
void location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4);
extern const struct type type_parser_nodes__Prod;
void array__Array__add(val* self, val* p0);
#define COLOR_parser_nodes__ANode__visit_all 39
#define COLOR_location__Location___line_end 2
#define COLOR_location__Location___column_end 4
void parser_work__ComputeProdLocationVisitor__visit(val* self, val* p0);
val* lexer_work__Token__text(val* self);
val* string__FlatString___43d(val* self, val* p0);
void parser_work__TextCollectorVisitor__visit(val* self, val* p0);
void abstract_collection__Sequence__append(val* self, val* p0);
val* parser_work__ReduceAction__concat(val* self, val* p0, val* p1);
#define COLOR_parser_work__ReduceAction___goto 0
void parser_work__ReduceAction__init(val* self, long p0);
