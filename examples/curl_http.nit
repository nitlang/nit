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

# Sample of the Curl module.
module curl_http

import curl

# Small class to represent an Http Fetcher
class MyHttpFetcher
  super CurlCallbacks

  var curl: Curl

  init do self.curl = new Curl

  # Release curl object
  fun destroy do self.curl.destroy

  fun request(url: String): nullable CurlRequest do return self.curl.http_request(url)

  # Header callback
  redef fun header_callback(line: String) do print "Header_callback : {line}"

  # Body callback
  redef fun body_callback(line: String) do print "Body_callback : {line}"

  # Stream callback - Cf : No one is registered
  redef fun stream_callback(buffer: String, size: Int, count: Int) do print "Stream_callback : {buffer} - {size} - {count}"
end


# Program
if args.length < 2 then
  print "Usage {sys.program_name} <method wished [POST, GET, GET_FILE]> <target url>"
else

  var myHttpFetcher = new MyHttpFetcher
  var url = args[1]

  # HTTP Get Request
  if args[0] == "GET" then
    var getContentRequest = myHttpFetcher.request(url)
    if getContentRequest isa CurlHTTPRequest then

      getContentRequest.verbose = false
      var getResponse = getContentRequest.execute

      if getResponse isa CurlResponseSuccess then
        print "Status code : {getResponse.status_code}"
        print "Body : {getResponse.body_str}"
      else if getResponse isa CurlResponseFailed then
        print "Error code : {getResponse.error_code}"
        print "Error msg : {getResponse.error_msg}"
      end

    else
      print "Wrong init with Curl HTTP request"
    end

  # HTTP Post Request
  else if args[0] == "POST" then
    var postContentRequest = myHttpFetcher.request(url)
    if postContentRequest isa CurlHTTPRequest then

      postContentRequest.delegate = myHttpFetcher
      var postDatas = new HeaderMap
      postDatas["Bugs Bunny"] = "Daffy Duck"
      postDatas["Batman"] = "Robin likes special characters @#ùà!è§'(\"é&://,;<>∞~*"
      postDatas["Batman"] = "Yes you can set multiple identical keys, but APACHE will consider only once, the last one"
      postContentRequest.datas = postDatas
      postContentRequest.verbose = false
      var postResponse = postContentRequest.execute

      if postResponse isa CurlResponseSuccess then
        print "*** Answer ***"
        print "Status code : {postResponse.status_code}"
        print "Body should be empty, because we decided to manage callbacks : {postResponse.body_str.length}"
      else if postResponse isa CurlResponseFailed then
        print "Error code : {postResponse.error_code}"
        print "Error msg : {postResponse.error_msg}"
      end

    else
      print "Wrong init with Curl HTTP request"
    end

  # HTTP Get to file Request
  else if args[0] == "GET_FILE" then
    var downloadFileRequest = myHttpFetcher.request(url)
    if downloadFileRequest isa CurlHTTPRequest then

      var headers = new HeaderMap
      headers["Accept"] = "Moo"
      downloadFileRequest.headers = headers
      downloadFileRequest.verbose = true
      var downloadResponse = downloadFileRequest.download_to_file(null)

      if downloadResponse isa CurlFileResponseSuccess then
        print "*** Answer ***"
        print "Status code : {downloadResponse.status_code}"
        print "Size downloaded : {downloadResponse.size_download}"
      else if downloadResponse isa CurlResponseFailed then
        print "Error code : {downloadResponse.error_code}"
        print "Error msg : {downloadResponse.error_msg}"
      end

    else
      print "Wrong init with Curl HTTP request"
    end

  # Program logic
  else
    print "Usage : Method[POST, GET, GET_FILE]"
  end
end
