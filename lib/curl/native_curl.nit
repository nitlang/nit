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

# Binding of C libCurl which allow us to interact with network.
module native_curl is pkgconfig "libcurl"

intrude import core::file
import core

in "C header" `{
	#include <curl/curl.h>

	typedef struct {
		char *data;
		int len;
		int pos;
	} CURLCallbackReadDatas;
`}

in "C body" `{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	// Callback method to read datas from buffer.
	size_t nit_curl_callback_read_func(void *buffer, size_t size, size_t count, CURLCallbackReadDatas *datas){
		int len = datas->len - datas->pos;
		if(len > size * count) len = size * count;
		memcpy(buffer, datas->data + datas->pos, len);
		datas->pos += len;
		return len;
	}
`}

redef extern class CString
	private fun native_callback_header(size, count: Int, target: NativeCurlCallbacks): Int
	do
		target.header_callback to_s_with_length(size*count)

		# FIXME we probably should return a value from the user
		return count
	end

	private fun native_callback_body(size, count: Int, target: NativeCurlCallbacks): Int
	do
		target.body_callback to_s_with_length(size*count)

		return count
	end

	private fun native_callback_stream(size, count: Int, target: NativeCurlCallbacks): Int
	do
		target.stream_callback to_s_with_length(size*count)

		return count
	end
end

