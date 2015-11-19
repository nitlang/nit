# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Android implementation of `app:http_request`
module http_request is
	android_manifest """<uses-permission android:name="android.permission.INTERNET" />"""
end

intrude import app::http_request
import ui

in "Java" `{
	import org.apache.http.client.methods.HttpGet;
	import org.apache.http.impl.client.DefaultHttpClient;
	import org.apache.http.HttpResponse;
	import org.apache.http.HttpStatus;
	import org.apache.http.StatusLine;
	import java.io.ByteArrayOutputStream;
`}

redef class App
	redef fun run_on_ui_thread(task) do app.native_activity.run_on_ui_thread task
end

redef class Text

	redef fun http_get
	do
		jni_env.push_local_frame 8
		var juri = self.to_java_string
		var jrep = java_http_get(juri)

		assert not jrep.is_java_null

		var res
		if jrep.is_exception then
			jrep = jrep.as_exception
			res = new HttpRequestResult(null, new IOError(jrep.message.to_s))
		else if jrep.is_http_response then
			jrep = jrep.as_http_response
			res = new HttpRequestResult(jrep.content.to_s, null, jrep.status_code)
		else abort

		jni_env.pop_local_frame
		return res
	end
end

redef class AsyncHttpRequest

	redef fun main
	do
		var res = super
		jvm.detach_current_thread
		return res
	end
end

redef class JavaObject
	private fun is_exception: Bool in "Java" `{ return self instanceof Exception; `}
	private fun as_exception: JavaException in "Java" `{ return (Exception)self; `}

	private fun is_http_response: Bool in "Java" `{ return self instanceof HttpResponse; `}
	private fun as_http_response: JavaHttpResponse in "Java" `{ return (HttpResponse)self; `}
end

private fun java_http_get(uri: JavaString): JavaObject in "Java" `{
	try {
		DefaultHttpClient client = new DefaultHttpClient();
		HttpGet get = new HttpGet(uri);
		return client.execute(get);
	} catch (Exception ex) {
		return ex;
	}
`}

private extern class JavaHttpResponse in "Java" `{ org.apache.http.HttpResponse `}
	super JavaObject

	fun status_code: Int in "Java" `{ return self.getStatusLine().getStatusCode(); `}

	fun content: JavaString in "Java" `{
		try {
			ByteArrayOutputStream out = new ByteArrayOutputStream();
			self.getEntity().writeTo(out);
			out.close();
			return out.toString();
		} catch (Exception ex) {
			ex.printStackTrace();
			return "";
		}
	`}
end
