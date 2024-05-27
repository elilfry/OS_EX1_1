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

//run with gdb
// $ coredumpctl gdb q1_t1_recFunc

// run with ddd
// $ ddd /home/elifrydman/Desktop/os_1/ex1_t_1_os/q1_t1/q1_t1_recFunc /var/lib/systemd/coredump/core.q1_t1_recFunc.1000.e667b23a31fa4054a72e0b519c1a4941.9864.1716829077000000
