section .data
	hello_msg "Hello Holberton",10,0

section .text
	global main
	extern printf

main:
	mov rdi, hello_msg
	xor rax, rax
	call printf

	xor rdi, 0
	mov rax, 10
	syscall
