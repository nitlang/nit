# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Matthieu Lucas <lucasmatthieu@gmail.com>
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

# Low-level socket functionalities
module socket_c

in "C Header" `{
	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <string.h>
	#include <sys/socket.h>
	#include <sys/types.h>
	#include <netinet/in.h>
	#include <arpa/inet.h>
	#include <netdb.h>
	#include <sys/poll.h>
`}

in "C" `{
	#include <fcntl.h>
	#include <netinet/tcp.h>
`}

# Wrapper for the data structure used for polling on a socket
class PollFD
	super FinalizableOnce

	# The PollFD object
	private var poll_struct: NativeSocketPollFD

	# A collection of the events to be watched
	var events: Array[NativeSocketPollValues]

	# Create a PollFD object from NativePollFD informations
	init from_poll_values(pid: Int, events: Array[NativeSocketPollValues])
	do
		assert events.length >= 1

		var events_in_one = events[0]

		for i in [1 .. events.length - 1] do
			events_in_one += events[i]
		end

		var poll_struct = new NativeSocketPollFD(pid, events_in_one)

		init(poll_struct, events)
	end

	# Reads the response and returns an array with the type of events that have been found
	private fun check_response(response: Int): Array[NativeSocketPollValues]
	do
		var resp_array = new Array[NativeSocketPollValues]
		for i in events do
			if c_check_resp(response, i) != 0 then
				resp_array.push(i)
			end
		end
		return resp_array
	end

	# Checks if the poll call has returned true for a particular type of event
	private fun c_check_resp(response: Int, mask: NativeSocketPollValues): Int
	`{
		return response & mask;
	`}

	redef fun finalize_once
	do
		poll_struct.free
	end
end

# Data structure used by the poll function
private extern class NativeSocketPollFD `{ struct pollfd * `}

	# File descriptor
	fun fd: Int `{ return self->fd; `}

	# List of events to be watched
	fun events: Int `{ return self->events; `}

	# List of events received by the last poll function
	fun revents: Int `{  return self->revents; `}

	new (pid: Int, events: NativeSocketPollValues) `{
		struct pollfd *poll = malloc(sizeof(struct pollfd));
		poll->fd = pid;
		poll->events = events;
		return poll;
	`}
end

