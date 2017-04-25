[0;33m1,7[0m: Redef Error: `A` is an imported class. Add the `redef` keyword to refine it.
	class [1;31mA[0m
	      ^
[0;33m1,1--3[0m: Error: method or variable `foo` unknown in `Sys`.
	[1;31mfoo[0m
	^
[0;33m1,20--26[0m: Error: method `to_json` does not exists in `Array[Int]`.
	print([0..10[.to_a.[1;31mto_json[0m)
	                   ^
-->7
-->-->......0
1
2
3
4
-->-->..................1225
-->-->............-->hello
-->-->...	[0;31mend[0m
	^: Syntax Error: unexpected keyword 'end'.
-->...-->......-->Bye
-->-->-->......-->I'm sys
-->-->......-->-->5
-->-->-->-->[0,1,2,3,4,5,6,7,8,9]
-->-->	[0;31m%[0m$^&
	^: Syntax Error: unexpected operator '%'.
-->