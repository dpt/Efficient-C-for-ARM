nameToNumber
        STMFD    sp!,{r4,lr}
        MOV      r4,r0       ; name
        ADR      r1,|L1.104| ; "John"
        BL       strcmp
        CMP      r0,#0       ; yes?
        MOVEQ    r0,#5       ; retval
        LDMEQFD  sp!,{r4,pc} ; return
        MOV      r0,r4       ; name
        ADR      r1,|L1.112| ; "Paul"
        BL       strcmp
        CMP      r0,#0       ; yes?
        MOVEQ    r0,#2       ; retval
        LDMEQFD  sp!,{r4,pc} ; return
        ; ... more for each case ...

nameToNumber2 STMFD    sp!,{r4-r6,lr}
              LDR      r6,=mapaddr     ; address of 'map'
              MOV      r5,r0           ; stash copy of name
              MOV      r4,#0           ; i
loop          ADD      r0,r4,r4,LSL #1 ;
              ADD      r1,r6,r0,LSL #2 ; map + i*12
              MOV      r0,r5           ; = name
              BL       strcmp
              CMP      r0,#0           ; match?
              ADDEQ    r0,r4,r4,LSL #1 ; yes
              ADDEQ    r0,r6,r0,LSL #2 ; map + i*12 again
              LDREQ    r0,[r0,#8]      ; fetch map[i].value
              LDMEQFD  sp!,{r4-r6,pc}  ; return it
              ADD      r4,r4,#1        ; otherwise no match
              CMP      r4,#4           ; loop until out..
              BLT      loop            ; ..of data
              MVN      r0,#0
              LDMFD    sp!,{r4-r6,pc}  ; return -1

        END

