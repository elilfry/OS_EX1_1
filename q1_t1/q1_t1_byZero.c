/* 
how to run:
    1. make
    2. ./q1_t1_byZero
    4. make clean

*/

 #include <stdio.h>
  
 // fall in division by zero
     void divisionByZero(){
        int a = 10,b=0;
        int result = a / b;
        printf("The result is: %d\n", result);
     }

     int main()
{   
    divisionByZero();
    return 0;
}

//run with gdb
// $ coredumpctl gdb q1_t1_byZero

// run with ddd
