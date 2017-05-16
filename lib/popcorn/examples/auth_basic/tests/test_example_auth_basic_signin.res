
[Client] curl -X POST -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"document":["Expected JsonObject got `JsonParseError`"]}}
[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"login":["Must be at least `4 characters long`"]}}
[Client] rm -f test_example_auth_basic_signin.json

[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"password1":["Must be at least `6 characters long`"]}}
[Client] rm -f test_example_auth_basic_signin.json

[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"password2":["Values mismatch: `` against `password`"]}}
[Client] rm -f test_example_auth_basic_signin.json

[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"email":["Does not match `(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9.-]+$)`"]}}
[Client] rm -f test_example_auth_basic_signin.json

[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"_id":"alexandre","login":"alexandre","email":"alexandre@moz-code.org","password_hash":"0c1f4174c35408d80f7e5d2aa481f88c","salt":"salt","email_is_valid":false,"email_validation_token":null,"reset_password_token":null,"_id":"alexandre"}
[Client] rm -f test_example_auth_basic_signin.json

