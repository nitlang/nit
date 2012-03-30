/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#ifndef signals_IMPL_NIT_H
#define signals_IMPL_NIT_H

#include <signals._nitni.h>

void SignalHandler_handle_signal___impl( SignalHandler recv, bigint signal, int safely );
void SignalHandler_ignore_signal___impl( SignalHandler recv, bigint signal );
void SignalHandler_default_signal___impl( SignalHandler recv, bigint signal );
void ObjectSignalHandler_set_alarm___impl( Object recv, bigint sec );
int Object_check_signals___impl( Object recv );

#endif
