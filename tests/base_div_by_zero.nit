import kernel

class A
	fun /(i: Int): Int do return i
end

var i = 10
var f = 10.0
var a = new A
var z = 0

(i * 0).output
(i / 2).output
(f / 0.0).output
(a / 0).output
if false then (i / z).output
if false then (i / 0).output
