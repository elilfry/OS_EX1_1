#
# how to run
# make run
# make clean


CC = gcc
CFLAGS = -Wall -g

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
EXECS = $(SRCS:.c=)


all: $(EXECS)

$(EXECS): $(OBJS)
	$(CC) $(CFLAGS) $@.o -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECS)

run: all
	-./q1_t1_undefinedMemory 
	-./q1_t1_byZero
	-./q1_t1_recFunc
	


# CC = gcc
# CFLAGS = -g 

# all: q1_t1_recFunc q1_t1_byZero q1_t1_undefinedMemory 

# q1_t1_recFunc: q1_t1_recFunc.c
# 	$(CC) $(CFLAGS) -o q1_t1_recFunc q1_t1_recFunc.c

# q1_t1_byZero: q1_t1_byZero.c
# 	$(CC) $(CFLAGS) -o q1_t1_byZero q1_t1_byZero.c

# q1_t1_undefinedMemory: q1_t1_undefinedMemory.c 
# 	$(CC) $(CFLAGS) -o q1_t1_undefinedMemory q1_t1_undefinedMemory.c


# .PHONY: all clean

# clean:
# 	rm -f q1_t1_recFunc q1_t1_byZero q1_t1_undefinedMemory

