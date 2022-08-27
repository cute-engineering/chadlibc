/* based on https://github.com/N-LG/C-pour-SEAC */
.text

.globl _start

_start:
    call __chadlibc_entry

.size _start, . - _start
