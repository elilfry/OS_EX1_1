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
    printf("Result: %.10Lf\n", poisson);


return 0;
}