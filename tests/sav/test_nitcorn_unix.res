
[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/simple_answer
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/simple_answer/
[Response] Simple answer
Method: GET, URI: /simple_answer/, trailing: /

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/simple_answer/trailing/path
[Response] Simple answer
Method: GET, URI: /simple_answer/trailing/path, trailing: /trailing/path

[Client] curl --unix-socket /tmp/example.sock -s 'localhost:*****/simple_answer?i=0123&s=asdf'
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /
GET args: i:0123, s:asdf

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/simple_answer --data 'i=0123&s=asdf'
[Response] Simple answer
Method: POST, URI: /simple_answer, trailing: /
POST args: i:0123, s:asdf

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/simple_answer --cookie 'i=0123; s=asdf'
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /
Cookie: i:0123, s:asdf

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/simple_answer --get --data-urlencode 's=b b'
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /
GET args: s:b b

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/params_answer/0123/asdf
[Response] Simple answer
Method: GET, URI: /params_answer/0123/asdf, trailing: /
Params args: i:0123, s:asdf

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/params_answer/0123/
[Response] Simple answer
Method: GET, URI: /params_answer/0123/, trailing: /
Params args: i:0123, s:

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/params_answer/0123/asdf/trailing/path
[Response] Simple answer
Method: GET, URI: /params_answer/0123/asdf/trailing/path, trailing: /trailing/path
Params args: i:0123, s:asdf

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/params_answer/0123 --head
HTTP/1.0 404 Not Found
Content-Length: 0
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server/
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<script>
		
	</script>
	<title>/</title>
</head>
<body>
	
	<div class="container">
		<h1>/</h1>
		<ul>
			<li><a href="a.txt">a.txt</a></li>
			<li><a href="b.txt">b.txt</a></li>
			<li><a href="binary_file.png">binary_file.png</a></li>
		</ul>
	</div>
</body>
</html>
[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server/ --head
HTTP/1.0 200 OK
Content-Type: text/html
Content-Length: 467
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server --head
HTTP/1.0 303 See Other
Location: /file_server/
Content-Length: 0
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server/a.txt
aaaAAAAAaaaa

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server/a.txt --head
HTTP/1.0 200 OK
Content-Type: text/plain
cache-control: public, max-age=360
Content-Length: 13
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server/binary_file.png --head
HTTP/1.0 200 OK
Content-Type: image/png
cache-control: public, max-age=360
Content-Length: 2503
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server/binary_file.png | diff - .../binary_file.png

[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/file_server/unknown_file.txt --head
HTTP/1.0 404 Not Found
Content-Length: 329
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl --unix-socket /tmp/example.sock -s localhost:*****/invalid_route --head
HTTP/1.0 404 Not Found
Content-Length: 0
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl -s localhost:*****/simple_answer
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /

[Client] curl -s localhost:*****/simple_answer/
[Response] Simple answer
Method: GET, URI: /simple_answer/, trailing: /

[Client] curl -s localhost:*****/simple_answer/trailing/path
[Response] Simple answer
Method: GET, URI: /simple_answer/trailing/path, trailing: /trailing/path

[Client] curl -s 'localhost:*****/simple_answer?i=0123&s=asdf'
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /
GET args: i:0123, s:asdf

[Client] curl -s localhost:*****/simple_answer --data 'i=0123&s=asdf'
[Response] Simple answer
Method: POST, URI: /simple_answer, trailing: /
POST args: i:0123, s:asdf

[Client] curl -s localhost:*****/simple_answer --cookie 'i=0123; s=asdf'
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /
Cookie: i:0123, s:asdf

[Client] curl -s localhost:*****/simple_answer --get --data-urlencode 's=b b'
[Response] Simple answer
Method: GET, URI: /simple_answer, trailing: /
GET args: s:b b

[Client] curl -s localhost:*****/params_answer/0123/asdf
[Response] Simple answer
Method: GET, URI: /params_answer/0123/asdf, trailing: /
Params args: i:0123, s:asdf

[Client] curl -s localhost:*****/params_answer/0123/
[Response] Simple answer
Method: GET, URI: /params_answer/0123/, trailing: /
Params args: i:0123, s:

[Client] curl -s localhost:*****/params_answer/0123/asdf/trailing/path
[Response] Simple answer
Method: GET, URI: /params_answer/0123/asdf/trailing/path, trailing: /trailing/path
Params args: i:0123, s:asdf

[Client] curl -s localhost:*****/params_answer/0123 --head
HTTP/1.0 404 Not Found
Content-Length: 0
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl -s localhost:*****/file_server/
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<script>
		
	</script>
	<title>/</title>
</head>
<body>
	
	<div class="container">
		<h1>/</h1>
		<ul>
			<li><a href="a.txt">a.txt</a></li>
			<li><a href="b.txt">b.txt</a></li>
			<li><a href="binary_file.png">binary_file.png</a></li>
		</ul>
	</div>
</body>
</html>
[Client] curl -s localhost:*****/file_server/ --head
HTTP/1.0 200 OK
Content-Type: text/html
Content-Length: 467
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl -s localhost:*****/file_server --head
HTTP/1.0 303 See Other
Location: /file_server/
Content-Length: 0
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl -s localhost:*****/file_server/a.txt
aaaAAAAAaaaa

[Client] curl -s localhost:*****/file_server/a.txt --head
HTTP/1.0 200 OK
Content-Type: text/plain
cache-control: public, max-age=360
Content-Length: 13
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl -s localhost:*****/file_server/binary_file.png --head
HTTP/1.0 200 OK
Content-Type: image/png
cache-control: public, max-age=360
Content-Length: 2503
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl -s localhost:*****/file_server/binary_file.png | diff - .../binary_file.png

[Client] curl -s localhost:*****/file_server/unknown_file.txt --head
HTTP/1.0 404 Not Found
Content-Length: 329
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT


[Client] curl -s localhost:*****/invalid_route --head
HTTP/1.0 404 Not Found
Content-Length: 0
Server: nitcorn
Set-Cookie: nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT

