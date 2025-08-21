/*
    ! --- Variable Scope in C ---
    --------------------------------------------------------------------------------
    Scope = Where a variable can be accessed in the program.

    Types of scope:
        1. Local variables → declared inside a function, only accessible there.
        2. Global variables → declared outside all functions, accessible anywhere.
        3. Block scope → declared inside { } braces, only available inside.

    Global variables live throughout the program, 
    but local variables are created/destroyed when the function runs.
*/

#include <stdio.h>

int globalVar = 10;  // global variable

void printValues() {
    int localVar = 20; // local variable
    printf("Inside function: globalVar=%d, localVar=%d\n", globalVar, localVar);
}

int main() {
    printf("In main: globalVar=%d\n", globalVar);
    printValues();
    // printf("localVar=%d\n", localVar); //! ERROR: localVar not accessible here
    return 0;
}