# CURL Extern Type, reproduce CURL low level behaviors
extern class NativeCurl `{ CURL * `}
	# Constructor, CURL low level initializer
	new easy_init `{ return curl_easy_init(); `}

	# Check for correct initialization
	fun is_init: Bool `{ return (self != NULL); `}

	# Easy Clean / Release CURL instance
	fun easy_clean `{ curl_easy_cleanup( self ); `}

	# Perform the transfer described by setted options
	fun easy_perform: CURLCode `{ return curl_easy_perform( self ); `}

	# Set options to tell CURL how to behave. Obj parameter type can be Int, Bool, String, FileWriter, CURLSList.
	fun easy_setopt(opt: CURLOption, obj: Object): CURLCode
	do
		if obj isa Int then return native_setopt_int(opt, obj)
		if obj == true then return native_setopt_int(opt, 1)
		if obj == false then return native_setopt_int(opt, 0)
		if obj isa String then return native_setopt_string(opt, obj.to_cstring)
		if obj isa FileWriter then return native_setopt_file(opt, obj._file.as(not null))
		if obj isa CURLSList then return native_setopt_slist(opt, obj)
		return once new CURLCode.unknown_option
	end

	# Internal method to set options to CURL using NativeFile parameter.
	private fun native_setopt_file(opt: CURLOption, file: NativeFile): CURLCode `{
		return curl_easy_setopt( self, opt, file);
	`}

	# Internal method to set options to CURL using Int parameter.
	private fun native_setopt_int(opt: CURLOption, num: Int): CURLCode `{ return curl_easy_setopt( self, opt, num); `}

	# Internal method to set options to CURL using CURLSList parameter.
	private fun native_setopt_slist(opt: CURLOption, list: CURLSList): CURLCode `{ return curl_easy_setopt( self, opt, list); `}

	# Internal method to set options to CURL using String parameter.
	private fun native_setopt_string(opt: CURLOption, str: CString): CURLCode `{
		return curl_easy_setopt( self, opt, str);
	`}

	# Request Chars internal information from the CURL session
	fun easy_getinfo_chars(opt: CURLInfoChars): nullable String
	do
		 var answ = new Ref[CString]("".to_cstring)
		 if not native_getinfo_chars(opt, answ).is_ok then return null
		 if answ.item.address_is_null then return null
		 return answ.item.to_s
	end

	# Internal method used to get String object information initially known as C Chars type
	private fun native_getinfo_chars(opt: CURLInfoChars, res: Ref[CString]): CURLCode
	import Ref[CString].item= `{
		char *r;
		CURLcode c = curl_easy_getinfo( self, opt, &r);
		if (c == CURLE_OK) Ref_of_CString_item__assign(res, r);
		return c;
	`}

	# Request Long internal information from the CURL session
	fun easy_getinfo_long(opt: CURLInfoLong): nullable Int
	do
		 var answ = new Ref[Int](0)
		 if not native_getinfo_long(opt, answ).is_ok then return null
		 return answ.item
	end

	# Internal method used to get Int object information initially knowns as C Long type
	private fun native_getinfo_long(opt: CURLInfoLong, res: Ref[Int]): CURLCode
	import Ref[Int].item= `{
		long r;
		CURLcode c = curl_easy_getinfo( self, opt, &r);
		if (c == CURLE_OK) Ref_of_Int_item__assign(res, r);
		return c;
	`}

	# Request Double internal information from the CURL session
	fun easy_getinfo_double(opt: CURLInfoDouble): nullable Float
	do
		 var answ = new Ref[Float](0.0)
		 if not native_getinfo_double(opt, answ).is_ok then return null
		 return answ.item
	end

	# Internal method used to get Int object information initially knowns as C Double type
	private fun native_getinfo_double(opt: CURLInfoDouble, res: Ref[Float]): CURLCode
	import Ref[Float].item= `{
		double r;
		CURLcode c = curl_easy_getinfo(self, opt, &r);
		if (c == CURLE_OK) Ref_of_Float_item__assign(res, r);
		return c;
	`}

	# Request SList internal information from the CURL session
	fun easy_getinfo_slist(opt: CURLInfoSList): nullable Array[String]
	do
		var answ = new Ref[CURLSList](new CURLSList)
		if not native_getinfo_slist(opt, answ).is_ok then return null

		var native = answ.item
		var nity = native.to_a
		native.destroy
		return nity
	end

	# Internal method used to get Array[String] object information initially knowns as C SList type
	private fun native_getinfo_slist(opt: CURLInfoSList, res: Ref[CURLSList]): CURLCode
	import Ref[CURLSList].item= `{
		struct curl_slist* csl;
		CURLcode c = curl_easy_getinfo(self, opt, &csl);
		if (c == CURLE_OK) Ref_of_CURLSList_item__assign(res, csl);
		return c;
	`}

	# Register delegate to read datas from given buffer
	fun register_read_datas_callback(delegate: NativeCurlCallbacks, datas: String): CURLCode
	do
		if datas.length > 0 then return native_register_read_datas_callback(delegate, datas, datas.length)
		return once new CURLCode.unknown_option
	end

	# Internal method used to configure read callback
	private fun native_register_read_datas_callback(delegate: NativeCurlCallbacks, datas: String, size: Int): CURLCode import String.to_cstring `{
		CURLCallbackReadDatas *d = NULL;
		d = malloc(sizeof(CURLCallbackReadDatas));
		d->data = (char*)String_to_cstring(datas);
		d->len = size;
		d->pos = 0;
		return curl_easy_setopt( self, CURLOPT_READDATA, d);
	`}

	# Register `delegate` to get callbacks about the CURL transfer
	fun register_callback_header(delegate: NativeCurlCallbacks): CURLCode
	import CString.native_callback_header `{
		CURLcode e;
		NativeCurlCallbacks_incr_ref(delegate); // FIXME deallocated these when download completes?

		e = curl_easy_setopt(self, CURLOPT_HEADERFUNCTION, (curl_write_callback)&CString_native_callback_header);
		if(e != CURLE_OK) return e;

		e = curl_easy_setopt(self, CURLOPT_WRITEHEADER, delegate);
		return e;
	`}

	# Register `delegate` to get callbacks about the CURL transfer
	fun register_callback_body(delegate: NativeCurlCallbacks): CURLCode
	import CString.native_callback_body `{
		CURLcode e;
		NativeCurlCallbacks_incr_ref(delegate);

		e = curl_easy_setopt(self, CURLOPT_WRITEFUNCTION, (curl_write_callback)&CString_native_callback_body);
		if(e != CURLE_OK) return e;

		e = curl_easy_setopt(self, CURLOPT_WRITEDATA, delegate);
		return e;
	`}

	# Register `delegate` to get callbacks about the CURL transfer
	fun register_callback_stream(delegate: NativeCurlCallbacks): CURLCode
	import CString.native_callback_stream `{
		CURLcode e;
		NativeCurlCallbacks_incr_ref(delegate);

		e = curl_easy_setopt(self, CURLOPT_WRITEFUNCTION, (curl_write_callback)&CString_native_callback_stream);
		if(e != CURLE_OK) return e;

		e = curl_easy_setopt(self, CURLOPT_WRITEDATA, delegate);
		return e;
	`}

	# Register `delegate` to get callbacks about the CURL transfer
	fun register_callback_read(delegate: NativeCurlCallbacks): CURLCode
	import CString.native_callback_stream `{
		NativeCurlCallbacks_incr_ref(delegate);

		return curl_easy_setopt(self, CURLOPT_READFUNCTION, (curl_write_callback)&nit_curl_callback_read_func);
	`}

	# Convert given string to URL encoded string
	fun escape(url: String): String import String.to_cstring, CString.to_s `{
		char *orig_url, *encoded_url = NULL;
		orig_url = String_to_cstring(url);
		encoded_url = curl_easy_escape( self, orig_url, strlen(orig_url));
		String b_url = CString_to_s(encoded_url);
		curl_free(encoded_url);
		return b_url;
	`}
