section .data
    hello db 'Hello, Holberton', 0
    newline db 10
    fmt db "%s", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, fmt
    mov rsi, hello
    xor rax, rax
    call printf

    mov rdi, fmt
    mov rsi, newline
    xor rax, rax
    call printf

    pop rbp
    ret