# Native C socket
extern class NativeSocket `{ int* `}

	# Create a new C socket
	new socket(domain: NativeSocketAddressFamilies, socketType: NativeSocketTypes, protocol: NativeSocketProtocolFamilies) `{
		int ds = socket(domain, socketType, protocol);
		if(ds == -1){
			return NULL;
		}
		int *d = malloc(sizeof(int));
		memcpy(d, &ds, sizeof(ds));
		return d;
	`}

	# Free the socket
	fun destroy `{ free(self); `}

	# Close the socket in both read/write
	fun close: Int `{ return close(*self); `}

	# Get the FD related to `self`
	fun descriptor: Int `{ return *self; `}

	# Connect to another open socket
	#
	# SEE: C documentation for more details on the `connect` operation
	fun connect(addrIn: NativeSocketAddrIn): Int `{
		return connect(*self, (struct sockaddr*)addrIn, sizeof(*addrIn));
	`}

	# Write `length` bytes from `buffer`
	fun write(buffer: CString, length: Int): Int `{
		return write(*self, buffer, length);
	`}

	# Write `value` as a single byte
	fun write_byte(value: Int): Int `{
		unsigned char byt = (unsigned char)value;
		return write(*self, &byt, 1);
	`}

	# Read `length` bytes into `buffer`, returns the number of bytes read
	fun read(buffer: CString, length: Int): Int `{
		return read(*self, buffer, length);
	`}

	# Sets an option for the socket
	#
	# Returns `true` on success.
	fun setsockopt(level: NativeSocketOptLevels, option_name: NativeSocketOptNames, option_value: Int): Bool `{
		int err = setsockopt(*self, level, option_name, &option_value, sizeof(int));
		if(err != 0){
			return 0;
		}
		return 1;
	`}

	# Bind the socket to a local address
	#
	# SEE: C documentation for more details on the bind operation
	fun bind(addrIn: NativeSocketAddrIn): Int `{ return bind(*self, (struct sockaddr*)addrIn, sizeof(*addrIn)); `}

	# Prepare for listening to incoming connections
	fun listen(size: Int): Int `{ return listen(*self, size); `}

	# Checks if the buffer is ready for any event specified when creating the pollfd structure
	fun socket_poll(filedesc: PollFD, timeout: Int): Array[NativeSocketPollValues]
	do
		var result = native_poll(filedesc.poll_struct, timeout)
		assert result != -1
		return filedesc.check_response(result)
	end

	# Poll this socket with `POLLHUP|POLLERR`
	#
	# A return value of 0 means there is no errors.
	fun poll_hup_err: Int `{
		struct pollfd fd = {*self, POLLHUP|POLLERR, 0};
		int res = poll(&fd, 1, 0);
		return res;
	`}

	# Call to the poll function of the C socket
	#
	# Signature:
	# int poll(struct pollfd fds[], nfds_t nfds, int timeout);
	#
	# Official documentation of the poll function:
	#
	# The poll() function provides applications with a mechanism for multiplexing input/output over a set of file descriptors.
	# For each member of the array pointed to by fds, poll() shall examine the given file descriptor for the event(s) specified in events.
	# The number of pollfd structures in the fds array is specified by nfds.
	# The poll() function shall identify those file descriptors on which an application can read or write data, or on which certain events have occurred.
	# The fds argument specifies the file descriptors to be examined and the events of interest for each file descriptor.
	# It is a pointer to an array with one member for each open file descriptor of interest.
	# The array's members are pollfd structures within which fd specifies an open file descriptor and events and revents are bitmasks constructed by
	# OR'ing a combination of the pollfd flags.
	private fun native_poll(filedesc: NativeSocketPollFD, timeout: Int): Int `{
		int poll_return = poll(filedesc, 1, timeout);
		return poll_return;
	`}

	private fun native_accept(addr_in: NativeSocketAddrIn): NativeSocket `{
		socklen_t s = sizeof(struct sockaddr);
		int socket = accept(*self, (struct sockaddr*)addr_in, &s);
		if (socket == -1) return NULL;

		int *ptr = malloc(sizeof(int));
		*ptr = socket;
		return ptr;
	`}

	# Accept a new connection on `self`
	#
	# Require the socket to be first bound and listening for connections
	fun accept: nullable SocketAcceptResult
	do
		var addrIn = new NativeSocketAddrIn
		var s = native_accept(addrIn)
		if s.address_is_null then return null
		return new SocketAcceptResult(s, addrIn)
	end

	# Set whether this socket is non blocking
	fun non_blocking=(value: Bool) `{
		int flags = fcntl(*self, F_GETFL, 0);
		if (flags == -1) flags = 0;

		if (value) {
			flags = flags | O_NONBLOCK;
		} else if (flags & O_NONBLOCK) {
			flags = flags - O_NONBLOCK;
		} else {
			return;
		}
		fcntl(*self, F_SETFL, flags);
	`}

	# Send `len` bytes from `buf` to `dest_addr`
	fun sendto(buf: CString, len: Int, flags: Int, dest_addr: NativeSocketAddrIn): Int `{
		return sendto(*self, buf, len, flags, (struct sockaddr*)dest_addr, sizeof(struct sockaddr_in));
	`}

	# Receive a message into `buf` of maximum `len` bytes
	fun recv(buf: CString, len: Int, flags: Int): Int `{
		return recv(*self, buf, len, flags);
	`}

	# Receive a message into `buf` of maximum `len` bytes and store sender info into `src_addr`
	fun recvfrom(buf: CString, len: Int, flags: Int, src_addr: NativeSocketAddrIn): Int `{
		socklen_t srclen = sizeof(struct sockaddr_in);
		return recvfrom(*self, buf, len, flags, (struct sockaddr*)src_addr, &srclen);
	`}
