# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2013 Jean-Philippe Caissy <jpcaissy@piji.ca>
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Low-level wrapper around the libevent library to manage events on file descriptors
#
# For mor information, refer to the libevent documentation at
# http://monkey.org/~provos/libevent/doxygen-2.0.1/
module libevent is pkgconfig("libevent")

in "C header" `{
	#include <sys/stat.h>
	#include <sys/types.h>
	#include <fcntl.h>
	#include <errno.h>
	#include <sys/socket.h>

	#include <event2/listener.h>
	#include <event2/bufferevent.h>
	#include <event2/buffer.h>
`}

in "C" `{
	// Callback forwarded to 'Connection.write_callback'
	static void c_write_cb(struct bufferevent *bev, Connection ctx) {
		Connection_write_callback(ctx);
	}

	// Callback forwarded to 'Connection.read_callback_native'
	static void c_read_cb(struct bufferevent *bev, Connection ctx)
	{
		// TODO move to Nit code
		struct evbuffer *input = bufferevent_get_input(bev);
		size_t len = evbuffer_get_length(input);
		char* cstr = malloc(len);
		evbuffer_remove(input, cstr, len);
		Connection_read_callback_native(ctx, cstr, len);
	}

	// Callback forwarded to 'Connection.event_callback'
	static void c_event_cb(struct bufferevent *bev, short events, Connection ctx)
	{
		Connection_event_callback(ctx, events);

		// TODO move to Nit code
		if (events & BEV_EVENT_ERROR)
			perror("Error from bufferevent");
		if (events & (BEV_EVENT_EOF | BEV_EVENT_ERROR)) {
			bufferevent_free(bev);
			Connection_decr_ref(ctx);
		}
	}

	// Callback fowarded to 'ConnectionFactory.spawn_connection'
	static void accept_conn_cb(struct evconnlistener *listener, evutil_socket_t fd,
		struct sockaddr *address, int socklen, ConnectionFactory ctx)
	{
		// TODO move to Nit code
		struct event_base *base = evconnlistener_get_base(listener);
		struct bufferevent *bev = bufferevent_socket_new(base, fd, BEV_OPT_CLOSE_ON_FREE);

		Connection nit_con = ConnectionFactory_spawn_connection(ctx, bev);
		Connection_incr_ref(nit_con);

		bufferevent_setcb(bev,
			(bufferevent_data_cb)c_read_cb,
			(bufferevent_data_cb)c_write_cb,
			(bufferevent_event_cb)c_event_cb, nit_con);
		bufferevent_enable(bev, EV_READ|EV_WRITE);
	}
`}

# Structure to hold information and state for a Libevent dispatch loop.
#
# The event_base lies at the center of Libevent; every application will
# have one.  It keeps track of all pending and active events, and
# notifies your application of the active ones.
extern class NativeEventBase `{ struct event_base * `}

	# Create a new event_base to use with the rest of Libevent
	new `{ return event_base_new(); `}

	# Has `self` been correctly initialized?
	fun is_valid: Bool do return not address_is_null

	# Event dispatching loop
	#
	# This loop will run the event base until either there are no more added
	# events, or until something calls `exit_loop`.
	fun dispatch `{ event_base_dispatch(recv); `}

	# Exit the event loop
	#
	# TODO support timer
	fun exit_loop `{ event_base_loopexit(recv, NULL); `}

	# Destroy this instance
	fun destroy `{ event_base_free(recv); `}
end

# Spawned to manage a specific connection
#
# TODO, use polls
class Connection
	# Closing this connection has been requested, but may not yet be `closed`
	var close_requested = false

	# This connection is closed
	var closed = false

	# The native libevent linked to `self`
	var native_buffer_event: NativeBufferEvent

	# Close this connection if possible, otherwise mark it to be closed later
	fun close
	do
		var success = native_buffer_event.destroy
		close_requested = true
		closed = success
	end

	# Callback method on a write event
	fun write_callback
	do
		if close_requested and not closed then close
	end

	private fun read_callback_native(cstr: NativeString, len: Int)
	do
		read_callback(cstr.to_s_with_length(len))
	end

	# Callback method when data is available to read
	fun read_callback(content: String)
	do
		if close_requested and not closed then close
	end

	# Callback method on events
	fun event_callback(events: Int) do end

	# Write a string to the connection
	fun write(str: String)
	do
		native_buffer_event.write(str.to_cstring, str.length)
	end

	# Write a file to the connection
	#
	# require: `path.file_exists`
	fun write_file(path: String)
	do
		assert path.file_exists

		var file = new IFStream.open(path)
		var output = native_buffer_event.output_buffer
		var fd = file.fd
		var length = file.file_stat.size

		output.add_file(fd, 0, length)
	end
