#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("error: invalid number of arguments\n");
        return 1;
    }



long double lambda = strtold(argv[1], NULL);
long double k = strtold(argv[2], NULL);

//calc poisson

long double poisson = (exp(-lambda) * pow(lambda, k)) / tgamma(k + 1);
    printf("Result: %.10Lf\n", poisson*100);


return 0;
}

// cd q2_t1
//gcc -o q2_t11  q2_t11.c -lm
// ./q2_t11 5 10

/*
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q2_t1$ ./q2_t11 5 10
Result: 1.8132788708
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q2_t1$ ./q2_t11 2 1
Result: 27.0670566473
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q2_t1$ ./q2_t11 2 10
Result: 0.0038189851
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q2_t1$ ./q2_t11 2 2
Result: 27.0670566473
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q2_t1$ ./q2_t11 3 3
Result: 22.4041807655
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q2_t1$ ./q2_t11 100 3
Result: 0.0000000000
elifrydman@elifrydman-VirtualBox:~/Desktop/os_1/ex1_t_1_os/q2_t1$ 
*/
