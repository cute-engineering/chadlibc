.section .text

.global _start
_start:
    call main
    int 0x60

.size _start, . - _start