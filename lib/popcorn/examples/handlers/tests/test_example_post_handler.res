
[Client] curl -s localhost:*****/ -X POST
URI: /
Body: 

[Client] curl -s localhost:*****/ --data 'user'
URI: /
Body: user

[Client] curl -s localhost:*****/ --data 'user=Morriar'
URI: /
Body: user=Morriar
user: Morriar

[Client] curl -s localhost:*****/ --data 'user=&order=desc'
URI: /
Body: user=&order=desc
user: 
order: desc

[Client] curl -s localhost:*****/ --data 'user=Morriar&order=desc'
URI: /
Body: user=Morriar&order=desc
user: Morriar
order: desc

[Client] curl -s localhost:*****/
		<!DOCTYPE html>
		<html>
		<head>
			<meta charset="utf-8">
			<title>Not Found</title>
		</head>
		<body>
		<h1>404 Not Found</h1>
		</body>
		</html>
