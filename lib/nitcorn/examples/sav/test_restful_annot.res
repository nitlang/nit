[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_0'
[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_1'
[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_2'
[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_3'
[Client] curl -s 'localhost:*****/rest_path/foo?s=s&i=12&b=true'
foo s 12 true
[Client] curl -s 'localhost:*****/rest_path/foo?s=s&i=-4&b=false'
foo s -4 false
[Client] curl -s 'localhost:*****/rest_path/foo' --data 's=s&i=12&b=true'
foo s 12 true
[Client] curl -s 'localhost:*****/rest_path/api_name?s=s'
bar s null null
[Client] curl -s 'localhost:*****/rest_path/alt_name?s=s'
bar s null null
[Client] curl -s 'localhost:*****/rest_path/api_name?i=4&b=false'
bar null 4 false
[Client] curl -s 'localhost:*****/rest_path/complex_args?array=["a","b"]&data={"str":"asdf"}' -g
complex_args [a,b] <MyData str:asdf more:null>
[Client] curl -s 'localhost:*****/rest_path/complex_args?array=["a","b"]&data={"__class":"MyOtherData","str":"asdf","i":1234}' -g
complex_args [a,b] <MyOtherData str:asdf more:null i:1234>
[Client] curl -s 'localhost:*****/rest_path/non_existent_service'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/foo'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/foo?b=WrongDataType'
Bad JSON character
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/bar?s=s'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/api_name' --data s=DoesNotAcceptPOST
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/complex_args?array=["a","b"]&data={"str":"as' -g
Malformed JSON string
Fallback answer
async_service thread_0
async_service thread_1
async_service thread_2
async_service thread_3
