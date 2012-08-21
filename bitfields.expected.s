getShipFlags
        LDR r0,[r0,#0]
        AND r0,r0,#0xf
        MOV pc,lr

getShipFlags2 
        LDR r0,[r0,#0]
        MOV pc,lr

        END

