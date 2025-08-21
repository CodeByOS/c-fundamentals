/*
    ! --- Function Prototypes in C ---
    ------------------------------------------------------------------------------------
    A function prototype is a declaration of a function that tells the compiler:
        - the function name
        - return type
        - parameters

    Why needed?
        - In C, functions must be declared before they are used.
        - If you want to call a function before its definition, you must use a prototype.

    Syntax:
        return_type function_name(parameter_list);

    Example:
        void greet(char name[]);
*/

#include <stdio.h>

// Function prototype (declaration before main)
void greet(char name[]);

int main() {
    greet("Alice");  // function call
    greet("Bob");
    return 0;
}

// Function definition (after main)
void greet(char name[]) {
    printf("Hello, %s!\n", name);
}