/*
    ! --- functions in C ---
    --------------------------------------------------------------------------------
    In C, a function is a block of code that performs a specific task.  
    Benefits:
        - Code reusability (write once, use multiple times)
        - Better readability
        - Easier debugging and maintenance

    Structure of a function:
        return_type function_name(parameters) {
            //? function body
            return value;   // only if return_type is not void
        }

    Steps:
        1. Function declaration (prototype) → tells compiler the function exists
        2. Function call → executes the function
        3. Function definition → actual code of the function
*/

#include <stdio.h>

//* Function declaration
void sayHello();

int main() {
    //* Function call
    sayHello();
    return 0;
}

//* Function definition
void sayHello() {
    printf("Hello from a function!\n");
}