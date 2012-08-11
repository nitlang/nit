/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "string_nit.h"

#ifndef NONITCNI
/*
C implementation of string::String::to_f

Imported methods signatures:
	char * String_to_cstring( String recv ) for string::String::to_cstring
*/
float String_to_f___impl( String recv )
{
    float value;
    char *str;
    int read;

    str = String_to_cstring( recv );

    read = sscanf( str, "%f", &value );

    if ( read <= 0 )
    {
        fprintf( stderr, "Failed to convert string \"\" to float." );
        abort();
    }

    return value;
}
#endif
