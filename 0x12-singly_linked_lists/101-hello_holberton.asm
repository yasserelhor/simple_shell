section .data
    prt db "Hello, Holberton", 0
    opr db "%s", 10, 0

section .text
global main

extern printf

main:
    ; Your code to set up registers and call printf
    mov rdi, opr
    mov rsi, prt
    call printf

    ; Exit the program
    mov rax, 60        ; Syscall number for sys_exit (60)
    xor rdi, rdi       ; Status code (0)
    syscall