end

# Interface for internal information callbacks methods
interface NativeCurlCallbacks
	fun header_callback(buffer: String) do end
	fun body_callback(buffer: String) do end
	fun stream_callback(buffer: String) do end
end

# CURL Code binding and helpers
extern class CURLCode `{ CURLcode `}
	new unknown_option `{ return CURLE_UNKNOWN_OPTION; `}
	new unsupported_protocol `{ return CURLE_UNSUPPORTED_PROTOCOL; `}
	new ok `{ return CURLE_OK; `}
	new failed_init `{ return CURLE_FAILED_INIT; `}

	fun code: Int `{ return self; `}
	fun is_ok: Bool `{ return self == CURLE_OK; `}
	fun is_valid_protocol: Bool `{ return self == CURLE_UNSUPPORTED_PROTOCOL; `}
	fun is_valid_init: Bool `{ return self == CURLE_FAILED_INIT; `}
	fun to_i: Int do return code end
	redef fun to_s import CString.to_s `{
		char *c = (char*)curl_easy_strerror(self);
		return CString_to_s(c);
	`}
end

# Extern Type of the Linked list type of CURL
extern class CURLSList `{ struct curl_slist * `}
	# Empty constructor which allow us to avoid the use of Nit NULLABLE type
	private new `{ return NULL; `}

	# Constructor allow us to get list instancied by appending an element inside.
	new with_str(s: String) import String.to_cstring `{
		struct curl_slist *l = NULL;
		l = curl_slist_append(l, String_to_cstring(s));
		return l;
	`}

	# Check for initialization
	fun is_init: Bool `{ return (self != NULL); `}

	# Append an element in the linked list
	fun append(key: String) import String.to_cstring `{
		 char *k = String_to_cstring(key);
		 curl_slist_append(self, (char*)k);
	`}

	# Internal method to check for reachability of current data
	private fun native_data_reachable(c: CURLSList): Bool `{ return (c != NULL && c->data != NULL); `}

	# Internal method to check for reachability of next element
	private fun native_next_reachable(c: CURLSList): Bool `{ return (c != NULL && c->next != NULL); `}

	# Internal method to get current data
	private fun native_data(c: CURLSList): String import CString.to_s `{ return CString_to_s(c->data); `}

	# Internal method to get next element
	private fun native_next(c: CURLSList): CURLSList `{ return c->next; `}

	# Convert current low level List to an Array[String] object
	fun to_a: Array[String]
	do
		var r = new Array[String]
		var cursor = self
		loop
			if not native_data_reachable(cursor) then break
			r.add(native_data(cursor))
			cursor = native_next(cursor)
		end
		return r
	end

	# Release allocated memory
	fun destroy `{ curl_slist_free_all(self); `}
end

redef class Collection[E]
	# Convert Collection[String] to CURLSList
	fun to_curlslist: CURLSList
	do
		assert collectionItemType: self isa Collection[String] else
			print "Collection item must be strings."
		end
		if is_empty then return new CURLSList
		var primList = new CURLSList.with_str(self.first)
		var is_first = true
		for s in self do
			if not is_first then primList.append(s)
			is_first = false
		end
		return primList
	end
end

# Reproduce Enum of available CURL SList information, used for NativeCurl.easy_getinfo
extern class CURLInfoSList `{ CURLINFO `}
	new ssl_engines `{ return CURLINFO_SSL_ENGINES; `}
	new cookielist `{ return CURLINFO_COOKIELIST; `}
end

