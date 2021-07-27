int main(void);

void
_start(void)
{
	main();

#ifdef __x86_64__
	__asm__("movl %eax,%edi;"
		"movl $60,%eax;"
		"syscall"
	);
#else
	__asm__("movl %eax, %ebx;"
		"movl $1, %eax;"
		"int $0x80"
	);
#endif /* !__x86_64__ */
}
