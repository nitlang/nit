
[Client] curl -s localhost:*****/counter
{"label":"Visitors","value":0}
[Client] curl -s localhost:*****/counter -X POST
{"label":"Visitors","value":1}
[Client] curl -s localhost:*****/counter
{"label":"Visitors","value":1}