# Reproduce Enum of available CURL Long information, used for NativeCurl.easy_getinfo
extern class CURLInfoLong `{ CURLINFO `}
	new response_code `{ return CURLINFO_RESPONSE_CODE; `}
	new header_size `{ return CURLINFO_HEADER_SIZE; `}
	new http_connectcode `{ return CURLINFO_HTTP_CONNECTCODE; `}
	new filetime `{ return CURLINFO_FILETIME; `}
	new redirect_count `{ return CURLINFO_REDIRECT_COUNT; `}
	new request_size `{ return CURLINFO_REQUEST_SIZE; `}
	new ssl_verifyresult `{ return CURLINFO_SSL_VERIFYRESULT; `}
	new httpauth_avail `{ return CURLINFO_HTTPAUTH_AVAIL; `}
	new proxyauth_avail `{ return CURLINFO_PROXYAUTH_AVAIL; `}
	new os_errno `{ return CURLINFO_OS_ERRNO; `}
	new num_connects `{ return CURLINFO_NUM_CONNECTS; `}
	new primary_port `{ return CURLINFO_PRIMARY_PORT; `}
	new local_port `{ return CURLINFO_LOCAL_PORT; `}
	new lastsocket `{ return CURLINFO_LASTSOCKET; `}
	new condition_unmet `{ return CURLINFO_CONDITION_UNMET; `}
	new rtsp_client_cseq `{ return CURLINFO_RTSP_CLIENT_CSEQ; `}
	new rtsp_server_cseq `{ return CURLINFO_RTSP_SERVER_CSEQ; `}
	new rtsp_cseq_self `{ return CURLINFO_RTSP_CSEQ_RECV; `}
end

# Reproduce Enum of available CURL Double information, used for NativeCurl.easy_getinfo
extern class CURLInfoDouble `{ CURLINFO `}
	new total_time `{ return CURLINFO_TOTAL_TIME; `}
	new namelookup_time `{ return CURLINFO_NAMELOOKUP_TIME; `}
	new connect_time `{ return CURLINFO_CONNECT_TIME; `}
	new appconnect_time `{ return CURLINFO_APPCONNECT_TIME; `}
	new pretransfer_time `{ return CURLINFO_PRETRANSFER_TIME; `}
	new starttransfer_time `{ return CURLINFO_STARTTRANSFER_TIME; `}
	new redirect_time `{ return CURLINFO_REDIRECT_TIME; `}
	new size_upload `{ return CURLINFO_SIZE_UPLOAD; `}
	new size_download `{ return CURLINFO_SIZE_DOWNLOAD; `}
	new speed_download `{ return CURLINFO_SPEED_DOWNLOAD; `}
	new speed_upload `{ return CURLINFO_SPEED_UPLOAD; `}
	new content_length_download `{ return CURLINFO_CONTENT_LENGTH_DOWNLOAD; `}
	new content_length_upload `{ return CURLINFO_CONTENT_LENGTH_UPLOAD; `}
end

# Reproduce Enum of available CURL Chars information, used for NativeCurl.easy_getinfo
extern class CURLInfoChars `{ CURLINFO `}
	new content_type `{ return CURLINFO_CONTENT_TYPE; `}
	new effective_url `{ return CURLINFO_EFFECTIVE_URL; `}
	new redirect_url `{ return CURLINFO_REDIRECT_URL; `}
	new primary_ip `{ return CURLINFO_PRIMARY_IP; `}
	new local_ip `{ return CURLINFO_LOCAL_IP; `}
	new ftp_entry_path `{ return CURLINFO_FTP_ENTRY_PATH; `}
	new rtsp_session_id `{ return CURLINFO_RTSP_SESSION_ID; `}
	new private_data `{ return CURLINFO_PRIVATE; `}
end

