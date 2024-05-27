#include <stdio.h>

 
        // fall in undifined memory access
        void undefinedMemoryAccess(){
            int *ptr = (int*) 0xdeadbeef; // pointer is not initialized
            *ptr = 10; //
            printf("Value of ptr is %d\n", *ptr);   // This will cause undefined memory access because ptr is not initialized and it is pointing to some random memory location.
        }
 
        int main() 
        {
            undefinedMemoryAccess();
            return 0;
            
        }
