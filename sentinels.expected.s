search1
     MOV   r3,#0     ; i = 0
     B     loop
test LDR   r12,[r0,r3,LSL #2]
     CMP   r12,r2    ; key
     ADDNE r3,r3,#1  ; i++
     BNE   loop
     MOV   r0,r3     ; i
     MOV   pc,lr
loop CMP   r3,r1     ; i < N
     BLT   test
     MVN   r0,#0     ; -1
     MOV   pc,lr

search2
     STR   r2,[r0,r1,LSL #2]
     MOV   r3,#0     ; i = 0
loop LDR   r12,[r0,r3,LSL #2]
     CMP   r12,r2
     ADDNE r3,r3,#1  ; i++
     BNE   loop
     CMP   r3,r1     ; i == N
     MOVNE r0,r3
     MVNEQ r0,#0     ; -1
     MOV   pc,lr

	END