end

# Result of a call to `NativeSocket::accept`
class SocketAcceptResult

	# Opened socket
	var socket: NativeSocket

	# Address of the remote client
	var addr_in: NativeSocketAddrIn
end

# Socket address in the Internet namespace, pointer to a `struct sockaddr_in`
extern class NativeSocketAddrIn `{ struct sockaddr_in* `}

	# `NULL` pointer
	new nul `{ return NULL; `}

	# `malloc` a new instance
	new `{
		struct sockaddr_in *sai = NULL;
		sai = malloc(sizeof(struct sockaddr_in));
		return sai;
	`}

	# Set `address` and `family` from `hostent` (to use with `Sys::gethostbyname`)
	fun fill_from_hostent(hostent: NativeSocketHostent) `{
		self->sin_family = hostent->h_addrtype;
		memcpy((char*)&self->sin_addr.s_addr,
		       (char*)hostent->h_addr,
			   hostent->h_length);
	`}

	# Internet address as then IPV4 numbers-and-dots notation
	fun address: CString `{ return (char*)inet_ntoa(self->sin_addr); `}

	# Set `address` to `INADDR_ANY`
	fun address_any `{ self->sin_addr.s_addr = INADDR_ANY; `}

	# Set `address` to `INADDR_BROADCAST`
	fun address_broadcast `{ self->sin_addr.s_addr = INADDR_BROADCAST; `}

	# Address family
	fun family: NativeSocketAddressFamilies `{ return self->sin_family; `}

	# Address family
	fun family=(value: NativeSocketAddressFamilies) `{ self->sin_family = value; `}

	# Port
	fun port: Int `{ return ntohs(self->sin_port); `}

	# Port
	fun port=(value: Int) `{ self->sin_port = htons(value); `}
end

# Host entry information, a pointer to a `struct hostent`
extern class NativeSocketHostent `{ struct hostent* `}
	private fun native_h_aliases(i: Int): CString `{
		return self->h_aliases[i];
	`}

	# Alternative names for the host
	fun h_aliases: Array[String]
	do
		var res = new Array[String]
		loop
			var ha = native_h_aliases(res.length)
			if ha.address_is_null then break
			res.add ha.to_s
		end
		return res
	end

	# Host IPv4 address
	fun h_addr: CString `{
		return (char*)inet_ntoa(*(struct in_addr*)self->h_addr);
	`}

	# Host address type
	fun h_addrtype: Int `{ return self->h_addrtype; `}

	# Length in bytes of the addresses
	fun h_length: Int `{ return self->h_length; `}

	# Host name
	fun h_name: CString `{ return self->h_name; `}
end

# Time structure, with a microsecond resolution
extern class NativeTimeval `{ struct timeval* `}
	new (seconds: Int, microseconds: Int) `{
		struct timeval* tv = NULL;
		tv = malloc(sizeof(struct timeval));
		tv->tv_sec = seconds;
		tv->tv_usec = microseconds;
		return tv;
	`}

	# Number of seconds recorded
	fun seconds: Int `{ return self->tv_sec; `}

	# Number of microseconds recorded
	fun microseconds: Int `{ return self->tv_usec; `}

	# Destory `self`
	fun destroy `{ free(self); `}
end

# Structure used to register FDs for a Select
#
# FIXME: This should not be Socket-specific
# FIXME: This is Unix-specific
extern class NativeSocketSet `{ fd_set* `}
	new `{
		fd_set *f = NULL;
		f = malloc(sizeof(fd_set));
		return f;
	`}

	# Add a file descriptor to the set
	fun set(s: NativeSocket) `{ FD_SET(*s, self); `}

	# Check if `s` is in the set
	fun is_set(s: NativeSocket): Bool `{ return FD_ISSET(*s, self); `}

	# Clear the set
	fun zero `{ FD_ZERO(self); `}

	# Remove `s` from the set
	fun clear(s: NativeSocket) `{ FD_CLR(*s, self); `}

	# Free the set
	fun destroy `{ free(self); `}
