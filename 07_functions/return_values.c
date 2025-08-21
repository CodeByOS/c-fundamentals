/*
    ! --- Return keyword in functions ---
    ------------------------------------------------------------------------------
    A function can send data back to the part of the program that called it
    using the `return` keyword.

    Example:
        int add(int a, int b) {
            return a + b;
        }

    Rules:
        - The return type of the function must match the type of value returned.
        - `void` means the function does not return a value.
*/

#include <stdio.h>

//* Function declaration & definition
int square(int num) {
    return num * num; //! returning a value..
}

int main() {
    int value = 5;
    int result = square(value); //* Function call
    printf("Square of %d is %d\n", value, result);
    return 0;
}