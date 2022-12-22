OS = @OS@
ARCH = @ARCH@
sysdeps_srcdir = ../libc/sysdeps/@OS@/@ARCH@

AM_CPPFLAGS=-nostdinc -I$(srcdir)/../include -I%D% \
			 -I$(srcdir)/$(sysdeps_srcdir)/include
AM_CFLAGS=-nostdlib -nostartfiles -nodefaultlibs -ffreestanding
LDADD	= ../libc/crt0.o ../libc/libc.a

TESTS	= test_abort \
			test_ctype \
			test_getenv \
			test_signal \
			test_strcat \
			test_strchr \
			test_strcmp \
			test_strcpy \
			test_strcspn \
			test_strlen \
			test_strncat \
			test_strncmp \
			test_strrchr \
			test_strspn \
			test_strtod \
			test_strtoul

check_PROGRAMS	= test_abort \
			test_ctype \
			test_getenv \
			test_signal \
			test_strcat \
			test_strchr \
			test_strcmp \
			test_strcpy \
			test_strcspn \
			test_strlen \
			test_strncat \
			test_strncmp \
			test_strrchr \
			test_strspn \
			test_strtod \
			test_strtoul