# Reproduce Enum of HTTP Status Code
extern class CURLStatusCode `{ int `}
	new proceed `{ return 100; `}
	new switching_protocols `{ return 101; `}
	new ok `{ return 200; `}
	new created `{ return 201; `}
	new accepted `{ return 202; `}
	new non_authoritative_information `{ return 203; `}
	new no_content `{ return 204; `}
	new reset_content `{ return 205; `}
	new partial_content `{ return 206; `}
	new multiple_choices `{ return 300; `}
	new moved_permanently `{ return 301; `}
	new moved_temporarily `{ return 302; `}
	new see_other `{ return 303; `}
	new not_modified `{ return 304; `}
	new use_proxy `{ return 305; `}
	new bad_request `{ return 400; `}
	new unauthorized `{ return 401; `}
	new payment_required `{ return 402; `}
	new forbidden `{ return 403; `}
	new not_found `{ return 404; `}
	new method_not_allowed `{ return 405; `}
	new not_acceptable `{ return 406; `}
	new proxy_authentication_required `{ return 407; `}
	new request_timeout `{ return 408; `}
	new conflict `{ return 409; `}
	new gone `{ return 410; `}
	new length_required `{ return 411; `}
	new precondition_failed `{ return 412; `}
	new request_entity_too_large `{ return 413; `}
	new request_uri_too_large `{ return 414; `}
	new unsupported_media_type `{ return 415; `}
	new internal_server_error `{ return 500; `}
	new not_implemented `{ return 501; `}
	new bad_gateway `{ return 502; `}
	new service_unavailable `{ return 503; `}
	new gateway_timeout `{ return 504; `}
	new http_version_not_supported `{ return 505; `}
	fun to_i: Int `{ return self; `}
end

# Reproduce Enum of CURL Options usable, used for NativeCurl.easy_setopt
extern class CURLOption `{ CURLoption `}

	# Behavior options

	# Display verbose information.
	new verbose `{ return CURLOPT_VERBOSE; `}

	# Include the header in the body output.
	new header `{ return CURLOPT_HEADER; `}

	# Shut off the progress meter.
	new no_progress `{ return CURLOPT_NOPROGRESS; `}

	# Do not install signal handlers.
	new	no_signal `{ return CURLOPT_NOSIGNAL; `}

	# Transfer multiple files according to a file name pattern.
	new	wild_card_match `{ return CURLOPT_WILDCARDMATCH; `}

	# Callback Options

	# Callback for writing data.
	new write_function `{ return CURLOPT_WRITEFUNCTION; `}

	# Data pointer to pass to the write callback.
	new write_data `{ return CURLOPT_WRITEDATA; `}

#	new	`{ return CURLOPT_READFUNCTION; `}
#	new `{ return CURLOPT_READDATA; `}
#	new	`{ return CURLOPT_IOCTLFUNCTION; `}
#	new	`{ return CURLOPT_IOCTLDATA; `}
#	new	`{ return CURLOPT_SEEKFUNCTION; `}
#	new	`{ return CURLOPT_SEEKDATA; `}
#	new	`{ return CURLOPT_SOCKOPTFUNCTION; `}
#	new	`{ return CURLOPT_SOCKOPTDATA; `}
#	new	`{ return CURLOPT_OPENSOCKETFUNCTION; `}
#	new	`{ return CURLOPT_OPENSOCKETDATA; `}
#	new	`{ return CURLOPT_CLOSESOCKETFUNCTION; `}
#	new	`{ return CURLOPT_CLOSESOCKETDATA; `}
#	new	`{ return CURLOPT_PROGRESSFUNCTION; `}
#	new	`{ return CURLOPT_PROGRESSDATA; `}
#	new	`{ return CURLOPT_HEADERFUNCTION; `}
#	new	`{ return CURLOPT_DEBUGFUNCTION; `}
#	new	`{ return CURLOPT_DEBUGDATA; `}
#	new	`{ return CURLOPT_SSL_CTX_FUNCTION; `}
#	new	`{ return CURLOPT_SSL_CTX_DATA; `}
#	new	`{ return CURLOPT_CONV_TO_NETWORK_FUNCTION; `}
#	new	`{ return CURLOPT_CONV_FROM_NETWORK_FUNCTION; `}
#	new	`{ return CURLOPT_CONV_FROM_UTF8_FUNCTION; `}
#	new	`{ return CURLOPT_INTERLEAVEFUNCTION; `}
#	new	`{ return CURLOPT_INTERLEAVEDATA; `}
#	new	`{ return CURLOPT_CHUNK_BGN_FUNCTION; `}
#	new	`{ return CURLOPT_CHUNK_END_FUNCTION; `}
#	new	`{ return CURLOPT_CHUNK_DATA; `}
#	new	`{ return CURLOPT_FNMATCH_FUNCTION; `}
#	new	`{ return CURLOPT_FNMATCH_DATA; `}

	# Error Options

