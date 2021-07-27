TEST_SRCS	= test_ctype.c \
				test_strcmp.c \
				test_strlen.c
TEST_EXE	= $(addprefix test/, $(TEST_SRCS:.c=.exe))

test: $(TEST_EXE)
	@ ./test/testsuite.sh

test/%.exe: test/%.c test/crt0.c $(LIB_STATIC)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: test
