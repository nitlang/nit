		LDA		0,i
while:	CPA		10,i
		BREQ	end
		ADDA	1,i
		BR		while
end:	STOP
		.END
