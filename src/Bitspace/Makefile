#lib: all
#	ld *.o -o linked_list.

all: \
	bs_alloc.o \
	bs_dump.o \
	bs_operations.o

%.o: %.c
	gcc -c $(subst .o,.c, $@)
