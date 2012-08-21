isEnemy 
        ORR   r0,r0,r1
        ORR   r0,r0,r2
        ORRS  r0,r0,r3
        MOVNE r0,#1
        MOV   pc,lr

isEnemy2 
        ANDS  r0,r0,#0xf
        MOVNE r0,#1
        MOV   pc,lr

        END

