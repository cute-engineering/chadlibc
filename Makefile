CC		?= gcc
LD		= ld
AR		= ar
RM		= rm -f

CFLAGS	+= -Wall -Werror -Wextra -fpic -nostdlib -nostdinc
ifneq ($(CC), tcc)
CFLAGS	+= -ansi -pedantic
endif
LDFLAGS	+= -nostdlib -shared
ARFLAGS	= rcs

SRCS	= ctype.c
OBJS	= $(addprefix src/, $(SRCS:.c=.o))

TARGET	= libc

all: $(TARGET).a $(TARGET).so

$(TARGET).a: $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(TARGET).so: $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS) $(TARGET).a $(TARGET.o)

re: clean all

.PHONY: all clean re
