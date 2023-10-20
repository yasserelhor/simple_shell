section .data
    hello db 'Hello, Holberton',0
    hello_len equ $ - hello

section .text
global _start

_start:
    mov rax, 4

    mov rdi, 1

    lea rsi, [hello]

    mov rdx, hello_len

    syscall

    mov rax, 60       
    xor rdi, rdi
    syscall

