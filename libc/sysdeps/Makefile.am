sysdeps_src_DATA	=  crt0.o

crt0.o: $(top_srcdir)/libc/$(sysdeps_srcdir)/crt0.S
	$(CC) -c $(CFLAGS) $(AM_CFLAGS) -o $@ $^

libc_a_SOURCES += $(sysdeps_srcdir)/generic.c
