CC = gcc

CFLAGS = -Wall -Werror -g

all: q3_t1_poisson 

q3_t1_poisson: q3_t1_poisson.o libpoisson.so
	$(CC) $(CFLAGS) -o q3_t1_poisson q3_t1_poisson.o ./libpoisson.so 

libpoisson.so: poisson.o
	$(CC)  $(CFLAGS) -shared -o libpoisson.so poisson.o -lm

poisson.o: poisson.c poisson.h
	$(CC) $(CFLAGS) -c -fPIC poisson.c -o poisson.o -lm

q3_t1_poisson.o: q3_t1_poisson.c poisson.h
	$(CC) $(CFLAGS) -c q3_t1_poisson.c -o q3_t1_poisson.o	


.PHONY: clean all

clean:
	rm -f q3_t1_poisson *.o *.so
