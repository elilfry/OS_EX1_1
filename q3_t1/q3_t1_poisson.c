#include <stdio.h>
#include <libpoisson.h>


int main(int argc, char* argv[]) {
    
    double lambda []  = {2 , 2, 2, 3, 100};
    double  k [] = {1, 10, 2, 3, 3};

    for (int i = 0; i < 5; i++) {
        long double result = poisson(k[i], lambda[i]);
        printf("Result: %.10Lf\n", result*100);
    }
    
    return 0;
}