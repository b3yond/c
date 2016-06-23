#include <stdio.h>

int global_var;
int global_initialized_var = 5;

void function() { //just a demo function
    int stack_var;
    printf("the function's stack_var is at adress %p\n",&stack_var);
}

int main() {
    int stack_var;
    static int static_initialized_var = 5;
    static int static_var;
    int *heap_var_ptr;

    heap_var_ptr = (int *) malloc(4);

    // These variables are in the data segment
    printf("global_initialized_var is at adress %p\n",&global_initialized_var);
    printf("static_initialized_var is at adress %p\n",&static_initialized_var);

    // These variables are in the bss segment
    printf("static_var is at adress %p\n",&static_var);
    printf("global_var is at adress %p\n",&global_var);

    // This variable is in the heap segment
    printf("heap_var is at adress %p\n",heap_var_ptr);

    //These variables are in the stack segment
    printf("stack_var is at adress %p\n",&stack_var);
    function();
return 0;
}
