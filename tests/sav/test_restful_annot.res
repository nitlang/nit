[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_0'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_1'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_2'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/async_service?str=thread_3'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/foo?s=s&i=12&b=true'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/foo?s=s&i=-4&b=false'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/foo' --data 's=s&i=12&b=true'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/api_name?s=s'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/alt_name?s=s'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/api_name?i=4&b=false'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/complex_args?array=["a","b"]&data={"str":"asdf"}' -g
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/complex_args?array=["a","b"]&data={"__class":"MyOtherData","str":"asdf","i":1234}' -g
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/non_existent_service'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/foo'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/foo?b=WrongDataType'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/bar?s=s'
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/api_name' --data s=DoesNotAcceptPOST
Fallback answer
[Client] curl -s 'localhost:*****/rest_path/complex_args?array=["a","b"]&data={"str":"as' -g
Fallback answer
