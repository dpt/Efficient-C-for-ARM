timers1 LDR r3,[r0]   ; R3 = *t1
        LDR r12,[r2]  ; R12 = *step
        ADD r3,r3,r12 ; R3 += R12
        STR r3,[r0]   ; *t1 = R3
        LDR r0,[r1]   ; R0 = *t2
        LDR r2,[r2]   ; R2 = *step  *** step loaded again
        ADD r0,r0,r2  ; R0 += R2
        STR r0,[r1]   ; *t2 = R0
        MOV pc,r14

timers2 LDR r2,[r2]  ; R2 = *step
        LDR r3,[r0]  ; R3 = *t1
        ADD r3,r3,r2 ; R3 += R2
        STR r3,[r0]  ; *t1 = R3
        LDR r0,[r1]  ; R0 = *t2
        ADD r0,r0,r2 ; R0 += R2
        STR r0,[r1]  ; *t2 = R0
        MOV pc,r14

        END

