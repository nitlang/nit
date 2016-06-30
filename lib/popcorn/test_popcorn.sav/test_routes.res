
[Client] curl -s localhost:*****
/
[Client] curl -s localhost:*****/
/
[Client] curl -s localhost:*****/misc
/misc/everything
[Client] curl -s localhost:*****/misc/foo
/misc/everything
[Client] curl -s localhost:*****/misc/foo/bar
/misc/everything
[Client] curl -s localhost:*****/misc/foo/baz
/misc/everything
[Client] curl -s localhost:*****/user
/user
[Client] curl -s localhost:*****/user/
/user
[Client] curl -s localhost:*****/user/id
/user/id
[Client] curl -s localhost:*****/user/id/profile
/user/id/profile
[Client] curl -s localhost:*****/user/id/misc/foo
/user/id/misc/everything
[Client] curl -s localhost:*****/user/id/misc/foo/bar
/user/id/misc/everything
[Client] curl -s localhost:*****/user/id/misc/foo/bar/baz
/user/id/misc/everything
[Client] curl -s localhost:*****/not_found
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
[Client] curl -s localhost:*****/user/id/not_found
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
