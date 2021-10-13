.text

.globl _start

_start:
	/* set rbp to zero to denote end of call stack */
	/* see: https://reverseengineering.stackexchange.com/questions/19571/is-the-value-of-ebp-before-the-main-function-important */
	xor %rbp, %rbp

	call main

	/* exit */
	movq %rax, %rdi
	movq $60, %rax
	syscall

