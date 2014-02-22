#ifndef __STREAM_NIT_H
#define __STREAM_NIT_H
/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2004-2008 Jean Privat <jean@pryen.org>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include <unistd.h>

int stream_FDStream_FDStream_native_read_char_1(void *s, int fd);

#define stream_FDStream_FDStream_native_close_1(self, p0) (close(p0))
#define stream_FDStream_FDStream_native_read_3(s, i, b, l) read((i), ((b)), ((l)))
#define stream_FDStream_FDStream_native_write_3(s, i, b, l) write((i), ((b)), ((l)))
#define stream_FDStream_FDStream_native_write_char_2(s, i, c) write((i), (char[]){(c)}, 1 )

#endif
