CFLAGS=-Wall -pedantic -std=c11 -g


# Define variables to discover all test files
TEST_FILES = $(wildcard test*.c)
TEST_OBJS = $(TEST_FILES:.c=.o)
TEST_EXECUTABLES = $(TEST_FILES:.c=)

# Default target
all: queue.o $(TEST_OBJS) $(TEST_EXECUTABLES)

queue.o:	queue.c queue.h
	gcc $(CFLAGS) -c queue.c

%.o: %.c queue.h
	gcc $(CFLAGS) -c $< -o $@

%: %.o queue.o
	gcc $(CFLAGS) $< queue.o -o $@

# Clean up generated object files and executables
clean:
	rm -f queue.o $(TEST_OBJS) $(TEST_EXECUTABLES)