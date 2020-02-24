.global max3_s
.func max3_s

max3_s:
        cmp r0,r1
        bgt max3_end
        mov r0,r1
max3_end:
        cmp r0,r2
        bgt max3_end2
        mov r0,r2
max3_end2:
        bx lr