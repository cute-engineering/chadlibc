TEST_SRCS	= test_ctype.c \
				test_strcat.c \
				test_strcmp.c \
				test_strcpy.c \
				test_strlen.c \
				test_strncat.c \
				test_strncmp.c \
				test_strrchr.c \
				test_strchr.c \
				test_strcspn.c \
				test_strspn.c \
				test_getenv.c \
				test_strtod.c \
				test_strtoul.c

TEST_EXE	= $(addprefix test/, $(TEST_SRCS:.c=.exe))

test: $(TEST_EXE)
	@ ./test/testsuite.sh

test/%.exe: test/%.c crt0.o $(LIB_STATIC)
	$(CC) -o $@ $^ $(LIBC_CFLAGS)

.PHONY: test
