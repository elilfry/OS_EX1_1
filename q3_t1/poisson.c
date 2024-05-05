//  q3 building a shared library for poisson 

#include "poisson.h"

long double poisson(int k ,int lambda) {
    return (100*(exp(-lambda) * pow(lambda, k)) / tgamma(k + 1));
}

/*


elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os$ cd q3_t1/
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q3_t1$ make
gcc -Wall -Werror -g -c q3_t1_poisson.c -o q3_t1_poisson.o
gcc -Wall -Werror -g -c -fPIC poisson.c -o poisson.o -lm
gcc  -Wall -Werror -g -shared -o libpoisson.so poisson.o -lm
gcc -Wall -Werror -g -o q3_t1_poisson q3_t1_poisson.o ./libpoisson.so 
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q3_t1$ ./q3_t1_poisson 
run number 1: Lambda: 2, k: 1 , poisson = 27.067057
run number 2: Lambda: 2, k: 10 , poisson = 0.003819
run number 3: Lambda: 2, k: 2 , poisson = 27.067057
run number 4: Lambda: 3, k: 3 , poisson = 22.404181
run number 5: Lambda: 100, k: 3 , poisson = 0.000000
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q3_t1$ 



*/