# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Matthieu Lucas <lucasmatthieu@gmail.com>
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

intrude import curl

class CallbackManager
  super CurlCallbacks

  redef fun body_callback(line) do end
end

private fun error_manager(err: CURLCode) do if not err.is_ok then print err

var url = "http://example.org/"

var curl = new NativeCurl.easy_init
if not curl.is_init then print "failed init"

var error:CURLCode
error = curl.easy_setopt(new CURLOption.url, url)
error_manager(error)

# Activate for advanced debugging
#error = curl.easy_setopt(new CURLOption.verbose, 1)
#error_manager(error)

var cbManager = new CallbackManager
error = curl.register_callback_body(cbManager)
error_manager(error)

error = curl.easy_perform
error_manager(error)

# Long set
var info = curl.easy_getinfo_long(new CURLInfoLong.header_size)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.response_code)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.http_connectcode)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.filetime)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.redirect_count)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.request_size)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.ssl_verifyresult)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.httpauth_avail)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.proxyauth_avail)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.os_errno)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.primary_port)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.num_connects)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.local_port)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.lastsocket)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.condition_unmet)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.rtsp_client_cseq)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.rtsp_server_cseq)
assert infoResp:info != null

info = curl.easy_getinfo_long(new CURLInfoLong.rtsp_cseq_self)
assert infoResp:info != null

# Double
var infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.total_time)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.namelookup_time)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.connect_time)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.appconnect_time)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.pretransfer_time)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.starttransfer_time)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.redirect_time)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.size_upload)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.size_download)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.speed_download)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.speed_upload)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.content_length_download)
assert infoResp:infoDouble != null

infoDouble = curl.easy_getinfo_double(new CURLInfoDouble.content_length_upload)
assert infoResp:infoDouble != null

# String set
var infoStr = curl.easy_getinfo_chars(new CURLInfoChars.content_type)
assert infoResp:infoStr != null

infoStr = curl.easy_getinfo_chars(new CURLInfoChars.effective_url)
assert infoResp:infoStr != null

# follow_location not set, so returns null
infoStr = curl.easy_getinfo_chars(new CURLInfoChars.redirect_url)
assert infoStr == null

infoStr = curl.easy_getinfo_chars(new CURLInfoChars.primary_ip)
assert infoResp:infoStr != null

infoStr = curl.easy_getinfo_chars(new CURLInfoChars.local_ip)
assert infoResp:infoStr != null

# Not connecting to FTP so `null`
infoStr = curl.easy_getinfo_chars(new CURLInfoChars.ftp_entry_path)
assert infoStr == null

# opt private not set nor implemented, so returns null
infoStr = curl.easy_getinfo_chars(new CURLInfoChars.private_data)
assert infoStr == null

# Not an RTSP connection so `null`
infoStr = curl.easy_getinfo_chars(new CURLInfoChars.rtsp_session_id)
assert infoStr == null

# CURLSList set
var infoList = curl.easy_getinfo_slist(new CURLInfoSList.ssl_engines)
assert infoResp:infoList != null

infoList = curl.easy_getinfo_slist(new CURLInfoSList.cookielist)
assert infoResp:infoList != null

# CURLSList to Array
var mailList = new CURLSList.with_str("titi")
mailList.append("toto")
mailList.append("toto2")
mailList.append("toto3")
mailList.append("toto4")
mailList.append("toto9")
if mailList.is_init then
  var content = mailList.to_a
  print "CURLSList to array - content: {content.to_s}"
  print "CURLSList to array - length: {content.length.to_s}"
  mailList.destroy
else
  print "CURLSList to array: CURLSList wrong init"
end

# CURLSList from Array
var mailRecipientsArray = new Array[String]
mailRecipientsArray.add("tata")
mailRecipientsArray.add("tata2")
var mailRecipientsList: CURLSList = mailRecipientsArray.to_curlslist
if mailRecipientsList.is_init then
  print "Array to CURLSList - content: {mailRecipientsList.to_a.to_s}"
  print "Array to CURLSList - length: {mailRecipientsList.to_a.length.to_s}"
  mailRecipientsList.destroy
else
  print "CURLSList to array: CURLSList wrong init"
end

# HashMap Refines
var hashMapRefined = new HeaderMap
hashMapRefined["hello"] = "toto"
hashMapRefined["hello"] = "tata"
hashMapRefined["allo"] = "foo"
print hashMapRefined.to_url_encoded(new Curl)
