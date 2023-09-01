OS = @OS@
ARCH = @ARCH@
sysdeps_srcdir = sysdeps/@OS@/@ARCH@

AM_CPPFLAGS=-nostdinc -I$(srcdir)/../include -I%D% \
			 -I$(srcdir)/$(sysdeps_srcdir)/include -I$(srcdir)/../include/$(ARCH) 
AM_CFLAGS= -nostdlib -nostartfiles -nodefaultlibs -ffreestanding

noinst_LIBRARIES = libc.a

libc_a_SOURCES = entry.c ctype.c errno.c

include signal/Makefile.am
include stdlib/Makefile.am
include string/Makefile.am
include sysdeps/Makefile.am
