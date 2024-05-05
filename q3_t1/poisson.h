# pragma once // This will ensure that this header file is included only once in the file

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <tgmath.h>


#ifndef LIBPOISSON_H //
#define LIBPOISSON_H

// Function declarations
long double poisson(int k ,int lambda);
#endif // LIBPOISSON_H