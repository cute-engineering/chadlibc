include src/math/build.mk
include src/stdlib/build.mk
include src/string/build.mk

SRCS	= ctype.c \
			errno.c \
			entry.c \
			$(addprefix math/, $(MATH_SRC)) \
			$(addprefix stdlib/, $(STDLIB_SRC)) \
			$(addprefix string/, $(STRING_SRC))
