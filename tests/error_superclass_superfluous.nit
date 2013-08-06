import kernel

interface A
end

interface X
	#alt3# super Object
end

interface B
	super A
	super X
end

interface C
	super X
end

interface D
	super B
	super C
	#alt1#super A
	#alt2#super B
	#alt4#super X
	#alt5#super D
end
