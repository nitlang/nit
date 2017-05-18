
[Client] curl -s localhost:*****/css/style.css
body {
	color: blue;
	padding: 20px;
}

[Client] curl -s localhost:*****/js/app.js
alert("Hello World!");

[Client] curl -s localhost:*****/hello.html
<!DOCTYPE html>
<html>
	<head>
		<meta charset="UTF-8">

		<title>Some Popcorn love</title>

		<link rel="stylesheet" type="text/css" href="/css/style.css">
	</head>
	<body>
		<h1>Hello Popcorn!</h1>

		<img src="/images/trollface.jpg" alt="maybe it's a kitten?" />

		<script src="/js/app.js"></script>
	</body>
</html>

[Client] curl -s localhost:*****/
<!DOCTYPE html>
<html>
	<body>
		<h1>Another Index</h1>
	</body>
</html>

[Client] curl -s localhost:*****/static/css/style.css
body {
	color: blue;
	padding: 20px;
}

[Client] curl -s localhost:*****/static/js/app.js
alert("Hello World!");

[Client] curl -s localhost:*****/static/hello.html
<!DOCTYPE html>
<html>
	<head>
		<meta charset="UTF-8">

		<title>Some Popcorn love</title>

		<link rel="stylesheet" type="text/css" href="/css/style.css">
	</head>
	<body>
		<h1>Hello Popcorn!</h1>

		<img src="/images/trollface.jpg" alt="maybe it's a kitten?" />

		<script src="/js/app.js"></script>
	</body>
</html>

[Client] curl -s localhost:*****/static/
<!DOCTYPE html>
<html>
	<body>
		<h1>Another Index</h1>
	</body>
</html>

[Client] curl -s localhost:*****/css/not_found.nit
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
[Client] curl -s localhost:*****/static/css/not_found.nit
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
[Client] curl -s localhost:*****/not_found.nit
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
