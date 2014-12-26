# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Wrapper for the data structure PollFD used for polling on a socket
class PollFD

	# The PollFD object
	private var poll_struct: NativeSocketPollFD

	# A collection of the events to be watched
	var events: Array[NativeSocketPollValues]

	init(pid: Int, events: Array[NativeSocketPollValues])
	do
		assert events.length >= 1
		self.events = events

		var events_in_one = events[0]

		for i in [1 .. events.length-1] do
			events_in_one += events[i]
		end

		self.poll_struct = new NativeSocketPollFD(pid, events_in_one)
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

end

# Data structure used by the poll function
private extern class NativeSocketPollFD `{ struct pollfd `}

	# File descriptor id
	private fun fd: Int `{ return recv.fd; `}

	# List of events to be watched
	private fun events: Int `{ return recv.events; `}

	# List of events received by the last poll function
	private fun revents: Int `{  return recv.revents; `}

	new (pid: Int, events: NativeSocketPollValues) `{
		struct pollfd poll;
		poll.fd = pid;
		poll.events = events;
		return poll;
	`}

end

extern class NativeSocket `{ int* `}

	new socket(domain: NativeSocketAddressFamilies, socketType: NativeSocketTypes, protocol: NativeSocketProtocolFamilies) `{
		int ds = socket(domain, socketType, protocol);
		if(ds == -1){
			return NULL;
		}
		int *d = malloc(sizeof(int));
		memcpy(d, &ds, sizeof(ds));
		return d;
	`}

	fun destroy `{ free(recv); `}

	fun close: Int `{ return close(*recv); `}

	fun descriptor: Int `{ return *recv; `}

	fun gethostbyname(n: String): NativeSocketHostent import String.to_cstring `{ return gethostbyname(String_to_cstring(n)); `}

	fun connect(addrIn: NativeSocketAddrIn): Int `{
		return connect(*recv, (struct sockaddr*)addrIn, sizeof(*addrIn));
	`}

	fun write(buffer: String): Int
	import String.to_cstring, String.length `{
		return write(*recv, (char*)String_to_cstring(buffer), String_length(buffer));
	`}

	fun read: String import NativeString.to_s_with_length `{
		static char c[1024];
		int n = read(*recv, c, 1024);
		if(n < 0) {
			return NativeString_to_s_with_length("",0);
		}
		char* ret = malloc(n + 1);
		memcpy(ret, c, n);
		ret[n] = '\0';
		return NativeString_to_s_with_length(ret, n);
	`}

	# Sets an option for the socket
	fun setsockopt(level: NativeSocketOptLevels, option_name: NativeSocketOptNames, option_value: Int) `{
		int err = setsockopt(*recv, level, option_name, &option_value, sizeof(int));
		if(err != 0){
			perror("Error on setsockopts: ");
			exit(1);
		}
	`}

	fun bind(addrIn: NativeSocketAddrIn): Int `{ return bind(*recv, (struct sockaddr*)addrIn, sizeof(*addrIn)); `}

	fun listen(size: Int): Int `{ return listen(*recv, size); `}

	# Checks if the buffer is ready for any event specified when creating the pollfd structure
	fun socket_poll(filedesc: PollFD, timeout: Int): Array[NativeSocketPollValues]
	do
		var result = native_poll(filedesc.poll_struct, timeout)
		assert result != -1
		return filedesc.check_response(result)
	end

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
		int poll_return = poll(&filedesc, 1, timeout);
		return poll_return;
	`}

	private fun native_accept(addr_in: NativeSocketAddrIn): NativeSocket `{
		socklen_t s = sizeof(struct sockaddr);
		int socket = accept(*recv, (struct sockaddr*)addr_in, &s);
		if (socket == -1) return NULL;

		int *ptr = malloc(sizeof(int));
		*ptr = socket;
		return ptr;
	`}

	fun accept: nullable SocketAcceptResult
	do
		var addrIn = new NativeSocketAddrIn
		var s = native_accept(addrIn)
		if s.address_is_null then return null
		return new SocketAcceptResult(s, addrIn)
	end

	# Set wether this socket is non blocking
	fun non_blocking=(value: Bool) `{
		int flags = fcntl(*recv, F_GETFL, 0);
		if (flags == -1) flags = 0;

		if (value) {
			flags = flags | O_NONBLOCK;
		} else if (flags & O_NONBLOCK) {
			flags = flags - O_NONBLOCK;
		} else {
			return;
		}
		fcntl(*recv, F_SETFL, flags);
	`}
end

# Result of a call to `NativeSocket::accept`
class SocketAcceptResult

	# Opened socket
	var socket: NativeSocket

	# Address of the remote client
	var addr_in: NativeSocketAddrIn
end

extern class NativeSocketAddrIn `{ struct sockaddr_in* `}
	new `{
		struct sockaddr_in *sai = NULL;
		sai = malloc(sizeof(struct sockaddr_in));
		return sai;
	`}

	new with(port: Int, family: NativeSocketAddressFamilies) `{
		struct sockaddr_in *sai = NULL;
		sai = malloc(sizeof(struct sockaddr_in));
		sai->sin_family = family;
		sai->sin_port = htons(port);
		sai->sin_addr.s_addr = INADDR_ANY;
		return sai;
	`}

	new with_hostent(hostent: NativeSocketHostent, port: Int) `{
		struct sockaddr_in *sai = NULL;
		sai = malloc(sizeof(struct sockaddr_in));
		sai->sin_family = hostent->h_addrtype;
		sai->sin_port = htons(port);
		memcpy((char*)&sai->sin_addr.s_addr, (char*)hostent->h_addr, hostent->h_length);
		return sai;
	`}

	fun address: String import NativeString.to_s `{ return NativeString_to_s((char*)inet_ntoa(recv->sin_addr)); `}

	fun family: NativeSocketAddressFamilies `{ return recv->sin_family; `}

	fun port: Int `{ return ntohs(recv->sin_port); `}

	fun destroy `{ free(recv); `}
end

extern class NativeSocketHostent `{ struct hostent* `}
	private fun native_h_aliases(i: Int): String import NativeString.to_s `{ return NativeString_to_s(recv->h_aliases[i]); `}

	private fun native_h_aliases_reachable(i: Int): Bool `{ return (recv->h_aliases[i] != NULL); `}

	fun h_aliases: Array[String]
	do
		var i=0
		var d=new Array[String]
		loop
			d.add(native_h_aliases(i))
			if native_h_aliases_reachable(i+1) == false then break
			i += 1
		end
		return d
	end

	fun h_addr: String import NativeString.to_s `{ return NativeString_to_s((char*)inet_ntoa(*(struct in_addr*)recv->h_addr)); `}

	fun h_addrtype: Int `{ return recv->h_addrtype; `}

	fun h_length: Int `{ return recv->h_length; `}

	fun h_name: String import NativeString.to_s `{ return NativeString_to_s(recv->h_name); `}
end

extern class NativeTimeval `{ struct timeval* `}
	new (seconds: Int, microseconds: Int) `{
		struct timeval* tv = NULL;
		tv = malloc(sizeof(struct timeval));
		tv->tv_sec = seconds;
		tv->tv_usec = microseconds;
		return tv;
	`}

	fun seconds: Int `{ return recv->tv_sec; `}

	fun microseconds: Int `{ return recv->tv_usec; `}

	fun destroy `{ free(recv); `}
end

extern class NativeSocketSet `{ fd_set* `}
	new `{
		fd_set *f = NULL;
		f = malloc(sizeof(fd_set));
		return f;
	`}

	fun set(s: NativeSocket) `{ FD_SET(*s, recv); `}

	fun is_set(s: NativeSocket): Bool `{ return FD_ISSET(*s, recv); `}

	fun zero `{ FD_ZERO(recv); `}

	fun clear(s: NativeSocket) `{ FD_CLR(*s, recv); `}

	fun destroy `{ free(recv); `}
end

class NativeSocketObserver
	# FIXME this implementation is broken. `reads`, `write` and `except`
	# are boxed objects, passing them to a C function is illegal.
	fun select(max: NativeSocket, reads: nullable NativeSocketSet, write: nullable NativeSocketSet,
			 except: nullable NativeSocketSet, timeout: NativeTimeval): Int `{
		fd_set *rds, *wts, *exs = NULL;
		struct timeval *tm = NULL;
		if (reads != NULL) rds = (fd_set*)reads;
		if (write != NULL) wts = (fd_set*)write;
		if (except != NULL) exs = (fd_set*)except;
		if (timeout != NULL) tm = (struct timeval*)timeout;
		return select(*max, rds, wts, exs, tm);
	`}
end

extern class NativeSocketTypes `{ int `}
	new sock_stream `{ return SOCK_STREAM; `}
	new sock_dgram `{ return SOCK_DGRAM; `}
	new sock_raw `{ return SOCK_RAW; `}
	new sock_seqpacket `{ return SOCK_SEQPACKET; `}
end

extern class NativeSocketAddressFamilies `{ int `}
	new af_null `{ return 0; `}

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

	new af_max `{ return AF_MAX; `}
end

extern class NativeSocketProtocolFamilies `{ int `}
	new pf_null `{ return 0; `}
	new pf_unspec `{ return PF_UNSPEC; `}
	new pf_local `{ return PF_LOCAL; `}
	new pf_unix `{ return PF_UNIX; `}
	new pf_inet `{ return PF_INET; `}
	new pf_sna `{ return PF_SNA; `}
	new pf_decnet `{ return PF_DECnet; `}
	new pf_route `{ return PF_ROUTE; `}
	new pf_ipx `{ return PF_IPX; `}
	new pf_key `{ return PF_KEY; `}
	new pf_inet6 `{ return PF_INET6; `}
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
		return recv | other;
	`}
end
