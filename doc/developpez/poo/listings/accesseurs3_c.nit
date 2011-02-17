class Test 
	var attribut1: String writable = "Attribut 1"
	protected var attribut2: String protected writable = "Attribut 2"
end

var test = new Test

test.attribut1= "Setter public"
print test.attribut1 #Setter public