#	new	`{ return CURLOPT_ERRORBUFFER; `}
#	new	`{ return CURLOPT_STDERR; `}

	# Fail on HTTP 4xx errors.
	new fail_on_error `{ return CURLOPT_FAILONERROR; `}

	# Networkd Options

	# URL to work on.
	new url `{ return CURLOPT_URL; `}

#	new	`{ return CURLOPT_PROTOCOLS; `}
#	new	`{ return CURLOPT_REDIR_PROTOCOLS; `}
#	new	`{ return CURLOPT_PROXY; `}
#	new	`{ return CURLOPT_PROXYPORT; `}
#	new	`{ return CURLOPT_PROXYTYPE; `}
#	new	`{ return CURLOPT_NOPROXY; `}
#	new	`{ return CURLOPT_HTTPPROXYTUNNEL; `}
#	new	`{ return CURLOPT_SOCKS5_GSSAPI_SERVICE; `}
#	new	`{ return CURLOPT_SOCKS5_GSSAPI_NEC; `}
#	new	`{ return CURLOPT_INTERFACE; `}
#	new	`{ return CURLOPT_LOCALPORT; `}
#	new	`{ return CURLOPT_LOCALPORTRANGE; `}
#	new	`{ return CURLOPT_DNS_CACHE_TIMEOUT; `}
#	new	`{ return CURLOPT_DNS_USE_GLOBAL_CACHE; `} /* DEPRECATED, do not use! */
#	new	`{ return CURLOPT_BUFFERSIZE; `}
#	new	`{ return CURLOPT_PORT; `}
#	new	`{ return CURLOPT_TCP_NODELAY; `}
#	new	`{ return CURLOPT_ADDRESS_SCOPE; `}
#	new	`{ return CURLOPT_TCP_KEEPALIVE; `}
#	new	`{ return CURLOPT_TCP_KEEPIDLE; `}
#	new	`{ return CURLOPT_TCP_KEEPINTVL; `}

	# Names and Passwords Options

#	new	`{ return CURLOPT_NETRC; `}
#	new	`{ return CURLOPT_NETRC_FILE; `}
#	new	`{ return CURLOPT_USERPWD; `}
#	new	`{ return CURLOPT_PROXYUSERPWD; `}

	new	username `{ return CURLOPT_USERNAME; `}
	new	password `{ return CURLOPT_PASSWORD; `}

#	new	`{ return CURLOPT_PROXYUSERNAME; `}
#	new	`{ return CURLOPT_PROXYPASSWORD; `}
#	new	`{ return CURLOPT_HTTPAUTH; `}
#	new	`{ return CURLOPT_TLSAUTH_USERNAME; `}
#	new	`{ return CURLOPT_TLSAUTH_PASSWORD; `}
#	new	`{ return CURLOPT_PROXYAUTH; `}

	# HTTP Options

#	new	`{ return CURLOPT_AUTOREFERER; `}

	# Accept-Encoding and automatic decompressing data.
	new	accept_encoding `{ return CURLOPT_ACCEPT_ENCODING; `}

	# Request Transfer-Encoding.
	new	transfert_encoding `{ return CURLOPT_TRANSFER_ENCODING; `}

	# Follow HTTP redirects.
	new follow_location `{ return CURLOPT_FOLLOWLOCATION; `}

#	new	`{ return CURLOPT_UNRESTRICTED_AUTH; `}
#	new	`{ return CURLOPT_MAXREDIRS; `}
#	new	`{ return CURLOPT_POSTREDIR; `}

	# Issue a HTTP PUT request.
	new put `{ return CURLOPT_PUT; `}

	# Issue a HTTP POS request.
	new post `{ return CURLOPT_POST; `}

	# Send a POST with this data.
	new postfields `{ return CURLOPT_POSTFIELDS; `}

#	new	`{ return CURLOPT_POSTFIELDSIZE; `}
#	new	`{ return CURLOPT_POSTFIELDSIZE_LARGE; `}
#	new	`{ return CURLOPT_COPYPOSTFIELDS; `}
#	new	`{ return CURLOPT_HTTPPOST; `}
#	new	`{ return CURLOPT_REFERER; `}

	# User-Agent: header.
	new user_agent	`{ return CURLOPT_USERAGENT; `}

	# Custom HTTP headers.
	new httpheader `{ return CURLOPT_HTTPHEADER; `}

