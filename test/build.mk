TEST_SRCS	= test_ctype.c
TEST_EXE	= $(addprefix test/, $(TEST_SRCS:.c=.exe))

test: $(TEST_EXE)
	@ ./test/testsuite.sh

test/%.exe: test/%.c test/crt0.c $(LIB_STATIC)
	$(CC) -o $@ $^ -nostdlib -nostdinc -Iinclude/ 

.PHONY: test
