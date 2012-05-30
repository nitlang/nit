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

#undef _POSIX_SOURCE
#define _POSIX_SOURCE 1
#include <signal.h>
#include <stdio.h>

#include "signals.nit.h"

/*
	Structure to manage each possible signals
	are used in an array of 32 maximum signals.
	This array is global to the software.
*/
struct nit_signals_ent {
	char raised; /* !=0 if has been raised */
	SignalHandler handler; /* instance to receive call */
	char safely; /* if !=0 then manage signal safely, otherwise react when raised */
} nit_signals_list[32] = {0x0};

/* Receiver to all signals
	If unsafe, it calls directly the Nit receiver,
	otherwise it marks the signal as raised and returns.
*/
void receiver( int sig )
{
	if ( sig < 32 && sig >=0 )
	{
		if ( nit_signals_list[sig].safely ) {
			nit_signals_list[ sig ].raised += 1;
		} else {
			SignalHandler_receive_signal( nit_signals_list[ sig ].handler, sig );
		}
	}
}

/*
C implementation of signals::SignalHandler::handle_signal

Imported methods signatures:
	void SignalHandler_receive_signal( SignalHandler recv, bigint signal ) for signals::SignalHandler::receive_signal
*/
void SignalHandler_handle_signal___impl( SignalHandler recv, bigint signal, int safely )
{
	SignalHandler last_handler;
	if ( signal < 32 && signal >=0 ) {
		struct sigaction act;
		sigemptyset(&act.sa_mask);
		act.sa_flags = 0;
		act.sa_handler = receiver;

		sigaction(signal, &act, NULL);

		last_handler = nit_signals_list[signal].handler;
		if ( last_handler != NULL )
			SignalHandler_decr_ref( last_handler );

		nit_signals_list[signal].handler = recv;
		SignalHandler_incr_ref( recv );

		nit_signals_list[signal].safely = safely;
	}
}

/*
C implementation of signals::SignalHandler::ignore_signal
*/
void SignalHandler_ignore_signal___impl( SignalHandler recv, bigint signal )
{
	SignalHandler last_handler;
	if ( signal < 32 && signal >=0 ) {
		struct sigaction act;
		sigemptyset(&act.sa_mask);
		act.sa_flags = 0;
		act.sa_handler = SIG_IGN;
		sigaction(signal, &act, NULL);

		last_handler = nit_signals_list[signal].handler;
		if ( last_handler != NULL )
			SignalHandler_decr_ref( last_handler );
	}
}

/*
C implementation of signals::SignalHandler::default_signal
*/
void SignalHandler_default_signal___impl( SignalHandler recv, bigint signal )
{
	SignalHandler last_handler;
	if ( signal < 32 && signal >=0 ) {
		struct sigaction act;
		sigemptyset(&act.sa_mask);
		act.sa_flags = 0;
		act.sa_handler = SIG_DFL;
		sigaction(signal, &act, NULL);

		last_handler = nit_signals_list[signal].handler;
		if ( last_handler != NULL )
			SignalHandler_decr_ref( last_handler );
	}
}

void Object_set_alarm___impl( Object recv, bigint sec )
{
	alarm( sec );
}

/*
C implementation of signals::Object::check_signals

Imported methods signatures:
	void SignalHandler_receive_signal( SignalHandler recv, bigint signal ) for signals::SignalHandler::receive_signal
*/
int Object_check_signals___impl( Object recv )
{
	int sig;
	int raised_something = 0;

	for ( sig = 0; sig < 32; sig ++ )
		if ( nit_signals_list[sig].raised ) {
			nit_signals_list[sig].raised = 0;
			raised_something = 1;
			SignalHandler_receive_signal( nit_signals_list[sig].handler, sig );
		}

	return raised_something;
}
