section .data
quine:
    .str db "section .data%1$cquine:%1$c    .str db %2$c%3$s%2$c, 0%1$csection .text%1$cglobal _main%1$cextern _printf%1$c_main:%1$c    ; je suis un comentaire dans le main%1$c    push rbp%1$c    mov rbp, rsp%1$c    lea rdi, [rel quine.str]%1$c    mov rsi, 10%1$c    mov rdx, 34%1$c    lea rcx, [rel quine.str]%1$c    call _printf%1$c    leave%1$c    call end%1$cend:%1$c    ret%1$c; je suis un comentaire hors du main%1$c", 0
section .text
global _main
extern _printf
_main:
    ; je suis un comentaire dans le main
    push rbp
    mov rbp, rsp
    lea rdi, [rel quine.str]
    mov rsi, 10
    mov rdx, 34
    lea rcx, [rel quine.str]
    call _printf
    leave
    call end
end:
    ret
; je suis un comentaire hors du main
