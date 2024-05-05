// makefile for q3_t1 to compile the libpoisson.h with q3_t1.c

CC = gcc
CFLAGS = -Wall -Werror

all: libpoisson.so q3_t1_poisson.c

libpoisson.so: libpoisson.c
	$(CC) $(CFLAGS) -shared -fpic -o libpoisson.so libpoisson.c -lm

q3_t1_poisson: q3_t1_poisson.c
	$(CC) $(CFLAGS) -o q3_t1_poisson q3_t1_poisson.c -L. -lpoisson -lm



PHONY: all clean

clean:
	rm -f libpoisson.so q3_t1_poisson