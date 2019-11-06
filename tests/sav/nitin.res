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
-->-->-->-->.........-->-->-->1,1--5: Runtime error: Aborted
	[0;31mabort[0m
	^
,---- Stack trace -- - -  -
| input-22$Sys$main (1,1--5)
`------------------- - -  -
-->1,1--7: Runtime error: Receiver is null
	[0;31mnil.foo[0m
	^
,---- Stack trace -- - -  -
| input-23$Sys$main (1,1--7)
`------------------- - -  -
-->1,1--28: Runtime error: Abstract method `foo_abstract` called on `Sys`
	[0;31mfun foo_abstract is abstract[0m
	^
,---- Stack trace -- - -  -
| input-18$Sys$foo_abstract (1,1--28)
| input-24$Sys$main (1,1--12)
`------------------- - -  -
-->1,1--12: Runtime error: Assert failed
	[0;31massert false[0m
	^
,---- Stack trace -- - -  -
| input-25$Sys$main (1,1--12)
`------------------- - -  -
-->1,1--13: Runtime error: Cast failed. Expected `B`, got `A`
	[0;31m(new A).as(B)[0m.foo
	^
,---- Stack trace -- - -  -
| input-26$Sys$main (1,1--13)
`------------------- - -  -
-->1,7--15: Runtime error: Uninitialized attribute _a
	print([0;31m(new B).a[0m)
	      ^
,---- Stack trace -- - -  -
| input-27$Sys$main (1,7--15)
`------------------- - -  -
-->1,1--24: Runtime error: NOT YET IMPLEMENTED intern input-19$Sys$foo_intern
	[0;31mfun foo_intern is intern[0m
	^
,---- Stack trace -- - -  -
| input-19$Sys$foo_intern (1,1--24)
| input-28$Sys$main (1,1--10)
`------------------- - -  -
-->-->Finished
-->