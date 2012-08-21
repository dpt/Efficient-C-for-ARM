setPos1 LDR r2,[r0,#0]
	MOV r1,#0
	STR r1,[r2,#0]
	LDR r2,[r0,#0] ; *** redundant load
	STR r1,[r2,#4]
	LDR r0,[r0,#0]
	STR r1,[r0,#8]
	MOV pc,lr

setPos2 LDR r0,[r0,#0]
	MOV r1,#0
	STR r1,[r0,#0]
	STR r1,[r0,#4]
	STR r1,[r0,#8]
	MOV pc,lr

	END

