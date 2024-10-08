#ifndef TABLE_NIT_H
#define TABLE_NIT_H
/* This file is part of NIT ( https://nitlanguage.org ).
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

extern const int* const lexer_goto_table[];
extern const int lexer_accept_table[];

#define lexer_goto(o,i,j) (lexer_goto_table[(i)][(j)])
#define lexer_accept(o,i) (lexer_accept_table[(i)])

extern const int* const parser_action_table[];
extern const int* const parser_goto_table[];

#define parser_action(o,i,j) (parser_action_table[(i)][(j)])
#define parser_goto(o,i,j) (parser_goto_table[(i)][(j)])

#endif
