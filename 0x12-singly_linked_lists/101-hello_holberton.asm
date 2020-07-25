	section .data
	fmt db "%u %s",10,0
	msg1 db "Hello, Holberton",0

	global main
	section .text
	extern printf

main:
	mov edx, msg1
	mov esi, 1
	mov edi, fmt
	mov eax, 0
	call printf
	
