checksum1
        MOV     r2,r0             ; R2 = data
        MOV     r0,#0             ; sum = 0
        MOV     r1,#0             ; i = 0
loop
        LDR     r3,[r2,r1,LSL #2] ; R3 = data[i]
        ADD     r1,r1,#1          ; R1 = i+1
        AND     r1,r1,#0xff       ; i = (char)R1   *** UNNECESSARY ***
        CMP     r1,#0x40          ; compare i to 64
        ADD     r0,r3,r0          ; sum += R3
        BCC     loop              ; if (i<64) loop
        MOV     pc,r14            ; return sum

	END

