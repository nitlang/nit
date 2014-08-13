# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

# Refines intent module to add API 16 services
module intent_api16

import intent_api15

in "Java" `{
	import android.content.Intent;
	import android.net.Uri;
`}

redef extern class NativeIntent
	fun set_data_and_normalize(data_uri: JavaString): NativeIntent in "Java" `{ return recv.setDataAndNormalize(Uri.parse(data_uri)); `}
	fun set_data_and_type_and_normalize(data_uri: JavaString, type_: JavaString): NativeIntent in "Java" `{ return recv.setDataAndTypeAndNormalize(Uri.parse(data_uri), type_); `}
	fun set_mime_type_and_normalize(mime_type: JavaString): NativeIntent in "Java" `{ return recv.setTypeAndNormalize(mime_type); `}
end

redef class Extra
	fun html_text: JavaString in "Java" `{ return Intent.EXTRA_HTML_TEXT; `}
end

redef class Flag
	fun receiver_foreground: Int in "Java" `{ return Intent.FLAG_RECEIVER_FOREGROUND; `}
end

redef class Intent
	fun set_data_and_normalize(data_uri: String): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.set_data_and_normalize(data_uri.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	fun set_data_and_type_and_normalize(data_uri: String, type_name: String): Intent
	do
		sys.jni_env.push_local_frame(2)
		intent.set_data_and_type_and_normalize(data_uri.to_java_string, type_name.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end

	fun set_mime_type_and_normalize(mime_type: String): Intent
	do
		sys.jni_env.push_local_frame(1)
		intent.set_mime_type_and_normalize(mime_type.to_java_string)
		sys.jni_env.pop_local_frame
		return self
	end
end
