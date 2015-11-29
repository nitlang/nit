# This file is part of NIT ( http://www.nitlanguage.org ).
# This program is public domain 
#
# author: Istvan SZALAI 28/11/2015

import console
import reactor

# Print server request information, The function should be call before the return
# in the redefinition on Answer.
fun log_print (response:HttpResponse, request:HttpRequest) do
	print "{request.method}    {request.uri}    {color(response.status_code)}  "
end

fun color (number:Int):String do
	if number >= 200 and number < 300 then
		 return number.to_s.green.bold
	else if number >= 400 and number <= 500 then
		 return number.to_s.red.bold
	else if number >= 300 and number < 400 then
		 return number.to_s.cyan.bold
	end
	return ""
end                          
