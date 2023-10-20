section .data
    prt db "Hello, Holberton", 0
    opr db "%s", 10, 0

section .text
global main

extern printf
global _start

_start:
    mov esi, prt
    mov edi, opr
    mov eax, 0
    call printf

    mov rax, 60 
    xor rdi, rdi       
    syscall

main:

    jmp _start

