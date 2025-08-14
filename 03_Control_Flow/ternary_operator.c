/*
    ! --- Ternary Operator in C ---
    -------------------------------------------------------------------------------------
    The ternary operator in C is a shorthand way to write an if-else statement.
    It uses the syntax:

        condition ? expression_if_true : expression_if_false;

    How it works:
    - If the condition is TRUE (non-zero), it evaluates and returns expression_if_true.
    - If the condition is FALSE (zero), it evaluates and returns expression_if_false.

    Why use it?
    - To make code shorter and more concise.
    - Useful for simple decisions inside expressions.

    Example:
        int age = 20;
        char *result = (age >= 18) ? "Adult" : "Minor";
        //? result will be "Adult"
*/

//? SIMPLE EXAMPLE

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}