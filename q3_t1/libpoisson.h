//  q3 building a shared library for poisson 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long double poisson(int k ,double lambda) {
    return (exp(-lambda) * pow(lambda, k)) / tgamma(k + 1);
}

