#include <stdio.h>

 // fall in stack overflow by infinite recursion
    void recursiveFunction() 
    {             // function to call itself
        recursiveFunction();

    }


int main()
{
    recursiveFunction();
    return 0;
}