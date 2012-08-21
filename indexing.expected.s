nameToNumber3 STMFD    sp!,{r4-r6,lr}
              LDR      r4,=mapaddr     ; address of "map"
              MOV      r6,r0           ; stash copy of name
              ADD      r5,r4,#0x30     ; R5 = end
              CMP      r4,r5           ; out of data?
              BCS      exit
loop          MOV      r1,r4           ; R1 = entry->name
              MOV      r0,r6           ; R0 = name
              BL       strcmp
              CMP      r0,#0           ; match?
              LDREQ    r0,[r4,#8]      ; fetch entry->value
              LDMEQFD  sp!,{r4-r6,pc}  ; return it
              ADD      r4,r4,#0xc      ; otherwise no match
              CMP      r4,r5           ; loop until out..
              BCC      loop            ; ..of data
exit          MVN      r0,#0
              LDMFD    sp!,{r4-r6,pc}  ; return -1

        END