end

# A buffer event structure, strongly associated to a connection, an input buffer and an output_buffer
extern class NativeBufferEvent `{ struct bufferevent * `}
	# Write `length` bytes of `line`
	fun write(line: NativeString, length: Int): Int `{
		return bufferevent_write(recv, line, length);
	`}

	# Check if we have anything left in our buffers. If so, we set our connection to be closed
	# on a callback. Otherwise we close it and free it right away.
	fun destroy: Bool `{
		struct evbuffer* out = bufferevent_get_output(recv);
		struct evbuffer* in = bufferevent_get_input(recv);
		if(evbuffer_get_length(in) > 0 || evbuffer_get_length(out) > 0) {
			return 0;
		} else {
			bufferevent_free(recv);
			return 1;
		}
	`}

	# The output buffer associated to `self`
	fun output_buffer: OutputNativeEvBuffer `{ return bufferevent_get_output(recv); `}

	# The input buffer associated to `self`
	fun input_buffer: InputNativeEvBuffer `{ return bufferevent_get_input(recv); `}
end

# A single buffer
extern class NativeEvBuffer `{ struct evbuffer * `}
	# Length of data in this buffer
	fun length: Int `{ return evbuffer_get_length(recv); `}
end

# An input buffer
extern class InputNativeEvBuffer
	super NativeEvBuffer

	# Empty/clear `length` data from buffer
	fun drain(length: Int) `{ evbuffer_drain(recv, length); `}
end

# An output buffer
extern class OutputNativeEvBuffer
	super NativeEvBuffer

	# Add file to buffer
	fun add_file(fd, offset, length: Int): Bool `{
		return evbuffer_add_file(recv, fd, offset, length);
	`}
end

# A listener acting on an interface and port, spawns `Connection` on new connections
extern class ConnectionListener `{ struct evconnlistener * `}

	private new bind_to(base: NativeEventBase, address: NativeString, port: Int, factory: ConnectionFactory)
	import ConnectionFactory.spawn_connection, error_callback, Connection.read_callback_native,
	Connection.write_callback, Connection.event_callback `{

		struct sockaddr_in sin;
		struct evconnlistener *listener;
		ConnectionFactory_incr_ref(factory);

		struct hostent *hostent = gethostbyname(address);

		memset(&sin, 0, sizeof(sin));
		sin.sin_family = hostent->h_addrtype;
		sin.sin_port = htons(port);
		memcpy( &(sin.sin_addr.s_addr), (const void*)hostent->h_addr, hostent->h_length );

		listener = evconnlistener_new_bind(base,
			(evconnlistener_cb)accept_conn_cb, factory,
			LEV_OPT_CLOSE_ON_FREE | LEV_OPT_REUSEABLE, -1,
			(struct sockaddr*)&sin, sizeof(sin));

		if (listener != NULL) {
			evconnlistener_set_error_cb(listener, (evconnlistener_errorcb)ConnectionListener_error_callback);
		}

		return listener;
	`}

	# Get the `NativeEventBase` associated to `self`
	fun base: NativeEventBase `{ return evconnlistener_get_base(recv); `}

	# Callback method on listening error
	fun error_callback do
		var cstr = socket_error
		sys.stderr.write "libevent error: '{cstr}'"
	end

	# Error with sockets
	fun socket_error: NativeString `{
		// TODO move to Nit and maybe NativeEventBase
		int err = EVUTIL_SOCKET_ERROR();
		return evutil_socket_error_to_string(err);
	`}
end

# Factory to listen on sockets and create new `Connection`
class ConnectionFactory
	# The `NativeEventBase` for the dispatch loop of this factory
	var event_base: NativeEventBase

	# On new connection, create the handler `Connection` object
	fun spawn_connection(nat_buf_ev: NativeBufferEvent): Connection
	do
		return new Connection(nat_buf_ev)
	end

	# Listen on `address`:`port` for new connection, which will callback `spawn_connection`
	fun bind_to(address: String, port: Int): nullable ConnectionListener
	do
		var listener = new ConnectionListener.bind_to(event_base, address.to_cstring, port, self)
		if listener.address_is_null then
			sys.stderr.write "libevent warning: Opening {address}:{port} failed\n"
		end
		return listener
	end
end