#	new	`{ return CURLOPT_HTTP200ALIASES; `}
#	new	`{ return CURLOPT_COOKIE; `}
#	new	`{ return CURLOPT_COOKIEFILE; `}
#	new	`{ return CURLOPT_COOKIEJAR; `}
#	new	`{ return CURLOPT_COOKIESESSION; `}
#	new	`{ return CURLOPT_COOKIELIST; `}

	# Issue a HTTP GET request.
	new	get `{ return CURLOPT_HTTPGET; `}

	# HTTP version to use.
	new http_version `{ return CURLOPT_HTTP_VERSION; `}

#	new	`{ return CURLOPT_IGNORE_CONTENT_LENGTH; `}
#	new	`{ return CURLOPT_HTTP_CONTENT_DECODING; `}
#	new	`{ return CURLOPT_HTTP_TRANSFER_DECODING; `}

	# SMTP Options

	# Address of the sender.
	new	mail_from `{ return CURLOPT_MAIL_FROM; `}

	# Address of the recipients.
	new	mail_rcpt `{ return CURLOPT_MAIL_RCPT; `}

#	new	`{ return CURLOPT_MAIL_AUTH; `}

	# TFTP Options

#	new	`{ return CURLOPT_TFTP_BLKSIZE; `}

	# FTP Options

#	new	`{ return CURLOPT_FTPPORT; `}
#	new	`{ return CURLOPT_QUOTE; `}
#	new	`{ return CURLOPT_POSTQUOTE; `}
#	new	`{ return CURLOPT_PREQUOTE; `}

	# List only.
	new dir_list_only `{ return CURLOPT_DIRLISTONLY; `}

	# Append to remote file.
	new append `{ return CURLOPT_APPEND; `}

#	new	`{ return CURLOPT_FTP_USE_EPRT; `}
#	new	`{ return CURLOPT_FTP_USE_EPSV; `}
#	new	`{ return CURLOPT_FTP_USE_PRET; `}
#	new	`{ return CURLOPT_FTP_CREATE_MISSING_DIRS; `}
#	new	`{ return CURLOPT_FTP_RESPONSE_TIMEOUT; `}
#	new	`{ return CURLOPT_FTP_ALTERNATIVE_TO_USER; `}
#	new	`{ return CURLOPT_FTP_SKIP_PASV_IP; `}
#	new	`{ return CURLOPT_FTPSSLAUTH; `}
#	new	`{ return CURLOPT_FTP_SSL_CCC; `}
#	new	`{ return CURLOPT_FTP_ACCOUNT; `}
#	new	`{ return CURLOPT_FTP_FILEMETHOD; `}

	# RTSP Options

#	new	`{ return CURLOPT_RTSP_REQUEST; `}
#	new	`{ return CURLOPT_RTSP_SESSION_ID; `}
#	new	`{ return CURLOPT_RTSP_STREAM_URI; `}
#	new	`{ return CURLOPT_RTSP_TRANSPORT; `}
#	new	`{ return CURLOPT_RTSP_CLIENT_CSEQ; `}
#	new	`{ return CURLOPT_RTSP_SERVER_CSEQ; `}

	# Protocol Options

	# Transfer data in text/ASCII format.
	new transfert_text `{ return CURLOPT_TRANSFERTEXT; `}

#	new	`{ return CURLOPT_PROXY_TRANSFER_MODE; `}
#	new	`{ return CURLOPT_CRLF; `}
#	new	`{ return CURLOPT_RANGE; `}
#	new	`{ return CURLOPT_RESUME_FROM; `}
#	new	`{ return CURLOPT_RESUME_FROM_LARGE; `}

	# Issue a custom request/method.
	new	custom_request `{ return CURLOPT_CUSTOMREQUEST; `}

#	new	`{ return CURLOPT_FILETIME; `}

	# Do not get the body contents.
	new no_body `{ return CURLOPT_NOBODY; `}

#	new	`{ return CURLOPT_INFILESIZE; `}
#	new	`{ return CURLOPT_INFILESIZE_LARGE; `}

	# Upload data.
	new upload `{ return CURLOPT_UPLOAD; `}