end

# Socket observer
class NativeSocketObserver
	# FIXME this implementation is broken. `reads`, `write` and `except`
	# are boxed objects, passing them to a C function is illegal.
	fun select(max: NativeSocket, reads: nullable NativeSocketSet, write: nullable NativeSocketSet,
			 except: nullable NativeSocketSet, timeout: NativeTimeval): Int `{
		fd_set *rds = NULL,
		       *wts = NULL,
		       *exs = NULL;
		struct timeval *tm = NULL;
		if (reads != NULL) rds = (fd_set*)reads;
		if (write != NULL) wts = (fd_set*)write;
		if (except != NULL) exs = (fd_set*)except;
		if (timeout != NULL) tm = (struct timeval*)timeout;
		return select(*max, rds, wts, exs, tm);
	`}
end

# Socket types
extern class NativeSocketTypes `{ int `}
	# STREAM socket, used for sequential writes/reads
	new sock_stream `{ return SOCK_STREAM; `}
	# DGRAM socket, used for packet-oriented communication
	new sock_dgram `{ return SOCK_DGRAM; `}
	# RAW socket, access raw data, without it being handled by the IP stack
	new sock_raw `{ return SOCK_RAW; `}
	# SEQPACKET, packet-oriented communication with guarantees in packet order
	new sock_seqpacket `{ return SOCK_SEQPACKET; `}
end

# Socket families
extern class NativeSocketAddressFamilies `{ int `}
	# Unspecified
	new af_unspec `{ return AF_UNSPEC; `}

	# Local to host (pipes)
	new af_unix `{ return AF_UNIX; `}

	# For backward compatibility
	new af_local `{ return AF_LOCAL; `}

	# Internetwork: UDP, TCP, etc.
	new af_inet `{ return AF_INET; `}

	# IBM SNA
	new af_sna `{ return AF_SNA; `}

	# DECnet
	new af_decnet `{ return AF_DECnet; `}

	# Internal Routing Protocol
	new af_route `{ return AF_ROUTE; `}

	# Novell Internet Protocol
	new af_ipx `{ return AF_IPX; `}

	# IPv6
	new af_inet6 `{ return AF_INET6; `}

	# Maximum identifier for socket families
	new af_max `{ return AF_MAX; `}
end

# Socket protocol families
extern class NativeSocketProtocolFamilies `{ int `}
	# Unspecified
	new pf_unspec `{ return PF_UNSPEC; `}

	# Local socket
	new pf_local `{ return PF_LOCAL; `}

	# Unix socket
	new pf_unix `{ return PF_UNIX; `}

	# Internet (IPv4) socket
	new pf_inet `{ return PF_INET; `}

	# SNA (IBM) socket
	new pf_sna `{ return PF_SNA; `}

	# DECnet socket
	new pf_decnet `{ return PF_DECnet; `}

	# Routing tables control
	new pf_route `{ return PF_ROUTE; `}

	# Novell internet protocol
	new pf_ipx `{ return PF_IPX; `}

	# Key management protocol
	new pf_key `{ return PF_KEY; `}

	# Internet (IPv6) socket
	new pf_inet6 `{ return PF_INET6; `}

	# Maximum identifier for socket families
	new pf_max `{ return PF_MAX; `}
end

# Level on which to set options
extern class NativeSocketOptLevels `{ int `}

	# Dummy for IP (As defined in C)
	new ip `{ return IPPROTO_IP;`}

	# Control message protocol
	new icmp `{ return IPPROTO_ICMP;`}

	# Use TCP
	new tcp `{ return IPPROTO_TCP; `}

	# Socket level options
	new socket `{ return SOL_SOCKET; `}
