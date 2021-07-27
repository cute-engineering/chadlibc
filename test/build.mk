TEST_SRCS	= test_ctype.c \
				test_strcat.c \
				test_strcmp.c \
				test_strcpy.c \
				test_strlen.c \
				test_strncat.c \
				test_strncmp.c
TEST_EXE	= $(addprefix test/, $(TEST_SRCS:.c=.exe))

test: $(TEST_EXE)
	@ ./test/testsuite.sh

test/%.exe: test/%.c test/crt0.c $(LIB_STATIC)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: test
