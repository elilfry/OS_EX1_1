 
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