#include <stdio.h>

 
        // fall in undifined memory access
        void undefinedMemoryAccess(){
            int *ptr;
            *ptr = 10;
     //recursiveFunction();

    
        }
 
        int main() 
        {
            undefinedMemoryAccess();
            return 0;
            
        }
