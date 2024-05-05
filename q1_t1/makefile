CC = gcc
CFLAGS = -g // -g is used to enable debugging

all: q1_t1_recFunc q1_t1_byZero q1_t1_undefinedMemory 

q1_t1_recFunc: q1_t1_recFunc.c
	$(CC) $(CFLAGS) -o q1_t1_recFunc q1_t1_recFunc.c

q1_t1_byZero: q1_t1_byZero.c
	$(CC) $(CFLAGS) -o q1_t1_byZero q1_t1_byZero.c

q1_t1_undefinedMemory: q1_t1_undefinedMemory.c 
	$(CC) $(CFLAGS) -o q1_t1_undefinedMemory q1_t1_undefinedMemory.c


.PHONY: all clean

clean:
	rm -f q1_t1_recFunc q1_t1_byZero q1_t1_undefinedMemory

