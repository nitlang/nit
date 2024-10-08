# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Justin Michaud-Ouellette
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

# Services to identify Internet media types (or MIME types, Content-types)
module media_types

# Map of known MIME types
class MediaTypes

	# MIME types by extensions.
	protected var types = new HashMap[String, String]

	# Get the type/subtype associated to a file extension `ext`
	fun [](ext: String): nullable String
	do
		if types.keys.has(ext) then return types[ext]
		return null
	end

	init
	do
		types["html"]       = "text/html"
		types["htm"]        = "text/html"
		types["shtml"]      = "text/html"
		types["css"]        = "text/css"
		types["csv"]        = "text/csv"
		types["xml"]        = "text/xml"
		types["rss"]        = "text/xml"
		types["gif"]        = "image/gif"
		types["jpg"]        = "image/jpeg"
		types["jpeg"]       = "image/jpeg"
		types["js"]         = "application/x-javascript"
		types["txt"]        = "text/plain"
		types["htc"]        = "text/x-component"
		types["mml"]        = "text/mathml"
		types["png"]        = "image/png"
		types["ico"]        = "image/x-icon"
		types["jng"]        = "image/x-jng"
		types["wbmp"]       = "image/vnd.wap.wbmp"
		types["gz"]         = "application/gzip"
		types["jar"]        = "application/java-archive"
		types["war"]        = "application/java-archive"
		types["ear"]        = "application/java-archive"
		types["json"]       = "application/json"
		types["hqx"]        = "application/mac-binhex40"
		types["pdf"]        = "application/pdf"
		types["cco"]        = "application/x-cocoa"
		types["jardiff"]    = "application/x-java-archive-diff"
		types["jnlp"]       = "application/x-java-jnlp-file"
		types["run"]        = "application/x-makeself"
		types["pl"]         = "application/x-perl"
		types["pm"]         = "application/x-perl"
		types["pdb"]        = "application/x-pilot"
		types["prc"]        = "application/x-pilot"
		types["rar"]        = "application/x-rar-compressed"
		types["rpm"]        = "application/x-redhat-package-manager"
		types["sea"]        = "application/x-sea"
		types["swf"]        = "application/x-shockwave-flash"
		types["sit"]        = "application/x-stuffit"
		types["tcl"]        = "application/x-tcl"
		types["tk"]         = "application/x-tcl"
		types["der"]        = "application/x-x509-ca-cert"
		types["pem"]        = "application/x-x509-ca-cert"
		types["crt"]        = "application/x-x509-ca-cert"
		types["xpi"]        = "application/x-xpinstall"
		types["zip"]        = "application/zip"
		types["deb"]        = "application/octet-stream"
		types["bin"]        = "application/octet-stream"
		types["exe"]        = "application/octet-stream"
		types["dll"]        = "application/octet-stream"
		types["dmg"]        = "application/octet-stream"
		types["eot"]        = "application/octet-stream"
		types["iso"]        = "application/octet-stream"
		types["img"]        = "application/octet-stream"
		types["msi"]        = "application/octet-stream"
		types["msp"]        = "application/octet-stream"
		types["msm"]        = "application/octet-stream"
		types["mp3"]        = "audio/mpeg"
		types["ra"]         = "audio/x-realaudio"
		types["mpeg"]       = "video/mpeg"
		types["mpg"]        = "video/mpeg"
		types["mov"]        = "video/quicktime"
		types["flv"]        = "video/x-flv"
		types["avi"]        = "video/x-msvideo"
		types["wmv"]        = "video/x-ms-wmv"
		types["asx"]        = "video/x-ms-asf"
		types["asf"]        = "video/x-ms-asf"
		types["mng"]        = "video/x-mng"
		types["apk"]        = "application/vnd.android.package-archive"
		types["svg"]        = "image/svg+xml"
		types["ttf"]        = "application/x-font-ttf"
		types["otf"]        = "application/x-font-opentype"
		types["eof"]        = "application/vnd.ms-fontobject"
		types["woff"]       = "application/font-woff"
		types["woff2"]      = "application/font-woff2"
	end
end

# MIME types list.
fun media_types: MediaTypes do return once new MediaTypes
