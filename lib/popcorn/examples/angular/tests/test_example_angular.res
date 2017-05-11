
[Client] curl -s localhost:*****/counter
{"label":"Visitors","value":0}
[Client] curl -s localhost:*****/counter -X POST
{"label":"Visitors","value":1}
[Client] curl -s localhost:*****/counter
{"label":"Visitors","value":1}
[Client] curl -s localhost:*****/not_found
<!DOCTYPE html>
<html lang='en' ng-app='ng-example'>
	<head>
		<base href='/'>
		<title>ng-example</title>
	</head>
	<body>
		<div ng-view></div>

		<script src='https://cdnjs.cloudflare.com/ajax/libs/angular.js/1.5.5/angular.min.js'></script>
		<script src='https://cdnjs.cloudflare.com/ajax/libs/angular.js/1.5.5/angular-route.js'></script>
		<script src='/javascripts/ng-example.js'></script>
	</body>
</html>

