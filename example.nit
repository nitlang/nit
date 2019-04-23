class V1
    fun toto (u1 : U1, t2 : T2) do print "u1, t2"
    fun toto (u1 : U1, v2 : V2) do print "u1, v2"
    fun toto (v1 : V1, v2 : V2) do print "v1, v2"
    fun toto (t1 : T1, u2 : U2) do print "t1, u2"
end
class U1 super V1 end
class T1 super U1 end
class V2 end
class U2 super V2 end
class T2 super U2 end

var t1 = new T1
var u1 = new U1
var v1 = new V1

var t2 = new T2
var u2 = new U2
var v2 = new V2

v1.toto(v1, v2)
v1.toto(v1, t2)
v1.toto(u1, u2)
v1.toto(t1, t2)