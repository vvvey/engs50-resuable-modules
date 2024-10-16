CFLAGS=-Wall -pedantic -std=c11 -g


# Define variables to discover all test files
TEST_FILES = $(wildcard test*.c)
TEST_OBJS = $(TEST_FILES:.c=.o)
TEST_EXECUTABLES = $(TEST_FILES:.c=)

# Default target
all: hash.o $(TEST_OBJS) $(TEST_EXECUTABLES)

hash.o:	hash.c hash.h
	gcc $(CFLAGS) -c hash.c

%.o: %.c hash.h ../queue/queue.h
	gcc $(CFLAGS) -c $< -o $@

%: %.o hash.o ../queue/queue.o
	gcc $(CFLAGS) $< hash.o ../queue/queue.o -o $@

# Clean up generated object files and executables
clean:
	rm -f hash.o $(TEST_OBJS) $(TEST_EXECUTABLES)