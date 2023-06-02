; Description: 64-bit assembly program that prints
;	Hello, Holberton followed by a new line
section .data
	msg db "Hello, Holberton", 0
	fmt db "%s", 0
	newline db 10, 0

section .text
	extern printf

global main
main:
	sub rsp, 8 ; align stack

	lea rdi, [fmt]
	lea rsi, [msg]
	xor eax, eax ; or mov eax, 0
	call printf

	lea rdi, [fmt]
	lea rsi, [newline]
	xor eax, eax ; or mov eax, 0
	call printf

	add rsp, 8 ; restore stack

	mov eax, 0 ; return 0
	ret