#	new	`{ return CURLOPT_MAXFILESIZE; `}
#	new	`{ return CURLOPT_MAXFILESIZE_LARGE; `}
#	new	`{ return CURLOPT_TIMECONDITION; `}
#	new	`{ return CURLOPT_TIMEVALUE; `}

	# Connection Options

	# Set maximum time the request is allowed to take.
	new	timeout `{ return CURLOPT_TIMEOUT; `}

	# Set maximum time the request is allowed to take (in ms).
	new	timeout_ms `{ return CURLOPT_TIMEOUT_MS; `}

#	new	`{ return CURLOPT_LOW_SPEED_LIMIT; `}
#	new	`{ return CURLOPT_LOW_SPEED_TIME; `}
#	new	`{ return CURLOPT_MAX_SEND_SPEED_LARGE; `}
#	new	`{ return CURLOPT_MAX_RECV_SPEED_LARGE; `}
#	new	`{ return CURLOPT_MAXCONNECTS; `}
#	new	`{ return CURLOPT_FRESH_CONNECT; `}
#	new	`{ return CURLOPT_FORBID_REUSE; `}
#	new	`{ return CURLOPT_CONNECTTIMEOUT; `}
#	new	`{ return CURLOPT_CONNECTTIMEOUT_MS; `}
#	new	`{ return CURLOPT_IPRESOLVE; `}
#	new	`{ return CURLOPT_CONNECT_ONLY; `}
#	new	`{ return CURLOPT_USE_SSL; `}
#	new	`{ return CURLOPT_RESOLVE; `}
#	new	`{ return CURLOPT_ACCEPTTIMEOUT_MS; `}

	# SSL and Security Options

#	new	`{ return CURLOPT_SSLCERT; `}
#	new	`{ return CURLOPT_SSLCERTTYPE; `}
#	new	`{ return CURLOPT_SSLKEY; `}
#	new	`{ return CURLOPT_SSLKEYTYPE; `}
#	new	`{ return CURLOPT_KEYPASSWD; `}
#	new	`{ return CURLOPT_SSLENGINE; `}
#	new	`{ return CURLOPT_SSLENGINE_DEFAULT; `}
#	new	`{ return CURLOPT_SSLVERSION; `}
#	new	`{ return CURLOPT_SSL_VERIFYPEER; `}
#	new	`{ return CURLOPT_CAINFO; `}
#	new	`{ return CURLOPT_ISSUERCERT; `}
#	new	`{ return CURLOPT_CAPATH; `}
#	new	`{ return CURLOPT_CRLFILE; `}
#	new	`{ return CURLOPT_SSL_VERIFYHOST; `}
#	new	`{ return CURLOPT_CERTINFO; `}
#	new	`{ return CURLOPT_RANDOM_FILE; `}
#	new	`{ return CURLOPT_EGDSOCKET; `}
#	new	`{ return CURLOPT_SSL_CIPHER_LIST; `}
#	new	`{ return CURLOPT_SSL_SESSIONID_CACHE; `}
#	new	`{ return CURLOPT_SSL_OPTIONS; `}
#	new	`{ return CURLOPT_KRBLEVEL; `}
#	new	`{ return CURLOPT_GSSAPI_DELEGATION; `}

	# SSH Options

#	new	`{ return CURLOPT_SSH_AUTH_TYPES; `}
#	new	`{ return CURLOPT_SSH_HOST_PUBLIC_KEY_MD5; `}
#	new	`{ return CURLOPT_SSH_PUBLIC_KEYFILE; `}
#	new	`{ return CURLOPT_SSH_PRIVATE_KEYFILE; `}
#	new	`{ return CURLOPT_SSH_KNOWNHOSTS; `}
#	new	`{ return CURLOPT_SSH_KEYFUNCTION; `}
#	new	`{ return CURLOPT_SSH_KEYDATA; `}

	# TELNET Options

#	new	`{ return CURLOPT_TELNETOPTIONS; `}

	# Other Options

#	new	`{ return CURLOPT_PRIVATE; `}
#	new	`{ return CURLOPT_SHARE; `}
#	new	`{ return CURLOPT_NEW_FILE_PERMS; `}
#	new	`{ return CURLOPT_NEW_DIRECTORY_PERMS; `}

	# Set the Unix domain socket
	new unix_socket_path `{ return CURLOPT_UNIX_SOCKET_PATH; `}
end
