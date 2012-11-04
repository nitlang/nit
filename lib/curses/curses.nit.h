/*
	Extern implementation of Nit module curses
	File initially created by nits to implement extern methods body
*/

#ifndef CURSES_NIT_H
#define CURSES_NIT_H

#include <curses._nitni.h>
#include <curses.h>

#define Window void*
Window new_Window___impl(  );
void Window_mvaddstr___impl( Window recv, bigint y, bigint x, String str );
void Window_refresh___impl( Window recv );
void Window_wclear___impl( Window recv );
void Window_delwin___impl( Window recv );
void Window_endwin___impl( Window recv );
#endif
