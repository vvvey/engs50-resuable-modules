CFLAGS=-Wall -pedantic -std=c11 -g


# Define variables to discover all test files
TEST_FILES = $(wildcard test*.c)
TEST_OBJS = $(TEST_FILES:.c=.o)
TEST_EXECUTABLES = $(TEST_FILES:.c=)

# Default target
all: $(TEST_OBJS) $(TEST_EXECUTABLES)

list.o:	list.c list.h
	gcc $(CFLAGS) -c list.c -o list.o

%.o: %.c list.h
	gcc $(CFLAGS) -c $< -o $@

%: %.o list.o
	gcc $(CFLAGS) $< list.o -o $@

# Clean up generated object files and executables
clean:
	rm -f list.o $(TEST_OBJS) $(TEST_EXECUTABLES)