.global svcGlobalBackdoor
.type   svcGlobalBackdoor, %function
svcGlobalBackdoor:
    svc 0x7b
    bx lr


.global checkSvcGlobalBackdoor
.type   checkSvcGlobalBackdoor, %function
checkSvcGlobalBackdoor:
    adr r0, checkSvcGlobalBackdoor_callback
    mov r3, #0
    svc 0x7b
    mov r0, r3
    bx lr
    checkSvcGlobalBackdoor_callback:
        cpsid aif
        mov r3, #1
        bx lr