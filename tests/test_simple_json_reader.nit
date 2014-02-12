import simple_json_reader

redef class HashMap[K,V]
	redef fun to_s do return "<HashMap {join(", ", ": ")}>"
end

var a = "\{\"__kind\": \"obj\", \"__id\": 0, \"__class\": \"C\", \"a\": \{\"__kind\": \"obj\", \"__id\": 1, \"__class\": \"A\", \"b\": true, \"c\": \"a\", \"f\": 0.123, \"i\": 1234, \"s\": \"asdf\", \"n\": null, \"array\": [88, \"hello\", null]\}, \"b\": \{\"__kind\": \"obj\", \"__id\": 2, \"__class\": \"B\", \"b\": false, \"c\": \"b\", \"f\": 123.123, \"i\": 2345, \"s\": \"hjkl\", \"n\": null, \"array\": [88, \"hello\", null], \"ii\": 1111, \"ss\": \"qwer\"\}, \"aa\": \{\"__kind\": \"ref\", \"__id\": 1\}\}"
var b = "\{\"__kind\": \"obj\", \"__id\": 0, \"__class\": \"A\", \"b\": true, \"c\": \"a\", \"f\": 0.123, \"i\": 1234, \"s\": \"asdf\", \"n\": null, \"array\": [88, \"hello\", null]\}"

for s in [a, b] do
	var obj = s.json_to_nit_object
	print "# Json: {s}"
	print "# Nit: {obj or else "<null>"}"
end
