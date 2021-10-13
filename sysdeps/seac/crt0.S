/* based on https://github.com/N-LG/C-pour-SEAC */
.text

.globl _start

_start:
    call main
    int $0x60

.size _start, . - _start