end

# Options for socket, use with setsockopt
extern class NativeSocketOptNames `{ int `}

	# Enables debugging information
	new debug `{ return SO_DEBUG; `}

	# Authorizes the broadcasting of messages
	new broadcast `{ return SO_BROADCAST; `}

	# Authorizes the reuse of the local address
	new reuseaddr `{ return SO_REUSEADDR; `}

	# Authorizes the use of keep-alive packets in a connection
	new keepalive `{ return SO_KEEPALIVE; `}

	# Disable the Nagle algorithm and send data as soon as possible, in smaller packets
	new tcp_nodelay `{ return TCP_NODELAY; `}
end

# Used for the poll function of a socket, mix several Poll values to check for events on more than one type of event
extern class NativeSocketPollValues `{ int `}

	# Data other than high-priority data may be read without blocking.
	new pollin `{ return POLLIN; `}

	# Normal data may be read without blocking.
	new pollrdnorm `{ return POLLRDNORM; `}

	# Priority data may be read without blocking.
	new pollrdband `{ return POLLRDBAND; `}

	# High-priority data may be read without blocking.
	new pollpri `{ return POLLPRI; `}

	# Normal data may be written without blocking.
	new pollout `{ return POLLOUT; `}

	# Equivalent to POLLOUT
	new pollwrnorm `{ return POLLWRNORM; `}

	# Priority data may be written.
	new pollwrband `{ return POLLWRBAND; `}

	# An error has occurred on the device or stream.
	#
	# This flag is only valid in the revents bitmask; it shall be ignored in the events member.
	new pollerr `{ return POLLERR; `}

	# The device has been disconnected.
	#
	# This event and POLLOUT are mutually-exclusive; a stream can never be
	# writable if a hangup has occurred. However, this event and POLLIN,
	# POLLRDNORM, POLLRDBAND, or POLLPRI are not mutually-exclusive.
	#
	# This flag is only valid in the revents bitmask; it shall be ignored in the events member.
	new pollhup `{ return POLLHUP; `}

	# The specified fd value is invalid.
	#
	# This flag is only valid in the revents member; it shall ignored in the events member.
	new pollnval `{ return POLLNVAL; `}

	# Combines two NativeSocketPollValues
	private fun +(other: NativeSocketPollValues): NativeSocketPollValues `{
		return self | other;
	`}
end

redef class Sys
	# Get network host entry
	fun gethostbyname(name: CString): NativeSocketHostent `{
		return gethostbyname(name);
	`}

	# Last error raised by `gethostbyname`
	fun h_errno: HErrno `{ return h_errno; `}
end

# Error code of `Sys::h_errno`
extern class HErrno `{ int `}
	# The specified host is unknown
	fun host_not_found: Bool `{ return self == HOST_NOT_FOUND; `}

	# The requested name is valid but does not have an IP address
	#
	# Same as `no_data`.
	fun no_address: Bool `{ return self == NO_ADDRESS; `}

	# The requested name is valid byt does not have an IP address
	#
	# Same as `no_address`.
	fun no_data: Bool `{ return self == NO_DATA; `}

	# A nonrecoverable name server error occurred
	fun no_recovery: Bool `{ return self == NO_RECOVERY; `}

	# A temporary error occurred on an authoritative name server, try again later
	fun try_again: Bool `{ return self == TRY_AGAIN; `}

	redef fun to_s
	do
		if host_not_found then
			return "The specified host is unknown"
		else if no_address then
			return "The requested name is valid but does not have an IP address"
		else if no_recovery then
			return "A nonrecoverable name server error occurred"
		else if try_again then
			return "A temporary error occurred on an authoritative name server, try again later"
		else
			# This may happen if another call was made to `gethostbyname`
			# before we fetch the error code.
			return "Unknown error on `gethostbyname`"
		end
	end
end
