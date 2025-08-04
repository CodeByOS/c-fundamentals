/*
    * Variables in C
    * This program demonstrates the declaration and initialization of variables in C.
    * It includes examples of different data types such as int, float, char, and double.
    * The program prints the values of these variables to the console.
*/

#include <stdio.h> //* This header file is required for input and output functions.
int main() {
    int integerVar = 10;          //* Integer variable
    float floatVar = 5.5f;       //* Float variable
    char charVar = 'A';           //* Character variable
    double doubleVar = 3.14159;   //* Double variable

    //* Printing the values of the variables
    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("Double: %.5lf\n", doubleVar);

    /*
        ! Note: The format specifiers used in printf are:
            - %d for integers
            - %.2f for floating-point numbers (with 2 decimal places)
            - %c for characters
            - %.5lf for double precision floating-point numbers (with 5 decimal places)
    */

    return 0; //* Return statement indicating successful execution
}
