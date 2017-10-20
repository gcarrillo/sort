PROG = sort
CC = gcc
CFLAGS += $(EXTRA_CFLAGS)
srcs = sort.c
srcs += my_sort.c
objs = $(srcs:.c=.o)


$(PROG): $(objs)

.PHONY:
clean:
	rm -f *.o $(PROG)
