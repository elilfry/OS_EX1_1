#include <stdio.h>
#include "poisson.h"


int main(int argc, char* argv[]) {
    
    int lambda []  = {2 , 2, 2, 3, 100};
    int  k [] = {1, 10, 2, 3, 3};

    for (int i = 0; i < 5; i++) {

        printf("run number %d: Lambda: %d, k: %d , poisson = %Lf\n",(i+1), lambda[i], k[i] , poisson(k[i], lambda[i]));

        
    }
    
    return 0;
}